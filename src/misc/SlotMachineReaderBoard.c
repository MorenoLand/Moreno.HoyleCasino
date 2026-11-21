#include "protos.h"

void f_00531f00(void) /* SlotMachineReaderBoard::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00531f00);
    /* 00531f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00531f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00531f03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00531f05: push 0x6a47e5 */ { u32 v = 0x6a47e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00531f0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00531f10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531f11: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00531f14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00531f19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00531f1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531f1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00531f1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00531f25: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00531f28: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00531f2b: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x531f30u); f_005f5bf0();
    /* 00531f30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00531f37: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00531f3a: mov dword ptr [eax], 0x6c3f7c */ W32((u32)(r_eax), 0x6c3f7cu);
    /* 00531f40: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00531f45: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x531f4au); f_00686d82();
    /* 00531f4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531f4d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00531f50: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00531f54: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531f58: je 0x531f67 */ if (fZ) goto L_00531f67;
L_00531f5a:; BB(0x00531f5a);
    /* 00531f5a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531f5d: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x531f62u); f_005eaaf0();
    /* 00531f62: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00531f65: jmp 0x531f6e */ goto L_00531f6e;
L_00531f67:; BB(0x00531f67);
    /* 00531f67: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00531f6e:; BB(0x00531f6e);
    /* 00531f6e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00531f71: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00531f74: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00531f78: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00531f7b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00531f7e: mov dword ptr [edx + 0x1d4], eax */ W32((u32)(r_edx+0x1d4u), r_eax);
    /* 00531f84: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00531f86: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00531f89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00531f8a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00531f8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00531f8e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00531f91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531f92: push 0x30f093 */ { u32 v = 0x30f093u; r_esp -= 4; W32(r_esp, v); }
    /* 00531f97: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00531f9a: mov ecx, dword ptr [ecx + 0x1d4] */ r_ecx = R32((u32)(r_ecx+0x1d4u));
    /* 00531fa0: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x531fa5u); f_005eae80();
    /* 00531fa5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00531fa8: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 00531fae: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00531fb1: mov ecx, dword ptr [ecx + 0x1d4] */ r_ecx = R32((u32)(r_ecx+0x1d4u));
    /* 00531fb7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00531fb9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00531fbc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x531fbeu); call_ind(t); }
    /* 00531fbe: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00531fc5: jmp 0x531fd0 */ goto L_00531fd0;
L_00531fc7:; BB(0x00531fc7);
    /* 00531fc7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00531fca: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00531fcd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00531fd0:; BB(0x00531fd0);
    /* 00531fd0: cmp dword ptr [ebp - 0x10], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00531fd4: jge 0x532078 */ if ((fS==fO)) goto L_00532078;
L_00531fda:; BB(0x00531fda);
    /* 00531fda: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00531fdf: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x531fe4u); f_00686d82();
    /* 00531fe4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531fe7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00531fea: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00531fee: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00531ff2: je 0x532001 */ if (fZ) goto L_00532001;
L_00531ff4:; BB(0x00531ff4);
    /* 00531ff4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00531ff7: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x531ffcu); f_005eaaf0();
    /* 00531ffc: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00531fff: jmp 0x532008 */ goto L_00532008;
L_00532001:; BB(0x00532001);
    /* 00532001: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00532008:; BB(0x00532008);
    /* 00532008: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053200b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0053200e: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00532012: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532015: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00532018: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053201b: mov dword ptr [ecx + eax*4 + 0x194], edx */ W32((u32)(r_ecx+r_eax*4+0x194u), r_edx);
    /* 00532022: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00532024: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00532027: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053202a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053202b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0053202e: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00532031: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00532032: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00532035: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00532038: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00532039: push 0x30f094 */ { u32 v = 0x30f094u; r_esp -= 4; W32(r_esp, v); }
    /* 0053203e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532041: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00532044: mov ecx, dword ptr [ecx + eax*4 + 0x194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 0053204b: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x532050u); f_005eae80();
    /* 00532050: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532053: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00532056: mov ecx, dword ptr [eax + edx*4 + 0x194] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 0053205d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532060: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00532063: mov edx, dword ptr [eax + edx*4 + 0x194] */ r_edx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 0053206a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053206c: mov ecx, edx */ r_ecx = r_edx;
    /* 0053206e: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00532071: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x532073u); call_ind(t); }
    /* 00532073: jmp 0x531fc7 */ goto L_00531fc7;
