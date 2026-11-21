#include "protos.h"

void f_0044ab50(void) /* LetItRideRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044ab50);
    /* 0044ab50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab51: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ab53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab55: push 0x69edf8 */ { u32 v = 0x69edf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044ab60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab62: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044ab67: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044ab69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab6a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044ab6d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0044ab73: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0044ab76: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044ab79: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x44ab7eu); f_005d7b60();
    /* 0044ab7e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044ab85: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044ab88: mov dword ptr [eax], 0x6b8d3c */ W32((u32)(r_eax), 0x6b8d3cu);
    /* 0044ab8e: push 0x310ab0 */ { u32 v = 0x310ab0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ab93: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044ab96: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x44ab9bu); f_005f1ad0();
    /* 0044ab9b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044ab9e: mov dword ptr [0x79070c], ecx */ W32((u32)(0x79070cu), r_ecx);
    /* 0044aba4: mov dword ptr [0x790710], 0 */ W32((u32)(0x790710u), 0x0u);
    /* 0044abae: mov dword ptr [0x790714], 0 */ W32((u32)(0x790714u), 0x0u);
    /* 0044abb8: mov dword ptr [0x790718], 0 */ W32((u32)(0x790718u), 0x0u);
    /* 0044abc2: mov dword ptr [0x79071c], 0 */ W32((u32)(0x79071cu), 0x0u);
    /* 0044abcc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044abd3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044abd6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044abd9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044abe0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044abe1: mov esp, ebp */ r_esp = r_ebp;
    /* 0044abe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044abe4: ret  */ FN_RET(0x0044ab50); r_esp += 4; return;
}

void f_0044abf0(void) /* LetItRideRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044abf0);
    /* 0044abf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044abf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044abf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044abf5: push 0x69ee1b */ { u32 v = 0x69ee1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0044abfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044ac00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ac01: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044ac04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044ac09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044ac0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ac0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044ac0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0044ac15: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0044ac18: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044ac1b: mov dword ptr [eax], 0x6b8d3c */ W32((u32)(r_eax), 0x6b8d3cu);
    /* 0044ac21: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044ac28: mov dword ptr [0x79070c], 0 */ W32((u32)(0x79070cu), 0x0u);
    /* 0044ac32: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044ac38: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044ac3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044ac3e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0044ac41: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ac45: je 0x44ac5a */ if (fZ) goto L_0044ac5a;
L_0044ac47:; BB(0x0044ac47);
    /* 0044ac47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ac49: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044ac4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044ac4e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044ac51: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044ac53: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44ac55u); call_ind(t); }
    /* 0044ac55: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0044ac58: jmp 0x44ac61 */ goto L_0044ac61;
L_0044ac5a:; BB(0x0044ac5a);
    /* 0044ac5a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0044ac61:; BB(0x0044ac61);
    /* 0044ac61: mov dword ptr [0x790710], 0 */ W32((u32)(0x790710u), 0x0u);
    /* 0044ac6b: mov ecx, dword ptr [0x790714] */ r_ecx = R32((u32)(0x790714u));
    /* 0044ac71: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0044ac74: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044ac77: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0044ac7a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ac7e: je 0x44ac93 */ if (fZ) goto L_0044ac93;
L_0044ac80:; BB(0x0044ac80);
    /* 0044ac80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ac82: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ac85: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044ac87: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ac8a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044ac8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44ac8eu); call_ind(t); }
    /* 0044ac8e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0044ac91: jmp 0x44ac9a */ goto L_0044ac9a;
L_0044ac93:; BB(0x0044ac93);
    /* 0044ac93: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0044ac9a:; BB(0x0044ac9a);
    /* 0044ac9a: mov dword ptr [0x790714], 0 */ W32((u32)(0x790714u), 0x0u);
    /* 0044aca4: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 0044acaa: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0044acad: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044acb0: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0044acb3: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044acb7: je 0x44accc */ if (fZ) goto L_0044accc;
L_0044acb9:; BB(0x0044acb9);
    /* 0044acb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044acbb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044acbe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044acc0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044acc3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044acc5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44acc7u); call_ind(t); }
    /* 0044acc7: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0044acca: jmp 0x44acd3 */ goto L_0044acd3;
L_0044accc:; BB(0x0044accc);
    /* 0044accc: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0044acd3:; BB(0x0044acd3);
    /* 0044acd3: mov dword ptr [0x790718], 0 */ W32((u32)(0x790718u), 0x0u);
    /* 0044acdd: mov ecx, dword ptr [0x79071c] */ r_ecx = R32((u32)(0x79071cu));
    /* 0044ace3: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0044ace6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044ace9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0044acec: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044acf0: je 0x44ad05 */ if (fZ) goto L_0044ad05;
L_0044acf2:; BB(0x0044acf2);
    /* 0044acf2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044acf4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044acf7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044acf9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044acfc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044acfe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44ad00u); call_ind(t); }
    /* 0044ad00: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0044ad03: jmp 0x44ad0c */ goto L_0044ad0c;
L_0044ad05:; BB(0x0044ad05);
    /* 0044ad05: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0044ad0c:; BB(0x0044ad0c);
    /* 0044ad0c: mov dword ptr [0x79071c], 0 */ W32((u32)(0x79071cu), 0x0u);
    /* 0044ad16: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044ad1d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044ad20: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x44ad25u); f_005d7bd0();
    /* 0044ad25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044ad28: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044ad2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044ad30: mov esp, ebp */ r_esp = r_ebp;
    /* 0044ad32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ad33: ret  */ FN_RET(0x0044abf0); r_esp += 4; return;
}

void f_0044ad40(void) /* LetItRideRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044ad40);
    /* 0044ad40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ad41: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ad43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ad45: push 0x69ee6d */ { u32 v = 0x69ee6du; r_esp -= 4; W32(r_esp, v); }
    /* 0044ad4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044ad50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ad51: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044ad54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044ad59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044ad5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ad5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044ad5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0044ad65: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0044ad68: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044ad6b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x44ad70u); f_005d8230();
    /* 0044ad70: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ad75: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44ad7au); f_00686d82();
    /* 0044ad7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ad7d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044ad80: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044ad87: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ad8b: je 0x44ad9a */ if (fZ) goto L_0044ad9a;
L_0044ad8d:; BB(0x0044ad8d);
    /* 0044ad8d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044ad90: call 0x44c670 */ r_esp -= 4; W32(r_esp, 0x44ad95u); f_0044c670();
    /* 0044ad95: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0044ad98: jmp 0x44ada1 */ goto L_0044ada1;
