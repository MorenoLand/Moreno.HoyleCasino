#include "protos.h"

void f_0042d860(void) /* CrapsRollingDiceCycle::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d860);
    /* 0042d860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d861: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042d867: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042d86a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042d86b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d86e: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x42d873u); f_006010a0();
    /* 0042d873: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d876: mov dword ptr [ecx], 0x6b6e00 */ W32((u32)(r_ecx), 0x6b6e00u);
    /* 0042d87c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d87f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042d882: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0042d885: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042d888: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d88a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d88b: ret 8 */ FN_RET(0x0042d860); r_esp += 12; return;
}

void f_0042d890(void) /* CrapsRollingDiceCycle::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d890);
    /* 0042d890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d891: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d893: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042d896: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042d899: mov dword ptr [ebp - 8], 0xfc5 */ W32((u32)(r_ebp+0xfffffff8u), 0xfc5u);
    /* 0042d8a0: mov dword ptr [ebp - 4], 0xfc7 */ W32((u32)(r_ebp+0xfffffffcu), 0xfc7u);
    /* 0042d8a7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d8aa: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0042d8ad: mov edx, dword ptr [ebp + ecx*4 - 8] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffff8u));
    /* 0042d8b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d8b2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d8b5: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0042d8b8: mov edx, dword ptr [0x7906dc] */ r_edx = R32((u32)(0x7906dcu));
    /* 0042d8be: mov ecx, dword ptr [edx + ecx*4 + 0x148] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x148u));
    /* 0042d8c5: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x42d8cau); f_005eaf00();
    /* 0042d8ca: mov eax, dword ptr [0x7906dc] */ r_eax = R32((u32)(0x7906dcu));
    /* 0042d8cf: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 0042d8d5: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x42d8dau); f_005f54a0();
    /* 0042d8da: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042d8dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d8df: je 0x42d914 */ if (fZ) goto L_0042d914;
L_0042d8e1:; BB(0x0042d8e1);
    /* 0042d8e1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d8e3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d8e6: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0042d8e9: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042d8ef: mov edx, dword ptr [ecx + eax*4 + 0x148] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x148u));
    /* 0042d8f6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d8f9: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0042d8fc: mov eax, dword ptr [0x7906dc] */ r_eax = R32((u32)(0x7906dcu));
    /* 0042d901: mov ecx, dword ptr [eax + ecx*4 + 0x148] */ r_ecx = R32((u32)(r_eax+r_ecx*4+0x148u));
    /* 0042d908: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042d90a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042d910: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d912u); call_ind(t); }
    /* 0042d912: jmp 0x42d947 */ goto L_0042d947;
L_0042d914:; BB(0x0042d914);
    /* 0042d914: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d916: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d919: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0042d91c: mov eax, dword ptr [0x7906dc] */ r_eax = R32((u32)(0x7906dcu));
    /* 0042d921: mov ecx, dword ptr [eax + edx*4 + 0x148] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x148u));
    /* 0042d928: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d92b: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0042d92e: mov edx, dword ptr [0x7906dc] */ r_edx = R32((u32)(0x7906dcu));
    /* 0042d934: mov eax, dword ptr [edx + eax*4 + 0x148] */ r_eax = R32((u32)(r_edx+r_eax*4+0x148u));
    /* 0042d93b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042d93d: mov ecx, eax */ r_ecx = r_eax;
    /* 0042d93f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042d945: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d947u); call_ind(t); }
L_0042d947:; BB(0x0042d947);
    /* 0042d947: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d94a: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0042d94d: mov eax, dword ptr [0x7906dc] */ r_eax = R32((u32)(0x7906dcu));
    /* 0042d952: mov ecx, dword ptr [eax + edx*4 + 0x148] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x148u));
    /* 0042d959: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d95c: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0042d95f: mov edx, dword ptr [0x7906dc] */ r_edx = R32((u32)(0x7906dcu));
    /* 0042d965: mov eax, dword ptr [edx + eax*4 + 0x148] */ r_eax = R32((u32)(r_edx+r_eax*4+0x148u));
    /* 0042d96c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042d96e: mov ecx, eax */ r_ecx = r_eax;
    /* 0042d970: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0042d973: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42d975u); call_ind(t); }
    /* 0042d975: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042d977: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042d97a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042d97b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042d97e: call 0x6010d0 */ r_esp -= 4; W32(r_esp, 0x42d983u); f_006010d0();
    /* 0042d983: mov esp, ebp */ r_esp = r_ebp;
    /* 0042d985: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042d986: ret 8 */ FN_RET(0x0042d890); r_esp += 12; return;
}

