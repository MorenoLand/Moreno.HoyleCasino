#include "protos.h"

void f_006622a0(void) /* sub_6622A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006622a0);
    /* 006622a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006622a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006622a3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006622a6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006622a9: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 006622ab: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006622ae: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 006622b4: call 0x5fb4c0 */ r_esp -= 4; W32(r_esp, 0x6622b9u); f_005fb4c0();
    /* 006622b9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006622bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006622bf: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x6622c4u); f_00606490();
    /* 006622c4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006622c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006622ca: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006622cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006622ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006622d1: call 0x5ff920 */ r_esp -= 4; W32(r_esp, 0x6622d6u); f_005ff920();
    /* 006622d6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006622d9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006622dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006622de: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006622e1: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 006622e7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6622e9u); call_ind(t); }
    /* 006622e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006622ec: call 0x662ce0 */ r_esp -= 4; W32(r_esp, 0x6622f1u); f_00662ce0();
    /* 006622f1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006622f4: mov dword ptr [eax + 0x8c], 0 */ W32((u32)(r_eax+0x8cu), 0x0u);
    /* 006622fe: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00662300: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00662303: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00662306: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662307: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066230a: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 00662310: call 0x5fb510 */ r_esp -= 4; W32(r_esp, 0x662315u); f_005fb510();
    /* 00662315: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00662318: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066231b: call 0x5ff840 */ r_esp -= 4; W32(r_esp, 0x662320u); f_005ff840();
    /* 00662320: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00662323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662324: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662327: call 0x5ffb40 */ r_esp -= 4; W32(r_esp, 0x66232cu); f_005ffb40();
    /* 0066232c: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00662330: jg 0x662356 */ if ((!fZ&&fS==fO)) goto L_00662356;
L_00662332:; BB(0x00662332);
    /* 00662332: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00662334: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00662336: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662339: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 0066233f: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x662344u); f_005fbc80();
    /* 00662344: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 00662346: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00662348: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066234b: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 00662351: call 0x5fbcb0 */ r_esp -= 4; W32(r_esp, 0x662356u); f_005fbcb0();
L_00662356:; BB(0x00662356);
    /* 00662356: mov esp, ebp */ r_esp = r_ebp;
    /* 00662358: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662359: ret  */ FN_RET(0x006622a0); r_esp += 4; return;
}

void f_00662ce0(void) /* sub_662CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00662ce0);
    /* 00662ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00662ce3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662ce6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00662ce9: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00662ceb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662cee: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00662cf4: call 0x5fb4c0 */ r_esp -= 4; W32(r_esp, 0x662cf9u); f_005fb4c0();
    /* 00662cf9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00662cfc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00662cff: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x662d04u); f_00606490();
    /* 00662d04: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00662d07: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00662d0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662d0b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662d0e: call 0x661500 */ r_esp -= 4; W32(r_esp, 0x662d13u); f_00661500();
    /* 00662d13: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00662d16: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662d19: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00662d1f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662d22: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 00662d28: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00662d2a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00662d2d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x662d2fu); call_ind(t); }
    /* 00662d2f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662d32: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 00662d38: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662d3b: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00662d41: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00662d43: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00662d46: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x662d48u); call_ind(t); }
    /* 00662d48: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00662d4f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00662d53: jle 0x662d7a */ if ((fZ||fS!=fO)) goto L_00662d7a;
L_00662d55:; BB(0x00662d55);
    /* 00662d55: mov dword ptr [ebp - 0x1c], 0x131 */ W32((u32)(r_ebp+0xffffffe4u), 0x131u);
    /* 00662d5c: mov dword ptr [ebp - 0x18], 0xe8 */ W32((u32)(r_ebp+0xffffffe8u), 0xe8u);
    /* 00662d63: mov dword ptr [ebp - 0x10], 0x125 */ W32((u32)(r_ebp+0xfffffff0u), 0x125u);
    /* 00662d6a: mov dword ptr [ebp - 0xc], 0xe0 */ W32((u32)(r_ebp+0xfffffff4u), 0xe0u);
    /* 00662d71: mov dword ptr [ebp - 4], 0xfffffffc */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffcu);
    /* 00662d78: jmp 0x662d96 */ goto L_00662d96;
L_00662d7a:; BB(0x00662d7a);
    /* 00662d7a: mov dword ptr [ebp - 0x1c], 0x1a */ W32((u32)(r_ebp+0xffffffe4u), 0x1au);
    /* 00662d81: mov dword ptr [ebp - 0x18], 0x91 */ W32((u32)(r_ebp+0xffffffe8u), 0x91u);
    /* 00662d88: mov dword ptr [ebp - 0x10], 0xc8 */ W32((u32)(r_ebp+0xfffffff0u), 0xc8u);
    /* 00662d8f: mov dword ptr [ebp - 0xc], 0x99 */ W32((u32)(r_ebp+0xfffffff4u), 0x99u);
