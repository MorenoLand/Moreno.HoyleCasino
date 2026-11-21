#include "protos.h"

void f_00653e00(void) /* sub_653E00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00653e00);
    /* 00653e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00653e03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653e06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00653e09: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653e0c: mov ecx, dword ptr [eax + 0x56c] */ r_ecx = R32((u32)(r_eax+0x56cu));
    /* 00653e12: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x653e17u); f_005e4390();
    /* 00653e17: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00653e1a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653e1d: mov eax, dword ptr [edx + 0x570] */ r_eax = R32((u32)(r_edx+0x570u));
    /* 00653e23: mov al, byte ptr [ecx + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax))) & 0xffu);
    /* 00653e26: mov esp, ebp */ r_esp = r_ebp;
    /* 00653e28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653e29: ret  */ FN_RET(0x00653e00); r_esp += 4; return;
}

void f_00653e30(void) /* sub_653E30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00653e30);
    /* 00653e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00653e33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653e36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00653e39: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00653e3c: mov ecx, dword ptr [eax + 0x56c] */ r_ecx = R32((u32)(r_eax+0x56cu));
    /* 00653e42: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x653e47u); f_005e4390();
    /* 00653e47: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00653e4a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00653e4d: mov al, byte ptr [ecx + edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_edx))) & 0xffu);
    /* 00653e50: mov esp, ebp */ r_esp = r_ebp;
    /* 00653e52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00653e53: ret 4 */ FN_RET(0x00653e30); r_esp += 8; return;
}

void f_00653ec0(void) /* sub_653EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00653ec0);
    /* 00653ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00653ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00653ec3: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00653ec6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00653ec9: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 00653ecd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00653ed4: jmp 0x653edf */ goto L_00653edf;
L_00653ed6:; BB(0x00653ed6);
    /* 00653ed6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653ed9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00653edc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00653edf:; BB(0x00653edf);
    /* 00653edf: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00653ee2: mov edx, dword ptr [ecx + 0x56c] */ r_edx = R32((u32)(r_ecx+0x56cu));
    /* 00653ee8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00653eeb: mov ecx, dword ptr [eax + 0x56c] */ r_ecx = R32((u32)(r_eax+0x56cu));
    /* 00653ef1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00653ef3: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00653ef9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x653efbu); call_ind(t); }
    /* 00653efb: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653efe: jge 0x6540e5 */ if ((fS==fO)) goto L_006540e5;
L_00653f04:; BB(0x00653f04);
    /* 00653f04: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00653f0b: jmp 0x653f16 */ goto L_00653f16;
L_00653f0d:; BB(0x00653f0d);
    /* 00653f0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653f10: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00653f13: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00653f16:; BB(0x00653f16);
    /* 00653f16: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00653f1c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00653f1e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653f24: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 00653f2a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x653f2cu); call_ind(t); }
    /* 00653f2c: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653f2f: jge 0x6540e0 */ if ((fS==fO)) goto L_006540e0;
L_00653f35:; BB(0x00653f35);
    /* 00653f35: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00653f38: mov ecx, dword ptr [eax + 0x56c] */ r_ecx = R32((u32)(r_eax+0x56cu));
    /* 00653f3e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00653f41: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653f44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00653f45: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00653f48: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00653f4b: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x653f50u); f_0060ca40();
    /* 00653f50: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00653f53: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00653f56: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00653f59: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00653f5c: movzx eax, byte ptr [ecx + edx] */ r_eax = (u32)R8((u32)(r_ecx+r_edx));
    /* 00653f60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653f62: je 0x6540db */ if (fZ) goto L_006540db;
L_00653f68:; BB(0x00653f68);
    /* 00653f68: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 00653f6c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00653f73: jmp 0x653f7e */ goto L_00653f7e;
L_00653f75:; BB(0x00653f75);
    /* 00653f75: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00653f78: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00653f7b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00653f7e:; BB(0x00653f7e);
    /* 00653f7e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00653f84: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00653f86: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00653f8c: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 00653f92: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x653f94u); call_ind(t); }
    /* 00653f94: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00653f97: jge 0x65407d */ if ((fS==fO)) goto L_0065407d;