void f_0042d990(void) /* CrapsRollingDiceCycle::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042d990);
    /* 0042d990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042d991: mov ebp, esp */ r_ebp = r_esp;
    /* 0042d993: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042d996: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0042d999: mov dword ptr [ebp - 8], 0xfc4 */ W32((u32)(r_ebp+0xfffffff8u), 0xfc4u);
    /* 0042d9a0: mov dword ptr [ebp - 4], 0xfc6 */ W32((u32)(r_ebp+0xfffffffcu), 0xfc6u);
    /* 0042d9a7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042d9aa: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042d9ae: jne 0x42d9d0 */ if (!fZ) goto L_0042d9d0;
L_0042d9b0:; BB(0x0042d9b0);
    /* 0042d9b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0042d9b2: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0042d9b5: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042d9bb: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0042d9c2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042d9c5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042d9c8: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0042d9cb: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0042d9ce: jmp 0x42d9f0 */ goto L_0042d9f0;
L_0042d9d0:; BB(0x0042d9d0);
    /* 0042d9d0: mov edx, 1 */ r_edx = 0x1u;
    /* 0042d9d5: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042d9d8: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042d9dd: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042d9e4: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042d9e7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042d9ea: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0042d9ed: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_0042d9f0:; BB(0x0042d9f0);
    /* 0042d9f0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042d9f3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0042d9f6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042d9f9: mov byte ptr [ecx + 0x18], 0 */ W8((u32)(r_ecx+0x18u), 0x0u);
    /* 0042d9fd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042da00: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0042da03: mov ecx, dword ptr [ebp + eax*4 - 8] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff8u));
    /* 0042da07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042da08: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042da0b: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0042da0e: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042da14: mov ecx, dword ptr [ecx + eax*4 + 0x148] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x148u));
    /* 0042da1b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x42da20u); f_005eaf00();
    /* 0042da20: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042da23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042da24: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042da27: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0042da2a: mov edx, dword ptr [0x7906dc] */ r_edx = R32((u32)(0x7906dcu));
    /* 0042da30: mov eax, dword ptr [edx + ecx*4 + 0x148] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x148u));
    /* 0042da37: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042da3a: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0042da3d: mov ecx, dword ptr [0x7906dc] */ r_ecx = R32((u32)(0x7906dcu));
    /* 0042da43: mov ecx, dword ptr [ecx + edx*4 + 0x148] */ r_ecx = R32((u32)(r_ecx+r_edx*4+0x148u));
    /* 0042da4a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042da4c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0042da52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42da54u); call_ind(t); }
    /* 0042da54: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042da57: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042da5b: je 0x42da72 */ if (fZ) goto L_0042da72;
L_0042da5d:; BB(0x0042da5d);
    /* 0042da5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042da5f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042da62: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0042da65: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042da68: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0042da6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042da6d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042da70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42da72u); call_ind(t); }
L_0042da72:; BB(0x0042da72);
    /* 0042da72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042da74: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042da77: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0042da7a: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x42da7fu); f_005f5d50();
    /* 0042da7f: mov esp, ebp */ r_esp = r_ebp;
    /* 0042da81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042da82: ret  */ FN_RET(0x0042d990); r_esp += 4; return;
}

