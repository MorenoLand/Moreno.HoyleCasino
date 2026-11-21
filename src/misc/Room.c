#include "protos.h"

void f_0064cbe0(void) /* Room::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064cbe0);
    /* 0064cbe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064cbe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064cbe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064cbe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064cbe7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cbea: call 0x5f0cc0 */ r_esp -= 4; W32(r_esp, 0x64cbefu); f_005f0cc0();
    /* 0064cbef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cbf2: mov dword ptr [eax], 0x6dcdbc */ W32((u32)(r_eax), 0x6dcdbcu);
    /* 0064cbf8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cbfb: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 0064cc02: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cc05: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 0064cc0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cc0f: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 0064cc16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cc19: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 0064cc20: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cc23: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 0064cc2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cc2d: mov byte ptr [eax + 0x38], 0 */ W8((u32)(r_eax+0x38u), 0x0u);
    /* 0064cc31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cc34: mov byte ptr [ecx + 0x39], 0 */ W8((u32)(r_ecx+0x39u), 0x0u);
    /* 0064cc38: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cc3b: mov byte ptr [edx + 0x3a], 0 */ W8((u32)(r_edx+0x3au), 0x0u);
    /* 0064cc3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cc42: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 0064cc49: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x64cc4fu); call_ind(t); }
    /* 0064cc4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cc52: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 0064cc55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cc58: mov byte ptr [edx + 0x48], 0 */ W8((u32)(r_edx+0x48u), 0x0u);
    /* 0064cc5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cc5f: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 0064cc66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cc69: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 0064cc70: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cc73: mov byte ptr [edx + 0x40], 0 */ W8((u32)(r_edx+0x40u), 0x0u);
    /* 0064cc77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cc7a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064cc7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064cc7d: ret  */ FN_RET(0x0064cbe0); r_esp += 4; return;
}

