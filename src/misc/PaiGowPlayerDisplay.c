#include "protos.h"

void f_00459b00(void) /* PaiGowPlayerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459b00);
    /* 00459b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00459b03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459b06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00459b09: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459b0c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x459b11u); f_005e9e20();
    /* 00459b11: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459b14: mov dword ptr [eax], 0x6b98a8 */ W32((u32)(r_eax), 0x6b98a8u);
    /* 00459b1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00459b21: jmp 0x459b2c */ goto L_00459b2c;
L_00459b23:; BB(0x00459b23);
    /* 00459b23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459b26: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459b29: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00459b2c:; BB(0x00459b2c);
    /* 00459b2c: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459b30: jge 0x459b42 */ if ((fS==fO)) goto L_00459b42;
L_00459b32:; BB(0x00459b32);
    /* 00459b32: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00459b35: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459b38: mov dword ptr [eax + edx*4 + 8], 0 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x0u);
    /* 00459b40: jmp 0x459b23 */ goto L_00459b23;
L_00459b42:; BB(0x00459b42);
    /* 00459b42: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00459b45: mov esp, ebp */ r_esp = r_ebp;
    /* 00459b47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459b48: ret  */ FN_RET(0x00459b00); r_esp += 4; return;
}

void f_00459b50(void) /* PaiGowPlayerDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00459b50);
    /* 00459b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00459b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00459b53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00459b55: push 0x69f0ec */ { u32 v = 0x69f0ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00459b5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00459b60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459b61: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00459b64: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00459b69: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00459b6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459b6c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00459b6f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00459b75: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00459b78: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459b7b: mov dword ptr [eax], 0x6b98a8 */ W32((u32)(r_eax), 0x6b98a8u);
    /* 00459b81: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00459b88: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00459b8f: jmp 0x459b9a */ goto L_00459b9a;
L_00459b91:; BB(0x00459b91);
    /* 00459b91: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00459b94: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00459b97: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00459b9a:; BB(0x00459b9a);
    /* 00459b9a: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459b9e: jge 0x459bd5 */ if ((fS==fO)) goto L_00459bd5;
L_00459ba0:; BB(0x00459ba0);
    /* 00459ba0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00459ba3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459ba6: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00459baa: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00459bad: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00459bb0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00459bb3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459bb7: je 0x459bcc */ if (fZ) goto L_00459bcc;
L_00459bb9:; BB(0x00459bb9);
    /* 00459bb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00459bbb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00459bbe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00459bc0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00459bc3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00459bc5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x459bc7u); call_ind(t); }
    /* 00459bc7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00459bca: jmp 0x459bd3 */ goto L_00459bd3;
L_00459bcc:; BB(0x00459bcc);
    /* 00459bcc: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00459bd3:; BB(0x00459bd3);
    /* 00459bd3: jmp 0x459b91 */ goto L_00459b91;
L_00459bd5:; BB(0x00459bd5);
    /* 00459bd5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00459bdc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00459bdf: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x459be4u); f_005e9e40();
    /* 00459be4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00459be7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00459bee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00459bef: mov esp, ebp */ r_esp = r_ebp;
    /* 00459bf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00459bf2: ret  */ FN_RET(0x00459b50); r_esp += 4; return;
}