L_0044ad9a:; BB(0x0044ad9a);
    /* 0044ad9a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0044ada1:; BB(0x0044ada1);
    /* 0044ada1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044ada4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044ada7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044adae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044adb1: mov dword ptr [0x790710], ecx */ W32((u32)(0x790710u), r_ecx);
    /* 0044adb7: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044adbd: call 0x44c870 */ r_esp -= 4; W32(r_esp, 0x44adc2u); f_0044c870();
    /* 0044adc2: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0044adc4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44adc9u); f_00686d82();
    /* 0044adc9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044adcc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044adcf: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0044add6: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044adda: je 0x44ade9 */ if (fZ) goto L_0044ade9;
L_0044addc:; BB(0x0044addc);
    /* 0044addc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044addf: call 0x4496d0 */ r_esp -= 4; W32(r_esp, 0x44ade4u); f_004496d0();
    /* 0044ade4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0044ade7: jmp 0x44adf0 */ goto L_0044adf0;
L_0044ade9:; BB(0x0044ade9);
    /* 0044ade9: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0044adf0:; BB(0x0044adf0);
    /* 0044adf0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044adf3: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0044adf6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044adfd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ae00: mov dword ptr [0x790714], eax */ W32((u32)(0x790714u), r_eax);
    /* 0044ae05: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ae07: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44ae0cu); f_00686d82();
    /* 0044ae0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ae0f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0044ae12: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0044ae19: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ae1d: je 0x44ae2c */ if (fZ) goto L_0044ae2c;
L_0044ae1f:; BB(0x0044ae1f);
    /* 0044ae1f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044ae22: call 0x446af0 */ r_esp -= 4; W32(r_esp, 0x44ae27u); f_00446af0();
    /* 0044ae27: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0044ae2a: jmp 0x44ae33 */ goto L_0044ae33;
L_0044ae2c:; BB(0x0044ae2c);
    /* 0044ae2c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0044ae33:; BB(0x0044ae33);
    /* 0044ae33: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044ae36: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044ae39: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044ae40: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044ae43: mov dword ptr [0x790718], edx */ W32((u32)(0x790718u), r_edx);
    /* 0044ae49: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 0044ae4f: call 0x446e30 */ r_esp -= 4; W32(r_esp, 0x44ae54u); f_00446e30();
    /* 0044ae54: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ae56: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44ae5bu); f_00686d82();
    /* 0044ae5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ae5e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0044ae61: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0044ae68: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ae6c: je 0x44ae7b */ if (fZ) goto L_0044ae7b;
L_0044ae6e:; BB(0x0044ae6e);
    /* 0044ae6e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044ae71: call 0x4460e0 */ r_esp -= 4; W32(r_esp, 0x44ae76u); f_004460e0();
    /* 0044ae76: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0044ae79: jmp 0x44ae82 */ goto L_0044ae82;
L_0044ae7b:; BB(0x0044ae7b);
    /* 0044ae7b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0044ae82:; BB(0x0044ae82);
    /* 0044ae82: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044ae85: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044ae88: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044ae8f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044ae92: mov dword ptr [0x79071c], ecx */ W32((u32)(0x79071cu), r_ecx);
    /* 0044ae98: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ae9a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44ae9fu); f_00686d82();
    /* 0044ae9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044aea2: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0044aea5: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0044aeac: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044aeb0: je 0x44aecd */ if (fZ) goto L_0044aecd;
L_0044aeb2:; BB(0x0044aeb2);
    /* 0044aeb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044aeb4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044aeb7: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x44aebcu); f_005fc0d0();
    /* 0044aebc: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044aebf: mov dword ptr [edx], 0x6b903c */ W32((u32)(r_edx), 0x6b903cu);
    /* 0044aec5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0044aec8: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0044aecb: jmp 0x44aed4 */ goto L_0044aed4;
L_0044aecd:; BB(0x0044aecd);
    /* 0044aecd: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0044aed4:; BB(0x0044aed4);
    /* 0044aed4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0044aed7: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0044aeda: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044aee1: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044aee4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044aee5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044aee8: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x44aeedu); f_005f1b70();
    /* 0044aeed: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044aef0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044aef3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044aef6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044aef9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044aefb: mov ecx, eax */ r_ecx = r_eax;
    /* 0044aefd: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0044af00: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44af02u); call_ind(t); }
    /* 0044af02: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044af05: call 0x5d85e0 */ r_esp -= 4; W32(r_esp, 0x44af0au); f_005d85e0();
    /* 0044af0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044af0c: mov ecx, dword ptr [0x790714] */ r_ecx = R32((u32)(0x790714u));
    /* 0044af12: call 0x449710 */ r_esp -= 4; W32(r_esp, 0x44af17u); f_00449710();
    /* 0044af17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044af1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044af21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044af22: mov esp, ebp */ r_esp = r_ebp;
    /* 0044af24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044af25: ret  */ FN_RET(0x0044ad40); r_esp += 4; return;
}

