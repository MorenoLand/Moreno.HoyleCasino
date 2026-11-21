#include "protos.h"

void f_00519c80(void) /* PokerTourn::func_00519c80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519c80);
    /* 00519c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00519c83: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00519c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00519c87: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00519c88: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00519c8c: jl 0x519c94 */ if ((fS!=fO)) goto L_00519c94;
L_00519c8e:; BB(0x00519c8e);
    /* 00519c8e: cmp dword ptr [ebp + 8], 8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00519c92: jl 0x519cab */ if ((fS!=fO)) goto L_00519cab;
L_00519c94:; BB(0x00519c94);
    /* 00519c94: push 0x203 */ { u32 v = 0x203u; r_esp -= 4; W32(r_esp, v); }
    /* 00519c99: push 0x6c1a20 */ { u32 v = 0x6c1a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00519c9e: push 0x6c19e4 */ { u32 v = 0x6c19e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00519ca3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x519ca8u); f_005e9f20();
    /* 00519ca8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00519cab:; BB(0x00519cab);
    /* 00519cab: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00519caf: jl 0x519cb7 */ if ((fS!=fO)) goto L_00519cb7;
L_00519cb1:; BB(0x00519cb1);
    /* 00519cb1: cmp dword ptr [ebp + 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00519cb5: jle 0x519cce */ if ((fZ||fS!=fO)) goto L_00519cce;
L_00519cb7:; BB(0x00519cb7);
    /* 00519cb7: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 00519cbc: push 0x6c1a20 */ { u32 v = 0x6c1a20u; r_esp -= 4; W32(r_esp, v); }
    /* 00519cc1: push 0x6c19c4 */ { u32 v = 0x6c19c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00519cc6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x519ccbu); f_005e9f20();
    /* 00519ccb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00519cce:; BB(0x00519cce);
    /* 00519cce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00519cd5: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519cd9: jne 0x519d17 */ if (!fZ) goto L_00519d17;
L_00519cdb:; BB(0x00519cdb);
    /* 00519cdb: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00519ce1: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 00519ce7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00519cea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519ced: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00519cf0: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519cf4: je 0x519cfe */ if (fZ) goto L_00519cfe;
L_00519cf6:; BB(0x00519cf6);
    /* 00519cf6: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519cfa: je 0x519d07 */ if (fZ) goto L_00519d07;
L_00519cfc:; BB(0x00519cfc);
    /* 00519cfc: jmp 0x519d10 */ goto L_00519d10;
L_00519cfe:; BB(0x00519cfe);
    /* 00519cfe: mov dword ptr [ebp + 8], 2 */ W32((u32)(r_ebp+0x8u), 0x2u);
    /* 00519d05: jmp 0x519d17 */ goto L_00519d17;
L_00519d07:; BB(0x00519d07);
    /* 00519d07: mov dword ptr [ebp + 8], 7 */ W32((u32)(r_ebp+0x8u), 0x7u);
    /* 00519d0e: jmp 0x519d17 */ goto L_00519d17;
L_00519d10:; BB(0x00519d10);
    /* 00519d10: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_00519d17:; BB(0x00519d17);
    /* 00519d17: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00519d1a: shl edx, 7 */ { u32 c = (7u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00519d1d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00519d20: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00519d23: lea ecx, [edx + eax + 0x7213e8] */ r_ecx = (u32)(r_edx+r_eax+0x7213e8u);
    /* 00519d2a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00519d2d: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00519d30: mov ecx, 8 */ r_ecx = 0x8u;
    /* 00519d35: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 00519d38: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00519d3a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00519d3b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00519d3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00519d3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519d3f: ret  */ FN_RET(0x00519c80); r_esp += 4; return;
}

