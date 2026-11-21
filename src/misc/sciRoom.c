#include "protos.h"

void f_005f0cc0(void) /* sciRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f0cc0);
    /* 005f0cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f0cc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0cc5: push 0x6a9ce3 */ { u32 v = 0x6a9ce3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0cca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f0cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0cd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0cd2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f0cd7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f0cd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0cda: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f0cdd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f0ce3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f0ce6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f0ce9: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5f0ceeu); f_005e9e20();
    /* 005f0cee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f0cf5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f0cf8: mov dword ptr [eax], 0x6d657c */ W32((u32)(r_eax), 0x6d657cu);
    /* 005f0cfe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f0d01: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0d04: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x5f0d09u); f_0060c5f0();
    /* 005f0d09: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005f0d0d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f0d10: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0d13: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x5f0d18u); f_0060c5f0();
    /* 005f0d18: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f0d1b: mov dword ptr [0x15e55e4], ecx */ W32((u32)(0x15e55e4u), r_ecx);
    /* 005f0d21: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f0d24: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 005f0d2b: mov dword ptr [0x7950ac], 0 */ W32((u32)(0x7950acu), 0x0u);
    /* 005f0d35: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f0d38: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 005f0d3f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f0d46: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f0d49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f0d4c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f0d53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f0d54: mov esp, ebp */ r_esp = r_ebp;
    /* 005f0d56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f0d57: ret  */ FN_RET(0x005f0cc0); r_esp += 4; return;
}

void f_005f0d60(void) /* sciRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f0d60);
    /* 005f0d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f0d61: mov ebp, esp */ r_ebp = r_esp;
    /* 005f0d63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f0d65: push 0x6a9d25 */ { u32 v = 0x6a9d25u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0d6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f0d70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0d71: sub esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f0d77: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f0d7c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f0d7e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f0d81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0d82: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f0d85: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f0d8b: mov dword ptr [ebp - 0xd8], ecx */ W32((u32)(r_ebp+0xffffff28u), r_ecx);
    /* 005f0d91: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005f0d97: mov dword ptr [eax], 0x6d657c */ W32((u32)(r_eax), 0x6d657cu);
    /* 005f0d9d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005f0da4: mov ecx, dword ptr [0x7950ac] */ r_ecx = R32((u32)(0x7950acu));
    /* 005f0daa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0dab: push 0x6d6624 */ { u32 v = 0x6d6624u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0db0: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 005f0db6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0db7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5f0dbdu); call_ind(t); }
    /* 005f0dbd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f0dc0: lea eax, [ebp - 0x9c] */ r_eax = (u32)(r_ebp+0xffffff64u);
    /* 005f0dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f0dc7: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5f0dccu); f_0062fde0();
    /* 005f0dcc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f0dcf:; BB(0x005f0dcf);
    /* 005f0dcf: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005f0dd5: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0dd8: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f0dddu); f_0060c9a0();
    /* 005f0ddd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0ddf: je 0x5f0e4c */ if (fZ) goto L_005f0e4c;
L_005f0de1:; BB(0x005f0de1);
    /* 005f0de1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0de3: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005f0de9: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0dec: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f0df1u); f_0060ca40();
    /* 005f0df1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f0df4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f0df7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f0df8: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005f0dfe: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f0e01: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5f0e06u); f_0060c890();
    /* 005f0e06: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f0e09: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 005f0e0f: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 005f0e15: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 005f0e1b: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0e22: je 0x5f0e40 */ if (fZ) goto L_005f0e40;
L_005f0e24:; BB(0x005f0e24);
    /* 005f0e24: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0e26: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005f0e2c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f0e2e: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005f0e34: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f0e36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f0e38u); call_ind(t); }
    /* 005f0e38: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 005f0e3e: jmp 0x5f0e4a */ goto L_005f0e4a;
L_005f0e40:; BB(0x005f0e40);
    /* 005f0e40: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_005f0e4a:; BB(0x005f0e4a);
    /* 005f0e4a: jmp 0x5f0dcf */ goto L_005f0dcf;
