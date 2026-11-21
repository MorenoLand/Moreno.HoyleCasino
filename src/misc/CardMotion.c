#include "protos.h"

void f_00463e70(void) /* CardMotion::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463e70);
    /* 00463e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00463e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463e74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00463e77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463e7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463e7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463e7e: call 0x6069b0 */ r_esp -= 4; W32(r_esp, 0x463e83u); f_006069b0();
    /* 00463e83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463e86: mov dword ptr [ecx], 0x6ba8e8 */ W32((u32)(r_ecx), 0x6ba8e8u);
    /* 00463e8c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463e8f: mov esp, ebp */ r_esp = r_ebp;
    /* 00463e91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463e92: ret 4 */ FN_RET(0x00463e70); r_esp += 8; return;
}

void f_00463ea0(void) /* CardMotion::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463ea0);
    /* 00463ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00463ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00463ea7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00463eaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463eab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463eae: call 0x606a60 */ r_esp -= 4; W32(r_esp, 0x463eb3u); f_00606a60();
    /* 00463eb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463eb6: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00463eb9: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x463ebeu); f_005f53c0();
    /* 00463ebe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463ec1: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00463ec4: push 0x3ed */ { u32 v = 0x3edu; r_esp -= 4; W32(r_esp, v); }
    /* 00463ec9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463ecc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00463ecf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463ed2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00463ed5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00463ed7: mov ecx, eax */ r_ecx = r_eax;
    /* 00463ed9: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00463edc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x463edeu); call_ind(t); }
    /* 00463ede: mov esp, ebp */ r_esp = r_ebp;
    /* 00463ee0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463ee1: ret 4 */ FN_RET(0x00463ea0); r_esp += 8; return;
}

void f_00463ef0(void) /* CardMotion::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00463ef0);
    /* 00463ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00463ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00463ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00463ef7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463efa: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00463efd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00463efe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463f01: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00463f04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463f07: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00463f0a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00463f0c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00463f0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x463f11u); call_ind(t); }
    /* 00463f11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00463f14: call 0x606de0 */ r_esp -= 4; W32(r_esp, 0x463f19u); f_00606de0();
    /* 00463f19: mov esp, ebp */ r_esp = r_ebp;
    /* 00463f1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00463f1c: ret  */ FN_RET(0x00463ef0); r_esp += 4; return;
}

void f_00606aa0(void) /* CardMotion::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606aa0);
    /* 00606aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00606aa3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606aa6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00606aa9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606aac: movzx ecx, byte ptr [eax + 0xc] */ r_ecx = (u32)R8((u32)(r_eax+0xcu));
    /* 00606ab0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606ab2: jne 0x606ab9 */ if (!fZ) goto L_00606ab9;
L_00606ab4:; BB(0x00606ab4);
    /* 00606ab4: jmp 0x606bad */ goto L_00606bad;
L_00606ab9:; BB(0x00606ab9);
    /* 00606ab9: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00606abf: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x606ac4u); f_005f3e50();
    /* 00606ac4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606ac7: sub eax, dword ptr [edx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00606aca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606acb: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x606ad0u); f_00686eba();
    /* 00606ad0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00606ad3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606ad6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00606ad9: cmp eax, dword ptr [edx + 0x184] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x184u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606adf: jl 0x606bad */ if ((fS!=fO)) goto L_00606bad;
L_00606ae5:; BB(0x00606ae5);
    /* 00606ae5: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00606aeb: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x606af0u); f_005f3e50();
    /* 00606af0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606af3: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00606af6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606af9: movzx eax, byte ptr [edx + 0xc] */ r_eax = (u32)R8((u32)(r_edx+0xcu));
    /* 00606afd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606aff: je 0x606bad */ if (fZ) goto L_00606bad;
L_00606b05:; BB(0x00606b05);
    /* 00606b05: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606b08: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00606b0b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606b0e: fadd dword ptr [edx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x20u));
    /* 00606b11: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606b14: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 00606b17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606b1a: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 00606b1d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606b20: fadd dword ptr [edx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x24u));
    /* 00606b23: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606b26: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00606b29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606b2c: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00606b2f: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x606b34u); f_00686cc0();
    /* 00606b34: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00606b37: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606b3a: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 00606b3d: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x606b42u); f_00686cc0();
    /* 00606b42: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00606b45: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606b48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00606b49: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00606b4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606b4d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606b50: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00606b53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606b56: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00606b59: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00606b5b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00606b5e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x606b60u); call_ind(t); }
    /* 00606b60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606b63: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00606b66: sub edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00606b69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00606b6a: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x606b6fu); f_00686eba();
    /* 00606b6f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00606b72: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606b75: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00606b78: cmp eax, dword ptr [edx + 0x188] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x188u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606b7e: jge 0x606bad */ if ((fS==fO)) goto L_00606bad;