L_00532078:; BB(0x00532078);
    /* 00532078: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053207b: mov dword ptr [eax + 0x1d8], 0 */ W32((u32)(r_eax+0x1d8u), 0x0u);
    /* 00532085: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00532088: mov byte ptr [ecx + 0x1e8], 0 */ W8((u32)(r_ecx+0x1e8u), 0x0u);
    /* 0053208f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00532092: mov dword ptr [edx + 0x1dc], 0 */ W32((u32)(r_edx+0x1dcu), 0x0u);
    /* 0053209c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053209f: mov dword ptr [eax + 0x178], 0x14 */ W32((u32)(r_eax+0x178u), 0x14u);
    /* 005320a9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005320ac: mov dword ptr [ecx + 0x1e0], 0 */ W32((u32)(r_ecx+0x1e0u), 0x0u);
    /* 005320b6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005320b9: mov dword ptr [edx + 0x1e4], 0 */ W32((u32)(r_edx+0x1e4u), 0x0u);
    /* 005320c3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005320c6: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x5320cbu); f_005f5cc0();
    /* 005320cb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005320ce: call 0x5321d0 */ r_esp -= 4; W32(r_esp, 0x5320d3u); f_005321d0();
    /* 005320d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005320da: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005320dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005320e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005320e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005320e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005320ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005320eb: ret 0xc */ FN_RET(0x00531f00); r_esp += 16; return;
}

void f_005320f0(void) /* SlotMachineReaderBoard::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005320f0);
    /* 005320f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005320f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005320f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005320f5: push 0x6a4808 */ { u32 v = 0x6a4808u; r_esp -= 4; W32(r_esp, v); }
    /* 005320fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00532100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00532101: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00532104: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00532109: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053210b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053210c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053210f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00532115: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00532118: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053211b: mov dword ptr [eax], 0x6c3f7c */ W32((u32)(r_eax), 0x6c3f7cu);
    /* 00532121: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00532128: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053212b: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 00532131: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00532134: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00532137: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053213a: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053213e: je 0x532153 */ if (fZ) goto L_00532153;
L_00532140:; BB(0x00532140);
    /* 00532140: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00532142: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00532145: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00532147: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053214a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053214c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53214eu); call_ind(t); }
    /* 0053214e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00532151: jmp 0x53215a */ goto L_0053215a;
L_00532153:; BB(0x00532153);
    /* 00532153: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0053215a:; BB(0x0053215a);
    /* 0053215a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00532161: jmp 0x53216c */ goto L_0053216c;
L_00532163:; BB(0x00532163);
    /* 00532163: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532166: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00532169: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0053216c:; BB(0x0053216c);
    /* 0053216c: cmp dword ptr [ebp - 0x10], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00532170: jge 0x5321aa */ if ((fS==fO)) goto L_005321aa;
L_00532172:; BB(0x00532172);
    /* 00532172: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00532175: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00532178: mov ecx, dword ptr [eax + edx*4 + 0x194] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 0053217f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00532182: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00532185: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00532188: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053218c: je 0x5321a1 */ if (fZ) goto L_005321a1;
L_0053218e:; BB(0x0053218e);
    /* 0053218e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00532190: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00532193: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00532195: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00532198: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053219a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53219cu); call_ind(t); }
    /* 0053219c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0053219f: jmp 0x5321a8 */ goto L_005321a8;
L_005321a1:; BB(0x005321a1);
    /* 005321a1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005321a8:; BB(0x005321a8);
    /* 005321a8: jmp 0x532163 */ goto L_00532163;
L_005321aa:; BB(0x005321aa);
    /* 005321aa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005321b1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005321b4: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x5321b9u); f_005f5c40();
    /* 005321b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005321bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005321c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005321c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005321c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005321c7: ret  */ FN_RET(0x005320f0); r_esp += 4; return;
}

void f_005321d0(void) /* SlotMachineReaderBoard::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005321d0);
    /* 005321d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005321d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005321d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005321d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005321d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005321da: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x5321dfu); f_005eb5a0();
    /* 005321df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005321e2: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 005321e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005321eb: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 005321f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005321f3: mov ecx, eax */ r_ecx = r_eax;
    /* 005321f5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005321f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5321fau); call_ind(t); }
    /* 005321fa: mov esp, ebp */ r_esp = r_ebp;
    /* 005321fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005321fd: ret  */ FN_RET(0x005321d0); r_esp += 4; return;
}

void f_00532940(void) /* SlotMachineReaderBoard::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00532940);
    /* 00532940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00532941: mov ebp, esp */ r_ebp = r_esp;
    /* 00532943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00532944: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00532945: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00532948: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053294b: movzx ecx, byte ptr [eax + 0x24] */ r_ecx = (u32)R8((u32)(r_eax+0x24u));
    /* 0053294f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532951: je 0x532958 */ if (fZ) goto L_00532958;
L_00532953:; BB(0x00532953);
    /* 00532953: jmp 0x532a37 */ goto L_00532a37;