L_00653f9d:; BB(0x00653f9d);
    /* 00653f9d: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00653fa2: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00653fa5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00653fa8: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00653fab: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00653fae: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00653fb1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x653fb6u); f_0063aac0();
    /* 00653fb6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00653fb8: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00653fbb: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653fbf: je 0x653fdd */ if (fZ) goto L_00653fdd;
L_00653fc1:; BB(0x00653fc1);
    /* 00653fc1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00653fc4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x653fc9u); f_0063aac0();
    /* 00653fc9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00653fcb: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00653fce: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653fd2: je 0x653fdd */ if (fZ) goto L_00653fdd;
L_00653fd4:; BB(0x00653fd4);
    /* 00653fd4: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00653fdb: jmp 0x653fe4 */ goto L_00653fe4;
L_00653fdd:; BB(0x00653fdd);
    /* 00653fdd: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
L_00653fe4:; BB(0x00653fe4);
    /* 00653fe4: movzx eax, byte ptr [ebp - 0x3c] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffc4u));
    /* 00653fe8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00653fea: je 0x654078 */ if (fZ) goto L_00654078;
L_00653ff0:; BB(0x00653ff0);
    /* 00653ff0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00653ff3: mov edx, dword ptr [ecx + 0x56c] */ r_edx = R32((u32)(r_ecx+0x56cu));
    /* 00653ff9: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00653ffc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00653fff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654000: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00654003: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00654006: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x65400bu); f_0060ca40();
    /* 0065400b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0065400e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654014: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00654017: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065401a: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0065401d: call 0x520e60 */ r_esp -= 4; W32(r_esp, 0x654022u); f_00520e60();
    /* 00654022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654023: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00654026: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00654029: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065402a: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x65402fu); f_00686ec0();
    /* 0065402f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00654032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654034: jne 0x654078 */ if (!fZ) goto L_00654078;
L_00654036:; BB(0x00654036);
    /* 00654036: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
    /* 0065403a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065403d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065403e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00654043: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00654046: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654049: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0065404c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654052: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00654055: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00654058: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0065405b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065405d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00654060: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x654062u); call_ind(t); }
    /* 00654062: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654068: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0065406b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065406e: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00654071: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x654076u); f_0063b0a0();
    /* 00654076: jmp 0x65407d */ goto L_0065407d;
L_00654078:; BB(0x00654078);
    /* 00654078: jmp 0x653f75 */ goto L_00653f75;
L_0065407d:; BB(0x0065407d);
    /* 0065407d: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00654081: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00654083: jne 0x6540db */ if (!fZ) goto L_006540db;
L_00654085:; BB(0x00654085);
    /* 00654085: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00654088: mov eax, dword ptr [edx + 0x56c] */ r_eax = R32((u32)(r_edx+0x56cu));
    /* 0065408e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00654091: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00654094: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654095: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00654098: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065409b: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6540a0u); f_0060ca40();
    /* 006540a0: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006540a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006540a4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006540a7: add ecx, 0x1c0 */ {  u32 a = r_ecx; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006540ad: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x6540b2u); f_0063ab10();
    /* 006540b2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006540b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006540b6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006540b9: add ecx, 0x1c0 */ {  u32 a = r_ecx; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006540bf: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006540c2: mov edx, dword ptr [eax + 0x1c0] */ r_edx = R32((u32)(r_eax+0x1c0u));
    /* 006540c8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006540cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6540cdu); call_ind(t); }
    /* 006540cd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006540d0: add ecx, 0x1c0 */ {  u32 a = r_ecx; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006540d6: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x6540dbu); f_0063b0a0();
L_006540db:; BB(0x006540db);
    /* 006540db: jmp 0x653f0d */ goto L_00653f0d;
L_006540e0:; BB(0x006540e0);
    /* 006540e0: jmp 0x653ed6 */ goto L_00653ed6;
L_006540e5:; BB(0x006540e5);
    /* 006540e5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006540e8: call 0x654100 */ r_esp -= 4; W32(r_esp, 0x6540edu); f_00654100();
    /* 006540ed: mov esp, ebp */ r_esp = r_ebp;
    /* 006540ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006540f0: ret  */ FN_RET(0x00653ec0); r_esp += 4; return;
}