L_00662d96:; BB(0x00662d96);
    /* 00662d96: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00662d99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662d9a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00662d9d: add edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00662da0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662da1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662da4: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00662daa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662dad: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00662db3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00662db5: mov ecx, eax */ r_ecx = r_eax;
    /* 00662db7: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00662dba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x662dbcu); call_ind(t); }
    /* 00662dbc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662dbf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662dc0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662dc3: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 00662dc9: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x662dceu); f_005ecc60();
    /* 00662dce: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00662dd0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662dd3: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00662dd9: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x662ddeu); f_005eccb0();
    /* 00662dde: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662de1: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 00662de7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662dea: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00662df0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00662df2: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00662df5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x662df7u); call_ind(t); }
    /* 00662df7: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00662dfa: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00662dfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662dfe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662e01: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 00662e07: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662e0a: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 00662e10: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00662e12: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00662e15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x662e17u); call_ind(t); }
    /* 00662e17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662e18: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662e1b: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 00662e21: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00662e24: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00662e2a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00662e2c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00662e2f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x662e31u); call_ind(t); }
    /* 00662e31: mov esp, ebp */ r_esp = r_ebp;
    /* 00662e33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662e34: ret  */ FN_RET(0x00662ce0); r_esp += 4; return;
}

void f_00662e40(void) /* sub_662E40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00662e40);
    /* 00662e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00662e43: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662e46: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00662e49: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00662e4e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00662e51: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00662e53: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00662e56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00662e59: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x662e5eu); f_0063aac0();
    /* 00662e5e: mov dword ptr [eax], 2 */ W32((u32)(r_eax), 0x2u);
    /* 00662e64: push 0x6d3a14 */ { u32 v = 0x6d3a14u; r_esp -= 4; W32(r_esp, v); }
    /* 00662e69: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x662e6eu); f_00630f40();
    /* 00662e6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662e71: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00662e74: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00662e79: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00662e7c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00662e7e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00662e81: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00662e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662e85: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00662e88: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x662e8du); f_0063aac0();
    /* 00662e8d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00662e90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662e91: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x662e96u); f_00686d8e();
    /* 00662e96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662e99: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00662e9f: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00662ea2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00662ea4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00662ea7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662eaa: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x662eafu); f_0063aac0();
    /* 00662eaf: mov dword ptr [eax + 0x54], 0 */ W32((u32)(r_eax+0x54u), 0x0u);
    /* 00662eb6: push 0x6d39f4 */ { u32 v = 0x6d39f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00662ebb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x662ec0u); f_00630f40();
    /* 00662ec0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662ec3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00662ec6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00662ecc: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00662ecf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00662ed1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00662ed4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00662ed7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662ed8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00662edb: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00662ede: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662edf: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x662ee4u); f_00686d8e();
    /* 00662ee4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662ee7: mov esp, ebp */ r_esp = r_ebp;
    /* 00662ee9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00662eea: ret  */ FN_RET(0x00662e40); r_esp += 4; return;
}

void f_00662f30(void) /* sub_662F30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00662f30);
    /* 00662f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00662f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00662f33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662f35: push 0x6aca72 */ { u32 v = 0x6aca72u; r_esp -= 4; W32(r_esp, v); }
    /* 00662f3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00662f40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662f41: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00662f44: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00662f49: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00662f4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662f4c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00662f4f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00662f55: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00662f58: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00662f5d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x662f62u); f_00686d82();
    /* 00662f62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00662f65: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00662f68: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00662f6f: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00662f73: je 0x662f82 */ if (fZ) goto L_00662f82;
L_00662f75:; BB(0x00662f75);
    /* 00662f75: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00662f78: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x662f7du); f_005eaaf0();
    /* 00662f7d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00662f80: jmp 0x662f89 */ goto L_00662f89;
L_00662f82:; BB(0x00662f82);
    /* 00662f82: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00662f89:; BB(0x00662f89);
    /* 00662f89: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00662f8c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00662f8f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00662f96: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00662f99: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00662f9c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00662f9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00662fa0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00662fa2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00662fa4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00662fa7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00662fa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662faa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662fad: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x662fb2u); f_005eae80();
    /* 00662fb2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00662fb5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00662fb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00662fb9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662fbc: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x662fc1u); f_005eb000();
    /* 00662fc1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00662fc4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00662fc7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00662fc8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662fcb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00662fcd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662fd0: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00662fd6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x662fd8u); call_ind(t); }
    /* 00662fd8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662fdb: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x662fe0u); f_005f5550();
    /* 00662fe0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00662fe3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662fe6: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x662febu); f_005f5590();
    /* 00662feb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00662fee: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00662ff1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00662ff2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00662ff5: call 0x663040 */ r_esp -= 4; W32(r_esp, 0x662ffau); f_00663040();
    /* 00662ffa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00662ffd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00663000: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00663003: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00663006: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066300a: je 0x66301f */ if (fZ) goto L_0066301f;
L_0066300c:; BB(0x0066300c);
    /* 0066300c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066300e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00663011: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00663013: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00663016: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00663018: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66301au); call_ind(t); }
    /* 0066301a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0066301d: jmp 0x663026 */ goto L_00663026;
L_0066301f:; BB(0x0066301f);
    /* 0066301f: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00663026:; BB(0x00663026);
    /* 00663026: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663029: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00663030: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00663031: mov esp, ebp */ r_esp = r_ebp;
    /* 00663033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663034: ret 4 */ FN_RET(0x00662f30); r_esp += 8; return;
}