L_00532958:; BB(0x00532958);
    /* 00532958: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053295b: movzx eax, byte ptr [edx + 0x1e8] */ r_eax = (u32)R8((u32)(r_edx+0x1e8u));
    /* 00532962: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532964: je 0x5329e0 */ if (fZ) goto L_005329e0;
L_00532966:; BB(0x00532966);
    /* 00532966: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00532969: call 0x5325c0 */ r_esp -= 4; W32(r_esp, 0x53296eu); f_005325c0();
    /* 0053296e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00532971: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532973: je 0x5329ab */ if (fZ) goto L_005329ab;
L_00532975:; BB(0x00532975);
    /* 00532975: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00532978: call 0x532690 */ r_esp -= 4; W32(r_esp, 0x53297du); f_00532690();
    /* 0053297d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00532980: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532982: je 0x5329a3 */ if (fZ) goto L_005329a3;
L_00532984:; BB(0x00532984);
    /* 00532984: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00532987: call 0x532700 */ r_esp -= 4; W32(r_esp, 0x53298cu); f_00532700();
    /* 0053298c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053298f: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00532995: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00532998: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053299b: mov dword ptr [edx + 0x1e0], ecx */ W32((u32)(r_edx+0x1e0u), r_ecx);
    /* 005329a1: jmp 0x5329ab */ goto L_005329ab;
L_005329a3:; BB(0x005329a3);
    /* 005329a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005329a6: call 0x5326b0 */ r_esp -= 4; W32(r_esp, 0x5329abu); f_005326b0();
L_005329ab:; BB(0x005329ab);
    /* 005329ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005329ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005329b1: mov edx, dword ptr [eax + 0x1e0] */ r_edx = R32((u32)(r_eax+0x1e0u));
    /* 005329b7: cmp edx, dword ptr [ecx + 0x1e4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1e4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005329bd: jl 0x5329de */ if ((fS!=fO)) goto L_005329de;
L_005329bf:; BB(0x005329bf);
    /* 005329bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005329c2: mov byte ptr [eax + 0x1e8], 0 */ W8((u32)(r_eax+0x1e8u), 0x0u);
    /* 005329c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005329cc: mov dword ptr [ecx + 0x1e0], 0 */ W32((u32)(r_ecx+0x1e0u), 0x0u);
    /* 005329d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005329d9: call 0x532760 */ r_esp -= 4; W32(r_esp, 0x5329deu); f_00532760();
L_005329de:; BB(0x005329de);
    /* 005329de: jmp 0x532a37 */ goto L_00532a37;
L_005329e0:; BB(0x005329e0);
    /* 005329e0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005329e6: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x5329ebu); f_005f3e50();
    /* 005329eb: and eax, 0x80000007 */ {  u32 a = r_eax; u32 b = 0x80000007u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 005329f0: jns 0x5329f7 */ if (!fS) goto L_005329f7;
L_005329f2:; BB(0x005329f2);
    /* 005329f2: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005329f3: or eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005329f6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005329f7:; BB(0x005329f7);
    /* 005329f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005329f9: jne 0x532a37 */ if (!fZ) goto L_00532a37;
L_005329fb:; BB(0x005329fb);
    /* 005329fb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005329fe: cmp dword ptr [edx + 0x1d8], 3 */ {  u32 a = R32((u32)(r_edx+0x1d8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00532a05: jne 0x532a2f */ if (!fZ) goto L_00532a2f;
L_00532a07:; BB(0x00532a07);
    /* 00532a07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00532a0a: mov esi, dword ptr [eax + 0x1ec] */ r_esi = R32((u32)(r_eax+0x1ecu));
    /* 00532a10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00532a13: add esi, dword ptr [ecx + 0x1f0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1f0u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00532a19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00532a1c: call 0x5325a0 */ r_esp -= 4; W32(r_esp, 0x532a21u); f_005325a0();
    /* 00532a21: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00532a23: jle 0x532a2f */ if ((fZ||fS!=fO)) goto L_00532a2f;
L_00532a25:; BB(0x00532a25);
    /* 00532a25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00532a28: call 0x532200 */ r_esp -= 4; W32(r_esp, 0x532a2du); f_00532200();
    /* 00532a2d: jmp 0x532a37 */ goto L_00532a37;
L_00532a2f:; BB(0x00532a2f);
    /* 00532a2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00532a32: call 0x532760 */ r_esp -= 4; W32(r_esp, 0x532a37u); f_00532760();
L_00532a37:; BB(0x00532a37);
    /* 00532a37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00532a38: mov esp, ebp */ r_esp = r_ebp;
    /* 00532a3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00532a3b: ret  */ FN_RET(0x00532940); r_esp += 4; return;
}