L_005f0e4c:; BB(0x005f0e4c);
    /* 005f0e4c: cmp dword ptr [0x795078], 0 */ {  u32 a = R32((u32)(0x795078u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0e53: je 0x5f0ea6 */ if (fZ) goto L_005f0ea6;
L_005f0e55:; BB(0x005f0e55);
    /* 005f0e55: mov ecx, dword ptr [0x795078] */ r_ecx = R32((u32)(0x795078u));
    /* 005f0e5b: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 005f0e61: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005f0e67: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 005f0e6d: cmp dword ptr [ebp - 0xa8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0e74: je 0x5f0e92 */ if (fZ) goto L_005f0e92;
L_005f0e76:; BB(0x005f0e76);
    /* 005f0e76: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0e78: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005f0e7e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f0e80: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005f0e86: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f0e88: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f0e8au); call_ind(t); }
    /* 005f0e8a: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 005f0e90: jmp 0x5f0e9c */ goto L_005f0e9c;
L_005f0e92:; BB(0x005f0e92);
    /* 005f0e92: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_005f0e9c:; BB(0x005f0e9c);
    /* 005f0e9c: mov dword ptr [0x795078], 0 */ W32((u32)(0x795078u), 0x0u);
L_005f0ea6:; BB(0x005f0ea6);
    /* 005f0ea6: cmp dword ptr [0x795088], 0 */ {  u32 a = R32((u32)(0x795088u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0ead: je 0x5f0f00 */ if (fZ) goto L_005f0f00;
L_005f0eaf:; BB(0x005f0eaf);
    /* 005f0eaf: mov ecx, dword ptr [0x795088] */ r_ecx = R32((u32)(0x795088u));
    /* 005f0eb5: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 005f0ebb: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005f0ec1: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 005f0ec7: cmp dword ptr [ebp - 0xb0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0ece: je 0x5f0eec */ if (fZ) goto L_005f0eec;
L_005f0ed0:; BB(0x005f0ed0);
    /* 005f0ed0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0ed2: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005f0ed8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f0eda: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005f0ee0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f0ee2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f0ee4u); call_ind(t); }
    /* 005f0ee4: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 005f0eea: jmp 0x5f0ef6 */ goto L_005f0ef6;
L_005f0eec:; BB(0x005f0eec);
    /* 005f0eec: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_005f0ef6:; BB(0x005f0ef6);
    /* 005f0ef6: mov dword ptr [0x795088], 0 */ W32((u32)(0x795088u), 0x0u);
L_005f0f00:; BB(0x005f0f00);
    /* 005f0f00: cmp dword ptr [0x79507c], 0 */ {  u32 a = R32((u32)(0x79507cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0f07: je 0x5f0f5a */ if (fZ) goto L_005f0f5a;
L_005f0f09:; BB(0x005f0f09);
    /* 005f0f09: mov ecx, dword ptr [0x79507c] */ r_ecx = R32((u32)(0x79507cu));
    /* 005f0f0f: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 005f0f15: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005f0f1b: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 005f0f21: cmp dword ptr [ebp - 0xb8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0f28: je 0x5f0f46 */ if (fZ) goto L_005f0f46;
L_005f0f2a:; BB(0x005f0f2a);
    /* 005f0f2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f2c: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005f0f32: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f0f34: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005f0f3a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f0f3c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f0f3eu); call_ind(t); }
    /* 005f0f3e: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 005f0f44: jmp 0x5f0f50 */ goto L_005f0f50;
L_005f0f46:; BB(0x005f0f46);
    /* 005f0f46: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_005f0f50:; BB(0x005f0f50);
    /* 005f0f50: mov dword ptr [0x79507c], 0 */ W32((u32)(0x79507cu), 0x0u);
L_005f0f5a:; BB(0x005f0f5a);
    /* 005f0f5a: cmp dword ptr [0x795080], 0 */ {  u32 a = R32((u32)(0x795080u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0f61: je 0x5f0fb4 */ if (fZ) goto L_005f0fb4;
L_005f0f63:; BB(0x005f0f63);
    /* 005f0f63: mov ecx, dword ptr [0x795080] */ r_ecx = R32((u32)(0x795080u));
    /* 005f0f69: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 005f0f6f: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005f0f75: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 005f0f7b: cmp dword ptr [ebp - 0xc0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0f82: je 0x5f0fa0 */ if (fZ) goto L_005f0fa0;
L_005f0f84:; BB(0x005f0f84);
    /* 005f0f84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0f86: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005f0f8c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f0f8e: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005f0f94: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f0f96: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f0f98u); call_ind(t); }
    /* 005f0f98: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 005f0f9e: jmp 0x5f0faa */ goto L_005f0faa;
L_005f0fa0:; BB(0x005f0fa0);
    /* 005f0fa0: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_005f0faa:; BB(0x005f0faa);
    /* 005f0faa: mov dword ptr [0x795080], 0 */ W32((u32)(0x795080u), 0x0u);
L_005f0fb4:; BB(0x005f0fb4);
    /* 005f0fb4: cmp dword ptr [0x795084], 0 */ {  u32 a = R32((u32)(0x795084u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0fbb: je 0x5f100e */ if (fZ) goto L_005f100e;
L_005f0fbd:; BB(0x005f0fbd);
    /* 005f0fbd: mov ecx, dword ptr [0x795084] */ r_ecx = R32((u32)(0x795084u));
    /* 005f0fc3: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 005f0fc9: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005f0fcf: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 005f0fd5: cmp dword ptr [ebp - 0xc8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f0fdc: je 0x5f0ffa */ if (fZ) goto L_005f0ffa;
L_005f0fde:; BB(0x005f0fde);
    /* 005f0fde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f0fe0: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 005f0fe6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f0fe8: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 005f0fee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f0ff0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f0ff2u); call_ind(t); }
    /* 005f0ff2: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 005f0ff8: jmp 0x5f1004 */ goto L_005f1004;
L_005f0ffa:; BB(0x005f0ffa);
    /* 005f0ffa: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_005f1004:; BB(0x005f1004);
    /* 005f1004: mov dword ptr [0x795084], 0 */ W32((u32)(0x795084u), 0x0u);
L_005f100e:; BB(0x005f100e);
    /* 005f100e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1010: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1016: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1019: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f101eu); f_0060ca40();
    /* 005f101e: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1024: cmp eax, dword ptr [ecx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1027: je 0x5f103d */ if (fZ) goto L_005f103d;
L_005f1029:; BB(0x005f1029);
    /* 005f1029: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f102b: push 0x6d660c */ { u32 v = 0x6d660cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1030: push 0x6d65d0 */ { u32 v = 0x6d65d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1035: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5f103au); f_005e9f20();
    /* 005f103a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f103d:; BB(0x005f103d);
    /* 005f103d: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1043: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1046: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f104bu); f_0060c9a0();
    /* 005f104b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f104e: jle 0x5f10a9 */ if ((fZ||fS!=fO)) goto L_005f10a9;
L_005f1050:; BB(0x005f1050);
    /* 005f1050: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1052: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1058: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f105b: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f1060u); f_0060ca40();
    /* 005f1060: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f1063: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f1066: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 005f106c: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 005f1072: mov dword ptr [ebp - 0xd0], ecx */ W32((u32)(r_ebp+0xffffff30u), r_ecx);
    /* 005f1078: cmp dword ptr [ebp - 0xd0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f107f: je 0x5f109d */ if (fZ) goto L_005f109d;
L_005f1081:; BB(0x005f1081);
    /* 005f1081: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1083: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 005f1089: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f108b: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 005f1091: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f1093: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f1095u); call_ind(t); }
    /* 005f1095: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 005f109b: jmp 0x5f10a7 */ goto L_005f10a7;
L_005f109d:; BB(0x005f109d);
    /* 005f109d: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_005f10a7:; BB(0x005f10a7);
    /* 005f10a7: jmp 0x5f103d */ goto L_005f103d;
L_005f10a9:; BB(0x005f10a9);
    /* 005f10a9: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f10ae: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f10b1: call 0x5fb0c0 */ r_esp -= 4; W32(r_esp, 0x5f10b6u); f_005fb0c0();
    /* 005f10b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f10b8: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005f10be: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x5f10c3u); f_005f1b70();
    /* 005f10c3: mov dword ptr [0x15e55e4], 0 */ W32((u32)(0x15e55e4u), 0x0u);
    /* 005f10cd: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005f10d1: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005f10d7: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f10da: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f10dfu); f_0060c6a0();
    /* 005f10df: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f10e3: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005f10e9: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f10ec: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x5f10f1u); f_0060c6a0();
    /* 005f10f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f10f8: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005f10fe: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5f1103u); f_005e9e40();
    /* 005f1103: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1106: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f110d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f110e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f1111: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1113: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5f1118u); f_00686d72();
    /* 005f1118: mov esp, ebp */ r_esp = r_ebp;
    /* 005f111a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f111b: ret  */ FN_RET(0x005f0d60); r_esp += 4; return;
}

void f_005f1120(void) /* sciRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f1120);
    /* 005f1120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1121: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1125: push 0x6a9d93 */ { u32 v = 0x6a9d93u; r_esp -= 4; W32(r_esp, v); }
    /* 005f112a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f1130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1131: sub esp, 0x848 */ {  u32 a = r_esp; u32 b = 0x848u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1137: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f113c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f113e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f1141: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f1142: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1143: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f1146: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f114c: mov dword ptr [ebp - 0x840], ecx */ W32((u32)(r_ebp+0xfffff7c0u), r_ecx);
    /* 005f1152: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1154: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f1159: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f115c: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x5f1161u); f_005f89d0();
    /* 005f1161: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1167: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005f116a: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5f116fu); f_005f85d0();
    /* 005f116f: mov ecx, dword ptr [ebp - 0x840] */ r_ecx = R32((u32)(r_ebp+0xfffff7c0u));
    /* 005f1175: call 0x5f1b50 */ r_esp -= 4; W32(r_esp, 0x5f117au); f_005f1b50();
    /* 005f117a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f117b: mov ecx, dword ptr [ebp - 0x840] */ r_ecx = R32((u32)(r_ebp+0xfffff7c0u));
    /* 005f1181: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x5f1186u); f_005f1ad0();
    /* 005f1186: movzx edx, byte ptr [0x795fa2] */ r_edx = (u32)R8((u32)(0x795fa2u));
    /* 005f118d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f118f: je 0x5f1253 */ if (fZ) goto L_005f1253;
L_005f1195:; BB(0x005f1195);
    /* 005f1195: cmp dword ptr [0x795078], 0 */ {  u32 a = R32((u32)(0x795078u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f119c: jne 0x5f1253 */ if (!fZ) goto L_005f1253;
L_005f11a2:; BB(0x005f11a2);
    /* 005f11a2: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f11a7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f11acu); f_00686d82();
    /* 005f11ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f11af: mov dword ptr [ebp - 0x81c], eax */ W32((u32)(r_ebp+0xfffff7e4u), r_eax);
    /* 005f11b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f11bc: cmp dword ptr [ebp - 0x81c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff7e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f11c3: je 0x5f11d8 */ if (fZ) goto L_005f11d8;
L_005f11c5:; BB(0x005f11c5);
    /* 005f11c5: mov ecx, dword ptr [ebp - 0x81c] */ r_ecx = R32((u32)(r_ebp+0xfffff7e4u));
    /* 005f11cb: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5f11d0u); f_005ec5a0();
    /* 005f11d0: mov dword ptr [ebp - 0x844], eax */ W32((u32)(r_ebp+0xfffff7bcu), r_eax);
    /* 005f11d6: jmp 0x5f11e2 */ goto L_005f11e2;
L_005f11d8:; BB(0x005f11d8);
    /* 005f11d8: mov dword ptr [ebp - 0x844], 0 */ W32((u32)(r_ebp+0xfffff7bcu), 0x0u);
L_005f11e2:; BB(0x005f11e2);
    /* 005f11e2: mov eax, dword ptr [ebp - 0x844] */ r_eax = R32((u32)(r_ebp+0xfffff7bcu));
    /* 005f11e8: mov dword ptr [ebp - 0x818], eax */ W32((u32)(r_ebp+0xfffff7e8u), r_eax);
    /* 005f11ee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f11f5: mov ecx, dword ptr [ebp - 0x818] */ r_ecx = R32((u32)(r_ebp+0xfffff7e8u));
    /* 005f11fb: mov dword ptr [0x795078], ecx */ W32((u32)(0x795078u), r_ecx);
    /* 005f1201: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1203: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1205: push 0x270f */ { u32 v = 0x270fu; r_esp -= 4; W32(r_esp, v); }
    /* 005f120a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f120c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f120e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1210: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1212: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1214: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1219: mov ecx, dword ptr [0x795078] */ r_ecx = R32((u32)(0x795078u));
    /* 005f121f: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5f1224u); f_005ec8f0();
    /* 005f1224: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1229: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f122e: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1233: mov ecx, dword ptr [0x795078] */ r_ecx = R32((u32)(0x795078u));
    /* 005f1239: call 0x5ee8c0 */ r_esp -= 4; W32(r_esp, 0x5f123eu); f_005ee8c0();
    /* 005f123e: mov edx, dword ptr [0x795078] */ r_edx = R32((u32)(0x795078u));
    /* 005f1244: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f1246: mov ecx, dword ptr [0x795078] */ r_ecx = R32((u32)(0x795078u));
    /* 005f124c: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005f124f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f1251u); call_ind(t); }
    /* 005f1251: jmp 0x5f125d */ goto L_005f125d;
L_005f1253:; BB(0x005f1253);
    /* 005f1253: mov dword ptr [0x795078], 0 */ W32((u32)(0x795078u), 0x0u);
L_005f125d:; BB(0x005f125d);
    /* 005f125d: movzx eax, byte ptr [0x795fa4] */ r_eax = (u32)R8((u32)(0x795fa4u));
    /* 005f1264: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1266: je 0x5f13be */ if (fZ) goto L_005f13be;
L_005f126c:; BB(0x005f126c);
    /* 005f126c: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1271: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f1276u); f_00686d82();
    /* 005f1276: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f1279: mov dword ptr [ebp - 0x824], eax */ W32((u32)(r_ebp+0xfffff7dcu), r_eax);
    /* 005f127f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005f1286: cmp dword ptr [ebp - 0x824], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff7dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f128d: je 0x5f12a2 */ if (fZ) goto L_005f12a2;
L_005f128f:; BB(0x005f128f);
    /* 005f128f: mov ecx, dword ptr [ebp - 0x824] */ r_ecx = R32((u32)(r_ebp+0xfffff7dcu));
    /* 005f1295: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5f129au); f_005ec5a0();
    /* 005f129a: mov dword ptr [ebp - 0x848], eax */ W32((u32)(r_ebp+0xfffff7b8u), r_eax);
    /* 005f12a0: jmp 0x5f12ac */ goto L_005f12ac;
L_005f12a2:; BB(0x005f12a2);
    /* 005f12a2: mov dword ptr [ebp - 0x848], 0 */ W32((u32)(r_ebp+0xfffff7b8u), 0x0u);
L_005f12ac:; BB(0x005f12ac);
    /* 005f12ac: mov ecx, dword ptr [ebp - 0x848] */ r_ecx = R32((u32)(r_ebp+0xfffff7b8u));
    /* 005f12b2: mov dword ptr [ebp - 0x820], ecx */ W32((u32)(r_ebp+0xfffff7e0u), r_ecx);
    /* 005f12b8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f12bf: mov edx, dword ptr [ebp - 0x820] */ r_edx = R32((u32)(r_ebp+0xfffff7e0u));
    /* 005f12c5: mov dword ptr [0x795088], edx */ W32((u32)(0x795088u), r_edx);
    /* 005f12cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f12cd: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005f12cf: push 0x270f */ { u32 v = 0x270fu; r_esp -= 4; W32(r_esp, v); }
    /* 005f12d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f12d6: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f12db: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f12de: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5f12e3u); f_005f8550();
    /* 005f12e3: sub eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f12e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f12e7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005f12e9: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005f12eb: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 005f12ed: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f12f2: mov ecx, dword ptr [0x795088] */ r_ecx = R32((u32)(0x795088u));
    /* 005f12f8: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5f12fdu); f_005ec8f0();
    /* 005f12fd: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1302: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1307: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f130c: mov ecx, dword ptr [0x795088] */ r_ecx = R32((u32)(0x795088u));
    /* 005f1312: call 0x5ee8c0 */ r_esp -= 4; W32(r_esp, 0x5f1317u); f_005ee8c0();
    /* 005f1317: push 0x6d6658 */ { u32 v = 0x6d6658u; r_esp -= 4; W32(r_esp, v); }
    /* 005f131c: push 0x6d664c */ { u32 v = 0x6d664cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1321: push 0x6d663c */ { u32 v = 0x6d663cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1326: lea ecx, [ebp - 0x814] */ r_ecx = (u32)(r_ebp+0xfffff7ecu);
    /* 005f132c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f132d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5f1333u); call_ind(t); }
    /* 005f1333: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f1336: lea edx, [ebp - 0x814] */ r_edx = (u32)(r_ebp+0xfffff7ecu);
    /* 005f133c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f133d: mov eax, dword ptr [0x795088] */ r_eax = R32((u32)(0x795088u));
    /* 005f1342: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f1344: mov ecx, dword ptr [0x795088] */ r_ecx = R32((u32)(0x795088u));
    /* 005f134a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005f1350: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f1352u); call_ind(t); }
    /* 005f1352: mov ecx, dword ptr [0x795088] */ r_ecx = R32((u32)(0x795088u));
    /* 005f1358: call 0x5ef180 */ r_esp -= 4; W32(r_esp, 0x5f135du); f_005ef180();
    /* 005f135d: mov ecx, dword ptr [0x795088] */ r_ecx = R32((u32)(0x795088u));
    /* 005f1363: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5f1368u); f_005f5550();
    /* 005f1368: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f136b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f136c: mov ecx, dword ptr [0x795088] */ r_ecx = R32((u32)(0x795088u));
    /* 005f1372: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5f1377u); f_005ecc60();
    /* 005f1377: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1379: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f137f: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005f1382: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5f1387u); f_005f8550();
    /* 005f1387: mov esi, eax */ r_esi = r_eax;
    /* 005f1389: mov ecx, dword ptr [0x795088] */ r_ecx = R32((u32)(0x795088u));
    /* 005f138f: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5f1394u); f_005f5550();
    /* 005f1394: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005f1396: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f1397: mov edx, dword ptr [0x795088] */ r_edx = R32((u32)(0x795088u));
    /* 005f139d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f139f: mov ecx, dword ptr [0x795088] */ r_ecx = R32((u32)(0x795088u));
    /* 005f13a5: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005f13a8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f13aau); call_ind(t); }
    /* 005f13aa: mov eax, dword ptr [0x795088] */ r_eax = R32((u32)(0x795088u));
    /* 005f13af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f13b1: mov ecx, dword ptr [0x795088] */ r_ecx = R32((u32)(0x795088u));
    /* 005f13b7: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005f13ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f13bcu); call_ind(t); }
    /* 005f13bc: jmp 0x5f13c8 */ goto L_005f13c8;
L_005f13be:; BB(0x005f13be);
    /* 005f13be: mov dword ptr [0x795088], 0 */ W32((u32)(0x795088u), 0x0u);
L_005f13c8:; BB(0x005f13c8);
    /* 005f13c8: movzx ecx, byte ptr [0x795fb0] */ r_ecx = (u32)R8((u32)(0x795fb0u));
    /* 005f13cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f13d1: je 0x5f1646 */ if (fZ) goto L_005f1646;
L_005f13d7:; BB(0x005f13d7);
    /* 005f13d7: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f13dc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f13e1u); f_00686d82();
    /* 005f13e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f13e4: mov dword ptr [ebp - 0x82c], eax */ W32((u32)(r_ebp+0xfffff7d4u), r_eax);
    /* 005f13ea: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005f13f1: cmp dword ptr [ebp - 0x82c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff7d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f13f8: je 0x5f140d */ if (fZ) goto L_005f140d;
L_005f13fa:; BB(0x005f13fa);
    /* 005f13fa: mov ecx, dword ptr [ebp - 0x82c] */ r_ecx = R32((u32)(r_ebp+0xfffff7d4u));
    /* 005f1400: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5f1405u); f_005ec5a0();
    /* 005f1405: mov dword ptr [ebp - 0x84c], eax */ W32((u32)(r_ebp+0xfffff7b4u), r_eax);
    /* 005f140b: jmp 0x5f1417 */ goto L_005f1417;
L_005f140d:; BB(0x005f140d);
    /* 005f140d: mov dword ptr [ebp - 0x84c], 0 */ W32((u32)(r_ebp+0xfffff7b4u), 0x0u);
L_005f1417:; BB(0x005f1417);
    /* 005f1417: mov edx, dword ptr [ebp - 0x84c] */ r_edx = R32((u32)(r_ebp+0xfffff7b4u));
    /* 005f141d: mov dword ptr [ebp - 0x828], edx */ W32((u32)(r_ebp+0xfffff7d8u), r_edx);
    /* 005f1423: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f142a: mov eax, dword ptr [ebp - 0x828] */ r_eax = R32((u32)(r_ebp+0xfffff7d8u));
    /* 005f1430: mov dword ptr [0x79507c], eax */ W32((u32)(0x79507cu), r_eax);
    /* 005f1435: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1437: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1439: push 0x270f */ { u32 v = 0x270fu; r_esp -= 4; W32(r_esp, v); }
    /* 005f143e: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1444: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005f1447: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5f144cu); f_005f8570();
    /* 005f144c: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f144f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1450: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005f1456: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005f1459: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5f145eu); f_005f8550();
    /* 005f145e: sub eax, 0x10e */ {  u32 a = r_eax; u32 b = 0x10eu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f1463: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1464: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1466: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005f1468: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f146a: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f146f: mov ecx, dword ptr [0x79507c] */ r_ecx = R32((u32)(0x79507cu));
    /* 005f1475: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5f147au); f_005ec8f0();
    /* 005f147a: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f147f: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1484: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1489: mov ecx, dword ptr [0x79507c] */ r_ecx = R32((u32)(0x79507cu));
    /* 005f148f: call 0x5ee8c0 */ r_esp -= 4; W32(r_esp, 0x5f1494u); f_005ee8c0();
    /* 005f1494: mov eax, dword ptr [0x79507c] */ r_eax = R32((u32)(0x79507cu));
    /* 005f1499: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f149b: mov ecx, dword ptr [0x79507c] */ r_ecx = R32((u32)(0x79507cu));
    /* 005f14a1: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005f14a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f14a6u); call_ind(t); }
    /* 005f14a6: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f14ab: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f14b0u); f_00686d82();
    /* 005f14b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f14b3: mov dword ptr [ebp - 0x834], eax */ W32((u32)(r_ebp+0xfffff7ccu), r_eax);
    /* 005f14b9: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005f14c0: cmp dword ptr [ebp - 0x834], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff7ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f14c7: je 0x5f14dc */ if (fZ) goto L_005f14dc;
L_005f14c9:; BB(0x005f14c9);
    /* 005f14c9: mov ecx, dword ptr [ebp - 0x834] */ r_ecx = R32((u32)(r_ebp+0xfffff7ccu));
    /* 005f14cf: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5f14d4u); f_005ec5a0();
    /* 005f14d4: mov dword ptr [ebp - 0x850], eax */ W32((u32)(r_ebp+0xfffff7b0u), r_eax);
    /* 005f14da: jmp 0x5f14e6 */ goto L_005f14e6;
L_005f14dc:; BB(0x005f14dc);
    /* 005f14dc: mov dword ptr [ebp - 0x850], 0 */ W32((u32)(r_ebp+0xfffff7b0u), 0x0u);
L_005f14e6:; BB(0x005f14e6);
    /* 005f14e6: mov ecx, dword ptr [ebp - 0x850] */ r_ecx = R32((u32)(r_ebp+0xfffff7b0u));
    /* 005f14ec: mov dword ptr [ebp - 0x830], ecx */ W32((u32)(r_ebp+0xfffff7d0u), r_ecx);
    /* 005f14f2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f14f9: mov edx, dword ptr [ebp - 0x830] */ r_edx = R32((u32)(r_ebp+0xfffff7d0u));
    /* 005f14ff: mov dword ptr [0x795080], edx */ W32((u32)(0x795080u), r_edx);
    /* 005f1505: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1507: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1509: push 0x270f */ { u32 v = 0x270fu; r_esp -= 4; W32(r_esp, v); }
    /* 005f150e: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f1513: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f1516: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5f151bu); f_005f8570();
    /* 005f151b: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f151e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f151f: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1525: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005f1528: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5f152du); f_005f8550();
    /* 005f152d: sub eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f1532: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1533: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1535: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005f1537: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1539: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f153e: mov ecx, dword ptr [0x795080] */ r_ecx = R32((u32)(0x795080u));
    /* 005f1544: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5f1549u); f_005ec8f0();
    /* 005f1549: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f154e: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1553: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1558: mov ecx, dword ptr [0x795080] */ r_ecx = R32((u32)(0x795080u));
    /* 005f155e: call 0x5ee8c0 */ r_esp -= 4; W32(r_esp, 0x5f1563u); f_005ee8c0();
    /* 005f1563: mov edx, dword ptr [0x795080] */ r_edx = R32((u32)(0x795080u));
    /* 005f1569: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f156b: mov ecx, dword ptr [0x795080] */ r_ecx = R32((u32)(0x795080u));
    /* 005f1571: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005f1574: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f1576u); call_ind(t); }
    /* 005f1576: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f157b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f1580u); f_00686d82();
    /* 005f1580: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f1583: mov dword ptr [ebp - 0x83c], eax */ W32((u32)(r_ebp+0xfffff7c4u), r_eax);
    /* 005f1589: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005f1590: cmp dword ptr [ebp - 0x83c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff7c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1597: je 0x5f15ac */ if (fZ) goto L_005f15ac;
L_005f1599:; BB(0x005f1599);
    /* 005f1599: mov ecx, dword ptr [ebp - 0x83c] */ r_ecx = R32((u32)(r_ebp+0xfffff7c4u));
    /* 005f159f: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5f15a4u); f_005ec5a0();
    /* 005f15a4: mov dword ptr [ebp - 0x854], eax */ W32((u32)(r_ebp+0xfffff7acu), r_eax);
    /* 005f15aa: jmp 0x5f15b6 */ goto L_005f15b6;
L_005f15ac:; BB(0x005f15ac);
    /* 005f15ac: mov dword ptr [ebp - 0x854], 0 */ W32((u32)(r_ebp+0xfffff7acu), 0x0u);
L_005f15b6:; BB(0x005f15b6);
    /* 005f15b6: mov eax, dword ptr [ebp - 0x854] */ r_eax = R32((u32)(r_ebp+0xfffff7acu));
    /* 005f15bc: mov dword ptr [ebp - 0x838], eax */ W32((u32)(r_ebp+0xfffff7c8u), r_eax);
    /* 005f15c2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f15c9: mov ecx, dword ptr [ebp - 0x838] */ r_ecx = R32((u32)(r_ebp+0xfffff7c8u));
    /* 005f15cf: mov dword ptr [0x795084], ecx */ W32((u32)(0x795084u), r_ecx);
    /* 005f15d5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f15d7: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005f15d9: push 0x270f */ { u32 v = 0x270fu; r_esp -= 4; W32(r_esp, v); }
    /* 005f15de: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005f15e4: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005f15e7: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5f15ecu); f_005f8570();
    /* 005f15ec: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f15ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f15f0: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f15f5: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f15f8: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5f15fdu); f_005f8550();
    /* 005f15fd: sub eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f1600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1601: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1603: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005f1605: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1607: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f160c: mov ecx, dword ptr [0x795084] */ r_ecx = R32((u32)(0x795084u));
    /* 005f1612: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5f1617u); f_005ec8f0();
    /* 005f1617: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f161c: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1621: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1626: mov ecx, dword ptr [0x795084] */ r_ecx = R32((u32)(0x795084u));
    /* 005f162c: call 0x5ee8c0 */ r_esp -= 4; W32(r_esp, 0x5f1631u); f_005ee8c0();
    /* 005f1631: mov ecx, dword ptr [0x795084] */ r_ecx = R32((u32)(0x795084u));
    /* 005f1637: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f1639: mov ecx, dword ptr [0x795084] */ r_ecx = R32((u32)(0x795084u));
    /* 005f163f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005f1642: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f1644u); call_ind(t); }
    /* 005f1644: jmp 0x5f1664 */ goto L_005f1664;
L_005f1646:; BB(0x005f1646);
    /* 005f1646: mov dword ptr [0x79507c], 0 */ W32((u32)(0x79507cu), 0x0u);
    /* 005f1650: mov dword ptr [0x795080], 0 */ W32((u32)(0x795080u), 0x0u);
    /* 005f165a: mov dword ptr [0x795084], 0 */ W32((u32)(0x795084u), 0x0u);
L_005f1664:; BB(0x005f1664);
    /* 005f1664: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1667: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f166e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f166f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f1670: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f1673: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1675: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5f167au); f_00686d72();
    /* 005f167a: mov esp, ebp */ r_esp = r_ebp;
    /* 005f167c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f167d: ret  */ FN_RET(0x005f1120); r_esp += 4; return;
}

void f_005f1680(void) /* sciRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f1680);
    /* 005f1680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1681: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1683: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1686: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005f1689: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005f1690: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005f1697: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005f169e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f16a1: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f16a5: je 0x5f16f6 */ if (fZ) goto L_005f16f6;
L_005f16a7:; BB(0x005f16a7);
    /* 005f16a7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f16aa: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005f16ad: mov eax, dword ptr [edx + 0x1a8] */ r_eax = R32((u32)(r_edx+0x1a8u));
    /* 005f16b3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f16b6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f16b9: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005f16bc: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f16c1u); f_005f84d0();
    /* 005f16c1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f16c4: add eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f16c7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f16ca: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005f16cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f16d0: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005f16d3: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f16d8u); f_005f84f0();
    /* 005f16d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f16db: add eax, dword ptr [ecx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f16de: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f16e1: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005f16e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f16e7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005f16ea: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f16ed: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f16f0: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005f16f3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005f16f6:; BB(0x005f16f6);
    /* 005f16f6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f16f9: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 005f16fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f16ff: jne 0x5f1a4a */ if (!fZ) goto L_005f1a4a;
L_005f1705:; BB(0x005f1705);
    /* 005f1705: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1708: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f170c: je 0x5f1a4a */ if (fZ) goto L_005f1a4a;
L_005f1712:; BB(0x005f1712);
    /* 005f1712: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1718: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x5f171du); f_005f3fe0();
    /* 005f171d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f171f: je 0x5f1796 */ if (fZ) goto L_005f1796;
L_005f1721:; BB(0x005f1721);
    /* 005f1721: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1727: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x5f172cu); f_005f3fe0();
    /* 005f172c: movzx ecx, byte ptr [eax + 0x1b1] */ r_ecx = (u32)R8((u32)(r_eax+0x1b1u));
    /* 005f1733: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1735: jne 0x5f1796 */ if (!fZ) goto L_005f1796;
L_005f1737:; BB(0x005f1737);
    /* 005f1737: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f173d: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x5f1742u); f_005f3fe0();
    /* 005f1742: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f1745: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005f1748: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f174b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005f174e: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f1753u); f_005f84d0();
    /* 005f1753: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f1756: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005f1759: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f175b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f175e: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005f1761: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f1764: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005f1767: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f176cu); f_005f84f0();
    /* 005f176c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f176f: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005f1772: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1774: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f1777: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005f177a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f177d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f177e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f1781: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005f1784: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1787: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005f178a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005f178c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005f178f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f1791u); call_ind(t); }
    /* 005f1791: jmp 0x5f1a4a */ goto L_005f1a4a;
L_005f1796:; BB(0x005f1796);
    /* 005f1796: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f179c: call 0x5f41f0 */ r_esp -= 4; W32(r_esp, 0x5f17a1u); f_005f41f0();
    /* 005f17a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f17a3: je 0x5f1856 */ if (fZ) goto L_005f1856;
L_005f17a9:; BB(0x005f17a9);
    /* 005f17a9: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f17af: call 0x5f41f0 */ r_esp -= 4; W32(r_esp, 0x5f17b4u); f_005f41f0();
    /* 005f17b4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f17b7: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005f17ba: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f17bd: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005f17c0: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f17c5u); f_005f84d0();
    /* 005f17c5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f17c8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005f17cb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f17cd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f17d0: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005f17d3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f17d6: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005f17d9: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f17deu); f_005f84f0();
    /* 005f17de: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f17e1: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005f17e4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f17e6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f17e9: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005f17ec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f17ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f17f0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f17f3: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005f17f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f17f9: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005f17fc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005f17fe: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005f1801: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f1803u); call_ind(t); }
    /* 005f1803: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f1806: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 005f180a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f180c: je 0x5f1813 */ if (fZ) goto L_005f1813;
L_005f180e:; BB(0x005f180e);
    /* 005f180e: jmp 0x5f1a4a */ goto L_005f1a4a;
L_005f1813:; BB(0x005f1813);
    /* 005f1813: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1816: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1819: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005f181c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f181f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f1822: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005f1825: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f1828: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1829: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f182c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005f182f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1830: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f1833: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005f1836: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1837: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f183d: call 0x5f40e0 */ r_esp -= 4; W32(r_esp, 0x5f1842u); f_005f40e0();
    /* 005f1842: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f1845: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 005f1848: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f184b: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f184f: jne 0x5f1856 */ if (!fZ) goto L_005f1856;
L_005f1851:; BB(0x005f1851);
    /* 005f1851: jmp 0x5f1a4a */ goto L_005f1a4a;
L_005f1856:; BB(0x005f1856);
    /* 005f1856: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1859: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005f185c: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f185f: cmp dword ptr [ebp - 0x20], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1863: je 0x5f186a */ if (fZ) goto L_005f186a;
L_005f1865:; BB(0x005f1865);
    /* 005f1865: jmp 0x5f1970 */ goto L_005f1970;
L_005f186a:; BB(0x005f186a);
    /* 005f186a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f1871: jmp 0x5f187c */ goto L_005f187c;
L_005f1873:; BB(0x005f1873);
    /* 005f1873: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f1876: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f1879: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005f187c:; BB(0x005f187c);
    /* 005f187c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f187f: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1882: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f1887u); f_0060c9a0();
    /* 005f1887: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f188a: jge 0x5f18bd */ if ((fS==fO)) goto L_005f18bd;
L_005f188c:; BB(0x005f188c);
    /* 005f188c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f188f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1890: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f1893: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1896: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f189bu); f_0060ca40();
    /* 005f189b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005f189e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f18a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f18a2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f18a5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f18a7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f18aa: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 005f18b0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f18b2u); call_ind(t); }
    /* 005f18b2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f18b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f18b7: je 0x5f18bb */ if (fZ) goto L_005f18bb;
L_005f18b9:; BB(0x005f18b9);
    /* 005f18b9: jmp 0x5f18bd */ goto L_005f18bd;
L_005f18bb:; BB(0x005f18bb);
    /* 005f18bb: jmp 0x5f1873 */ goto L_005f1873;
L_005f18bd:; BB(0x005f18bd);
    /* 005f18bd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f18c0: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f18c3: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f18c8u); f_0060c9a0();
    /* 005f18c8: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f18cb: jne 0x5f1922 */ if (!fZ) goto L_005f1922;
L_005f18cd:; BB(0x005f18cd);
    /* 005f18cd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f18d4: jmp 0x5f18df */ goto L_005f18df;
L_005f18d6:; BB(0x005f18d6);
    /* 005f18d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f18d9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f18dc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005f18df:; BB(0x005f18df);
    /* 005f18df: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f18e2: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f18e5: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f18eau); f_0060c9a0();
    /* 005f18ea: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f18ed: jge 0x5f190a */ if ((fS==fO)) goto L_005f190a;
L_005f18ef:; BB(0x005f18ef);
    /* 005f18ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f18f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f18f3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f18f6: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f18f9: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f18feu); f_0060ca40();
    /* 005f18fe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f1901: cmp dword ptr [ecx + 0x20], eax */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1904: jne 0x5f1908 */ if (!fZ) goto L_005f1908;
L_005f1906:; BB(0x005f1906);
    /* 005f1906: jmp 0x5f190a */ goto L_005f190a;
L_005f1908:; BB(0x005f1908);
    /* 005f1908: jmp 0x5f18d6 */ goto L_005f18d6;
L_005f190a:; BB(0x005f190a);
    /* 005f190a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f190d: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1910: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f1915u); f_0060c9a0();
    /* 005f1915: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1918: jne 0x5f1922 */ if (!fZ) goto L_005f1922;
L_005f191a:; BB(0x005f191a);
    /* 005f191a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f191d: call 0x5f2870 */ r_esp -= 4; W32(r_esp, 0x5f1922u); f_005f2870();
L_005f1922:; BB(0x005f1922);
    /* 005f1922: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f1925: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005f1928: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f192du); f_005f84d0();
    /* 005f192d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f1930: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005f1933: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f1935: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1938: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005f193b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f193e: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005f1941: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f1946u); f_005f84f0();
    /* 005f1946: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f1949: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005f194c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f194e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f1951: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005f1954: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1957: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1958: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f195b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005f195e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1961: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005f1964: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005f1966: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005f1969: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f196bu); call_ind(t); }
    /* 005f196b: jmp 0x5f1a4a */ goto L_005f1a4a;
L_005f1970:; BB(0x005f1970);
    /* 005f1970: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1976: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1979: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f197eu); f_0060c9a0();
    /* 005f197e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f1981: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f1984: jmp 0x5f198f */ goto L_005f198f;
L_005f1986:; BB(0x005f1986);
    /* 005f1986: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f1989: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f198c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005f198f:; BB(0x005f198f);
    /* 005f198f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f1993: jl 0x5f1a4a */ if ((fS!=fO)) goto L_005f1a4a;
L_005f1999:; BB(0x005f1999);
    /* 005f1999: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f199c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f199d: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f19a3: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f19a6: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f19abu); f_0060ca40();
    /* 005f19ab: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f19ae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f19b1: mov ecx, dword ptr [eax + 0x1a8] */ r_ecx = R32((u32)(r_eax+0x1a8u));
    /* 005f19b7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f19ba: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f19bd: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f19c0: jne 0x5f19df */ if (!fZ) goto L_005f19df;
L_005f19c2:; BB(0x005f19c2);
    /* 005f19c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f19c5: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5f19cau); f_005f88f0();
    /* 005f19ca: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f19cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f19cf: jne 0x5f19df */ if (!fZ) goto L_005f19df;
L_005f19d1:; BB(0x005f19d1);
    /* 005f19d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f19d4: movzx edx, byte ptr [ecx + 0x1b1] */ r_edx = (u32)R8((u32)(r_ecx+0x1b1u));
    /* 005f19db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f19dd: je 0x5f19e1 */ if (fZ) goto L_005f19e1;
L_005f19df:; BB(0x005f19df);
    /* 005f19df: jmp 0x5f1986 */ goto L_005f1986;
L_005f19e1:; BB(0x005f19e1);
    /* 005f19e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f19e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f19e7: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005f19ea: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f19ed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f19f0: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005f19f3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f19f6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f19f9: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 005f19fc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f19ff: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005f1a02: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5f1a07u); f_005f84d0();
    /* 005f1a07: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f1a0a: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005f1a0d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f1a0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1a12: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005f1a15: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f1a18: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005f1a1b: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5f1a20u); f_005f84f0();
    /* 005f1a20: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f1a23: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005f1a26: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1a28: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f1a2b: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005f1a2e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1a31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1a32: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f1a35: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005f1a38: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1a3b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005f1a3e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005f1a40: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005f1a43: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f1a45u); call_ind(t); }
    /* 005f1a45: jmp 0x5f1986 */ goto L_005f1986;
L_005f1a4a:; BB(0x005f1a4a);
    /* 005f1a4a: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1a4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1a4d: ret 4 */ FN_RET(0x005f1680); r_esp += 8; return;
}

void f_005f1a50(void) /* sciRoom::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f1a50);
    /* 005f1a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1a51: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1a53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1a56: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f1a59: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1a5c: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1a60: je 0x5f1a6d */ if (fZ) goto L_005f1a6d;
L_005f1a62:; BB(0x005f1a62);
    /* 005f1a62: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1a65: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005f1a68: call 0x5fc250 */ r_esp -= 4; W32(r_esp, 0x5f1a6du); f_005fc250();
L_005f1a6d:; BB(0x005f1a6d);
    /* 005f1a6d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f1a74: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f1a77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1a78: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1a7e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1a81: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f1a86u); f_0060ca40();
    /* 005f1a86: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005f1a89:; BB(0x005f1a89);
    /* 005f1a89: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1a8f: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1a92: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f1a97u); f_0060c9a0();
    /* 005f1a97: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f1a9a: jge 0x5f1ac9 */ if ((fS==fO)) goto L_005f1ac9;
L_005f1a9c:; BB(0x005f1a9c);
    /* 005f1a9c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f1a9f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f1aa1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f1aa4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005f1aa7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f1aa9u); call_ind(t); }
    /* 005f1aa9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f1aac: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1aaf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f1ab2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f1ab5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ab6: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1abc: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1abf: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f1ac4u); f_0060ca40();
    /* 005f1ac4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f1ac7: jmp 0x5f1a89 */ goto L_005f1a89;
L_005f1ac9:; BB(0x005f1ac9);
    /* 005f1ac9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1acb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1acc: ret  */ FN_RET(0x005f1a50); r_esp += 4; return;
}

void f_005f1e60(void) /* sciroom::func_005f1e60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f1e60);
    /* 005f1e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1e61: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1e63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1e65: push 0x6a9dec */ { u32 v = 0x6a9decu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1e6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f1e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1e71: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1e74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f1e79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f1e7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1e7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f1e7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f1e85: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005f1e88: cmp dword ptr [ebp + 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1e8c: jne 0x5f1e9a */ if (!fZ) goto L_005f1e9a;
L_005f1e8e:; BB(0x005f1e8e);
    /* 005f1e8e: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 005f1e95: jmp 0x5f1f29 */ goto L_005f1f29;
L_005f1e9a:; BB(0x005f1e9a);
    /* 005f1e9a: cmp dword ptr [ebp + 0x10], -2 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1e9e: jne 0x5f1eb3 */ if (!fZ) goto L_005f1eb3;
L_005f1ea0:; BB(0x005f1ea0);
    /* 005f1ea0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1ea3: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1ea6: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f1eabu); f_0060c9a0();
    /* 005f1eab: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f1eae: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f1eb1: jmp 0x5f1f29 */ goto L_005f1f29;
L_005f1eb3:; BB(0x005f1eb3);
    /* 005f1eb3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005f1eb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1eb7: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x5f1ebcu); f_00686eba();
    /* 005f1ebc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f1ebf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f1ec2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005f1ec9: jmp 0x5f1ed4 */ goto L_005f1ed4;
L_005f1ecb:; BB(0x005f1ecb);
    /* 005f1ecb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f1ece: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1ed1: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005f1ed4:; BB(0x005f1ed4);
    /* 005f1ed4: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1ed7: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1eda: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f1edfu); f_0060c9a0();
    /* 005f1edf: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f1ee2: jge 0x5f1f03 */ if ((fS==fO)) goto L_005f1f03;
L_005f1ee4:; BB(0x005f1ee4);
    /* 005f1ee4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f1ee7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ee8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1eeb: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1eee: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f1ef3u); f_0060ca40();
    /* 005f1ef3: mov ecx, eax */ r_ecx = r_eax;
    /* 005f1ef5: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5f1efau); f_005f5400();
    /* 005f1efa: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1efd: jne 0x5f1f01 */ if (!fZ) goto L_005f1f01;
L_005f1eff:; BB(0x005f1eff);
    /* 005f1eff: jmp 0x5f1f03 */ goto L_005f1f03;
L_005f1f01:; BB(0x005f1f01);
    /* 005f1f01: jmp 0x5f1ecb */ goto L_005f1ecb;
L_005f1f03:; BB(0x005f1f03);
    /* 005f1f03: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1f06: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1f09: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f1f0eu); f_0060c9a0();
    /* 005f1f0e: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1f11: jne 0x5f1f1a */ if (!fZ) goto L_005f1f1a;
L_005f1f13:; BB(0x005f1f13);
    /* 005f1f13: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f1f15: jmp 0x5f216d */ goto L_005f216d;
L_005f1f1a:; BB(0x005f1f1a);
    /* 005f1f1a: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f1f1e: jge 0x5f1f29 */ if ((fS==fO)) goto L_005f1f29;
L_005f1f20:; BB(0x005f1f20);
    /* 005f1f20: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f1f23: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f1f26: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005f1f29:; BB(0x005f1f29);
    /* 005f1f29: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f1f2d: jl 0x5f1f43 */ if ((fS!=fO)) goto L_005f1f43;
L_005f1f2f:; BB(0x005f1f2f);
    /* 005f1f2f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f1f32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1f33: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1f36: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1f39: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f1f3eu); f_0060ca40();
    /* 005f1f3e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f1f41: jmp 0x5f1f4a */ goto L_005f1f4a;
L_005f1f43:; BB(0x005f1f43);
    /* 005f1f43: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005f1f4a:; BB(0x005f1f4a);
    /* 005f1f4a: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 005f1f4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1f4e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1f51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1f52: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1f55: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f1f57: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1f5a: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005f1f5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f1f5fu); call_ind(t); }
    /* 005f1f5f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f1f62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1f64: jne 0x5f1f88 */ if (!fZ) goto L_005f1f88;
L_005f1f66:; BB(0x005f1f66);
    /* 005f1f66: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005f1f68: jne 0x5f1f81 */ if (!fZ) goto L_005f1f81;
L_005f1f6a:; BB(0x005f1f6a);
    /* 005f1f6a: push 0x187 */ { u32 v = 0x187u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1f6f: push 0x6d660c */ { u32 v = 0x6d660cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1f74: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1f79: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5f1f7eu); f_005e9f20();
    /* 005f1f7e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f1f81:; BB(0x005f1f81);
    /* 005f1f81: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f1f83: jmp 0x5f216d */ goto L_005f216d;
L_005f1f88:; BB(0x005f1f88);
    /* 005f1f88: push 0x1f0 */ { u32 v = 0x1f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1f8d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f1f92u); f_00686d82();
    /* 005f1f92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f1f95: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005f1f98: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f1f9f: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1fa3: je 0x5f1fba */ if (fZ) goto L_005f1fba;
L_005f1fa5:; BB(0x005f1fa5);
    /* 005f1fa5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fa7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f1faa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f1fac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fad: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005f1fb0: call 0x5fc680 */ r_esp -= 4; W32(r_esp, 0x5f1fb5u); f_005fc680();
    /* 005f1fb5: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005f1fb8: jmp 0x5f1fc1 */ goto L_005f1fc1;
L_005f1fba:; BB(0x005f1fba);
    /* 005f1fba: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005f1fc1:; BB(0x005f1fc1);
    /* 005f1fc1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f1fc4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005f1fc7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f1fce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fd0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fd2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fd4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fd6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fd8: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fdd: push 0x2712 */ { u32 v = 0x2712u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fe2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fe4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fe6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f1fe9: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005f1fec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fed: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f1ff0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005f1ff2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ff3: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f1ff6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ff7: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f1ffc: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f1fff: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5f2004u); f_005f9de0();
    /* 005f2004: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f2007: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f200a: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f200d: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f2012u); f_0060c9a0();
    /* 005f2012: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f2015: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2018: jne 0x5f206f */ if (!fZ) goto L_005f206f;
L_005f201a:; BB(0x005f201a);
    /* 005f201a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f201d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f201e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f2021: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2024: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f2029u); f_0060ca40();
    /* 005f2029: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005f202c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f202f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2030: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f2033: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2036: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f203bu); f_0060ca40();
    /* 005f203b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005f203e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005f2041: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f2043: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005f2046: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005f2049: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f204bu); call_ind(t); }
    /* 005f204b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f204c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005f204f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f2051: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005f2054: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005f2057: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f2059u); call_ind(t); }
    /* 005f2059: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f205c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f205d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f2060: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f2062: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f2065: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005f2068: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f206au); call_ind(t); }
    /* 005f206a: jmp 0x5f2159 */ goto L_005f2159;
L_005f206f:; BB(0x005f206f);
    /* 005f206f: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f2073: jge 0x5f2086 */ if ((fS==fO)) goto L_005f2086;
L_005f2075:; BB(0x005f2075);
    /* 005f2075: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f2078: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2079: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f207c: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f207f: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x5f2084u); f_0060c7d0();
    /* 005f2084: jmp 0x5f2099 */ goto L_005f2099;
L_005f2086:; BB(0x005f2086);
    /* 005f2086: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f2089: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f208a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f208d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f208e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f2091: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2094: call 0x60cb20 */ r_esp -= 4; W32(r_esp, 0x5f2099u); f_0060cb20();
L_005f2099:; BB(0x005f2099);
    /* 005f2099: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f209c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f209f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005f20a2:; BB(0x005f20a2);
    /* 005f20a2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f20a5: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f20a8: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f20adu); f_0060c9a0();
    /* 005f20ad: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f20b0: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f20b3: jge 0x5f2110 */ if ((fS==fO)) goto L_005f2110;
L_005f20b5:; BB(0x005f20b5);
    /* 005f20b5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f20b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f20b9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f20bc: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f20bf: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f20c4u); f_0060ca40();
    /* 005f20c4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005f20c7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f20ca: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f20cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f20ce: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f20d1: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f20d4: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f20d9u); f_0060ca40();
    /* 005f20d9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f20dc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f20df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f20e1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f20e4: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005f20e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f20e9u); call_ind(t); }
    /* 005f20e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f20ea: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f20ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f20ef: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f20f2: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005f20f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f20f7u); call_ind(t); }
    /* 005f20f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f20f8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f20fb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f20fd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f2100: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005f2103: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f2105u); call_ind(t); }
    /* 005f2105: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f2108: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f210b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f210e: jmp 0x5f20a2 */ goto L_005f20a2;
L_005f2110:; BB(0x005f2110);
    /* 005f2110: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f2113: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2116: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f211bu); f_0060c9a0();
    /* 005f211b: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f211e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f211f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f2122: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2125: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f212au); f_0060ca40();
    /* 005f212a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005f212d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f2130: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f2132: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f2135: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005f2138: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f213au); call_ind(t); }
    /* 005f213a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f213b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f213e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f2140: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f2143: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005f2146: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f2148u); call_ind(t); }
    /* 005f2148: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f214b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f214c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f214f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f2151: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f2154: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005f2157: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f2159u); call_ind(t); }
L_005f2159:; BB(0x005f2159);
    /* 005f2159: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f215b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f215d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f2160: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f2162: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2163: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f2166: call 0x5f2370 */ r_esp -= 4; W32(r_esp, 0x5f216bu); f_005f2370();
    /* 005f216b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005f216d:; BB(0x005f216d);
    /* 005f216d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2170: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2177: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f2178: mov esp, ebp */ r_esp = r_ebp;
    /* 005f217a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f217b: ret 0xc */ FN_RET(0x005f1e60); r_esp += 16; return;
}

void f_005f2d40(void) /* sciRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2d40);
    /* 005f2d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d41: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f2d47: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005f2d49: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2d4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2d4c: ret 8 */ FN_RET(0x005f2d40); r_esp += 12; return;
}

void f_005f2d50(void) /* sciRoom::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2d50);
    /* 005f2d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d51: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2d53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f2d57: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f2d59: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2d5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2d5c: ret 0xc */ FN_RET(0x005f2d50); r_esp += 16; return;
}