void f_0044af30(void) /* LetItRideRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044af30);
    /* 0044af30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044af31: mov ebp, esp */ r_ebp = r_esp;
    /* 0044af33: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044af36: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044af39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044af3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044af3d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044af40: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x44af45u); f_005d7f40();
    /* 0044af45: cmp dword ptr [0x790710], 0 */ {  u32 a = R32((u32)(0x790710u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044af4c: je 0x44af5e */ if (fZ) goto L_0044af5e;
L_0044af4e:; BB(0x0044af4e);
    /* 0044af4e: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044af54: call 0x44cee0 */ r_esp -= 4; W32(r_esp, 0x44af59u); f_0044cee0();
    /* 0044af59: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044af5c: jmp 0x44af65 */ goto L_0044af65;
L_0044af5e:; BB(0x0044af5e);
    /* 0044af5e: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
L_0044af65:; BB(0x0044af65);
    /* 0044af65: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044af68: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044af6b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044af6e: cmp dword ptr [edx + 0x18], 4 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044af72: jne 0x44b019 */ if (!fZ) goto L_0044b019;
L_0044af78:; BB(0x0044af78);
    /* 0044af78: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044af7b: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0044af7f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044af81: jne 0x44b019 */ if (!fZ) goto L_0044b019;
L_0044af87:; BB(0x0044af87);
    /* 0044af87: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044af8b: je 0x44b019 */ if (fZ) goto L_0044b019;
L_0044af91:; BB(0x0044af91);
    /* 0044af91: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044af94: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0044af98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044af99: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x44af9fu); call_ind(t); }
    /* 0044af9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044afa2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044afa5: cmp dword ptr [ebp - 0x1c], 0x70 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044afa9: je 0x44afad */ if (fZ) goto L_0044afad;
L_0044afab:; BB(0x0044afab);
    /* 0044afab: jmp 0x44b019 */ goto L_0044b019;
L_0044afad:; BB(0x0044afad);
    /* 0044afad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044afb0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044afb1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44afb6u); f_005dcb00();
    /* 0044afb6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044afb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044afbb: je 0x44b019 */ if (fZ) goto L_0044b019;
L_0044afbd:; BB(0x0044afbd);
    /* 0044afbd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044afc0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044afc1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44afc6u); f_005dcb00();
    /* 0044afc6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044afc9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044afcc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044afcf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44afd4u); f_0063aac0();
    /* 0044afd4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044afd6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044afd9: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044afdd: je 0x44affb */ if (fZ) goto L_0044affb;
L_0044afdf:; BB(0x0044afdf);
    /* 0044afdf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044afe2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44afe7u); f_0063aac0();
    /* 0044afe7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044afe9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044afec: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044aff0: je 0x44affb */ if (fZ) goto L_0044affb;
L_0044aff2:; BB(0x0044aff2);
    /* 0044aff2: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0044aff9: jmp 0x44b002 */ goto L_0044b002;
L_0044affb:; BB(0x0044affb);
    /* 0044affb: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0044b002:; BB(0x0044b002);
    /* 0044b002: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 0044b006: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b008: je 0x44b019 */ if (fZ) goto L_0044b019;
L_0044b00a:; BB(0x0044b00a);
    /* 0044b00a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b00d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b00e: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b014: call 0x44d010 */ r_esp -= 4; W32(r_esp, 0x44b019u); f_0044d010();
L_0044b019:; BB(0x0044b019);
    /* 0044b019: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b01c: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 0044b020: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b022: jne 0x44b08d */ if (!fZ) goto L_0044b08d;
L_0044b024:; BB(0x0044b024);
    /* 0044b024: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044b027: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b02b: jne 0x44b08d */ if (!fZ) goto L_0044b08d;
L_0044b02d:; BB(0x0044b02d);
    /* 0044b02d: cmp dword ptr [0x790718], 0 */ {  u32 a = R32((u32)(0x790718u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b034: je 0x44b08d */ if (fZ) goto L_0044b08d;
L_0044b036:; BB(0x0044b036);
    /* 0044b036: cmp dword ptr [0x790710], 0 */ {  u32 a = R32((u32)(0x790710u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b03d: je 0x44b08d */ if (fZ) goto L_0044b08d;
L_0044b03f:; BB(0x0044b03f);
    /* 0044b03f: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 0044b045: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b049: je 0x44b08d */ if (fZ) goto L_0044b08d;
L_0044b04b:; BB(0x0044b04b);
    /* 0044b04b: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 0044b051: cmp dword ptr [edx + 0x68], 0 */ {  u32 a = R32((u32)(r_edx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b055: je 0x44b08d */ if (fZ) goto L_0044b08d;
L_0044b057:; BB(0x0044b057);
    /* 0044b057: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 0044b05c: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0044b05f: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x44b064u); f_005f54a0();
    /* 0044b064: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0044b067: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b069: jne 0x44b080 */ if (!fZ) goto L_0044b080;
L_0044b06b:; BB(0x0044b06b);
    /* 0044b06b: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 0044b071: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 0044b074: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x44b079u); f_005f54a0();
    /* 0044b079: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044b07c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b07e: je 0x44b08d */ if (fZ) goto L_0044b08d;
L_0044b080:; BB(0x0044b080);
    /* 0044b080: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b086: mov byte ptr [ecx + 0xd1], 1 */ W8((u32)(r_ecx+0xd1u), 0x1u);
L_0044b08d:; BB(0x0044b08d);
    /* 0044b08d: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b08f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b090: ret 4 */ FN_RET(0x0044af30); r_esp += 8; return;
}

void f_0044b0a0(void) /* LetItRideRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b0a0);
    /* 0044b0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b0a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b0a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044b0a9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044b0ac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044b0af: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b0b6: je 0x44b0c6 */ if (fZ) goto L_0044b0c6;
L_0044b0b8:; BB(0x0044b0b8);
    /* 0044b0b8: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b0bf: je 0x44b119 */ if (fZ) goto L_0044b119;
L_0044b0c1:; BB(0x0044b0c1);
    /* 0044b0c1: jmp 0x44b14e */ goto L_0044b14e;
L_0044b0c6:; BB(0x0044b0c6);
    /* 0044b0c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b0c8: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b0cd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b0d0: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x44b0d5u); f_005fe640();
    /* 0044b0d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b0d7: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b0dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b0df: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x44b0e4u); f_005fe640();
    /* 0044b0e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b0e6: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b0eb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b0ee: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x44b0f3u); f_005fe640();
    /* 0044b0f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b0f5: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b0fa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b0fd: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x44b102u); f_005fe640();
    /* 0044b102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b104: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b106: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b108: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b10d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b110: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x44b115u); f_005fe240();
    /* 0044b115: jmp 0x44b14e */ goto L_0044b14e;
L_0044b119:; BB(0x0044b119);
    /* 0044b119: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b11b: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 0044b120: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b123: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x44b128u); f_005fe640();
    /* 0044b128: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b12a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b12c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b12e: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b133: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b136: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x44b13bu); f_005fe240();
    /* 0044b13b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b13d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b13f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b141: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b146: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b149: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x44b14eu); f_005fe240();
L_0044b14e:; BB(0x0044b14e);
    /* 0044b14e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0044b151: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b152: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044b155: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b156: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b159: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x44b15eu); f_005d8670();
    /* 0044b15e: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b160: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b161: ret 8 */ FN_RET(0x0044b0a0); r_esp += 12; return;
}

void f_0044b170(void) /* LetItRideRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b170);
    /* 0044b170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b171: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044b177: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b17c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044b182: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x44b187u); f_005df2e0();
    /* 0044b187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b188: push 0x310ab1 */ { u32 v = 0x310ab1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b18d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b190: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x44b195u); f_005f1e60();
    /* 0044b195: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b198: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x44b19du); f_0064e430();
    /* 0044b19d: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b19f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b1a0: ret  */ FN_RET(0x0044b170); r_esp += 4; return;
}

void f_0044b1b0(void) /* LetItRideRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b1b0);
    /* 0044b1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b1b3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b1b6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0044b1b9: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044b1be: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0044b1c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044b1c7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b1ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b1cb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44b1d0u); f_005dcb00();
    /* 0044b1d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044b1d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b1d5: je 0x44b2c1 */ if (fZ) goto L_0044b2c1;
L_0044b1db:; BB(0x0044b1db);
    /* 0044b1db: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044b1e0: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0044b1e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044b1e9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044b1ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b1ed: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44b1f2u); f_005dcb00();
    /* 0044b1f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044b1f5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044b1f8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044b1fb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44b200u); f_0063aac0();
    /* 0044b200: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044b202: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044b205: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b209: je 0x44b227 */ if (fZ) goto L_0044b227;
L_0044b20b:; BB(0x0044b20b);
    /* 0044b20b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044b20e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44b213u); f_0063aac0();
    /* 0044b213: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044b215: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0044b218: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b21c: je 0x44b227 */ if (fZ) goto L_0044b227;
L_0044b21e:; BB(0x0044b21e);
    /* 0044b21e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0044b225: jmp 0x44b22e */ goto L_0044b22e;
L_0044b227:; BB(0x0044b227);
    /* 0044b227: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0044b22e:; BB(0x0044b22e);
    /* 0044b22e: movzx edx, byte ptr [ebp - 0x28] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 0044b232: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b234: je 0x44b2c1 */ if (fZ) goto L_0044b2c1;
L_0044b23a:; BB(0x0044b23a);
    /* 0044b23a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044b23d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0044b240: cmp dword ptr [ebp - 0x2c], 0x310ab2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x310ab2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b247: je 0x44b25d */ if (fZ) goto L_0044b25d;
L_0044b249:; BB(0x0044b249);
    /* 0044b249: cmp dword ptr [ebp - 0x2c], 0x310ab3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x310ab3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b250: je 0x44b27d */ if (fZ) goto L_0044b27d;
L_0044b252:; BB(0x0044b252);
    /* 0044b252: cmp dword ptr [ebp - 0x2c], 0x310ab4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x310ab4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b259: je 0x44b29f */ if (fZ) goto L_0044b29f;
L_0044b25b:; BB(0x0044b25b);
    /* 0044b25b: jmp 0x44b2c1 */ goto L_0044b2c1;
L_0044b25d:; BB(0x0044b25d);
    /* 0044b25d: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b263: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 0044b269: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0044b26c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044b26f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b270: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b276: call 0x44d010 */ r_esp -= 4; W32(r_esp, 0x44b27bu); f_0044d010();
    /* 0044b27b: jmp 0x44b2c1 */ goto L_0044b2c1;
L_0044b27d:; BB(0x0044b27d);
    /* 0044b27d: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b283: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 0044b289: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0044b28c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b28e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044b291: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b292: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b298: call 0x44d6a0 */ r_esp -= 4; W32(r_esp, 0x44b29du); f_0044d6a0();
    /* 0044b29d: jmp 0x44b2d1 */ goto L_0044b2d1;
L_0044b29f:; BB(0x0044b29f);
    /* 0044b29f: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b2a5: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 0044b2ab: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0044b2ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b2b0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044b2b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b2b4: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b2ba: call 0x44d6a0 */ r_esp -= 4; W32(r_esp, 0x44b2bfu); f_0044d6a0();
    /* 0044b2bf: jmp 0x44b2d1 */ goto L_0044b2d1;
L_0044b2c1:; BB(0x0044b2c1);
    /* 0044b2c1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0044b2c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b2c5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044b2c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b2c9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044b2cc: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x44b2d1u); f_005dc7d0();
L_0044b2d1:; BB(0x0044b2d1);
    /* 0044b2d1: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b2d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b2d4: ret 8 */ FN_RET(0x0044b1b0); r_esp += 12; return;
}

void f_0044b2e0(void) /* LetItRideRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b2e0);
    /* 0044b2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b2e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b2e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044b2e7: cmp dword ptr [0x790710], 0 */ {  u32 a = R32((u32)(0x790710u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b2ee: jne 0x44b2f4 */ if (!fZ) goto L_0044b2f4;
L_0044b2f0:; BB(0x0044b2f0);
    /* 0044b2f0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044b2f2: jmp 0x44b2ff */ goto L_0044b2ff;
L_0044b2f4:; BB(0x0044b2f4);
    /* 0044b2f4: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b2fa: call 0x44cbe0 */ r_esp -= 4; W32(r_esp, 0x44b2ffu); f_0044cbe0();
L_0044b2ff:; BB(0x0044b2ff);
    /* 0044b2ff: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b301: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b302: ret  */ FN_RET(0x0044b2e0); r_esp += 4; return;
}

void f_0044b310(void) /* LetItRideRoom::vfunc157 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b310);
    /* 0044b310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b311: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044b317: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0044b31b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b31d: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0044b320: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b321: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b327: call 0x44c850 */ r_esp -= 4; W32(r_esp, 0x44b32cu); f_0044c850();
    /* 0044b32c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044b332: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x44b337u); f_00637610();
    /* 0044b337: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b33a: call 0x5db9b0 */ r_esp -= 4; W32(r_esp, 0x44b33fu); f_005db9b0();
    /* 0044b33f: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b345: call 0x44ca20 */ r_esp -= 4; W32(r_esp, 0x44b34au); f_0044ca20();
    /* 0044b34a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b34c: mov ecx, dword ptr [0x790714] */ r_ecx = R32((u32)(0x790714u));
    /* 0044b352: call 0x449710 */ r_esp -= 4; W32(r_esp, 0x44b357u); f_00449710();
    /* 0044b357: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b359: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b35a: ret 4 */ FN_RET(0x0044b310); r_esp += 8; return;
}

void f_0044b360(void) /* LetItRideRoom::vfunc113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b360);
    /* 0044b360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b361: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b363: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b366: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044b369: mov dword ptr [ebp - 0x10], 0x1ab */ W32((u32)(r_ebp+0xfffffff0u), 0x1abu);
    /* 0044b370: mov dword ptr [ebp - 0xc], 0x7b */ W32((u32)(r_ebp+0xfffffff4u), 0x7bu);
    /* 0044b377: mov dword ptr [ebp - 8], 0x21a */ W32((u32)(r_ebp+0xfffffff8u), 0x21au);
    /* 0044b37e: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0044b385: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044b388: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 0044b38c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b38e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b38f: ret 4 */ FN_RET(0x0044b360); r_esp += 8; return;
}

void f_0044b3a0(void) /* LetItRideRoom::vfunc114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b3a0);
    /* 0044b3a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b3a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b3a3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b3a6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044b3a9: mov dword ptr [ebp - 0x10], 0xf2 */ W32((u32)(r_ebp+0xfffffff0u), 0xf2u);
    /* 0044b3b0: mov dword ptr [ebp - 0xc], 0xf2 */ W32((u32)(r_ebp+0xfffffff4u), 0xf2u);
    /* 0044b3b7: mov dword ptr [ebp - 8], 0x66 */ W32((u32)(r_ebp+0xfffffff8u), 0x66u);
    /* 0044b3be: mov dword ptr [ebp - 4], 0x68 */ W32((u32)(r_ebp+0xfffffffcu), 0x68u);
    /* 0044b3c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044b3c8: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 0044b3cc: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b3ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b3cf: ret 4 */ FN_RET(0x0044b3a0); r_esp += 8; return;
}

void f_0044b3e0(void) /* LetItRideRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b3e0);
    /* 0044b3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b3e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b3e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044b3e7: cmp dword ptr [0x790710], 0 */ {  u32 a = R32((u32)(0x790710u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b3ee: je 0x44b3fd */ if (fZ) goto L_0044b3fd;
L_0044b3f0:; BB(0x0044b3f0);
    /* 0044b3f0: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b3f6: call 0x44ccc0 */ r_esp -= 4; W32(r_esp, 0x44b3fbu); f_0044ccc0();
    /* 0044b3fb: jmp 0x44b3ff */ goto L_0044b3ff;
L_0044b3fd:; BB(0x0044b3fd);
    /* 0044b3fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0044b3ff:; BB(0x0044b3ff);
    /* 0044b3ff: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b401: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b402: ret  */ FN_RET(0x0044b3e0); r_esp += 4; return;
}

void f_0044b410(void) /* LetItRideRoom::vfunc160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b410);
    /* 0044b410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b411: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b413: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b416: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044b419: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044b420: jmp 0x44b42b */ goto L_0044b42b;
L_0044b422:; BB(0x0044b422);
    /* 0044b422: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b425: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044b428: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044b42b:; BB(0x0044b42b);
    /* 0044b42b: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044b42f: jge 0x44b457 */ if ((fS==fO)) goto L_0044b457;
L_0044b431:; BB(0x0044b431);
    /* 0044b431: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b434: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 0044b43a: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0044b43e: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b441: je 0x44b455 */ if (fZ) goto L_0044b455;
L_0044b443:; BB(0x0044b443);
    /* 0044b443: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b446: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 0044b44c: mov ecx, dword ptr [edx + ecx*4 + 0x14] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 0044b450: call 0x5cd330 */ r_esp -= 4; W32(r_esp, 0x44b455u); f_005cd330();
L_0044b455:; BB(0x0044b455);
    /* 0044b455: jmp 0x44b422 */ goto L_0044b422;
L_0044b457:; BB(0x0044b457);
    /* 0044b457: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b459: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b45a: ret 4 */ FN_RET(0x0044b410); r_esp += 8; return;
}

void f_0044b460(void) /* LetItRideRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b460);
    /* 0044b460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b461: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b463: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b466: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044b469: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044b470: jmp 0x44b47b */ goto L_0044b47b;
L_0044b472:; BB(0x0044b472);
    /* 0044b472: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b475: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044b478: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044b47b:; BB(0x0044b47b);
    /* 0044b47b: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044b47f: jge 0x44b529 */ if ((fS==fO)) goto L_0044b529;
L_0044b485:; BB(0x0044b485);
    /* 0044b485: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b488: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044b48b: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b48e: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 0044b494: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0044b498: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b49b: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044b49e: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b4a1: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 0044b4a7: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0044b4ab: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044b4ad: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0044b4b3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44b4b5u); call_ind(t); }
    /* 0044b4b5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044b4b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b4ba: je 0x44b50c */ if (fZ) goto L_0044b50c;
L_0044b4bc:; BB(0x0044b4bc);
    /* 0044b4bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b4bf: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044b4c2: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b4c5: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 0044b4cb: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0044b4cf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044b4d2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b4d5: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0044b4d8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044b4db: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 0044b4df: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b4e1: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0044b4e4: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 0044b4e7: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 0044b4eb: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0044b4ee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044b4f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044b4f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b4f5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044b4f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b4f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044b4fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b4fd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44b502u); f_005dcb00();
    /* 0044b502: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044b505: mov ecx, eax */ r_ecx = r_eax;
    /* 0044b507: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x44b50cu); f_005d5cf0();
L_0044b50c:; BB(0x0044b50c);
    /* 0044b50c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b50f: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044b512: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b515: mov edx, dword ptr [0x790710] */ r_edx = R32((u32)(0x790710u));
    /* 0044b51b: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0044b51f: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x44b524u); f_005cb9b0();
    /* 0044b524: jmp 0x44b472 */ goto L_0044b472;
L_0044b529:; BB(0x0044b529);
    /* 0044b529: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b52b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b52c: ret 4 */ FN_RET(0x0044b460); r_esp += 8; return;
}

void f_0044b530(void) /* LetItRideRoom::vfunc159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b530);
    /* 0044b530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b531: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b533: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b536: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0044b539: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b53b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b53d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x44b542u); f_0064c8a0();
    /* 0044b542: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044b545: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044b548: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0044b54b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044b54e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044b551: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0044b553: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044b556: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0044b559: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044b55c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b55d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44b562u); f_005dcb00();
    /* 0044b562: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044b565: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044b568: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044b56b: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 0044b571: mov byte ptr [ebp - 0x21], dl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_edx);
    /* 0044b574: movzx eax, byte ptr [ebp - 0x21] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0044b578: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b57a: je 0x44b57e */ if (fZ) goto L_0044b57e;
L_0044b57c:; BB(0x0044b57c);
    /* 0044b57c: jmp 0x44b5ed */ goto L_0044b5ed;
L_0044b57e:; BB(0x0044b57e);
    /* 0044b57e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044b585: jmp 0x44b590 */ goto L_0044b590;
L_0044b587:; BB(0x0044b587);
    /* 0044b587: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b58a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044b58d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0044b590:; BB(0x0044b590);
    /* 0044b590: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044b594: jge 0x44b5ed */ if ((fS==fO)) goto L_0044b5ed;
L_0044b596:; BB(0x0044b596);
    /* 0044b596: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044b599: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044b59c: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044b59f: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044b5a4: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0044b5a8: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0044b5ab: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044b5ae: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0044b5b1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044b5b4: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 0044b5b8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044b5ba: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0044b5bd: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 0044b5c0: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 0044b5c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044b5c7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0044b5ca: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044b5cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b5ce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044b5d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b5d2: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0044b5d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b5d6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0044b5d9: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x44b5deu); f_0064c5c0();
    /* 0044b5de: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044b5e0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0044b5e3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0044b5e6: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0044b5e8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0044b5eb: jmp 0x44b587 */ goto L_0044b587;
L_0044b5ed:; BB(0x0044b5ed);
    /* 0044b5ed: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b5ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b5f0: ret 8 */ FN_RET(0x0044b530); r_esp += 12; return;
}

void f_0044b600(void) /* LetItRideRoom::vfunc165 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b600);
    /* 0044b600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b601: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044b607: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b60d: call 0x44c7f0 */ r_esp -= 4; W32(r_esp, 0x44b612u); f_0044c7f0();
    /* 0044b612: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b614: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b615: ret  */ FN_RET(0x0044b600); r_esp += 4; return;
}

void f_0044b620(void) /* LetItRideRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b620);
    /* 0044b620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b621: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044b627: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b629: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b62b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b62e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044b631: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b634: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0044b637: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044b639: mov ecx, eax */ r_ecx = r_eax;
    /* 0044b63b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044b63e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44b640u); call_ind(t); }
    /* 0044b640: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b642: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b643: ret  */ FN_RET(0x0044b620); r_esp += 4; return;
}

void f_0044b650(void) /* LetItRideRoom::vfunc166 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b650);
    /* 0044b650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b651: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b653: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b656: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044b657: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044b658: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044b65b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044b65e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b65f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44b664u); f_005dcb00();
    /* 0044b664: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044b667: mov ecx, dword ptr [eax + 0x4d8] */ r_ecx = R32((u32)(r_eax+0x4d8u));
    /* 0044b66d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b66e: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 0044b674: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b675: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0044b678: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b679: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b67b: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b681: call 0x44c7b0 */ r_esp -= 4; W32(r_esp, 0x44b686u); f_0044c7b0();
    /* 0044b686: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044b689: mov ecx, eax */ r_ecx = r_eax;
    /* 0044b68b: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x44b690u); f_0064c5c0();
    /* 0044b690: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0044b692: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0044b695: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b697: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b69d: call 0x44c7b0 */ r_esp -= 4; W32(r_esp, 0x44b6a2u); f_0044c7b0();
    /* 0044b6a2: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 0044b6a5: mov dword ptr [eax + 0x10], edi */ W32((u32)(r_eax+0x10u), r_edi);
    /* 0044b6a8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b6ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b6ac: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44b6b1u); f_005dcb00();
    /* 0044b6b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044b6b4: mov ecx, eax */ r_ecx = r_eax;
    /* 0044b6b6: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x44b6bbu); f_0063b0a0();
    /* 0044b6bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044b6bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044b6bd: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b6bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b6c0: ret 4 */ FN_RET(0x0044b650); r_esp += 8; return;
}

void f_0044b6d0(void) /* LetItRideRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b6d0);
    /* 0044b6d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b6d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b6d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b6d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044b6d7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044b6d8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044b6db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044b6de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b6df: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44b6e4u); f_005dcb00();
    /* 0044b6e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044b6e7: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 0044b6ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b6ee: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 0044b6f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b6f5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0044b6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b6f9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b6fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b6fd: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b703: call 0x44c7b0 */ r_esp -= 4; W32(r_esp, 0x44b708u); f_0044c7b0();
    /* 0044b708: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044b70b: mov ecx, eax */ r_ecx = r_eax;
    /* 0044b70d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x44b712u); f_0064c5c0();
    /* 0044b712: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0044b714: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0044b717: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044b71a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b71b: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b721: call 0x44c7b0 */ r_esp -= 4; W32(r_esp, 0x44b726u); f_0044c7b0();
    /* 0044b726: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 0044b729: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 0044b72c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044b72f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b730: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44b735u); f_005dcb00();
    /* 0044b735: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044b738: mov ecx, eax */ r_ecx = r_eax;
    /* 0044b73a: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x44b73fu); f_0063b0a0();
    /* 0044b73f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044b740: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044b741: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b743: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b744: ret 4 */ FN_RET(0x0044b6d0); r_esp += 8; return;
}

void f_0044b750(void) /* LetItRideRoom::vfunc185 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b750);
    /* 0044b750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b751: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b753: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b756: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044b759: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b75b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0044b761: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x44b766u); f_005df700();
    /* 0044b766: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044b769: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b76b: je 0x44b77c */ if (fZ) goto L_0044b77c;
L_0044b76d:; BB(0x0044b76d);
    /* 0044b76d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044b770: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x44b775u); f_005da7b0();
    /* 0044b775: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0044b778: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b77a: je 0x44b77e */ if (fZ) goto L_0044b77e;
L_0044b77c:; BB(0x0044b77c);
    /* 0044b77c: jmp 0x44b7b5 */ goto L_0044b7b5;
L_0044b77e:; BB(0x0044b77e);
    /* 0044b77e: mov edx, dword ptr [0x790718] */ r_edx = R32((u32)(0x790718u));
    /* 0044b784: cmp dword ptr [edx + 0x50], 0 */ {  u32 a = R32((u32)(r_edx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b788: je 0x44b7b5 */ if (fZ) goto L_0044b7b5;
L_0044b78a:; BB(0x0044b78a);
    /* 0044b78a: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044b78f: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0044b795: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044b798: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b79b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b79c: mov ecx, dword ptr [0x79071c] */ r_ecx = R32((u32)(0x79071cu));
    /* 0044b7a2: call 0x4466b0 */ r_esp -= 4; W32(r_esp, 0x44b7a7u); f_004466b0();
    /* 0044b7a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b7a8: mov eax, dword ptr [0x790718] */ r_eax = R32((u32)(0x790718u));
    /* 0044b7ad: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0044b7b0: call 0x449300 */ r_esp -= 4; W32(r_esp, 0x44b7b5u); f_00449300();
L_0044b7b5:; BB(0x0044b7b5);
    /* 0044b7b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b7b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b7b8: ret 4 */ FN_RET(0x0044b750); r_esp += 8; return;
}

void f_0044b7c0(void) /* LetItRideRoom::vfunc101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b7c0);
    /* 0044b7c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b7c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b7c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b7c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044b7c7: mov eax, 0x416 */ r_eax = 0x416u;
    /* 0044b7cc: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b7ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b7cf: ret 4 */ FN_RET(0x0044b7c0); r_esp += 8; return;
}

void f_0044b7e0(void) /* LetItRideRoom::vfunc81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b7e0);
    /* 0044b7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b7e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b7e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044b7e7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044b7ed: call 0x636e70 */ r_esp -= 4; W32(r_esp, 0x44b7f2u); f_00636e70();
    /* 0044b7f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b7f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044b7f7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044b7fa: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x44b7ffu); f_005fc420();
    /* 0044b7ff: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 0044b805: call 0x4474b0 */ r_esp -= 4; W32(r_esp, 0x44b80au); f_004474b0();
    /* 0044b80a: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b810: call 0x44ca20 */ r_esp -= 4; W32(r_esp, 0x44b815u); f_0044ca20();
    /* 0044b815: mov ecx, dword ptr [0x790714] */ r_ecx = R32((u32)(0x790714u));
    /* 0044b81b: call 0x4497a0 */ r_esp -= 4; W32(r_esp, 0x44b820u); f_004497a0();
    /* 0044b820: mov esp, ebp */ r_esp = r_ebp;
    /* 0044b822: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044b823: ret 8 */ FN_RET(0x0044b7e0); r_esp += 12; return;
}

void f_0044b830(void) /* LetItRideRoom::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044b830);
    /* 0044b830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044b831: mov ebp, esp */ r_ebp = r_esp;
    /* 0044b833: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b835: push 0x69ee93 */ { u32 v = 0x69ee93u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b83a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044b840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b841: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044b844: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044b849: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044b84b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b84c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044b84f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0044b855: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0044b858: mov dword ptr [ebp - 0x18], 0x6b30d8 */ W32((u32)(r_ebp+0xffffffe8u), 0x6b30d8u);
    /* 0044b85f: mov dword ptr [ebp - 0x14], 0x6b30bc */ W32((u32)(r_ebp+0xffffffecu), 0x6b30bcu);
    /* 0044b866: mov dword ptr [ebp - 0x20], 0x32 */ W32((u32)(r_ebp+0xffffffe0u), 0x32u);
    /* 0044b86d: mov dword ptr [ebp - 0x1c], 0x33 */ W32((u32)(r_ebp+0xffffffe4u), 0x33u);
    /* 0044b874: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0044b87b: jmp 0x44b886 */ goto L_0044b886;
L_0044b87d:; BB(0x0044b87d);
    /* 0044b87d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044b880: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044b883: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0044b886:; BB(0x0044b886);
    /* 0044b886: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044b88a: jge 0x44b8d9 */ if ((fS==fO)) goto L_0044b8d9;
L_0044b88c:; BB(0x0044b88c);
    /* 0044b88c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b88e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b890: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b892: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b894: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b896: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b898: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044b89b: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 0044b89f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8a0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44b8a5u); f_00630f40();
    /* 0044b8a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044b8a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8ab: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044b8ae: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044b8b1: add eax, 0x55 */ {  u32 a = r_eax; u32 b = 0x55u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044b8b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8b5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8b7: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8bc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044b8bf: mov edx, dword ptr [ebp + ecx*4 - 0x20] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe0u));
    /* 0044b8c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8c6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0044b8c9: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x44b8ceu); f_005f9ef0();
    /* 0044b8ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8cf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b8d2: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x44b8d7u); f_005ff5a0();
    /* 0044b8d7: jmp 0x44b87d */ goto L_0044b87d;
L_0044b8d9:; BB(0x0044b8d9);
    /* 0044b8d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8db: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8e0: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8e5: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8ea: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8ef: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8f1: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8f3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8f5: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8fa: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b8ff: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b901: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b906: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b908: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b90d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44b912u); f_00630f40();
    /* 0044b912: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044b915: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b916: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0044b918: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b91a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0044b91d: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x44b922u); f_005fa790();
    /* 0044b922: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b923: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b926: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x44b92bu); f_005ff5a0();
    /* 0044b92b: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b930: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44b935u); f_00686d82();
    /* 0044b935: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044b938: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044b93b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044b942: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b946: je 0x44b961 */ if (fZ) goto L_0044b961;
L_0044b948:; BB(0x0044b948);
    /* 0044b948: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044b94b: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x44b950u); f_005ec5a0();
    /* 0044b950: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044b953: mov dword ptr [eax], 0x6b9064 */ W32((u32)(r_eax), 0x6b9064u);
    /* 0044b959: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044b95c: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0044b95f: jmp 0x44b968 */ goto L_0044b968;
L_0044b961:; BB(0x0044b961);
    /* 0044b961: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0044b968:; BB(0x0044b968);
    /* 0044b968: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044b96b: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0044b96e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044b975: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b977: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b979: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b97b: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b980: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b985: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044b987: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b98c: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b98e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b993: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b995: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044b998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b999: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0044b99c: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x44b9a1u); f_005fa5b0();
    /* 0044b9a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044b9a2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044b9a5: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x44b9aau); f_005ff5a0();
    /* 0044b9aa: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b9b0: call 0x44c7f0 */ r_esp -= 4; W32(r_esp, 0x44b9b5u); f_0044c7f0();
    /* 0044b9b5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0044b9b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b9ba: je 0x44b9dc */ if (fZ) goto L_0044b9dc;
L_0044b9bc:; BB(0x0044b9bc);
    /* 0044b9bc: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b9be: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0044b9c4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x44b9c9u); f_005fb350();
    /* 0044b9c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0044b9cc: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044b9cf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044b9d1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044b9d4: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 0044b9da: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44b9dcu); call_ind(t); }
L_0044b9dc:; BB(0x0044b9dc);
    /* 0044b9dc: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044b9e2: call 0x44c830 */ r_esp -= 4; W32(r_esp, 0x44b9e7u); f_0044c830();
    /* 0044b9e7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044b9ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044b9ec: je 0x44ba0e */ if (fZ) goto L_0044ba0e;
L_0044b9ee:; BB(0x0044b9ee);
    /* 0044b9ee: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0044b9f0: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0044b9f6: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x44b9fbu); f_005fb350();
    /* 0044b9fb: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0044b9fe: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044ba01: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044ba03: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044ba06: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0044ba0c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44ba0eu); call_ind(t); }
L_0044ba0e:; BB(0x0044ba0e);
    /* 0044ba0e: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ba15: je 0x44ba65 */ if (fZ) goto L_0044ba65;
L_0044ba17:; BB(0x0044ba17);
    /* 0044ba17: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 0044ba1d: call 0x5cdd60 */ r_esp -= 4; W32(r_esp, 0x44ba22u); f_005cdd60();
    /* 0044ba22: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0044ba25: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ba27: je 0x44ba48 */ if (fZ) goto L_0044ba48;
L_0044ba29:; BB(0x0044ba29);
    /* 0044ba29: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ba2b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0044ba2e: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x44ba33u); f_005fb350();
    /* 0044ba33: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0044ba36: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044ba39: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044ba3b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044ba3e: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 0044ba44: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44ba46u); call_ind(t); }
    /* 0044ba46: jmp 0x44ba65 */ goto L_0044ba65;
L_0044ba48:; BB(0x0044ba48);
    /* 0044ba48: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ba4a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0044ba4d: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x44ba52u); f_005fb350();
    /* 0044ba52: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0044ba55: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044ba58: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044ba5a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044ba5d: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0044ba63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44ba65u); call_ind(t); }
L_0044ba65:; BB(0x0044ba65);
    /* 0044ba65: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044ba68: mov byte ptr [ecx + 0x7c], 0 */ W8((u32)(r_ecx+0x7cu), 0x0u);
    /* 0044ba6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044ba6f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044ba76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044ba77: mov esp, ebp */ r_esp = r_ebp;
    /* 0044ba79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ba7a: ret 0x10 */ FN_RET(0x0044b830); r_esp += 20; return;
}

void f_0044ba80(void) /* LetItRideRoom::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044ba80);
    /* 0044ba80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ba81: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ba83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ba84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044ba87: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ba89: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0044ba8f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x44ba94u); f_005fb350();
    /* 0044ba94: mov ecx, eax */ r_ecx = r_eax;
    /* 0044ba96: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x44ba9bu); f_00600230();
    /* 0044ba9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ba9c: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044baa2: call 0x44c810 */ r_esp -= 4; W32(r_esp, 0x44baa7u); f_0044c810();
    /* 0044baa7: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0044baa9: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0044baaf: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x44bab4u); f_005fb350();
    /* 0044bab4: mov ecx, eax */ r_ecx = r_eax;
    /* 0044bab6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x44babbu); f_00600230();
    /* 0044babb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044babc: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044bac2: call 0x44c850 */ r_esp -= 4; W32(r_esp, 0x44bac7u); f_0044c850();
    /* 0044bac7: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bace: je 0x44baf5 */ if (fZ) goto L_0044baf5;
L_0044bad0:; BB(0x0044bad0);
    /* 0044bad0: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bad2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044bad5: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x44badau); f_005fb350();
    /* 0044bada: mov ecx, eax */ r_ecx = r_eax;
    /* 0044badc: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x44bae1u); f_00600230();
    /* 0044bae1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044bae4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bae6: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0044bae9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044baea: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 0044baf0: call 0x5cdd10 */ r_esp -= 4; W32(r_esp, 0x44baf5u); f_005cdd10();
L_0044baf5:; BB(0x0044baf5);
    /* 0044baf5: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044bafb: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x44bb00u); f_005da830();
    /* 0044bb00: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0044bb03: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bb05: je 0x44bb14 */ if (fZ) goto L_0044bb14;
L_0044bb07:; BB(0x0044bb07);
    /* 0044bb07: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 0044bb0d: call 0x4474b0 */ r_esp -= 4; W32(r_esp, 0x44bb12u); f_004474b0();
    /* 0044bb12: jmp 0x44bb52 */ goto L_0044bb52;
L_0044bb14:; BB(0x0044bb14);
    /* 0044bb14: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044bb1a: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x44bb1fu); f_00637610();
    /* 0044bb1f: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 0044bb25: call 0x4474b0 */ r_esp -= 4; W32(r_esp, 0x44bb2au); f_004474b0();
    /* 0044bb2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bb2d: movzx ecx, byte ptr [eax + 0x7c] */ r_ecx = (u32)R8((u32)(r_eax+0x7cu));
    /* 0044bb31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bb33: je 0x44bb52 */ if (fZ) goto L_0044bb52;
L_0044bb35:; BB(0x0044bb35);
    /* 0044bb35: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bb38: mov byte ptr [edx + 0x7c], 0 */ W8((u32)(r_edx+0x7cu), 0x0u);
    /* 0044bb3c: mov ecx, dword ptr [0x790710] */ r_ecx = R32((u32)(0x790710u));
    /* 0044bb42: call 0x44ca20 */ r_esp -= 4; W32(r_esp, 0x44bb47u); f_0044ca20();
    /* 0044bb47: mov ecx, dword ptr [0x790714] */ r_ecx = R32((u32)(0x790714u));
    /* 0044bb4d: call 0x4497a0 */ r_esp -= 4; W32(r_esp, 0x44bb52u); f_004497a0();
L_0044bb52:; BB(0x0044bb52);
    /* 0044bb52: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bb54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bb55: ret 8 */ FN_RET(0x0044ba80); r_esp += 12; return;
}