L_00606b80:; BB(0x00606b80);
    /* 00606b80: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606b83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606b86: sub ecx, dword ptr [eax + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00606b89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606b8a: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x606b8fu); f_00686eba();
    /* 00606b8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00606b92: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606b95: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00606b98: cmp eax, dword ptr [ecx + 0x188] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x188u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606b9e: jge 0x606bad */ if ((fS==fO)) goto L_00606bad;
L_00606ba0:; BB(0x00606ba0);
    /* 00606ba0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606ba3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00606ba5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606ba8: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00606bab: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x606badu); call_ind(t); }
L_00606bad:; BB(0x00606bad);
    /* 00606bad: mov esp, ebp */ r_esp = r_ebp;
    /* 00606baf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606bb0: ret  */ FN_RET(0x00606aa0); r_esp += 4; return;
}

void f_00606bc0(void) /* CardMotion::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606bc0);
    /* 00606bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00606bc3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606bc6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00606bc9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606bcc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00606bcf: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00606bd2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606bd5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00606bd8: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00606bdb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606bde: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606be2: jne 0x606be9 */ if (!fZ) goto L_00606be9;
L_00606be4:; BB(0x00606be4);
    /* 00606be4: jmp 0x606dd1 */ goto L_00606dd1;
L_00606be9:; BB(0x00606be9);
    /* 00606be9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606bec: mov byte ptr [edx + 0xc], 1 */ W8((u32)(r_edx+0xcu), 0x1u);
    /* 00606bf0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606bf3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00606bf6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606bf9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00606bfc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00606bfe: mov ecx, eax */ r_ecx = r_eax;
    /* 00606c00: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00606c03: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x606c05u); call_ind(t); }
    /* 00606c05: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00606c08: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 00606c0b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606c0e: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 00606c11: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606c14: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00606c17: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606c1a: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00606c1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00606c1f: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00606c22: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x606c24u); call_ind(t); }
    /* 00606c24: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00606c27: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 00606c2a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606c2d: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 00606c30: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606c33: fild dword ptr [edx + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x10u)));
    /* 00606c36: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606c39: fsub dword ptr [eax + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x18u));
    /* 00606c3c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606c3f: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 00606c42: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606c45: fild dword ptr [edx + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x14u)));
    /* 00606c48: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606c4b: fsub dword ptr [eax + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x1cu));
    /* 00606c4e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606c51: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 00606c54: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606c57: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00606c5a: fild dword ptr [eax + 0x188] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x188u)));
    /* 00606c60: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00606c63: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00606c66: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00606c6c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00606c6e: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00606c71: jp 0x606c7e */ if (fP) goto L_00606c7e;
L_00606c73:; BB(0x00606c73);
    /* 00606c73: fld dword ptr [0x6d7dfc] */ FPUSH(R_F32((u32)(0x6d7dfcu)));
    /* 00606c79: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 00606c7c: jmp 0x606ca4 */ goto L_00606ca4;
L_00606c7e:; BB(0x00606c7e);
    /* 00606c7e: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00606c81: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00606c87: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00606c89: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00606c8c: jp 0x606c98 */ if (fP) goto L_00606c98;
L_00606c8e:; BB(0x00606c8e);
    /* 00606c8e: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00606c91: fchs  */ ST(0) = -ST(0);
    /* 00606c93: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00606c96: jmp 0x606c9e */ goto L_00606c9e;
L_00606c98:; BB(0x00606c98);
    /* 00606c98: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00606c9b: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
L_00606c9e:; BB(0x00606c9e);
    /* 00606c9e: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00606ca1: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
L_00606ca4:; BB(0x00606ca4);
    /* 00606ca4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606ca7: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 00606caa: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00606cb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00606cb2: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00606cb5: jp 0x606cc4 */ if (fP) goto L_00606cc4;
