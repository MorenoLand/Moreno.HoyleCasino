#include "protos.h"

void f_005cfaf0(void) /* CreditDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cfaf0);
    /* 005cfaf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfaf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfaf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfaf5: push 0x6a8cdd */ { u32 v = 0x6a8cddu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfafa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cfb00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb02: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cfb07: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cfb09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb0a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cfb0d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cfb13: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005cfb16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb1a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfb1d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5cfb22u); f_005f71f0();
    /* 005cfb22: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cfb29: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfb2c: mov dword ptr [eax], 0x6d3224 */ W32((u32)(r_eax), 0x6d3224u);
    /* 005cfb32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb34: push 0x30d4f3 */ { u32 v = 0x30d4f3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb39: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfb3c: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5cfb41u); f_005f83d0();
    /* 005cfb41: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cfb48: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfb4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfb4e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cfb55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cfb56: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfb58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfb59: ret  */ FN_RET(0x005cfaf0); r_esp += 4; return;
}

void f_005cfb80(void) /* CreditDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cfb80);
    /* 005cfb80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb81: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfb83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb85: push 0x6a8d03 */ { u32 v = 0x6a8d03u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cfb90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb91: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cfb94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cfb99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cfb9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfb9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cfb9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cfba5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cfba8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbaa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbac: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbae: push 0x6d3348 */ { u32 v = 0x6d3348u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbb3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cfbb8u); f_00630f40();
    /* 005cfbb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfbbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbbc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cfbbf: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x5cfbc4u); f_005f73e0();
    /* 005cfbc4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbca: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbcf: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbd1: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbd5: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbd7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbd9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbdb: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbe0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbe2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbe4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cfbe7: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x5cfbecu); f_005fa880();
    /* 005cfbec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbf2: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbf7: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfbfc: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc03: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc05: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc09: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc12: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cfc15: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x5cfc1au); f_005fa880();
    /* 005cfc1a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005cfc21: jmp 0x5cfc2c */ goto L_005cfc2c;
L_005cfc23:; BB(0x005cfc23);
    /* 005cfc23: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfc26: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cfc29: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005cfc2c:; BB(0x005cfc2c);
    /* 005cfc2c: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cfc30: jge 0x5cfcb0 */ if ((fS==fO)) goto L_005cfcb0;
L_005cfc32:; BB(0x005cfc32);
    /* 005cfc32: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfc36: jne 0x5cfc4a */ if (!fZ) goto L_005cfc4a;
L_005cfc38:; BB(0x005cfc38);
    /* 005cfc38: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc3d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cfc42u); f_00630f40();
    /* 005cfc42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfc45: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cfc48: jmp 0x5cfc5a */ goto L_005cfc5a;
L_005cfc4a:; BB(0x005cfc4a);
    /* 005cfc4a: push 0x6c2318 */ { u32 v = 0x6c2318u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc4f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cfc54u); f_00630f40();
    /* 005cfc54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfc57: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_005cfc5a:; BB(0x005cfc5a);
    /* 005cfc5a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfc5d: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005cfc5f: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005cfc61: and ecx, 0xfffffff3 */ {  u32 a = r_ecx; u32 b = 0xfffffff3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005cfc64: add ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cfc67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc68: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc6a: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc6c: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc6e: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc70: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cfc73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc76: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc7b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfc7e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005cfc80: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005cfc82: and eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005cfc85: add eax, 0x2b */ {  u32 a = r_eax; u32 b = 0x2bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cfc88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc89: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfc8c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005cfc8e: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005cfc90: and ecx, 0xfffffff9 */ {  u32 a = r_ecx; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005cfc93: add ecx, 0x30d4e5 */ {  u32 a = r_ecx; u32 b = 0x30d4e5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cfc99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc9a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cfc9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfc9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfca0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cfca3: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5cfca8u); f_005f9de0();
    /* 005cfca8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cfcab: jmp 0x5cfc23 */ goto L_005cfc23;
L_005cfcb0:; BB(0x005cfcb0);
    /* 005cfcb0: push 0x1fc */ { u32 v = 0x1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfcb5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5cfcbau); f_00686d82();
    /* 005cfcba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfcbd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cfcc0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cfcc7: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfccb: je 0x5cfce6 */ if (fZ) goto L_005cfce6;
L_005cfccd:; BB(0x005cfccd);
    /* 005cfccd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cfcd0: call 0x60b4a0 */ r_esp -= 4; W32(r_esp, 0x5cfcd5u); f_0060b4a0();
    /* 005cfcd5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cfcd8: mov dword ptr [eax], 0x6d3284 */ W32((u32)(r_eax), 0x6d3284u);
    /* 005cfcde: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cfce1: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005cfce4: jmp 0x5cfced */ goto L_005cfced;
L_005cfce6:; BB(0x005cfce6);
    /* 005cfce6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005cfced:; BB(0x005cfced);
    /* 005cfced: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005cfcf0: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005cfcf3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cfcfa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfcfc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfcfe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd00: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd02: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd04: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd06: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd0b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd0d: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd12: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd14: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd16: push 0x30d4e3 */ { u32 v = 0x30d4e3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd1d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cfd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd21: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cfd24: call 0x5fa6a0 */ r_esp -= 4; W32(r_esp, 0x5cfd29u); f_005fa6a0();
    /* 005cfd29: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd2b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd2d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd2f: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd31: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd33: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd35: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd37: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd39: push 0x6d3264 */ { u32 v = 0x6d3264u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd3e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cfd43u); f_00630f40();
    /* 005cfd43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfd46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd4b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cfd4e: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5cfd53u); f_005fa5b0();
    /* 005cfd53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cfd56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cfd5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cfd5e: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfd60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfd61: ret  */ FN_RET(0x005cfb80); r_esp += 4; return;
}

void f_005cfd70(void) /* CreditDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cfd70);
    /* 005cfd70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd71: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfd73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cfd76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cfd79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cfd80: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfd84: jne 0x5cfd93 */ if (!fZ) goto L_005cfd93;
L_005cfd86:; BB(0x005cfd86);
    /* 005cfd86: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cfd8c: call 0x5dc3b0 */ r_esp -= 4; W32(r_esp, 0x5cfd91u); f_005dc3b0();
    /* 005cfd91: jmp 0x5cfde2 */ goto L_005cfde2;
L_005cfd93:; BB(0x005cfd93);
    /* 005cfd93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd95: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfd98: call 0x5fb8b0 */ r_esp -= 4; W32(r_esp, 0x5cfd9du); f_005fb8b0();
    /* 005cfd9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfd9e: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x5cfda4u); call_ind(t); }
    /* 005cfda4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfda7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cfdaa: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cfdae: jle 0x5cfdd7 */ if ((fZ||fS!=fO)) goto L_005cfdd7;
L_005cfdb0:; BB(0x005cfdb0);
    /* 005cfdb0: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005cfdb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfdb8: mov dword ptr [eax + 0x4f08], ecx */ W32((u32)(r_eax+0x4f08u), r_ecx);
    /* 005cfdbe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cfdc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfdc2: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005cfdc7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cfdc9: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cfdcf: mov eax, dword ptr [edx + 0x2bc] */ r_eax = R32((u32)(r_edx+0x2bcu));
    /* 005cfdd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cfdd7u); call_ind(t); }
L_005cfdd7:; BB(0x005cfdd7);
    /* 005cfdd7: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005cfddd: call 0x5dc3b0 */ r_esp -= 4; W32(r_esp, 0x5cfde2u); f_005dc3b0();
L_005cfde2:; BB(0x005cfde2);
    /* 005cfde2: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfde4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfde5: ret 4 */ FN_RET(0x005cfd70); r_esp += 8; return;
}

