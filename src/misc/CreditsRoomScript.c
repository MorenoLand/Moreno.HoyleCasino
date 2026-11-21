#include "protos.h"

void f_0066afb0(void) /* CreditsRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066afb0);
    /* 0066afb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066afb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066afb3: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066afb6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0066afb9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066afbc: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x66afc1u); f_005fc360();
    /* 0066afc1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0066afc4: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066afc8: je 0x66afdf */ if (fZ) goto L_0066afdf;
L_0066afca:; BB(0x0066afca);
    /* 0066afca: cmp dword ptr [ebp - 0x38], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066afce: je 0x66b04b */ if (fZ) goto L_0066b04b;
L_0066afd0:; BB(0x0066afd0);
    /* 0066afd0: cmp dword ptr [ebp - 0x38], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066afd4: je 0x66b13a */ if (fZ) goto L_0066b13a;
L_0066afda:; BB(0x0066afda);
    /* 0066afda: jmp 0x66b1f9 */ goto L_0066b1f9;
L_0066afdf:; BB(0x0066afdf);
    /* 0066afdf: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0066afe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066afe3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066afe9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066afeb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066aff1: mov eax, dword ptr [edx + 0x2e4] */ r_eax = R32((u32)(r_edx+0x2e4u));
    /* 0066aff7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66aff9u); call_ind(t); }
    /* 0066aff9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0066affb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066affe: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0066b001: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0066b004: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066b007: mov dword ptr [0x16306bc], eax */ W32((u32)(0x16306bcu), r_eax);
    /* 0066b00c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066b00f: mov dword ptr [0x16306b8], ecx */ W32((u32)(0x16306b8u), r_ecx);
    /* 0066b015: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b017: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066b01d: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0066b020: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x66b025u); f_005fb2b0();
    /* 0066b025: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0066b028: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0066b02b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066b02d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0066b030: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066b033: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b035u); call_ind(t); }
    /* 0066b035: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b037: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b039: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b03c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066b03e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b041: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0066b044: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b046u); call_ind(t); }
    /* 0066b046: jmp 0x66b1f9 */ goto L_0066b1f9;
