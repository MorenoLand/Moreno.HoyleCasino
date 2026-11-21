#include "protos.h"

void f_0041fd80(void) /* CaribbeanStudPlayerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041fd80);
    /* 0041fd80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041fd81: mov ebp, esp */ r_ebp = r_esp;
    /* 0041fd83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041fd86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041fd89: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041fd8c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x41fd91u); f_005e9e20();
    /* 0041fd91: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041fd94: mov dword ptr [eax], 0x6b5dd4 */ W32((u32)(r_eax), 0x6b5dd4u);
    /* 0041fd9a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041fda1: jmp 0x41fdac */ goto L_0041fdac;
L_0041fda3:; BB(0x0041fda3);
    /* 0041fda3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041fda6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041fda9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0041fdac:; BB(0x0041fdac);
    /* 0041fdac: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041fdb0: jge 0x41fdc2 */ if ((fS==fO)) goto L_0041fdc2;
L_0041fdb2:; BB(0x0041fdb2);
    /* 0041fdb2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041fdb5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041fdb8: mov dword ptr [eax + edx*4 + 8], 0 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x0u);
    /* 0041fdc0: jmp 0x41fda3 */ goto L_0041fda3;
L_0041fdc2:; BB(0x0041fdc2);
    /* 0041fdc2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041fdc5: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 0041fdcc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041fdcf: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 0041fdd6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041fdd9: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fddb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fddc: ret  */ FN_RET(0x0041fd80); r_esp += 4; return;
}

void f_0041fde0(void) /* CaribbeanStudPlayerDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041fde0);
    /* 0041fde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041fde1: mov ebp, esp */ r_ebp = r_esp;
    /* 0041fde3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041fde5: push 0x69e006 */ { u32 v = 0x69e006u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fdea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0041fdf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041fdf1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041fdf4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0041fdf9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041fdfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041fdfc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0041fdff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0041fe05: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0041fe08: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fe0b: mov dword ptr [eax], 0x6b5dd4 */ W32((u32)(r_eax), 0x6b5dd4u);
    /* 0041fe11: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041fe18: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0041fe1f: jmp 0x41fe2a */ goto L_0041fe2a;
L_0041fe21:; BB(0x0041fe21);
    /* 0041fe21: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041fe24: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041fe27: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0041fe2a:; BB(0x0041fe2a);
    /* 0041fe2a: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041fe2e: jge 0x41fe65 */ if ((fS==fO)) goto L_0041fe65;
L_0041fe30:; BB(0x0041fe30);
    /* 0041fe30: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041fe33: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fe36: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0041fe3a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0041fe3d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041fe40: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0041fe43: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fe47: je 0x41fe5c */ if (fZ) goto L_0041fe5c;
L_0041fe49:; BB(0x0041fe49);
    /* 0041fe49: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fe4b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041fe4e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041fe50: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041fe53: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041fe55: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41fe57u); call_ind(t); }
    /* 0041fe57: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0041fe5a: jmp 0x41fe63 */ goto L_0041fe63;
L_0041fe5c:; BB(0x0041fe5c);
    /* 0041fe5c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0041fe63:; BB(0x0041fe63);
    /* 0041fe63: jmp 0x41fe21 */ goto L_0041fe21;
L_0041fe65:; BB(0x0041fe65);
    /* 0041fe65: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fe68: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0041fe6b: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0041fe6e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041fe71: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0041fe74: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fe78: je 0x41fe8d */ if (fZ) goto L_0041fe8d;
L_0041fe7a:; BB(0x0041fe7a);
    /* 0041fe7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041fe7c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fe7f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041fe81: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041fe84: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041fe86: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41fe88u); call_ind(t); }
    /* 0041fe88: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0041fe8b: jmp 0x41fe94 */ goto L_0041fe94;
L_0041fe8d:; BB(0x0041fe8d);
    /* 0041fe8d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0041fe94:; BB(0x0041fe94);
    /* 0041fe94: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fe97: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0041fe9a: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0041fe9d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041fea0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0041fea3: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041fea7: je 0x41febc */ if (fZ) goto L_0041febc;
L_0041fea9:; BB(0x0041fea9);
    /* 0041fea9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041feab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041feae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041feb0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041feb3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041feb5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41feb7u); call_ind(t); }
    /* 0041feb7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0041feba: jmp 0x41fec3 */ goto L_0041fec3;
L_0041febc:; BB(0x0041febc);
    /* 0041febc: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0041fec3:; BB(0x0041fec3);
    /* 0041fec3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0041feca: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041fecd: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x41fed2u); f_005e9e40();
    /* 0041fed2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041fed5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041fedc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041fedd: mov esp, ebp */ r_esp = r_ebp;
    /* 0041fedf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041fee0: ret  */ FN_RET(0x0041fde0); r_esp += 4; return;
}

