#include "protos.h"

void f_005cf3e0(void) /* sub_5CF3E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cf3e0);
    /* 005cf3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cf3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cf3e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf3e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cf3e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf3ea: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5cf3efu); f_005f85d0();
    /* 005cf3ef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf3f2: add eax, 0x1c0 */ {  u32 a = r_eax; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cf3f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cf3f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf3f9: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005cf3ff: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005cf402: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf403: fld1  */ FPUSH(1.0);
    /* 005cf405: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005cf408: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf40a: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005cf40c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf40e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cf410: mov ecx, dword ptr [0x16306a0] */ r_ecx = R32((u32)(0x16306a0u));
    /* 005cf416: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005cf418: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005cf41a: and ecx, 0xfffffffa */ {  u32 a = r_ecx; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf41d: add ecx, 0x18aa2 */ {  u32 a = r_ecx; u32 b = 0x18aa2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cf423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cf424: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005cf42a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cf42c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cf432: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005cf438: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cf43au); call_ind(t); }
L_005cf43a:; BB(0x005cf43a);
    /* 005cf43a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cf43d: movzx ecx, byte ptr [eax + 0x1bc] */ r_ecx = (u32)R8((u32)(r_eax+0x1bcu));
    /* 005cf444: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cf446: jne 0x5cf46a */ if (!fZ) goto L_005cf46a;
L_005cf448:; BB(0x005cf448);
    /* 005cf448: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005cf44e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cf450: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005cf456: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005cf459: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cf45bu); call_ind(t); }
    /* 005cf45b: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005cf460: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005cf463: call 0x613e70 */ r_esp -= 4; W32(r_esp, 0x5cf468u); f_00613e70();
    /* 005cf468: jmp 0x5cf43a */ goto L_005cf43a;
L_005cf46a:; BB(0x005cf46a);
    /* 005cf46a: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf46c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf46d: ret  */ FN_RET(0x005cf3e0); r_esp += 4; return;
}

void f_005cff20(void) /* sub_5CFF20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cff20);
    /* 005cff20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cff21: mov ebp, esp */ r_ebp = r_esp;
    /* 005cff23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cff25: push 0x6a8d4c */ { u32 v = 0x6a8d4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cff2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cff30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cff31: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cff34: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cff39: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cff3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cff3c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cff3f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cff45: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005cff48: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cff4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cff4e: mov dword ptr [eax + 0x1c4], ecx */ W32((u32)(r_eax+0x1c4u), r_ecx);
    /* 005cff54: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff58: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff5a: push 0x6d33a4 */ { u32 v = 0x6d33a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff5f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cff64u); f_00630f40();
    /* 005cff64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cff67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cff68: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cff6b: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x5cff70u); f_005f73e0();
    /* 005cff70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff76: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff7b: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cff7d: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff81: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff86: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff8a: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005cff8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff93: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cff96: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x5cff9bu); f_005fa880();
    /* 005cff9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cff9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cffa1: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cffa6: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cffab: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cffb0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cffb2: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 005cffb7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cffb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cffbb: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 005cffc0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cffc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cffc4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cffc7: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x5cffccu); f_005fa880();
    /* 005cffcc: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005cffce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cffd0: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005cffd2: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005cffd4: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005cffd6: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 005cffdb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5cffe0u); f_00630f40();
    /* 005cffe0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cffe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cffe4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cffe6: push 0xa3 */ { u32 v = 0xa3u; r_esp -= 4; W32(r_esp, v); }
    /* 005cffeb: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 005cffed: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfff2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfff4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfff6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cfff9: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5cfffeu); f_005f9de0();
    /* 005cfffe: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d0001: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 005d0007: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d000a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d000c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d000e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0010: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 005d0012: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0014: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0016: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d001b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d001d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d0020: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d0025u); f_005d52e0();
    /* 005d0025: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d0028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0029: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d002b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d002d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d0030: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5d0035u); f_005fa5b0();
    /* 005d0035: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0037: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0039: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d003b: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 005d003d: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 005d003f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0041: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0043: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0045: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d004a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d004c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d004e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d0051: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5d0056u); f_005fa5b0();
    /* 005d0056: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d0059: mov dword ptr [ecx + 0x1c0], eax */ W32((u32)(r_ecx+0x1c0u), r_eax);
    /* 005d005f: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0064: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d0069u); f_00686d82();
    /* 005d0069: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d006c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d006f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d0076: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d007a: je 0x5d0089 */ if (fZ) goto L_005d0089;
L_005d007c:; BB(0x005d007c);
    /* 005d007c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d007f: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5d0084u); f_005f5bf0();
    /* 005d0084: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d0087: jmp 0x5d0090 */ goto L_005d0090;
L_005d0089:; BB(0x005d0089);
    /* 005d0089: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005d0090:; BB(0x005d0090);
    /* 005d0090: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d0093: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005d0096: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d009d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d00a0: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 005d00a6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005d00a9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d00ac: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5d00b1u); f_005d52e0();
    /* 005d00b1: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 005d00b4: mov byte ptr [ebp - 0x1d], dl */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_edx);
    /* 005d00b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d00b9: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d00be: movsx eax, byte ptr [ebp - 0x1d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe3u));
    /* 005d00c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d00c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d00c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d00c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d00c9: push 0x441 */ { u32 v = 0x441u; r_esp -= 4; W32(r_esp, v); }
    /* 005d00ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d00d0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d00d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d00d4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d00d7: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5d00dcu); f_005f9ce0();
    /* 005d00dc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d00df: mov dword ptr [edx + 0x1bc], eax */ W32((u32)(r_edx+0x1bcu), r_eax);
    /* 005d00e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d00e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d00ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d00f0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d00f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d00f3: ret 4 */ FN_RET(0x005cff20); r_esp += 8; return;
}