L_00606cb7:; BB(0x00606cb7);
    /* 00606cb7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606cba: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 00606cbd: fchs  */ ST(0) = -ST(0);
    /* 00606cbf: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00606cc2: jmp 0x606ccd */ goto L_00606ccd;
L_00606cc4:; BB(0x00606cc4);
    /* 00606cc4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606cc7: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 00606cca: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_00606ccd:; BB(0x00606ccd);
    /* 00606ccd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606cd0: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 00606cd3: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00606cd9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00606cdb: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00606cde: jp 0x606ced */ if (fP) goto L_00606ced;
L_00606ce0:; BB(0x00606ce0);
    /* 00606ce0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606ce3: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 00606ce6: fchs  */ ST(0) = -ST(0);
    /* 00606ce8: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00606ceb: jmp 0x606cf6 */ goto L_00606cf6;
L_00606ced:; BB(0x00606ced);
    /* 00606ced: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606cf0: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 00606cf3: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
L_00606cf6:; BB(0x00606cf6);
    /* 00606cf6: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00606cf9: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00606cfc: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00606cfe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00606d00: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00606d03: jne 0x606d36 */ if (!fZ) goto L_00606d36;
L_00606d05:; BB(0x00606d05);
    /* 00606d05: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606d08: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 00606d0b: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00606d11: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00606d13: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00606d16: jp 0x606d25 */ if (fP) goto L_00606d25;
L_00606d18:; BB(0x00606d18);
    /* 00606d18: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606d1b: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 00606d1e: fchs  */ ST(0) = -ST(0);
    /* 00606d20: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00606d23: jmp 0x606d2e */ goto L_00606d2e;
L_00606d25:; BB(0x00606d25);
    /* 00606d25: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606d28: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 00606d2b: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
L_00606d2e:; BB(0x00606d2e);
    /* 00606d2e: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00606d31: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00606d34: jmp 0x606d65 */ goto L_00606d65;
L_00606d36:; BB(0x00606d36);
    /* 00606d36: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606d39: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 00606d3c: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00606d42: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00606d44: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00606d47: jp 0x606d56 */ if (fP) goto L_00606d56;
L_00606d49:; BB(0x00606d49);
    /* 00606d49: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606d4c: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 00606d4f: fchs  */ ST(0) = -ST(0);
    /* 00606d51: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00606d54: jmp 0x606d5f */ goto L_00606d5f;
L_00606d56:; BB(0x00606d56);
    /* 00606d56: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606d59: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 00606d5c: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
L_00606d5f:; BB(0x00606d5f);
    /* 00606d5f: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 00606d62: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
L_00606d65:; BB(0x00606d65);
    /* 00606d65: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00606d68: fdiv dword ptr [ebp - 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffff4u));
    /* 00606d6b: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00606d6e: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00606d71: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00606d77: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x606d7cu); f_00686cc0();
    /* 00606d7c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00606d7f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606d83: jne 0x606d8c */ if (!fZ) goto L_00606d8c;
L_00606d85:; BB(0x00606d85);
    /* 00606d85: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00606d8c:; BB(0x00606d8c);
    /* 00606d8c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606d8f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00606d92: cmp dword ptr [edx + 0x184], 0 */ {  u32 a = R32((u32)(r_edx+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606d99: jne 0x606da2 */ if (!fZ) goto L_00606da2;
L_00606d9b:; BB(0x00606d9b);
    /* 00606d9b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_00606da2:; BB(0x00606da2);
    /* 00606da2: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 00606da5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606da8: fdivr dword ptr [eax + 0x20] */ ST(0) = R_F32((u32)(r_eax+0x20u)) / ST(0);
    /* 00606dab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606dae: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 00606db1: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 00606db4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606db7: fdivr dword ptr [edx + 0x24] */ ST(0) = R_F32((u32)(r_edx+0x24u)) / ST(0);
    /* 00606dba: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606dbd: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 00606dc0: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00606dc6: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x606dcbu); f_005f3e50();
    /* 00606dcb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00606dce: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
L_00606dd1:; BB(0x00606dd1);
    /* 00606dd1: mov esp, ebp */ r_esp = r_ebp;
    /* 00606dd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606dd4: ret 8 */ FN_RET(0x00606bc0); r_esp += 12; return;
}