void f_0044bb60(void) /* LetItRideRoom::vfunc187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bb60);
    /* 0044bb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bb61: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bb63: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044bb66: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0044bb69: mov dword ptr [ebp - 0x28], 0x132 */ W32((u32)(r_ebp+0xffffffd8u), 0x132u);
    /* 0044bb70: mov dword ptr [ebp - 0x24], 0xf6 */ W32((u32)(r_ebp+0xffffffdcu), 0xf6u);
    /* 0044bb77: mov dword ptr [ebp - 0x20], 0x96 */ W32((u32)(r_ebp+0xffffffe0u), 0x96u);
    /* 0044bb7e: mov dword ptr [ebp - 0x1c], 0xf6 */ W32((u32)(r_ebp+0xffffffe4u), 0xf6u);
    /* 0044bb85: mov dword ptr [ebp - 0x18], 0x1ca */ W32((u32)(r_ebp+0xffffffe8u), 0x1cau);
    /* 0044bb8c: mov dword ptr [ebp - 0x14], 0x4c */ W32((u32)(r_ebp+0xffffffecu), 0x4cu);
    /* 0044bb93: mov dword ptr [ebp - 0x10], 5 */ W32((u32)(r_ebp+0xfffffff0u), 0x5u);
    /* 0044bb9a: mov dword ptr [ebp - 0xc], 0x4a */ W32((u32)(r_ebp+0xfffffff4u), 0x4au);
    /* 0044bba1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044bba8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044bbaf: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044bbb3: jge 0x44bbcd */ if ((fS==fO)) goto L_0044bbcd;
L_0044bbb5:; BB(0x0044bbb5);
    /* 0044bbb5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044bbb8: mov ecx, dword ptr [ebp + eax*8 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 0044bbbc: mov edx, dword ptr [ebp + eax*8 - 0x24] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 0044bbc0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044bbc3: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0044bbc5: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0044bbc8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044bbcb: jmp 0x44bbf9 */ goto L_0044bbf9;
L_0044bbcd:; BB(0x0044bbcd);
    /* 0044bbcd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0044bbcf: jne 0x44bbe8 */ if (!fZ) goto L_0044bbe8;
L_0044bbd1:; BB(0x0044bbd1);
    /* 0044bbd1: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bbd6: push 0x6b9128 */ { u32 v = 0x6b9128u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bbdb: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bbe0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x44bbe5u); f_005e9f20();
    /* 0044bbe5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044bbe8:; BB(0x0044bbe8);
    /* 0044bbe8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044bbeb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044bbee: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0044bbf0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044bbf3: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0044bbf6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0044bbf9:; BB(0x0044bbf9);
    /* 0044bbf9: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bbfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bbfc: ret 8 */ FN_RET(0x0044bb60); r_esp += 12; return;
}

