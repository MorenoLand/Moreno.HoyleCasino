#include "protos.h"

void f_00523530(void) /* RouletteDealer::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523530);
    /* 00523530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523531: mov ebp, esp */ r_ebp = r_esp;
    /* 00523533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00523534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00523537: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052353a: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x52353fu); f_005f5cc0();
    /* 0052353f: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00523541: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00523544: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00523546: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00523549: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0052354c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52354eu); call_ind(t); }
    /* 0052354e: mov esp, ebp */ r_esp = r_ebp;
    /* 00523550: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523551: ret  */ FN_RET(0x00523530); r_esp += 4; return;
}

void f_00523800(void) /* RouletteDealer::vfunc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00523800);
    /* 00523800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00523801: mov ebp, esp */ r_ebp = r_esp;
    /* 00523803: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00523806: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00523809: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052380c: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x523811u); f_005eafc0();
    /* 00523811: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00523814: cmp eax, dword ptr [ecx + 0x198] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x198u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052381a: jne 0x523886 */ if (!fZ) goto L_00523886;
L_0052381c:; BB(0x0052381c);
    /* 0052381c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052381f: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x523824u); f_005eb220();
    /* 00523824: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523827: jne 0x523886 */ if (!fZ) goto L_00523886;
L_00523829:; BB(0x00523829);
    /* 00523829: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00523830: jmp 0x52383b */ goto L_0052383b;
L_00523832:; BB(0x00523832);
    /* 00523832: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00523835: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00523838: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0052383b:; BB(0x0052383b);
    /* 0052383b: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00523842: jge 0x523886 */ if ((fS==fO)) goto L_00523886;
L_00523844:; BB(0x00523844);
    /* 00523844: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00523847: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00523848: mov ecx, dword ptr [0x793374] */ r_ecx = R32((u32)(0x793374u));
    /* 0052384e: call 0x528360 */ r_esp -= 4; W32(r_esp, 0x523853u); f_00528360();
    /* 00523853: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00523856: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00523858: je 0x523884 */ if (fZ) goto L_00523884;
L_0052385a:; BB(0x0052385a);
    /* 0052385a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052385d: mov eax, dword ptr [0x79337c] */ r_eax = R32((u32)(0x79337cu));
    /* 00523862: mov ecx, dword ptr [eax + edx*4 + 0x80] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00523869: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052386c: mov eax, dword ptr [0x79337c] */ r_eax = R32((u32)(0x79337cu));
    /* 00523871: mov edx, dword ptr [eax + edx*4 + 0x80] */ r_edx = R32((u32)(r_eax+r_edx*4+0x80u));
    /* 00523878: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052387a: mov ecx, edx */ r_ecx = r_edx;
    /* 0052387c: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 00523882: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x523884u); call_ind(t); }
L_00523884:; BB(0x00523884);
    /* 00523884: jmp 0x523832 */ goto L_00523832;
L_00523886:; BB(0x00523886);
    /* 00523886: mov esp, ebp */ r_esp = r_ebp;
    /* 00523888: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00523889: ret  */ FN_RET(0x00523800); r_esp += 4; return;
}