L_0066b04b:; BB(0x0066b04b);
    /* 0066b04b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b04d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b053: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0066b056: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x66b05bu); f_005fb2b0();
    /* 0066b05b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0066b05e: mov edx, dword ptr [0x16306b8] */ r_edx = R32((u32)(0x16306b8u));
    /* 0066b064: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b065: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0066b068: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066b06a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0066b06d: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0066b070: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b072u); call_ind(t); }
    /* 0066b072: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b078: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066b07a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b080: mov eax, dword ptr [edx + 0x2ec] */ r_eax = R32((u32)(r_edx+0x2ecu));
    /* 0066b086: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b088u); call_ind(t); }
    /* 0066b088: mov ecx, dword ptr [0x16306b8] */ r_ecx = R32((u32)(0x16306b8u));
    /* 0066b08e: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b090: mov dword ptr [0x16306b8], ecx */ W32((u32)(0x16306b8u), r_ecx);
    /* 0066b096: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b098: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066b09e: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0066b0a1: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x66b0a6u); f_005fb2b0();
    /* 0066b0a6: mov ecx, eax */ r_ecx = r_eax;
    /* 0066b0a8: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x66b0adu); f_005f5590();
    /* 0066b0ad: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066b0af: cmp dword ptr [0x16306b8], eax */ {  u32 a = R32((u32)(0x16306b8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066b0b5: jge 0x66b10f */ if ((fS==fO)) goto L_0066b10f;
L_0066b0b7:; BB(0x0066b0b7);
    /* 0066b0b7: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 0066b0ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b0bb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b0c1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066b0c3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b0c9: mov eax, dword ptr [edx + 0x2e8] */ r_eax = R32((u32)(r_edx+0x2e8u));
    /* 0066b0cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b0d1u); call_ind(t); }
    /* 0066b0d1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0066b0d3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066b0d6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0066b0d9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0066b0dc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066b0df: mov dword ptr [0x16306b8], eax */ W32((u32)(0x16306b8u), r_eax);
    /* 0066b0e4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b0ea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066b0ec: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b0f2: mov eax, dword ptr [edx + 0x2f0] */ r_eax = R32((u32)(r_edx+0x2f0u));
    /* 0066b0f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b0fau); call_ind(t); }
    /* 0066b0fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b0fb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b0fd: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b100: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066b102: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b105: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0066b108: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b10au); call_ind(t); }
    /* 0066b10a: jmp 0x66b1f9 */ goto L_0066b1f9;
L_0066b10f:; BB(0x0066b10f);
    /* 0066b10f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b115: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066b117: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b11d: mov eax, dword ptr [edx + 0x2f0] */ r_eax = R32((u32)(r_edx+0x2f0u));
    /* 0066b123: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b125u); call_ind(t); }
    /* 0066b125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b126: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b128: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b12b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066b12d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b130: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0066b133: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b135u); call_ind(t); }
    /* 0066b135: jmp 0x66b1f9 */ goto L_0066b1f9;
L_0066b13a:; BB(0x0066b13a);
    /* 0066b13a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b13c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b142: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0066b145: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x66b14au); f_005fb2b0();
    /* 0066b14a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0066b14d: mov edx, dword ptr [0x16306b8] */ r_edx = R32((u32)(0x16306b8u));
    /* 0066b153: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b154: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066b157: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066b159: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066b15c: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0066b15f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b161u); call_ind(t); }
    /* 0066b161: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b167: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066b169: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b16f: mov eax, dword ptr [edx + 0x2ec] */ r_eax = R32((u32)(r_edx+0x2ecu));
    /* 0066b175: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b177u); call_ind(t); }
    /* 0066b177: mov ecx, dword ptr [0x16306b8] */ r_ecx = R32((u32)(0x16306b8u));
    /* 0066b17d: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b17f: mov dword ptr [0x16306b8], ecx */ W32((u32)(0x16306b8u), r_ecx);
    /* 0066b185: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b187: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066b18d: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0066b190: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x66b195u); f_005fb2b0();
    /* 0066b195: mov ecx, eax */ r_ecx = r_eax;
    /* 0066b197: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x66b19cu); f_005f5590();
    /* 0066b19c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066b19e: cmp dword ptr [0x16306b8], eax */ {  u32 a = R32((u32)(0x16306b8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066b1a4: jge 0x66b1d3 */ if ((fS==fO)) goto L_0066b1d3;
L_0066b1a6:; BB(0x0066b1a6);
    /* 0066b1a6: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0066b1a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b1aa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b1b0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066b1b2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b1b8: mov eax, dword ptr [edx + 0x2e8] */ r_eax = R32((u32)(r_edx+0x2e8u));
    /* 0066b1be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b1c0u); call_ind(t); }
    /* 0066b1c0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0066b1c2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066b1c5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0066b1c8: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0066b1cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066b1ce: mov dword ptr [0x16306b8], eax */ W32((u32)(0x16306b8u), r_eax);
L_0066b1d3:; BB(0x0066b1d3);
    /* 0066b1d3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b1d9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066b1db: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b1e1: mov eax, dword ptr [edx + 0x2f0] */ r_eax = R32((u32)(r_edx+0x2f0u));
    /* 0066b1e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b1e9u); call_ind(t); }
    /* 0066b1e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b1ea: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b1ec: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b1ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066b1f1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066b1f4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0066b1f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b1f9u); call_ind(t); }
L_0066b1f9:; BB(0x0066b1f9);
    /* 0066b1f9: mov esp, ebp */ r_esp = r_ebp;
    /* 0066b1fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b1fc: ret  */ FN_RET(0x0066afb0); r_esp += 4; return;
}

