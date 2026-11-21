#include "protos.h"

void f_00615bb0(void) /* sciScrollThumb::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615bb0);
    /* 00615bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00615bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615bb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615bb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615bba: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x615bbfu); f_005f5bf0();
    /* 00615bbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615bc2: mov dword ptr [eax], 0x6d887c */ W32((u32)(r_eax), 0x6d887cu);
    /* 00615bc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615bcb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00615bce: mov dword ptr [ecx + 0x184], edx */ W32((u32)(r_ecx+0x184u), r_edx);
    /* 00615bd4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615bd7: mov dword ptr [eax + 0x188], 0 */ W32((u32)(r_eax+0x188u), 0x0u);
    /* 00615be1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615be4: mov dword ptr [ecx + 0x18c], 0 */ W32((u32)(r_ecx+0x18cu), 0x0u);
    /* 00615bee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615bf1: mov esp, ebp */ r_esp = r_ebp;
    /* 00615bf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615bf4: ret 4 */ FN_RET(0x00615bb0); r_esp += 8; return;
}

void f_00615c20(void) /* sciScrollThumb::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615c20);
    /* 00615c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00615c23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00615c26: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615c29: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615c2c: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00615c32: call 0x615140 */ r_esp -= 4; W32(r_esp, 0x615c37u); f_00615140();
    /* 00615c37: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00615c3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615c3c: je 0x615c5a */ if (fZ) goto L_00615c5a;
L_00615c3e:; BB(0x00615c3e);
    /* 00615c3e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00615c41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00615c42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615c45: call 0x5f4b60 */ r_esp -= 4; W32(r_esp, 0x615c4au); f_005f4b60();
    /* 00615c4a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00615c4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615c4f: je 0x615c5a */ if (fZ) goto L_00615c5a;
L_00615c51:; BB(0x00615c51);
    /* 00615c51: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00615c58: jmp 0x615c61 */ goto L_00615c61;
L_00615c5a:; BB(0x00615c5a);
    /* 00615c5a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00615c61:; BB(0x00615c61);
    /* 00615c61: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00615c64: mov esp, ebp */ r_esp = r_ebp;
    /* 00615c66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615c67: ret 4 */ FN_RET(0x00615c20); r_esp += 8; return;
}

void f_00615c70(void) /* sciScrollThumb::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615c70);
    /* 00615c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00615c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615c74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615c77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00615c7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615c7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615c7e: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x615c83u); f_005f4ed0();
    /* 00615c83: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00615c86: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 00615c8a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615c8d: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 00615c93: call 0x615160 */ r_esp -= 4; W32(r_esp, 0x615c98u); f_00615160();
    /* 00615c98: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00615c9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615c9d: je 0x615cbc */ if (fZ) goto L_00615cbc;
L_00615c9f:; BB(0x00615c9f);
    /* 00615c9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615ca2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615ca4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615ca7: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00615caa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615cacu); call_ind(t); }
    /* 00615cac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00615caf: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00615cb2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00615cb4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615cb7: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00615cba: jmp 0x615cd7 */ goto L_00615cd7;
L_00615cbc:; BB(0x00615cbc);
    /* 00615cbc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615cbf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615cc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615cc4: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00615cc7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615cc9u); call_ind(t); }
    /* 00615cc9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00615ccc: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00615ccf: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00615cd1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615cd4: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
L_00615cd7:; BB(0x00615cd7);
    /* 00615cd7: mov esp, ebp */ r_esp = r_ebp;
    /* 00615cd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615cda: ret 4 */ FN_RET(0x00615c70); r_esp += 8; return;
}

void f_00615ce0(void) /* sciScrollThumb::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615ce0);
    /* 00615ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00615ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615ce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615ce7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00615cea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615ceb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615cee: call 0x5f4f50 */ r_esp -= 4; W32(r_esp, 0x615cf3u); f_005f4f50();
    /* 00615cf3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00615cf6: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 00615cfa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615cfd: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 00615d03: call 0x615740 */ r_esp -= 4; W32(r_esp, 0x615d08u); f_00615740();
    /* 00615d08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615d0b: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00615d11: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00615d14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00615d15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615d18: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00615d1e: call 0x615540 */ r_esp -= 4; W32(r_esp, 0x615d23u); f_00615540();
    /* 00615d23: mov esp, ebp */ r_esp = r_ebp;
    /* 00615d25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615d26: ret 4 */ FN_RET(0x00615ce0); r_esp += 8; return;
}