void f_0064cc80(void) /* Room::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064cc80);
    /* 0064cc80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064cc81: mov ebp, esp */ r_ebp = r_esp;
    /* 0064cc83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064cc85: push 0x6abfd8 */ { u32 v = 0x6abfd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cc8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064cc90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064cc91: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064cc94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064cc99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064cc9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064cc9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064cc9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064cca5: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0064cca8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0064ccab: mov dword ptr [eax], 0x6dcdbc */ W32((u32)(r_eax), 0x6dcdbcu);
    /* 0064ccb1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064ccb8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ccba: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064ccc0: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x64ccc5u); f_005f38b0();
    /* 0064ccc5: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0064ccc8: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0064cccb: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0064ccce: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064ccd1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064ccd4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ccd8: je 0x64cced */ if (fZ) goto L_0064cced;
L_0064ccda:; BB(0x0064ccda);
    /* 0064ccda: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ccdc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ccdf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064cce1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064cce4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064cce6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64cce8u); call_ind(t); }
    /* 0064cce8: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0064cceb: jmp 0x64ccf4 */ goto L_0064ccf4;
L_0064cced:; BB(0x0064cced);
    /* 0064cced: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0064ccf4:; BB(0x0064ccf4);
    /* 0064ccf4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0064ccf7: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0064ccfa: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0064ccfd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064cd00: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064cd03: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cd07: je 0x64cd1c */ if (fZ) goto L_0064cd1c;
L_0064cd09:; BB(0x0064cd09);
    /* 0064cd09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cd0b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064cd0e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064cd10: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064cd13: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064cd15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64cd17u); call_ind(t); }
    /* 0064cd17: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0064cd1a: jmp 0x64cd23 */ goto L_0064cd23;
L_0064cd1c:; BB(0x0064cd1c);
    /* 0064cd1c: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0064cd23:; BB(0x0064cd23);
    /* 0064cd23: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0064cd26: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0064cd29: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0064cd2c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064cd2f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064cd32: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cd36: je 0x64cd4b */ if (fZ) goto L_0064cd4b;
L_0064cd38:; BB(0x0064cd38);
    /* 0064cd38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cd3a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064cd3d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064cd3f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064cd42: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064cd44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64cd46u); call_ind(t); }
    /* 0064cd46: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0064cd49: jmp 0x64cd52 */ goto L_0064cd52;
L_0064cd4b:; BB(0x0064cd4b);
    /* 0064cd4b: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0064cd52:; BB(0x0064cd52);
    /* 0064cd52: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0064cd55: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0064cd58: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0064cd5b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0064cd5e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0064cd61: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cd65: je 0x64cd8d */ if (fZ) goto L_0064cd8d;
L_0064cd67:; BB(0x0064cd67);
    /* 0064cd67: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064cd6a: call 0x651950 */ r_esp -= 4; W32(r_esp, 0x64cd6fu); f_00651950();
    /* 0064cd6f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0064cd74: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0064cd77: je 0x64cd85 */ if (fZ) goto L_0064cd85;
L_0064cd79:; BB(0x0064cd79);
    /* 0064cd79: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064cd7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064cd7d: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x64cd82u); f_00686cae();
    /* 0064cd82: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064cd85:; BB(0x0064cd85);
    /* 0064cd85: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064cd88: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0064cd8b: jmp 0x64cd94 */ goto L_0064cd94;
L_0064cd8d:; BB(0x0064cd8d);
    /* 0064cd8d: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0064cd94:; BB(0x0064cd94);
    /* 0064cd94: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0064cd9b: jmp 0x64cda6 */ goto L_0064cda6;
L_0064cd9d:; BB(0x0064cd9d);
    /* 0064cd9d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064cda0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064cda3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0064cda6:; BB(0x0064cda6);
    /* 0064cda6: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064cdaa: jge 0x64cdbe */ if ((fS==fO)) goto L_0064cdbe;
L_0064cdac:; BB(0x0064cdac);
    /* 0064cdac: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064cdaf: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064cdb4: mov dword ptr [eax + edx*4 + 0x64], 0xffffffff */ W32((u32)(r_eax+r_edx*4+0x64u), 0xffffffffu);
    /* 0064cdbc: jmp 0x64cd9d */ goto L_0064cd9d;
L_0064cdbe:; BB(0x0064cdbe);
    /* 0064cdbe: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0064cdc1: cmp dword ptr [ecx + 0x4c], 0 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cdc5: je 0x64ce00 */ if (fZ) goto L_0064ce00;
L_0064cdc7:; BB(0x0064cdc7);
    /* 0064cdc7: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0064cdca: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0064cdcd: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0064cdd0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0064cdd3: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0064cdd6: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cdda: je 0x64cdef */ if (fZ) goto L_0064cdef;
L_0064cddc:; BB(0x0064cddc);
    /* 0064cddc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cdde: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064cde1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064cde3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064cde6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064cde8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64cdeau); call_ind(t); }
    /* 0064cdea: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0064cded: jmp 0x64cdf6 */ goto L_0064cdf6;
L_0064cdef:; BB(0x0064cdef);
    /* 0064cdef: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0064cdf6:; BB(0x0064cdf6);
    /* 0064cdf6: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0064cdf9: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0064ce00:; BB(0x0064ce00);
    /* 0064ce00: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0064ce03: cmp dword ptr [ecx + 0x50], 0 */ {  u32 a = R32((u32)(r_ecx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ce07: je 0x64ce42 */ if (fZ) goto L_0064ce42;
L_0064ce09:; BB(0x0064ce09);
    /* 0064ce09: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0064ce0c: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0064ce0f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0064ce12: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064ce15: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0064ce18: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ce1c: je 0x64ce31 */ if (fZ) goto L_0064ce31;
L_0064ce1e:; BB(0x0064ce1e);
    /* 0064ce1e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ce20: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064ce23: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064ce25: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064ce28: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064ce2a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64ce2cu); call_ind(t); }
    /* 0064ce2c: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0064ce2f: jmp 0x64ce38 */ goto L_0064ce38;
L_0064ce31:; BB(0x0064ce31);
    /* 0064ce31: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0064ce38:; BB(0x0064ce38);
    /* 0064ce38: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0064ce3b: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_0064ce42:; BB(0x0064ce42);
    /* 0064ce42: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064ce49: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0064ce4c: call 0x5f0d60 */ r_esp -= 4; W32(r_esp, 0x64ce51u); f_005f0d60();
    /* 0064ce51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064ce54: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064ce5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ce5c: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ce5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ce5f: ret  */ FN_RET(0x0064cc80); r_esp += 4; return;
}

void f_0064ce60(void) /* Room::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064ce60);
    /* 0064ce60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ce61: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ce63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ce65: push 0x6abffe */ { u32 v = 0x6abffeu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ce6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064ce70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ce71: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ce74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064ce79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064ce7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ce7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064ce7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064ce85: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064ce88: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064ce8b: call 0x5f1120 */ r_esp -= 4; W32(r_esp, 0x64ce90u); f_005f1120();
    /* 0064ce90: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0064ce95: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ce99: je 0x64ceb1 */ if (fZ) goto L_0064ceb1;
L_0064ce9b:; BB(0x0064ce9b);
    /* 0064ce9b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064cea1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064cea3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064cea9: mov eax, dword ptr [edx + 0x384] */ r_eax = R32((u32)(r_edx+0x384u));
    /* 0064ceaf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ceb1u); call_ind(t); }
L_0064ceb1:; BB(0x0064ceb1);
    /* 0064ceb1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064ceb4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064ceb6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064ceb9: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0064cebc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64cebeu); call_ind(t); }
    /* 0064cebe: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064cec1: call 0x64cfa0 */ r_esp -= 4; W32(r_esp, 0x64cec6u); f_0064cfa0();
    /* 0064cec6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064cec9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064cecb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064cece: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0064ced1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ced3u); call_ind(t); }
    /* 0064ced3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ced5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064cedb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064cedd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064cee3: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0064cee9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ceebu); call_ind(t); }
    /* 0064ceeb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064ceee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cef0: je 0x64cf8f */ if (fZ) goto L_0064cf8f;
L_0064cef6:; BB(0x0064cef6);
    /* 0064cef6: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064cefc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064cefe: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064cf04: mov edx, dword ptr [eax + 0x35c] */ r_edx = R32((u32)(r_eax+0x35cu));
    /* 0064cf0a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64cf0cu); call_ind(t); }
    /* 0064cf0c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064cf11: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064cf13: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064cf19: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0064cf1f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64cf21u); call_ind(t); }
    /* 0064cf21: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064cf24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cf26: je 0x64cf8f */ if (fZ) goto L_0064cf8f;
L_0064cf28:; BB(0x0064cf28);
    /* 0064cf28: push 0x19c */ { u32 v = 0x19cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064cf2d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64cf32u); f_00686d82();
    /* 0064cf32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064cf35: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064cf38: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064cf3f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cf43: je 0x64cf52 */ if (fZ) goto L_0064cf52;
L_0064cf45:; BB(0x0064cf45);
    /* 0064cf45: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064cf48: call 0x670680 */ r_esp -= 4; W32(r_esp, 0x64cf4du); f_00670680();
    /* 0064cf4d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064cf50: jmp 0x64cf59 */ goto L_0064cf59;
L_0064cf52:; BB(0x0064cf52);
    /* 0064cf52: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0064cf59:; BB(0x0064cf59);
    /* 0064cf59: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064cf5c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0064cf5f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064cf66: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064cf69: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064cf6c: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 0064cf6f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064cf72: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 0064cf75: call 0x6708c0 */ r_esp -= 4; W32(r_esp, 0x64cf7au); f_006708c0();
    /* 0064cf7a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064cf7d: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0064cf80: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064cf83: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0064cf86: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064cf88: mov ecx, eax */ r_ecx = r_eax;
    /* 0064cf8a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0064cf8d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64cf8fu); call_ind(t); }
L_0064cf8f:; BB(0x0064cf8f);
    /* 0064cf8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064cf92: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064cf99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064cf9a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064cf9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064cf9d: ret  */ FN_RET(0x0064ce60); r_esp += 4; return;
}

void f_0064d030(void) /* Room::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064d030);
    /* 0064d030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d031: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d033: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d036: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0064d039: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d03c: call 0x5f1a50 */ r_esp -= 4; W32(r_esp, 0x64d041u); f_005f1a50();
    /* 0064d041: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d043: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d046: call 0x650350 */ r_esp -= 4; W32(r_esp, 0x64d04bu); f_00650350();
    /* 0064d04b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d04e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064d050: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d053: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 0064d059: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d05bu); call_ind(t); }
    /* 0064d05b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064d05e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d060: je 0x64d06e */ if (fZ) goto L_0064d06e;
L_0064d062:; BB(0x0064d062);
    /* 0064d062: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d064: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d067: call 0x64eb80 */ r_esp -= 4; W32(r_esp, 0x64d06cu); f_0064eb80();
    /* 0064d06c: jmp 0x64d0ad */ goto L_0064d0ad;
L_0064d06e:; BB(0x0064d06e);
    /* 0064d06e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d071: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064d073: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d076: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 0064d079: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64d07bu); call_ind(t); }
    /* 0064d07b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064d07e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d080: je 0x64d0ad */ if (fZ) goto L_0064d0ad;
L_0064d082:; BB(0x0064d082);
    /* 0064d082: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d085: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d089: je 0x64d09d */ if (fZ) goto L_0064d09d;
L_0064d08b:; BB(0x0064d08b);
    /* 0064d08b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d08e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064d091: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d095: jne 0x64d09d */ if (!fZ) goto L_0064d09d;
L_0064d097:; BB(0x0064d097);
    /* 0064d097: mov byte ptr [ebp - 0x35], 1 */ W8((u32)(r_ebp+0xffffffcbu), 0x1u);
    /* 0064d09b: jmp 0x64d0a1 */ goto L_0064d0a1;
L_0064d09d:; BB(0x0064d09d);
    /* 0064d09d: mov byte ptr [ebp - 0x35], 0 */ W8((u32)(r_ebp+0xffffffcbu), 0x0u);
L_0064d0a1:; BB(0x0064d0a1);
    /* 0064d0a1: mov cl, byte ptr [ebp - 0x35] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffcbu))) & 0xffu);
    /* 0064d0a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d0a5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d0a8: call 0x64eb80 */ r_esp -= 4; W32(r_esp, 0x64d0adu); f_0064eb80();
L_0064d0ad:; BB(0x0064d0ad);
    /* 0064d0ad: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064d0b3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064d0b5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d0bb: mov edx, dword ptr [eax + 0x378] */ r_edx = R32((u32)(r_eax+0x378u));
    /* 0064d0c1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64d0c3u); call_ind(t); }
    /* 0064d0c3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064d0c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d0c8: jne 0x64d0cf */ if (!fZ) goto L_0064d0cf;
L_0064d0ca:; BB(0x0064d0ca);
    /* 0064d0ca: jmp 0x64d1c0 */ goto L_0064d1c0;
L_0064d0cf:; BB(0x0064d0cf);
    /* 0064d0cf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d0d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064d0d4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d0d7: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 0064d0dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d0dfu); call_ind(t); }
    /* 0064d0df: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064d0e2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d0e4: je 0x64d0eb */ if (fZ) goto L_0064d0eb;
L_0064d0e6:; BB(0x0064d0e6);
    /* 0064d0e6: jmp 0x64d1c0 */ goto L_0064d1c0;
L_0064d0eb:; BB(0x0064d0eb);
    /* 0064d0eb: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d0ee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064d0f0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d0f3: mov edx, dword ptr [eax + 0x1ec] */ r_edx = R32((u32)(r_eax+0x1ecu));
    /* 0064d0f9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64d0fbu); call_ind(t); }
    /* 0064d0fb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064d0fe: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d102: je 0x64d133 */ if (fZ) goto L_0064d133;
L_0064d104:; BB(0x0064d104);
    /* 0064d104: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064d107: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d10b: je 0x64d133 */ if (fZ) goto L_0064d133;
L_0064d10d:; BB(0x0064d10d);
    /* 0064d10d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064d110: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064d113: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0064d116: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0064d119: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64d11eu); f_0063aac0();
    /* 0064d11e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0064d120: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0064d123: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064d125: cmp dword ptr [ebp - 0x2c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d129: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0064d12c: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0064d12f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d131: je 0x64d141 */ if (fZ) goto L_0064d141;
L_0064d133:; BB(0x0064d133);
    /* 0064d133: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x64d139u); call_ind(t); }
    /* 0064d139: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d13c: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 0064d13f: jmp 0x64d1c0 */ goto L_0064d1c0;
L_0064d141:; BB(0x0064d141);
    /* 0064d141: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x64d147u); call_ind(t); }
    /* 0064d147: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d14a: sub eax, dword ptr [edx + 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x44u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064d14d: cmp eax, 0xea60 */ {  u32 a = r_eax; u32 b = 0xea60u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0064d152: jae 0x64d156 */ if (!fC) goto L_0064d156;
L_0064d154:; BB(0x0064d154);
    /* 0064d154: jmp 0x64d1c0 */ goto L_0064d1c0;
L_0064d156:; BB(0x0064d156);
    /* 0064d156: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x64d15cu); call_ind(t); }
    /* 0064d15c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d15f: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 0064d162: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d168: call 0x636c50 */ r_esp -= 4; W32(r_esp, 0x64d16du); f_00636c50();
    /* 0064d16d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064d170: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d174: jne 0x64d178 */ if (!fZ) goto L_0064d178;
L_0064d176:; BB(0x0064d176);
    /* 0064d176: jmp 0x64d1c0 */ goto L_0064d1c0;
L_0064d178:; BB(0x0064d178);
    /* 0064d178: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d17b: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0064d17e: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 0064d185: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0064d18c: fldz  */ FPUSH(0.0);
    /* 0064d18e: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0064d191: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0064d197: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0064d19a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064d19d: call 0x64d1d0 */ r_esp -= 4; W32(r_esp, 0x64d1a2u); f_0064d1d0();
    /* 0064d1a2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064d1a5: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d1a9: je 0x64d1c0 */ if (fZ) goto L_0064d1c0;
L_0064d1ab:; BB(0x0064d1ab);
    /* 0064d1ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d1ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d1af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d1b1: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 0064d1b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d1b5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d1bb: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x64d1c0u); f_00639390();
L_0064d1c0:; BB(0x0064d1c0);
    /* 0064d1c0: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d1c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d1c3: ret  */ FN_RET(0x0064d030); r_esp += 4; return;
}

void f_0064d3a0(void) /* Room::vfunc72 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064d3a0);
    /* 0064d3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d3a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d3a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064d3a7: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d3ab: je 0x64d417 */ if (fZ) goto L_0064d417;
L_0064d3ad:; BB(0x0064d3ad);
    /* 0064d3ad: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d3b4: jne 0x64d417 */ if (!fZ) goto L_0064d417;
L_0064d3b6:; BB(0x0064d3b6);
    /* 0064d3b6: cmp dword ptr [0x16306b0], 0 */ {  u32 a = R32((u32)(0x16306b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d3bd: jne 0x64d417 */ if (!fZ) goto L_0064d417;
L_0064d3bf:; BB(0x0064d3bf);
    /* 0064d3bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064d3c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d3c3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064d3c6: call 0x646db0 */ r_esp -= 4; W32(r_esp, 0x64d3cbu); f_00646db0();
    /* 0064d3cb: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064d3ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d3d0: je 0x64d417 */ if (fZ) goto L_0064d417;
L_0064d3d2:; BB(0x0064d3d2);
    /* 0064d3d2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064d3d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d3d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d3d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064d3db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d3de: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 0064d3e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d3e6u); call_ind(t); }
    /* 0064d3e6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064d3e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d3eb: je 0x64d417 */ if (fZ) goto L_0064d417;
L_0064d3ed:; BB(0x0064d3ed);
    /* 0064d3ed: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d3f3: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x64d3f8u); f_006375b0();
    /* 0064d3f8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064d3fb: cmp dword ptr [edx + 4], eax */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d3fe: je 0x64d417 */ if (fZ) goto L_0064d417;
L_0064d400:; BB(0x0064d400);
    /* 0064d400: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d403: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064d405: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d408: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 0064d40e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d410u); call_ind(t); }
    /* 0064d410: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064d413: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d415: je 0x64d419 */ if (fZ) goto L_0064d419;
L_0064d417:; BB(0x0064d417);
    /* 0064d417: jmp 0x64d478 */ goto L_0064d478;
L_0064d419:; BB(0x0064d419);
    /* 0064d419: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064d41f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064d421: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d427: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 0064d42d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64d42fu); call_ind(t); }
    /* 0064d42f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d431: jne 0x64d45b */ if (!fZ) goto L_0064d45b;
L_0064d433:; BB(0x0064d433);
    /* 0064d433: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d436: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064d439: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064d43c: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0064d43f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d441: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d443: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d445: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d447: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d449: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d44c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064d44e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d451: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 0064d457: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d459u); call_ind(t); }
    /* 0064d459: jmp 0x64d478 */ goto L_0064d478;
L_0064d45b:; BB(0x0064d45b);
    /* 0064d45b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064d45e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064d461: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d462: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064d465: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0064d468: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d469: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064d46c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0064d46f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d470: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d473: call 0x64d480 */ r_esp -= 4; W32(r_esp, 0x64d478u); f_0064d480();
L_0064d478:; BB(0x0064d478);
    /* 0064d478: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d47a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d47b: ret 8 */ FN_RET(0x0064d3a0); r_esp += 12; return;
}

void f_0064db10(void) /* Room::vfunc86 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064db10);
    /* 0064db10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064db11: mov ebp, esp */ r_ebp = r_esp;
    /* 0064db13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064db14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064db17: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064db1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064db1b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064db21: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0064db24: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064db27: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0064db2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064db2b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064db2e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064db30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064db33: mov edx, dword ptr [eax + 0x154] */ r_edx = R32((u32)(r_eax+0x154u));
    /* 0064db39: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64db3bu); call_ind(t); }
    /* 0064db3b: mov esp, ebp */ r_esp = r_ebp;
    /* 0064db3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064db3e: ret 8 */ FN_RET(0x0064db10); r_esp += 12; return;
}

void f_0064db50(void) /* Room::vfunc85 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064db50);
    /* 0064db50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064db51: mov ebp, esp */ r_ebp = r_esp;
    /* 0064db53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064db54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064db57: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064db5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064db5b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064db5e: call 0x63a1c0 */ r_esp -= 4; W32(r_esp, 0x64db63u); f_0063a1c0();
    /* 0064db63: mov esp, ebp */ r_esp = r_ebp;
    /* 0064db65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064db66: ret 8 */ FN_RET(0x0064db50); r_esp += 12; return;
}

void f_0064db70(void) /* Room::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064db70);
    /* 0064db70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064db71: mov ebp, esp */ r_ebp = r_esp;
    /* 0064db73: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064db76: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064db79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064db80: jmp 0x64db8b */ goto L_0064db8b;
L_0064db82:; BB(0x0064db82);
    /* 0064db82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064db85: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064db88: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0064db8b:; BB(0x0064db8b);
    /* 0064db8b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064db91: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064db93: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064db99: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0064db9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64dba1u); call_ind(t); }
    /* 0064dba1: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064dba4: jge 0x64dc07 */ if ((fS==fO)) goto L_0064dc07;
L_0064dba6:; BB(0x0064dba6);
    /* 0064dba6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064dba9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064dbaa: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064dbb0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064dbb2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064dbb8: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0064dbbe: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64dbc0u); call_ind(t); }
    /* 0064dbc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064dbc2: je 0x64dc02 */ if (fZ) goto L_0064dc02;
L_0064dbc4:; BB(0x0064dbc4);
    /* 0064dbc4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064dbc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064dbc8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064dbce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064dbd0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064dbd6: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0064dbdc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64dbdeu); call_ind(t); }
    /* 0064dbde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064dbe1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064dbe4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064dbe5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064dbe8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064dbe9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064dbec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064dbee: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064dbf1: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 0064dbf4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64dbf6u); call_ind(t); }
    /* 0064dbf6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064dbf9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064dbfb: je 0x64dc02 */ if (fZ) goto L_0064dc02;
L_0064dbfd:; BB(0x0064dbfd);
    /* 0064dbfd: jmp 0x64e050 */ goto L_0064e050;
L_0064dc02:; BB(0x0064dc02);
    /* 0064dc02: jmp 0x64db82 */ goto L_0064db82;
L_0064dc07:; BB(0x0064dc07);
    /* 0064dc07: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064dc0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064dc0b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064dc0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064dc0f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064dc15: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064dc17: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064dc1d: mov eax, dword ptr [edx + 0x254] */ r_eax = R32((u32)(r_edx+0x254u));
    /* 0064dc23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64dc25u); call_ind(t); }
    /* 0064dc25: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064dc28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064dc2a: je 0x64dc31 */ if (fZ) goto L_0064dc31;
L_0064dc2c:; BB(0x0064dc2c);
    /* 0064dc2c: jmp 0x64e050 */ goto L_0064e050;
L_0064dc31:; BB(0x0064dc31);
    /* 0064dc31: cmp dword ptr [ebp + 8], 0x186ec */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x186ecu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064dc38: jl 0x64dc79 */ if ((fS!=fO)) goto L_0064dc79;
L_0064dc3a:; BB(0x0064dc3a);
    /* 0064dc3a: cmp dword ptr [ebp + 8], 0x1870c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1870cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064dc41: jg 0x64dc79 */ if ((!fZ&&fS==fO)) goto L_0064dc79;
L_0064dc43:; BB(0x0064dc43);
    /* 0064dc43: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064dc46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064dc47: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064dc4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064dc4e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064dc54: mov eax, dword ptr [edx + 0x3b0] */ r_eax = R32((u32)(r_edx+0x3b0u));
    /* 0064dc5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64dc5cu); call_ind(t); }
    /* 0064dc5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064dc5d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dc60: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064dc62: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dc65: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 0064dc6b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64dc6du); call_ind(t); }
    /* 0064dc6d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dc70: mov byte ptr [ecx + 0x38], 0 */ W8((u32)(r_ecx+0x38u), 0x0u);
    /* 0064dc74: jmp 0x64e050 */ goto L_0064e050;
L_0064dc79:; BB(0x0064dc79);
    /* 0064dc79: cmp dword ptr [ebp + 0xc], 0x186ad */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x186adu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064dc80: jne 0x64dcb0 */ if (!fZ) goto L_0064dcb0;
L_0064dc82:; BB(0x0064dc82);
    /* 0064dc82: mov dl, byte ptr [0x795f95] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x795f95u))) & 0xffu);
    /* 0064dc88: mov byte ptr [ebp - 5], dl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_edx);
    /* 0064dc8b: mov byte ptr [0x795f95], 0 */ W8((u32)(0x795f95u), 0x0u);
    /* 0064dc92: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064dc95: sub eax, 0x186ae */ {  u32 a = r_eax; u32 b = 0x186aeu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064dc9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064dc9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dc9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dc9f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dca2: call 0x650400 */ r_esp -= 4; W32(r_esp, 0x64dca7u); f_00650400();
    /* 0064dca7: mov cl, byte ptr [ebp - 5] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
    /* 0064dcaa: mov byte ptr [0x795f95], cl */ W8((u32)(0x795f95u), (u8)r_ecx);
L_0064dcb0:; BB(0x0064dcb0);
    /* 0064dcb0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064dcb3: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0064dcb6: cmp dword ptr [ebp - 0x20], 0x186a2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x186a2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064dcbd: jg 0x64dcd7 */ if ((!fZ&&fS==fO)) goto L_0064dcd7;
L_0064dcbf:; BB(0x0064dcbf);
    /* 0064dcbf: cmp dword ptr [ebp - 0x20], 0x186a2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x186a2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064dcc6: je 0x64dcfd */ if (fZ) goto L_0064dcfd;
L_0064dcc8:; BB(0x0064dcc8);
    /* 0064dcc8: cmp dword ptr [ebp - 0x20], -0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffff9cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064dccc: je 0x64df38 */ if (fZ) goto L_0064df38;
L_0064dcd2:; BB(0x0064dcd2);
    /* 0064dcd2: jmp 0x64e050 */ goto L_0064e050;
L_0064dcd7:; BB(0x0064dcd7);
    /* 0064dcd7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064dcda: sub eax, 0x186a4 */ {  u32 a = r_eax; u32 b = 0x186a4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064dcdf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064dce2: cmp dword ptr [ebp - 0x20], 0x47 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x47u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0064dce6: ja 0x64e050 */ if ((!fC&&!fZ)) goto L_0064e050;
L_0064dcec:; BB(0x0064dcec);
    /* 0064dcec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064dcef: movzx edx, byte ptr [ecx + 0x64e0c0] */ r_edx = (u32)R8((u32)(r_ecx+0x64e0c0u));
    /* 0064dcf6: jmp dword ptr [edx*4 + 0x64e058] */ { u32 t = R32((u32)(r_edx*4+0x64e058u)); switch (t) { case 0x64dd26u: goto L_0064dd26; case 0x64de27u: goto L_0064de27; case 0x64dd07u: goto L_0064dd07; case 0x64dd3bu: goto L_0064dd3b; case 0x64dd68u: goto L_0064dd68; case 0x64dd77u: goto L_0064dd77; case 0x64de0au: goto L_0064de0a; case 0x64dea8u: goto L_0064dea8; case 0x64de38u: goto L_0064de38; case 0x64def5u: goto L_0064def5; case 0x64df0au: goto L_0064df0a; case 0x64df21u: goto L_0064df21; case 0x64df38u: goto L_0064df38; case 0x64df5du: goto L_0064df5d; case 0x64df6au: goto L_0064df6a; case 0x64df9du: goto L_0064df9d; case 0x64df77u: goto L_0064df77; case 0x64dfacu: goto L_0064dfac; case 0x64dfc5u: goto L_0064dfc5; case 0x64dfd7u: goto L_0064dfd7; case 0x64dfe9u: goto L_0064dfe9; case 0x64dff5u: goto L_0064dff5; case 0x64dfffu: goto L_0064dfff; case 0x64e025u: goto L_0064e025; case 0x64e036u: goto L_0064e036; case 0x64e050u: goto L_0064e050; default: UNSUP(0x0064dcf6, "jump table entry is not a known target"); } }
L_0064dcfd:; BB(0x0064dcfd);
    /* 0064dcfd: call 0x630030 */ r_esp -= 4; W32(r_esp, 0x64dd02u); f_00630030();
    /* 0064dd02: jmp 0x64e050 */ goto L_0064e050;
L_0064dd07:; BB(0x0064dd07);
    /* 0064dd07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd0d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd11: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dd14: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064dd16: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dd19: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 0064dd1f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64dd21u); call_ind(t); }
    /* 0064dd21: jmp 0x64e050 */ goto L_0064e050;
L_0064dd26:; BB(0x0064dd26);
    /* 0064dd26: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dd29: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064dd2b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dd2e: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0064dd34: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64dd36u); call_ind(t); }
    /* 0064dd36: jmp 0x64e050 */ goto L_0064e050;
L_0064dd3b:; BB(0x0064dd3b);
    /* 0064dd3b: push 0x186a1 */ { u32 v = 0x186a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd40: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064dd46: call 0x5f2840 */ r_esp -= 4; W32(r_esp, 0x64dd4bu); f_005f2840();
    /* 0064dd4b: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0064dd51: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0064dd54: call 0x613f80 */ r_esp -= 4; W32(r_esp, 0x64dd59u); f_00613f80();
    /* 0064dd59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd5b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dd5e: call 0x64ef70 */ r_esp -= 4; W32(r_esp, 0x64dd63u); f_0064ef70();
    /* 0064dd63: jmp 0x64e050 */ goto L_0064e050;
L_0064dd68:; BB(0x0064dd68);
    /* 0064dd68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd6a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dd6d: call 0x64ef70 */ r_esp -= 4; W32(r_esp, 0x64dd72u); f_0064ef70();
    /* 0064dd72: jmp 0x64e050 */ goto L_0064e050;
L_0064dd77:; BB(0x0064dd77);
    /* 0064dd77: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dd7a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064dd7c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dd7f: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0064dd85: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64dd87u); call_ind(t); }
    /* 0064dd87: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064dd8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064dd8c: jne 0x64ddd5 */ if (!fZ) goto L_0064ddd5;
L_0064dd8e:; BB(0x0064dd8e);
    /* 0064dd8e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dd91: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064dd93: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dd96: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 0064dd9c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64dd9eu); call_ind(t); }
    /* 0064dd9e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064dda1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064dda3: jne 0x64ddd5 */ if (!fZ) goto L_0064ddd5;
L_0064dda5:; BB(0x0064dda5);
    /* 0064dda5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dda7: push 0x6dd068 */ { u32 v = 0x6dd068u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ddac: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64ddb1u); f_00630f40();
    /* 0064ddb1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ddb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ddb5: push 0x6dd04c */ { u32 v = 0x6dd04cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ddba: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64ddbfu); f_00630f40();
    /* 0064ddbf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ddc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ddc3: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x64ddc8u); f_0062ff10();
    /* 0064ddc8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ddcb: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ddce: jne 0x64ddd5 */ if (!fZ) goto L_0064ddd5;
L_0064ddd0:; BB(0x0064ddd0);
    /* 0064ddd0: jmp 0x64e050 */ goto L_0064e050;
L_0064ddd5:; BB(0x0064ddd5);
    /* 0064ddd5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064ddd8: mov byte ptr [edx + 0x40], 0 */ W8((u32)(r_edx+0x40u), 0x0u);
    /* 0064dddc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dddf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064dde1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dde4: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 0064ddea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ddecu); call_ind(t); }
    /* 0064ddec: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064ddef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ddf1: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0064ddf4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ddf5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064ddf8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064ddfa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064ddfd: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0064de03: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64de05u); call_ind(t); }
    /* 0064de05: jmp 0x64e050 */ goto L_0064e050;
L_0064de0a:; BB(0x0064de0a);
    /* 0064de0a: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0064de0f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064de15: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064de17: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064de1d: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0064de20: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64de22u); call_ind(t); }
    /* 0064de22: jmp 0x64e050 */ goto L_0064e050;
L_0064de27:; BB(0x0064de27);
    /* 0064de27: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064de29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064de2b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064de2e: call 0x64f950 */ r_esp -= 4; W32(r_esp, 0x64de33u); f_0064f950();
    /* 0064de33: jmp 0x64e050 */ goto L_0064e050;
L_0064de38:; BB(0x0064de38);
    /* 0064de38: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064de3a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064de40: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064de42: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064de48: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0064de4e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64de50u); call_ind(t); }
    /* 0064de50: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064de53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064de55: je 0x64de79 */ if (fZ) goto L_0064de79;
L_0064de57:; BB(0x0064de57);
    /* 0064de57: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0064de5d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064de5f: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064de65: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 0064de6b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64de6du); call_ind(t); }
    /* 0064de6d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064de70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064de72: jne 0x64de79 */ if (!fZ) goto L_0064de79;
L_0064de74:; BB(0x0064de74);
    /* 0064de74: jmp 0x64e050 */ goto L_0064e050;
L_0064de79:; BB(0x0064de79);
    /* 0064de79: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064de7f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064de81: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064de87: mov eax, dword ptr [edx + 0x258] */ r_eax = R32((u32)(r_edx+0x258u));
    /* 0064de8d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64de8fu); call_ind(t); }
    /* 0064de8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064de90: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064de96: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064de98: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064de9e: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0064dea1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64dea3u); call_ind(t); }
    /* 0064dea3: jmp 0x64e050 */ goto L_0064e050;
L_0064dea8:; BB(0x0064dea8);
    /* 0064dea8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064deae: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x64deb3u); f_006375b0();
    /* 0064deb3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0064deb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064deb9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64debeu); f_0063aac0();
    /* 0064debe: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0064dec0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0064dec3: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064dec7: jne 0x64dee6 */ if (!fZ) goto L_0064dee6;
L_0064dec9:; BB(0x0064dec9);
    /* 0064dec9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064decf: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x64ded4u); f_006375b0();
    /* 0064ded4: mov ecx, eax */ r_ecx = r_eax;
    /* 0064ded6: call 0x57a470 */ r_esp -= 4; W32(r_esp, 0x64dedbu); f_0057a470();
    /* 0064dedb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064dedc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dedf: call 0x64f470 */ r_esp -= 4; W32(r_esp, 0x64dee4u); f_0064f470();
    /* 0064dee4: jmp 0x64def0 */ goto L_0064def0;
L_0064dee6:; BB(0x0064dee6);
    /* 0064dee6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dee8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064deeb: call 0x64f470 */ r_esp -= 4; W32(r_esp, 0x64def0u); f_0064f470();
L_0064def0:; BB(0x0064def0);
    /* 0064def0: jmp 0x64e050 */ goto L_0064e050;
L_0064def5:; BB(0x0064def5);
    /* 0064def5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064def8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064defa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064defd: mov edx, dword ptr [eax + 0x170] */ r_edx = R32((u32)(r_eax+0x170u));
    /* 0064df03: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64df05u); call_ind(t); }
    /* 0064df05: jmp 0x64e050 */ goto L_0064e050;
L_0064df0a:; BB(0x0064df0a);
    /* 0064df0a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064df0c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064df0f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064df11: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064df14: mov eax, dword ptr [edx + 0x174] */ r_eax = R32((u32)(r_edx+0x174u));
    /* 0064df1a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64df1cu); call_ind(t); }
    /* 0064df1c: jmp 0x64e050 */ goto L_0064e050;
L_0064df21:; BB(0x0064df21);
    /* 0064df21: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0064df23: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064df26: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064df28: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064df2b: mov eax, dword ptr [edx + 0x174] */ r_eax = R32((u32)(r_edx+0x174u));
    /* 0064df31: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64df33u); call_ind(t); }
    /* 0064df33: jmp 0x64e050 */ goto L_0064e050;
L_0064df38:; BB(0x0064df38);
    /* 0064df38: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0064df3e: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0064df41: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0064df46: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0064df49: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064df4b: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0064df4e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64df50u); call_ind(t); }
    /* 0064df50: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064df53: call 0x64cfa0 */ r_esp -= 4; W32(r_esp, 0x64df58u); f_0064cfa0();
    /* 0064df58: jmp 0x64e050 */ goto L_0064e050;
L_0064df5d:; BB(0x0064df5d);
    /* 0064df5d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064df60: call 0x64f770 */ r_esp -= 4; W32(r_esp, 0x64df65u); f_0064f770();
    /* 0064df65: jmp 0x64e050 */ goto L_0064e050;
L_0064df6a:; BB(0x0064df6a);
    /* 0064df6a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064df6d: call 0x64f860 */ r_esp -= 4; W32(r_esp, 0x64df72u); f_0064f860();
    /* 0064df72: jmp 0x64e050 */ goto L_0064e050;
L_0064df77:; BB(0x0064df77);
    /* 0064df77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064df79: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064df7f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064df81: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064df87: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0064df8d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64df8fu); call_ind(t); }
    /* 0064df8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064df90: call 0x60cce0 */ r_esp -= 4; W32(r_esp, 0x64df95u); f_0060cce0();
    /* 0064df95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064df98: jmp 0x64e050 */ goto L_0064e050;
L_0064df9d:; BB(0x0064df9d);
    /* 0064df9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064df9f: call 0x60cce0 */ r_esp -= 4; W32(r_esp, 0x64dfa4u); f_0060cce0();
    /* 0064dfa4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064dfa7: jmp 0x64e050 */ goto L_0064e050;
L_0064dfac:; BB(0x0064dfac);
    /* 0064dfac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dfae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dfb0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dfb3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064dfb5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dfb8: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0064dfbe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64dfc0u); call_ind(t); }
    /* 0064dfc0: jmp 0x64e050 */ goto L_0064e050;
L_0064dfc5:; BB(0x0064dfc5);
    /* 0064dfc5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dfc8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064dfca: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dfcd: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 0064dfd3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64dfd5u); call_ind(t); }
    /* 0064dfd5: jmp 0x64e050 */ goto L_0064e050;
L_0064dfd7:; BB(0x0064dfd7);
    /* 0064dfd7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dfda: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064dfdc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dfdf: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 0064dfe5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64dfe7u); call_ind(t); }
    /* 0064dfe7: jmp 0x64e050 */ goto L_0064e050;
L_0064dfe9:; BB(0x0064dfe9);
    /* 0064dfe9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dfeb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dfee: call 0x64f660 */ r_esp -= 4; W32(r_esp, 0x64dff3u); f_0064f660();
    /* 0064dff3: jmp 0x64e050 */ goto L_0064e050;
L_0064dff5:; BB(0x0064dff5);
    /* 0064dff5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064dff8: call 0x64f380 */ r_esp -= 4; W32(r_esp, 0x64dffdu); f_0064f380();
    /* 0064dffd: jmp 0x64e050 */ goto L_0064e050;
L_0064dfff:; BB(0x0064dfff);
    /* 0064dfff: push 0x6dd030 */ { u32 v = 0x6dd030u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e004: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64e009u); f_00630f40();
    /* 0064e009: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064e00c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e00d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e013: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e015: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e01b: mov eax, dword ptr [edx + 0x34c] */ r_eax = R32((u32)(r_edx+0x34cu));
    /* 0064e021: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e023u); call_ind(t); }
    /* 0064e023: jmp 0x64e050 */ goto L_0064e050;
L_0064e025:; BB(0x0064e025);
    /* 0064e025: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064e028: call 0x64d720 */ r_esp -= 4; W32(r_esp, 0x64e02du); f_0064d720();
    /* 0064e02d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064e030: mov byte ptr [ecx + 0x38], 0 */ W8((u32)(r_ecx+0x38u), 0x0u);
    /* 0064e034: jmp 0x64e050 */ goto L_0064e050;
L_0064e036:; BB(0x0064e036);
    /* 0064e036: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e038: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e03a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e03c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e03e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e040: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064e043: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064e045: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064e048: mov edx, dword ptr [eax + 0x16c] */ r_edx = R32((u32)(r_eax+0x16cu));
    /* 0064e04e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64e050u); call_ind(t); }
L_0064e050:; BB(0x0064e050);
    /* 0064e050: mov esp, ebp */ r_esp = r_ebp;
    /* 0064e052: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064e053: ret 8 */ FN_RET(0x0064db70); r_esp += 12; return;
}

void f_0064e470(void) /* Room::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064e470);
    /* 0064e470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064e471: mov ebp, esp */ r_ebp = r_esp;
    /* 0064e473: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064e476: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064e479: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064e47c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064e47f: cmp dword ptr [ebp - 0x1c], 0x138d */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x138du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e486: jg 0x64e4c1 */ if ((!fZ&&fS==fO)) goto L_0064e4c1;
L_0064e488:; BB(0x0064e488);
    /* 0064e488: cmp dword ptr [ebp - 0x1c], 0x138d */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x138du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e48f: je 0x64e57e */ if (fZ) goto L_0064e57e;
L_0064e495:; BB(0x0064e495);
    /* 0064e495: cmp dword ptr [ebp - 0x1c], 0x1388 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e49c: jl 0x64e68d */ if ((fS!=fO)) goto L_0064e68d;
L_0064e4a2:; BB(0x0064e4a2);
    /* 0064e4a2: cmp dword ptr [ebp - 0x1c], 0x1389 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x1389u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e4a9: jle 0x64e57e */ if ((fZ||fS!=fO)) goto L_0064e57e;
L_0064e4af:; BB(0x0064e4af);
    /* 0064e4af: cmp dword ptr [ebp - 0x1c], 0x138b */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x138bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e4b6: je 0x64e57e */ if (fZ) goto L_0064e57e;
L_0064e4bc:; BB(0x0064e4bc);
    /* 0064e4bc: jmp 0x64e68d */ goto L_0064e68d;
L_0064e4c1:; BB(0x0064e4c1);
    /* 0064e4c1: cmp dword ptr [ebp - 0x1c], 0x138e */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x138eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e4c8: je 0x64e5f7 */ if (fZ) goto L_0064e5f7;
L_0064e4ce:; BB(0x0064e4ce);
    /* 0064e4ce: cmp dword ptr [ebp - 0x1c], 0x186bd */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x186bdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e4d5: jle 0x64e68d */ if ((fZ||fS!=fO)) goto L_0064e68d;
L_0064e4db:; BB(0x0064e4db);
    /* 0064e4db: cmp dword ptr [ebp - 0x1c], 0x186bf */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x186bfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e4e2: jle 0x64e4e9 */ if ((fZ||fS!=fO)) goto L_0064e4e9;
L_0064e4e4:; BB(0x0064e4e4);
    /* 0064e4e4: jmp 0x64e68d */ goto L_0064e68d;
L_0064e4e9:; BB(0x0064e4e9);
    /* 0064e4e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064e4f0: jmp 0x64e4fb */ goto L_0064e4fb;
L_0064e4f2:; BB(0x0064e4f2);
    /* 0064e4f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e4f5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064e4f8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0064e4fb:; BB(0x0064e4fb);
    /* 0064e4fb: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064e501: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064e503: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e509: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 0064e50f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64e511u); call_ind(t); }
    /* 0064e511: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e514: jge 0x64e567 */ if ((fS==fO)) goto L_0064e567;
L_0064e516:; BB(0x0064e516);
    /* 0064e516: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e519: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e51a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e520: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e522: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e528: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0064e52e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e530u); call_ind(t); }
    /* 0064e530: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064e533: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e537: jne 0x64e53b */ if (!fZ) goto L_0064e53b;
L_0064e539:; BB(0x0064e539);
    /* 0064e539: jmp 0x64e4f2 */ goto L_0064e4f2;
L_0064e53b:; BB(0x0064e53b);
    /* 0064e53b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064e53e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e540: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064e543: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0064e546: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e548u); call_ind(t); }
    /* 0064e548: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0064e54b: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e54f: jne 0x64e553 */ if (!fZ) goto L_0064e553;
L_0064e551:; BB(0x0064e551);
    /* 0064e551: jmp 0x64e4f2 */ goto L_0064e4f2;
L_0064e553:; BB(0x0064e553);
    /* 0064e553: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e555: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e557: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e559: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e55c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064e55d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064e560: call 0x5fe1c0 */ r_esp -= 4; W32(r_esp, 0x64e565u); f_005fe1c0();
    /* 0064e565: jmp 0x64e4f2 */ goto L_0064e4f2;
L_0064e567:; BB(0x0064e567);
    /* 0064e567: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064e56a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064e56c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064e56f: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0064e572: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64e574u); call_ind(t); }
    /* 0064e574: jmp 0x64e68d */ goto L_0064e68d;
L_0064e57e:; BB(0x0064e57e);
    /* 0064e57e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0064e585: jmp 0x64e590 */ goto L_0064e590;
L_0064e587:; BB(0x0064e587);
    /* 0064e587: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064e58a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064e58d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0064e590:; BB(0x0064e590);
    /* 0064e590: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e596: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e598: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e59e: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 0064e5a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e5a6u); call_ind(t); }
    /* 0064e5a6: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e5a9: jge 0x64e5f2 */ if ((fS==fO)) goto L_0064e5f2;
L_0064e5ab:; BB(0x0064e5ab);
    /* 0064e5ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064e5ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064e5af: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064e5b5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064e5b7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e5bd: mov edx, dword ptr [eax + 0x164] */ r_edx = R32((u32)(r_eax+0x164u));
    /* 0064e5c3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64e5c5u); call_ind(t); }
    /* 0064e5c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e5c6: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064e5cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064e5cd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e5d3: mov eax, dword ptr [edx + 0x3ac] */ r_eax = R32((u32)(r_edx+0x3acu));
    /* 0064e5d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e5dbu); call_ind(t); }
    /* 0064e5db: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064e5de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e5e0: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e5e2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e5e4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064e5e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064e5e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064e5eb: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x64e5f0u); f_005fe240();
    /* 0064e5f0: jmp 0x64e587 */ goto L_0064e587;
L_0064e5f2:; BB(0x0064e5f2);
    /* 0064e5f2: jmp 0x64e68d */ goto L_0064e68d;
L_0064e5f7:; BB(0x0064e5f7);
    /* 0064e5f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064e5fe: jmp 0x64e609 */ goto L_0064e609;
L_0064e600:; BB(0x0064e600);
    /* 0064e600: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e603: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064e606: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0064e609:; BB(0x0064e609);
    /* 0064e609: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064e60e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064e610: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e616: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0064e61c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e61eu); call_ind(t); }
    /* 0064e61e: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e621: jge 0x64e68d */ if ((fS==fO)) goto L_0064e68d;
L_0064e623:; BB(0x0064e623);
    /* 0064e623: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e626: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064e627: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064e62d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064e62f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e635: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0064e63b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64e63du); call_ind(t); }
    /* 0064e63d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064e640: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e644: jne 0x64e648 */ if (!fZ) goto L_0064e648;
L_0064e646:; BB(0x0064e646);
    /* 0064e646: jmp 0x64e600 */ goto L_0064e600;
L_0064e648:; BB(0x0064e648);
    /* 0064e648: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064e64b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064e64d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064e650: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0064e653: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e655u); call_ind(t); }
    /* 0064e655: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064e658: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e65a: jne 0x64e65e */ if (!fZ) goto L_0064e65e;
L_0064e65c:; BB(0x0064e65c);
    /* 0064e65c: jmp 0x64e600 */ goto L_0064e600;
L_0064e65e:; BB(0x0064e65e);
    /* 0064e65e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064e661: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064e663: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064e666: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0064e669: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64e66bu); call_ind(t); }
    /* 0064e66b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0064e66e: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e672: jne 0x64e676 */ if (!fZ) goto L_0064e676;
L_0064e674:; BB(0x0064e674);
    /* 0064e674: jmp 0x64e600 */ goto L_0064e600;
L_0064e676:; BB(0x0064e676);
    /* 0064e676: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e678: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e67a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e67c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e67f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e680: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064e683: call 0x5fe1c0 */ r_esp -= 4; W32(r_esp, 0x64e688u); f_005fe1c0();
    /* 0064e688: jmp 0x64e600 */ goto L_0064e600;
L_0064e68d:; BB(0x0064e68d);
    /* 0064e68d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064e68f: mov esp, ebp */ r_esp = r_ebp;
    /* 0064e691: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064e692: ret 8 */ FN_RET(0x0064e470); r_esp += 12; return;
}

void f_0064ebc0(void) /* Room::vfunc90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064ebc0);
    /* 0064ebc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ebc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ebc3: sub esp, 0x14c */ {  u32 a = r_esp; u32 b = 0x14cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ebc9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064ebce: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064ebd0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064ebd3: mov dword ptr [ebp - 0x14c], ecx */ W32((u32)(r_ebp+0xfffffeb4u), r_ecx);
    /* 0064ebd9: mov eax, dword ptr [ebp - 0x14c] */ r_eax = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0064ebdf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064ebe1: mov ecx, dword ptr [ebp - 0x14c] */ r_ecx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0064ebe7: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0064ebed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ebefu); call_ind(t); }
    /* 0064ebef: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064ebf2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ebf4: je 0x64ebfa */ if (fZ) goto L_0064ebfa;
L_0064ebf6:; BB(0x0064ebf6);
    /* 0064ebf6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064ebf8: jmp 0x64ec70 */ goto L_0064ec70;
L_0064ebfa:; BB(0x0064ebfa);
    /* 0064ebfa: lea edx, [ebp - 0x148] */ r_edx = (u32)(r_ebp+0xfffffeb8u);
    /* 0064ec00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec01: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064ec07: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x64ec0cu); f_005f3bf0();
    /* 0064ec0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec0d: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064ec12: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064ec14: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064ec1a: mov eax, dword ptr [edx + 0x338] */ r_eax = R32((u32)(r_edx+0x338u));
    /* 0064ec20: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ec22u); call_ind(t); }
    /* 0064ec22: lea ecx, [ebp - 0x148] */ r_ecx = (u32)(r_ebp+0xfffffeb8u);
    /* 0064ec28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec29: push 0x6dd0c8 */ { u32 v = 0x6dd0c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec2e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64ec33u); f_00630f40();
    /* 0064ec33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ec36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec37: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0064ec3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec3e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x64ec44u); call_ind(t); }
    /* 0064ec44: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ec47: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec49: push 0x6dd0b4 */ { u32 v = 0x6dd0b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec4e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64ec53u); f_00630f40();
    /* 0064ec53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ec56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec57: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0064ec5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec5e: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x64ec63u); f_0062ff10();
    /* 0064ec63: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ec66: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064ec68: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ec6b: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0064ec6e: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
L_0064ec70:; BB(0x0064ec70);
    /* 0064ec70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064ec73: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064ec75: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x64ec7au); f_00686d72();
    /* 0064ec7a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ec7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ec7d: ret  */ FN_RET(0x0064ebc0); r_esp += 4; return;
}

void f_0064ec80(void) /* Room::vfunc91 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064ec80);
    /* 0064ec80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec81: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ec83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec85: push 0x6ac05b */ { u32 v = 0x6ac05bu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064ec90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec91: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ec94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064ec99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064ec9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ec9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064ec9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064eca5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064eca8: cmp dword ptr [0x16306b0], 0 */ {  u32 a = R32((u32)(0x16306b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ecaf: jne 0x64ed2d */ if (!fZ) goto L_0064ed2d;
L_0064ecb1:; BB(0x0064ecb1);
    /* 0064ecb1: push 0x1ec */ { u32 v = 0x1ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ecb6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64ecbbu); f_00686d82();
    /* 0064ecbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ecbe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064ecc1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064ecc8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064eccc: je 0x64ecef */ if (fZ) goto L_0064ecef;
L_0064ecce:; BB(0x0064ecce);
    /* 0064ecce: mov al, byte ptr [ebp + 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 0064ecd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ecd2: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0064ecd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ecd6: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0064ecd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ecda: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0064ecdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ecde: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0064ece1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ece2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ece5: call 0x65dbd0 */ r_esp -= 4; W32(r_esp, 0x64eceau); f_0065dbd0();
    /* 0064ecea: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064eced: jmp 0x64ecf6 */ goto L_0064ecf6;
L_0064ecef:; BB(0x0064ecef);
    /* 0064ecef: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0064ecf6:; BB(0x0064ecf6);
    /* 0064ecf6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064ecf9: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0064ecfc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064ed03: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064ed06: mov dword ptr [0x16306b0], eax */ W32((u32)(0x16306b0u), r_eax);
    /* 0064ed0b: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 0064ed11: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064ed13: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 0064ed19: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0064ed1c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ed1eu); call_ind(t); }
    /* 0064ed1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed22: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 0064ed28: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x64ed2du); f_005f7340();
L_0064ed2d:; BB(0x0064ed2d);
    /* 0064ed2d: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 0064ed33: call 0x65e770 */ r_esp -= 4; W32(r_esp, 0x64ed38u); f_0065e770();
    /* 0064ed38: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064ed3b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064ed42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ed43: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ed45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ed46: ret 0x14 */ FN_RET(0x0064ec80); r_esp += 24; return;
}

void f_0064ed80(void) /* Room::vfunc92 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064ed80);
    /* 0064ed80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed81: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ed83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed85: push 0x6ac081 */ { u32 v = 0x6ac081u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064ed90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed91: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ed94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064ed99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064ed9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ed9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064ed9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064eda5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064eda8: cmp dword ptr [0x16306a0], 0 */ {  u32 a = R32((u32)(0x16306a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064edaf: jne 0x64ee1a */ if (!fZ) goto L_0064ee1a;
L_0064edb1:; BB(0x0064edb1);
    /* 0064edb1: push 0x1c0 */ { u32 v = 0x1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064edb6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64edbbu); f_00686d82();
    /* 0064edbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064edbe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064edc1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064edc8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064edcc: je 0x64eddb */ if (fZ) goto L_0064eddb;
L_0064edce:; BB(0x0064edce);
    /* 0064edce: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064edd1: call 0x654930 */ r_esp -= 4; W32(r_esp, 0x64edd6u); f_00654930();
    /* 0064edd6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064edd9: jmp 0x64ede2 */ goto L_0064ede2;
L_0064eddb:; BB(0x0064eddb);
    /* 0064eddb: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0064ede2:; BB(0x0064ede2);
    /* 0064ede2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064ede5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064ede8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064edef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064edf2: mov dword ptr [0x16306a0], ecx */ W32((u32)(0x16306a0u), r_ecx);
    /* 0064edf8: mov edx, dword ptr [0x16306a0] */ r_edx = R32((u32)(0x16306a0u));
    /* 0064edfe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064ee00: mov ecx, dword ptr [0x16306a0] */ r_ecx = R32((u32)(0x16306a0u));
    /* 0064ee06: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064ee09: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64ee0bu); call_ind(t); }
    /* 0064ee0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ee0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ee0f: mov ecx, dword ptr [0x16306a0] */ r_ecx = R32((u32)(0x16306a0u));
    /* 0064ee15: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x64ee1au); f_005f7340();
L_0064ee1a:; BB(0x0064ee1a);
    /* 0064ee1a: mov ecx, dword ptr [0x16306a0] */ r_ecx = R32((u32)(0x16306a0u));
    /* 0064ee20: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x64ee25u); f_005f85d0();
    /* 0064ee25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064ee28: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064ee2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ee30: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ee32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ee33: ret  */ FN_RET(0x0064ed80); r_esp += 4; return;
}

void f_0064ee70(void) /* Room::vfunc93 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064ee70);
    /* 0064ee70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ee71: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ee73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ee75: push 0x6ac0a7 */ { u32 v = 0x6ac0a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ee7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064ee80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ee81: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ee84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064ee89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064ee8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ee8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064ee8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064ee95: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064ee98: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ee9f: jne 0x64ef0a */ if (!fZ) goto L_0064ef0a;
L_0064eea1:; BB(0x0064eea1);
    /* 0064eea1: push 0x1ec */ { u32 v = 0x1ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0064eea6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64eeabu); f_00686d82();
    /* 0064eeab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064eeae: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064eeb1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064eeb8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064eebc: je 0x64eecb */ if (fZ) goto L_0064eecb;
L_0064eebe:; BB(0x0064eebe);
    /* 0064eebe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064eec1: call 0x63b600 */ r_esp -= 4; W32(r_esp, 0x64eec6u); f_0063b600();
    /* 0064eec6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064eec9: jmp 0x64eed2 */ goto L_0064eed2;
L_0064eecb:; BB(0x0064eecb);
    /* 0064eecb: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0064eed2:; BB(0x0064eed2);
    /* 0064eed2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064eed5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064eed8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064eedf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064eee2: mov dword ptr [0x163068c], ecx */ W32((u32)(0x163068cu), r_ecx);
    /* 0064eee8: mov edx, dword ptr [0x163068c] */ r_edx = R32((u32)(0x163068cu));
    /* 0064eeee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064eef0: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0064eef6: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064eef9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64eefbu); call_ind(t); }
    /* 0064eefb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064eefd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064eeff: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0064ef05: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x64ef0au); f_005f7340();
L_0064ef0a:; BB(0x0064ef0a);
    /* 0064ef0a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064ef0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef0e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0064ef14: call 0x63d610 */ r_esp -= 4; W32(r_esp, 0x64ef19u); f_0063d610();
    /* 0064ef19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064ef1c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064ef23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ef24: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ef26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ef27: ret 4 */ FN_RET(0x0064ee70); r_esp += 8; return;
}

void f_0064fa90(void) /* room::func_0064fa90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064fa90);
    /* 0064fa90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064fa91: mov ebp, esp */ r_ebp = r_esp;
    /* 0064fa93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064fa95: push 0x6ac267 */ { u32 v = 0x6ac267u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fa9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064faa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064faa1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064faa4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064faa9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064faab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064faac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064faaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064fab5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064fab8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064fabb: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0064fabe: mov byte ptr [eax + 0x48], cl */ W8((u32)(r_eax+0x48u), (u8)r_ecx);
    /* 0064fac1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064fac4: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fac8: jne 0x64fae1 */ if (!fZ) goto L_0064fae1;
L_0064faca:; BB(0x0064faca);
    /* 0064faca: push 0x507 */ { u32 v = 0x507u; r_esp -= 4; W32(r_esp, v); }
    /* 0064facf: push 0x6dd084 */ { u32 v = 0x6dd084u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fad4: push 0x6dd10c */ { u32 v = 0x6dd10cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064fad9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x64fadeu); f_005e9f20();
    /* 0064fade: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064fae1:; BB(0x0064fae1);
    /* 0064fae1: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0064fae5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fae7: je 0x64fb79 */ if (fZ) goto L_0064fb79;
L_0064faed:; BB(0x0064faed);
    /* 0064faed: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064faf3: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x64faf8u); f_005f3bf0();
    /* 0064faf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064faf9: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064faff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064fb01: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064fb07: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0064fb0d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64fb0fu); call_ind(t); }
    /* 0064fb0f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064fb12: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064fb15: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064fb17: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064fb1a: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0064fb20: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fb22u); call_ind(t); }
    /* 0064fb22: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064fb25: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fb27: je 0x64fb79 */ if (fZ) goto L_0064fb79;
L_0064fb29:; BB(0x0064fb29);
    /* 0064fb29: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064fb2b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64fb30u); f_00686d82();
    /* 0064fb30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064fb33: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064fb36: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064fb3d: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fb41: je 0x64fb54 */ if (fZ) goto L_0064fb54;
L_0064fb43:; BB(0x0064fb43);
    /* 0064fb43: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064fb46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fb47: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064fb4a: call 0x678690 */ r_esp -= 4; W32(r_esp, 0x64fb4fu); f_00678690();
    /* 0064fb4f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064fb52: jmp 0x64fb5b */ goto L_0064fb5b;
L_0064fb54:; BB(0x0064fb54);
    /* 0064fb54: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0064fb5b:; BB(0x0064fb5b);
    /* 0064fb5b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064fb5e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064fb61: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064fb68: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064fb6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fb6c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064fb6f: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0064fb72: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x64fb77u); f_005fc420();
    /* 0064fb77: jmp 0x64fb86 */ goto L_0064fb86;
L_0064fb79:; BB(0x0064fb79);
    /* 0064fb79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fb7b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064fb7e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064fb81: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x64fb86u); f_005fc420();
L_0064fb86:; BB(0x0064fb86);
    /* 0064fb86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064fb89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064fb90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064fb91: mov esp, ebp */ r_esp = r_ebp;
    /* 0064fb93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064fb94: ret 8 */ FN_RET(0x0064fa90); r_esp += 12; return;
}

void f_0064fd00(void) /* Room::vfunc103 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064fd00);
    /* 0064fd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064fd01: mov ebp, esp */ r_ebp = r_esp;
    /* 0064fd03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fd04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064fd07: mov eax, 0x1f */ r_eax = 0x1fu;
    /* 0064fd0c: mov esp, ebp */ r_esp = r_ebp;
    /* 0064fd0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064fd0f: ret  */ FN_RET(0x0064fd00); r_esp += 4; return;
}

void f_0064fd10(void) /* Room::vfunc104 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064fd10);
    /* 0064fd10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064fd11: mov ebp, esp */ r_ebp = r_esp;
    /* 0064fd13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fd14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064fd17: mov eax, 0x1f */ r_eax = 0x1fu;
    /* 0064fd1c: mov esp, ebp */ r_esp = r_ebp;
    /* 0064fd1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064fd1f: ret  */ FN_RET(0x0064fd10); r_esp += 4; return;
}

void f_0064fd20(void) /* Room::vfunc107 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064fd20);
    /* 0064fd20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064fd21: mov ebp, esp */ r_ebp = r_esp;
    /* 0064fd23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064fd24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064fd25: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064fd28: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064fd2b: call 0x646e70 */ r_esp -= 4; W32(r_esp, 0x64fd30u); f_00646e70();
    /* 0064fd30: mov esi, eax */ r_esi = r_eax;
    /* 0064fd32: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064fd35: call 0x646e90 */ r_esp -= 4; W32(r_esp, 0x64fd3au); f_00646e90();
    /* 0064fd3a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064fd3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064fd3d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064fd40: call 0x646e40 */ r_esp -= 4; W32(r_esp, 0x64fd45u); f_00646e40();
    /* 0064fd45: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064fd48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fd49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064fd4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064fd4e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fd51: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0064fd54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fd56u); call_ind(t); }
    /* 0064fd56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064fd57: mov esp, ebp */ r_esp = r_ebp;
    /* 0064fd59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064fd5a: ret 8 */ FN_RET(0x0064fd20); r_esp += 12; return;
}

void f_0064fd60(void) /* Room::vfunc108 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064fd60);
    /* 0064fd60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064fd61: mov ebp, esp */ r_ebp = r_esp;
    /* 0064fd63: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064fd66: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0064fd69: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064fd6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064fd6e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064fd71: mov eax, dword ptr [edx + 0x1b8] */ r_eax = R32((u32)(r_edx+0x1b8u));
    /* 0064fd77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fd79u); call_ind(t); }
    /* 0064fd79: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 0064fd7c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064fd7f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064fd81: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064fd84: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0064fd8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fd8cu); call_ind(t); }
    /* 0064fd8c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064fd8f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064fd95: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064fd97: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064fd9d: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 0064fda3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fda5u); call_ind(t); }
    /* 0064fda5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064fda8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fdaa: jne 0x64fdcd */ if (!fZ) goto L_0064fdcd;
L_0064fdac:; BB(0x0064fdac);
    /* 0064fdac: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064fdb2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064fdb4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064fdba: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 0064fdc0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64fdc2u); call_ind(t); }
    /* 0064fdc2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064fdc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fdc7: je 0x64fef9 */ if (fZ) goto L_0064fef9;
L_0064fdcd:; BB(0x0064fdcd);
    /* 0064fdcd: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064fdcf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fdd2: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0064fdd8: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x64fdddu); f_005ecc60();
    /* 0064fddd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0064fddf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064fde2: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 0064fde8: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x64fdedu); f_005eccb0();
    /* 0064fded: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0064fdf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fdf3: je 0x64fe79 */ if (fZ) goto L_0064fe79;
L_0064fdf9:; BB(0x0064fdf9);
    /* 0064fdf9: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fdfd: jne 0x64fe3c */ if (!fZ) goto L_0064fe3c;
L_0064fdff:; BB(0x0064fdff);
    /* 0064fdff: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fe02: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064fe04: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fe07: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0064fe0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fe0cu); call_ind(t); }
    /* 0064fe0c: add eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064fe0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe10: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fe13: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064fe15: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fe18: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0064fe1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fe1du); call_ind(t); }
    /* 0064fe1d: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064fe20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe21: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fe24: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0064fe2a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064fe2d: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0064fe33: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064fe35: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0064fe38: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fe3au); call_ind(t); }
    /* 0064fe3a: jmp 0x64fe77 */ goto L_0064fe77;
L_0064fe3c:; BB(0x0064fe3c);
    /* 0064fe3c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fe3f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064fe41: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fe44: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0064fe47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fe49u); call_ind(t); }
    /* 0064fe49: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064fe4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe4d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fe50: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064fe52: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fe55: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0064fe58: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fe5au); call_ind(t); }
    /* 0064fe5a: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064fe5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe5e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fe61: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0064fe67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064fe6a: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0064fe70: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064fe72: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0064fe75: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fe77u); call_ind(t); }
L_0064fe77:; BB(0x0064fe77);
    /* 0064fe77: jmp 0x64fef7 */ goto L_0064fef7;
L_0064fe79:; BB(0x0064fe79);
    /* 0064fe79: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064fe7d: jne 0x64febc */ if (!fZ) goto L_0064febc;
L_0064fe7f:; BB(0x0064fe7f);
    /* 0064fe7f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fe82: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064fe84: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fe87: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0064fe8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fe8cu); call_ind(t); }
    /* 0064fe8c: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064fe8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fe90: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fe93: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064fe95: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fe98: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0064fe9b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fe9du); call_ind(t); }
    /* 0064fe9d: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064fea0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fea1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fea4: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0064feaa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064fead: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0064feb3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064feb5: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0064feb8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64febau); call_ind(t); }
    /* 0064feba: jmp 0x64fef7 */ goto L_0064fef7;
L_0064febc:; BB(0x0064febc);
    /* 0064febc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064febf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064fec1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fec4: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0064fec7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fec9u); call_ind(t); }
    /* 0064fec9: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064fecc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fecd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fed0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064fed2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fed5: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0064fed8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fedau); call_ind(t); }
    /* 0064feda: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064fedd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064fede: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fee1: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0064fee7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064feea: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0064fef0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064fef2: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0064fef5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fef7u); call_ind(t); }
L_0064fef7:; BB(0x0064fef7);
    /* 0064fef7: jmp 0x64ff34 */ goto L_0064ff34;
L_0064fef9:; BB(0x0064fef9);
    /* 0064fef9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064fefc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064fefe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064ff01: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0064ff04: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ff06u); call_ind(t); }
    /* 0064ff06: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064ff09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff0a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064ff0d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064ff0f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064ff12: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0064ff15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ff17u); call_ind(t); }
    /* 0064ff17: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064ff1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064ff1e: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0064ff24: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064ff27: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0064ff2d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064ff2f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0064ff32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ff34u); call_ind(t); }
L_0064ff34:; BB(0x0064ff34);
    /* 0064ff34: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ff36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ff37: ret 8 */ FN_RET(0x0064fd60); r_esp += 12; return;
}

void f_0064ff40(void) /* Room::vfunc109 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064ff40);
    /* 0064ff40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff41: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ff43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ff46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0064ff49: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064ff4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064ff4e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064ff51: mov eax, dword ptr [edx + 0x1b8] */ r_eax = R32((u32)(r_edx+0x1b8u));
    /* 0064ff57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ff59u); call_ind(t); }
    /* 0064ff59: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0064ff5c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064ff62: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064ff64: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064ff6a: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 0064ff70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ff72u); call_ind(t); }
    /* 0064ff72: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064ff75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ff77: jne 0x64ff9a */ if (!fZ) goto L_0064ff9a;
L_0064ff79:; BB(0x0064ff79);
    /* 0064ff79: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064ff7f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064ff81: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064ff87: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 0064ff8d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64ff8fu); call_ind(t); }
    /* 0064ff8f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064ff92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ff94: je 0x65003c */ if (fZ) goto L_0065003c;
L_0064ff9a:; BB(0x0064ff9a);
    /* 0064ff9a: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ff9c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064ff9f: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0064ffa5: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x64ffaau); f_005ecc60();
    /* 0064ffaa: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ffac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064ffaf: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 0064ffb5: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x64ffbau); f_005eccb0();
    /* 0064ffba: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0064ffbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ffc0: je 0x64ffff */ if (fZ) goto L_0064ffff;
L_0064ffc2:; BB(0x0064ffc2);
    /* 0064ffc2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064ffc5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064ffc7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064ffca: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0064ffcd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ffcfu); call_ind(t); }
    /* 0064ffcf: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064ffd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ffd3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064ffd6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064ffd8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064ffdb: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0064ffde: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ffe0u); call_ind(t); }
    /* 0064ffe0: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064ffe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ffe4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064ffe7: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0064ffed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064fff0: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0064fff6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064fff8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0064fffb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64fffdu); call_ind(t); }
    /* 0064fffd: jmp 0x65003a */ goto L_0065003a;
L_0064ffff:; BB(0x0064ffff);
    /* 0064ffff: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00650002: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00650004: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00650007: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0065000a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65000cu); call_ind(t); }
    /* 0065000c: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065000f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650010: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00650013: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00650015: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00650018: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0065001b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65001du); call_ind(t); }
    /* 0065001d: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650021: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00650024: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0065002a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065002d: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00650033: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00650035: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00650038: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65003au); call_ind(t); }
L_0065003a:; BB(0x0065003a);
    /* 0065003a: jmp 0x650077 */ goto L_00650077;
L_0065003c:; BB(0x0065003c);
    /* 0065003c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065003f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00650041: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00650044: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00650047: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650049u); call_ind(t); }
    /* 00650049: add eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065004c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065004d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00650050: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00650052: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00650055: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00650058: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65005au); call_ind(t); }
    /* 0065005a: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065005d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065005e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00650061: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 00650067: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065006a: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00650070: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00650072: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00650075: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650077u); call_ind(t); }
L_00650077:; BB(0x00650077);
    /* 00650077: mov esp, ebp */ r_esp = r_ebp;
    /* 00650079: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065007a: ret 8 */ FN_RET(0x0064ff40); r_esp += 12; return;
}

void f_006500a0(void) /* Room::vfunc118 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006500a0);
    /* 006500a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006500a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006500a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006500a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006500a9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006500ad: jl 0x6500c9 */ if ((fS!=fO)) goto L_006500c9;
L_006500af:; BB(0x006500af);
    /* 006500af: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006500b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006500b6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006500bc: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 006500c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6500c4u); call_ind(t); }
    /* 006500c4: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006500c7: jl 0x6500e0 */ if ((fS!=fO)) goto L_006500e0;
L_006500c9:; BB(0x006500c9);
    /* 006500c9: push 0x576 */ { u32 v = 0x576u; r_esp -= 4; W32(r_esp, v); }
    /* 006500ce: push 0x6dd084 */ { u32 v = 0x6dd084u; r_esp -= 4; W32(r_esp, v); }
    /* 006500d3: push 0x6d4408 */ { u32 v = 0x6d4408u; r_esp -= 4; W32(r_esp, v); }
    /* 006500d8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6500ddu); f_005e9f20();
    /* 006500dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006500e0:; BB(0x006500e0);
    /* 006500e0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006500e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006500e4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006500ea: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x6500efu); f_00639110();
    /* 006500ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006500f1: je 0x650108 */ if (fZ) goto L_00650108;
L_006500f3:; BB(0x006500f3);
    /* 006500f3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006500f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006500f7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006500fd: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x650102u); f_00639110();
    /* 00650102: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650106: jne 0x65010d */ if (!fZ) goto L_0065010d;
L_00650108:; BB(0x00650108);
    /* 00650108: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065010b: jmp 0x650149 */ goto L_00650149;
L_0065010d:; BB(0x0065010d);
    /* 0065010d: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 00650111: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00650113: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00650115: and ecx, 0xffffff9f */ {  u32 a = r_ecx; u32 b = 0xffffff9fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00650118: add ecx, 0x65 */ {  u32 a = r_ecx; u32 b = 0x65u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065011b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065011e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00650121: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00650122: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00650128: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x65012du); f_00639110();
    /* 0065012d: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00650130: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00650133: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00650136: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00650138: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065013b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0065013e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650140u); call_ind(t); }
    /* 00650140: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650143: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00650146: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00650149:; BB(0x00650149);
    /* 00650149: mov esp, ebp */ r_esp = r_ebp;
    /* 0065014b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065014c: ret 8 */ FN_RET(0x006500a0); r_esp += 12; return;
}

void f_00650150(void) /* Room::vfunc119 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650150);
    /* 00650150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650151: mov ebp, esp */ r_ebp = r_esp;
    /* 00650153: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00650156: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00650159: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065015d: jl 0x650179 */ if ((fS!=fO)) goto L_00650179;
L_0065015f:; BB(0x0065015f);
    /* 0065015f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00650164: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00650166: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065016c: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00650172: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650174u); call_ind(t); }
    /* 00650174: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00650177: jl 0x650190 */ if ((fS!=fO)) goto L_00650190;
L_00650179:; BB(0x00650179);
    /* 00650179: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0065017e: push 0x6dd084 */ { u32 v = 0x6dd084u; r_esp -= 4; W32(r_esp, v); }
    /* 00650183: push 0x6d4408 */ { u32 v = 0x6d4408u; r_esp -= 4; W32(r_esp, v); }
    /* 00650188: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x65018du); f_005e9f20();
    /* 0065018d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00650190:; BB(0x00650190);
    /* 00650190: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00650193: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00650194: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065019a: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x65019fu); f_00639110();
    /* 0065019f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006501a1: je 0x6501b8 */ if (fZ) goto L_006501b8;
L_006501a3:; BB(0x006501a3);
    /* 006501a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006501a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006501a7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006501ad: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x6501b2u); f_00639110();
    /* 006501b2: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006501b6: jne 0x6501bd */ if (!fZ) goto L_006501bd;
L_006501b8:; BB(0x006501b8);
    /* 006501b8: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006501bb: jmp 0x6501e8 */ goto L_006501e8;
L_006501bd:; BB(0x006501bd);
    /* 006501bd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006501c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006501c1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006501c7: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x6501ccu); f_00639110();
    /* 006501cc: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006501cf: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006501d2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006501d5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006501d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006501da: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 006501dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6501dfu); call_ind(t); }
    /* 006501df: add eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006501e2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006501e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_006501e8:; BB(0x006501e8);
    /* 006501e8: mov esp, ebp */ r_esp = r_ebp;
    /* 006501ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006501eb: ret 8 */ FN_RET(0x00650150); r_esp += 12; return;
}

void f_00650360(void) /* Room::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650360);
    /* 00650360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650361: mov ebp, esp */ r_ebp = r_esp;
    /* 00650363: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00650366: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00650369: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065036c: cmp dword ptr [eax + 0x18], 3 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650370: je 0x65037e */ if (fZ) goto L_0065037e;
L_00650372:; BB(0x00650372);
    /* 00650372: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x650378u); call_ind(t); }
    /* 00650378: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065037b: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
L_0065037e:; BB(0x0065037e);
    /* 0065037e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00650381: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00650384: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00650387: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065038b: je 0x65038f */ if (fZ) goto L_0065038f;
L_0065038d:; BB(0x0065038d);
    /* 0065038d: jmp 0x6503e4 */ goto L_006503e4;
L_0065038f:; BB(0x0065038f);
    /* 0065038f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650392: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650396: je 0x6503b3 */ if (fZ) goto L_006503b3;
L_00650398:; BB(0x00650398);
    /* 00650398: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065039b: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0065039e: movzx ecx, byte ptr [eax + 0x2ac] */ r_ecx = (u32)R8((u32)(r_eax+0x2acu));
    /* 006503a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006503a7: je 0x6503b3 */ if (fZ) goto L_006503b3;
L_006503a9:; BB(0x006503a9);
    /* 006503a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006503ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006503ae: call 0x650550 */ r_esp -= 4; W32(r_esp, 0x6503b3u); f_00650550();
L_006503b3:; BB(0x006503b3);
    /* 006503b3: cmp dword ptr [0x16306c4], 0 */ {  u32 a = R32((u32)(0x16306c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006503ba: je 0x6503cb */ if (fZ) goto L_006503cb;
L_006503bc:; BB(0x006503bc);
    /* 006503bc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006503bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006503c0: mov ecx, dword ptr [0x16306c4] */ r_ecx = R32((u32)(0x16306c4u));
    /* 006503c6: call 0x66f370 */ r_esp -= 4; W32(r_esp, 0x6503cbu); f_0066f370();
L_006503cb:; BB(0x006503cb);
    /* 006503cb: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 006503d0: movzx ecx, byte ptr [eax + 0x48] */ r_ecx = (u32)R8((u32)(r_eax+0x48u));
    /* 006503d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006503d6: je 0x6503e4 */ if (fZ) goto L_006503e4;
L_006503d8:; BB(0x006503d8);
    /* 006503d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006503da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006503dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006503df: call 0x64fa90 */ r_esp -= 4; W32(r_esp, 0x6503e4u); f_0064fa90();
L_006503e4:; BB(0x006503e4);
    /* 006503e4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006503e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006503e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006503eb: call 0x5f1680 */ r_esp -= 4; W32(r_esp, 0x6503f0u); f_005f1680();
    /* 006503f0: mov esp, ebp */ r_esp = r_ebp;
    /* 006503f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006503f3: ret 4 */ FN_RET(0x00650360); r_esp += 8; return;
}

void f_00650af0(void) /* Room::vfunc77 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650af0);
    /* 00650af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00650af3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650af4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00650af7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650afa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00650afc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650aff: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00650b05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650b07u); call_ind(t); }
    /* 00650b07: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00650b0a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00650b0c: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00650b0e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650b11: mov esp, ebp */ r_esp = r_ebp;
    /* 00650b13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650b14: ret  */ FN_RET(0x00650af0); r_esp += 4; return;
}

void f_00650b20(void) /* Room::vfunc80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650b20);
    /* 00650b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00650b23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650b24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00650b27: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00650b29: mov esp, ebp */ r_esp = r_ebp;
    /* 00650b2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650b2c: ret 0xc */ FN_RET(0x00650b20); r_esp += 16; return;
}

void f_00650b30(void) /* Room::vfunc105 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650b30);
    /* 00650b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650b31: mov ebp, esp */ r_ebp = r_esp;
    /* 00650b33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650b34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00650b37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00650b3a: sub eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00650b3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00650b3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650b40: ret 4 */ FN_RET(0x00650b30); r_esp += 8; return;
}