void f_00615d30(void) /* sciScrollThumb::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615d30);
    /* 00615d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00615d33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615d34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615d37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615d3a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00615d3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615d3f: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 00615d45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615d47u); call_ind(t); }
    /* 00615d47: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00615d4a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615d4c: je 0x615e72 */ if (fZ) goto L_00615e72;
L_00615d52:; BB(0x00615d52);
    /* 00615d52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615d55: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 00615d5b: call 0x615160 */ r_esp -= 4; W32(r_esp, 0x615d60u); f_00615160();
    /* 00615d60: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00615d63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615d65: je 0x615de3 */ if (fZ) goto L_00615de3;
L_00615d67:; BB(0x00615d67);
    /* 00615d67: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00615d6a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615d6d: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00615d70: sub eax, dword ptr [edx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00615d73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615d76: cmp eax, dword ptr [ecx + 0x188] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x188u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00615d7c: jge 0x615d97 */ if ((fS==fO)) goto L_00615d97;
L_00615d7e:; BB(0x00615d7e);
    /* 00615d7e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615d81: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00615d87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615d88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615d8b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615d8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615d90: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00615d93: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615d95u); call_ind(t); }
    /* 00615d95: jmp 0x615de1 */ goto L_00615de1;
L_00615d97:; BB(0x00615d97);
    /* 00615d97: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00615d9a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615d9d: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00615da0: sub eax, dword ptr [edx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00615da3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615da6: cmp eax, dword ptr [ecx + 0x18c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00615dac: jle 0x615dc7 */ if ((fZ||fS!=fO)) goto L_00615dc7;
L_00615dae:; BB(0x00615dae);
    /* 00615dae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615db1: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00615db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615db8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615dbb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615dbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615dc0: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00615dc3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615dc5u); call_ind(t); }
    /* 00615dc5: jmp 0x615de1 */ goto L_00615de1;
L_00615dc7:; BB(0x00615dc7);
    /* 00615dc7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00615dca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615dcd: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00615dd0: sub eax, dword ptr [edx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00615dd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615dd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615dd7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615dd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615ddc: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00615ddf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615de1u); call_ind(t); }
L_00615de1:; BB(0x00615de1);
    /* 00615de1: jmp 0x615e5d */ goto L_00615e5d;
L_00615de3:; BB(0x00615de3);
    /* 00615de3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00615de6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615de9: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00615dec: sub eax, dword ptr [edx + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00615def: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615df2: cmp eax, dword ptr [ecx + 0x188] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x188u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00615df8: jge 0x615e13 */ if ((fS==fO)) goto L_00615e13;
L_00615dfa:; BB(0x00615dfa);
    /* 00615dfa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615dfd: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00615e03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615e04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615e07: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615e09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615e0c: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00615e0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615e11u); call_ind(t); }
    /* 00615e11: jmp 0x615e5d */ goto L_00615e5d;
L_00615e13:; BB(0x00615e13);
    /* 00615e13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00615e16: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615e19: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00615e1c: sub eax, dword ptr [edx + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00615e1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615e22: cmp eax, dword ptr [ecx + 0x18c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x18cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00615e28: jle 0x615e43 */ if ((fZ||fS!=fO)) goto L_00615e43;
L_00615e2a:; BB(0x00615e2a);
    /* 00615e2a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615e2d: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00615e33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615e34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615e37: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615e39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615e3c: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00615e3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615e41u); call_ind(t); }
    /* 00615e41: jmp 0x615e5d */ goto L_00615e5d;
L_00615e43:; BB(0x00615e43);
    /* 00615e43: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00615e46: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615e49: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00615e4c: sub eax, dword ptr [edx + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00615e4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615e50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615e53: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615e55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615e58: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00615e5b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615e5du); call_ind(t); }
L_00615e5d:; BB(0x00615e5d);
    /* 00615e5d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615e60: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 00615e66: call 0x615740 */ r_esp -= 4; W32(r_esp, 0x615e6bu); f_00615740();
    /* 00615e6b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00615e6e: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_00615e72:; BB(0x00615e72);
    /* 00615e72: mov esp, ebp */ r_esp = r_ebp;
    /* 00615e74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615e75: ret 4 */ FN_RET(0x00615d30); r_esp += 8; return;
}

