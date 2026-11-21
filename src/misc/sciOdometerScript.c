#include "protos.h"

void f_0060fd70(void) /* sciOdometerScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060fd70);
    /* 0060fd70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060fd71: mov ebp, esp */ r_ebp = r_esp;
    /* 0060fd73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060fd75: push 0x6aae97 */ { u32 v = 0x6aae97u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fd7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060fd80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fd81: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060fd84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060fd89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060fd8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fd8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060fd8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060fd95: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0060fd98: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060fd9a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fd9d: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x60fda2u); f_005fc0d0();
    /* 0060fda2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060fda9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fdac: mov dword ptr [eax], 0x6d8424 */ W32((u32)(r_eax), 0x6d8424u);
    /* 0060fdb2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fdb5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060fdb8: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0060fdbb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fdbe: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060fdc1: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 0060fdc4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fdc7: mov dword ptr [edx + 0x24], 1 */ W32((u32)(r_edx+0x24u), 0x1u);
    /* 0060fdce: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x60fdd4u); call_ind(t); }
    /* 0060fdd4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fdd7: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0060fdda: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060fddd: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0060fde0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fde3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
L_0060fdea:; BB(0x0060fdea);
    /* 0060fdea: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fdee: je 0x60fe0f */ if (fZ) goto L_0060fe0f;
L_0060fdf0:; BB(0x0060fdf0);
    /* 0060fdf0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fdf3: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0060fdf6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060fdf9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fdfc: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0060fdff: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060fe02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0060fe03: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0060fe08: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0060fe08, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0060fe08, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0060fe0a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0060fe0d: jmp 0x60fdea */ goto L_0060fdea;
L_0060fe0f:; BB(0x0060fe0f);
    /* 0060fe0f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fe12: cmp dword ptr [edx + 0x28], 1 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060fe16: jge 0x60fe22 */ if ((fS==fO)) goto L_0060fe22;
L_0060fe18:; BB(0x0060fe18);
    /* 0060fe18: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fe1b: mov dword ptr [eax + 0x28], 1 */ W32((u32)(r_eax+0x28u), 0x1u);
L_0060fe22:; BB(0x0060fe22);
    /* 0060fe22: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fe25: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0060fe28: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fe2b: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0060fe2e: cmp ecx, dword ptr [edx + 0x188] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x188u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060fe34: jge 0x60fe54 */ if ((fS==fO)) goto L_0060fe54;
L_0060fe36:; BB(0x0060fe36);
    /* 0060fe36: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fe39: mov byte ptr [edx + 0x30], 0 */ W8((u32)(r_edx+0x30u), 0x0u);
    /* 0060fe3d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fe40: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0060fe43: add ecx, 0x1b0 */ {  u32 a = r_ecx; u32 b = 0x1b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060fe49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060fe4a: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x60fe4fu); f_00610980();
    /* 0060fe4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060fe52: jmp 0x60fe70 */ goto L_0060fe70;
L_0060fe54:; BB(0x0060fe54);
    /* 0060fe54: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fe57: mov byte ptr [edx + 0x30], 1 */ W8((u32)(r_edx+0x30u), 0x1u);
    /* 0060fe5b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fe5e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0060fe61: add ecx, 0x190 */ {  u32 a = r_ecx; u32 b = 0x190u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060fe67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060fe68: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x60fe6du); f_00610980();
    /* 0060fe6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060fe70:; BB(0x0060fe70);
    /* 0060fe70: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060fe77: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fe7a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060fe7d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060fe84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060fe85: mov esp, ebp */ r_esp = r_ebp;
    /* 0060fe87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060fe88: ret 8 */ FN_RET(0x0060fd70); r_esp += 12; return;
}

void f_0060fe90(void) /* sciOdometerScript::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060fe90);
    /* 0060fe90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060fe91: mov ebp, esp */ r_ebp = r_esp;
    /* 0060fe93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060fe95: push 0x6aaeba */ { u32 v = 0x6aaebau; r_esp -= 4; W32(r_esp, v); }
    /* 0060fe9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060fea0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060fea1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060fea4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060fea9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060feab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060feac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060feaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060feb5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0060feb8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060febb: mov dword ptr [eax], 0x6d8424 */ W32((u32)(r_eax), 0x6d8424u);
    /* 0060fec1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060fec8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fecb: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fecf: je 0x60ff10 */ if (fZ) goto L_0060ff10;
L_0060fed1:; BB(0x0060fed1);
    /* 0060fed1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fed4: movzx eax, byte ptr [edx + 0x30] */ r_eax = (u32)R8((u32)(r_edx+0x30u));
    /* 0060fed8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060feda: je 0x60feed */ if (fZ) goto L_0060feed;
L_0060fedc:; BB(0x0060fedc);
    /* 0060fedc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fedf: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0060fee2: add edx, 0x190 */ {  u32 a = r_edx; u32 b = 0x190u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060fee8: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0060feeb: jmp 0x60fefc */ goto L_0060fefc;
L_0060feed:; BB(0x0060feed);
    /* 0060feed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060fef0: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0060fef3: add ecx, 0x1b0 */ {  u32 a = r_ecx; u32 b = 0x1b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060fef9: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0060fefc:; BB(0x0060fefc);
    /* 0060fefc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060feff: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0060ff02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ff04: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060ff07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060ff08: call 0x6110a0 */ r_esp -= 4; W32(r_esp, 0x60ff0du); f_006110a0();
    /* 0060ff0d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060ff10:; BB(0x0060ff10);
    /* 0060ff10: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ff13: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 0060ff1a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060ff21: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ff24: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x60ff29u); f_005fc150();
    /* 0060ff29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ff2c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ff33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060ff34: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ff36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ff37: ret  */ FN_RET(0x0060fe90); r_esp += 4; return;
}

void f_0060ff40(void) /* sciOdometerScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060ff40);
    /* 0060ff40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ff41: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ff43: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ff46: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060ff49: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x60ff4fu); call_ind(t); }
    /* 0060ff4f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0060ff52: mov byte ptr [ebp - 0x11], 0 */ W8((u32)(r_ebp+0xffffffefu), 0x0u);
    /* 0060ff56: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ff59: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x60ff5eu); f_005fc360();
    /* 0060ff5e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0060ff61: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ff65: je 0x60ff6c */ if (fZ) goto L_0060ff6c;
L_0060ff67:; BB(0x0060ff67);
    /* 0060ff67: jmp 0x61011e */ goto L_0061011e;
L_0060ff6c:; BB(0x0060ff6c);
    /* 0060ff6c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ff6f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0060ff72: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0060ff75: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060ff7c: jmp 0x60ff87 */ goto L_0060ff87;
L_0060ff7e:; BB(0x0060ff7e);
    /* 0060ff7e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ff81: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060ff84: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0060ff87:; BB(0x0060ff87);
    /* 0060ff87: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ff8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ff8d: cmp ecx, dword ptr [eax + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060ff90: jge 0x6100ad */ if ((fS==fO)) goto L_006100ad;
L_0060ff96:; BB(0x0060ff96);
    /* 0060ff96: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ff99: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0060ff9c: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0060ffa2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ffa5: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0060ffa8: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x60ffadu); f_005eb220();
    /* 0060ffad: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0060ffb0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ffb3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0060ffb4: mov ecx, 0xa */ r_ecx = 0xau;
    /* 0060ffb9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0060ffb9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0060ffb9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0060ffbb: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0060ffbd: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0060ffc0: mov dword ptr [ebp - 8], 0x13 */ W32((u32)(r_ebp+0xfffffff8u), 0x13u);
    /* 0060ffc7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ffca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ffcd: cmp eax, dword ptr [edx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060ffd0: jl 0x60ffdf */ if ((fS!=fO)) goto L_0060ffdf;
L_0060ffd2:; BB(0x0060ffd2);
    /* 0060ffd2: mov dword ptr [ebp - 8], 0x14 */ W32((u32)(r_ebp+0xfffffff8u), 0x14u);
    /* 0060ffd9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060ffdc: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_0060ffdf:; BB(0x0060ffdf);
    /* 0060ffdf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060ffe2: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ffe5: je 0x61005f */ if (fZ) goto L_0061005f;
L_0060ffe7:; BB(0x0060ffe7);
    /* 0060ffe7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060ffea: movzx ecx, byte ptr [eax + 0x30] */ r_ecx = (u32)R8((u32)(r_eax+0x30u));
    /* 0060ffee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060fff0: je 0x60fffd */ if (fZ) goto L_0060fffd;
L_0060fff2:; BB(0x0060fff2);
    /* 0060fff2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060fff5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060fff8: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0060fffb: jmp 0x610006 */ goto L_00610006;
L_0060fffd:; BB(0x0060fffd);
    /* 0060fffd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00610000: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00610003: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00610006:; BB(0x00610006);
    /* 00610006: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00610009: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0061000c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061000f: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00610012: jle 0x61001b */ if ((fZ||fS!=fO)) goto L_0061001b;
L_00610014:; BB(0x00610014);
    /* 00610014: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0061001b:; BB(0x0061001b);
    /* 0061001b: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061001f: jg 0x610027 */ if ((!fZ&&fS==fO)) goto L_00610027;
L_00610021:; BB(0x00610021);
    /* 00610021: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00610024: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00610027:; BB(0x00610027);
    /* 00610027: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061002a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061002b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061002e: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00610031: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00610037: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061003a: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0061003d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610040: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 00610043: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 00610049: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061004c: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0061004f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00610051: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00610057: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x610059u); call_ind(t); }
    /* 00610059: mov byte ptr [ebp - 0x11], 1 */ W8((u32)(r_ebp+0xffffffefu), 0x1u);
    /* 0061005d: jmp 0x61009a */ goto L_0061009a;
L_0061005f:; BB(0x0061005f);
    /* 0061005f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610062: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00610065: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 0061006c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061006f: cmp dword ptr [eax + 0x24], edx */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00610072: jge 0x61009a */ if ((fS==fO)) goto L_0061009a;
L_00610074:; BB(0x00610074);
    /* 00610074: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00610077: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061007a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061007d: cmp dword ptr [edx + 0x24], ecx */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00610080: jne 0x61009a */ if (!fZ) goto L_0061009a;
L_00610082:; BB(0x00610082);
    /* 00610082: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610085: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00610088: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061008b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061008e: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00610091: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610094: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00610097: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
L_0061009a:; BB(0x0061009a);
    /* 0061009a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061009d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061009e: mov ecx, 0xa */ r_ecx = 0xau;
    /* 006100a3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006100a3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006100a3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006100a5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006100a8: jmp 0x60ff7e */ goto L_0060ff7e;
L_006100ad:; BB(0x006100ad);
    /* 006100ad: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 006100b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006100b3: je 0x61011c */ if (fZ) goto L_0061011c;
L_006100b5:; BB(0x006100b5);
    /* 006100b5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006100b8: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006100bb: add ecx, 0x12c */ {  u32 a = r_ecx; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006100c1: cmp dword ptr [ebp - 0x18], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006100c4: jbe 0x6100f3 */ if ((fC||fZ)) goto L_006100f3;
L_006100c6:; BB(0x006100c6);
    /* 006100c6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006100c9: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 006100cc: movsx ecx, word ptr [eax + 0x184] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x184u));
    /* 006100d3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006100d6: cmp dword ptr [edx + 0x24], ecx */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006100d9: jge 0x6100ea */ if ((fS==fO)) goto L_006100ea;
L_006100db:; BB(0x006100db);
    /* 006100db: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006100de: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006100e1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006100e4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006100e7: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
L_006100ea:; BB(0x006100ea);
    /* 006100ea: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006100ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006100f0: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
L_006100f3:; BB(0x006100f3);
    /* 006100f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006100f5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006100f8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006100fa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006100fd: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00610100: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x610102u); call_ind(t); }
    /* 00610102: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610105: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00610108: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0061010e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061010f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610112: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00610114: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610117: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0061011a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61011cu); call_ind(t); }
L_0061011c:; BB(0x0061011c);
    /* 0061011c: jmp 0x610139 */ goto L_00610139;
L_0061011e:; BB(0x0061011e);
    /* 0061011e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00610120: jne 0x610139 */ if (!fZ) goto L_00610139;
L_00610122:; BB(0x00610122);
    /* 00610122: push 0x14c */ { u32 v = 0x14cu; r_esp -= 4; W32(r_esp, v); }
    /* 00610127: push 0x6d8404 */ { u32 v = 0x6d8404u; r_esp -= 4; W32(r_esp, v); }
    /* 0061012c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00610131: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x610136u); f_005e9f20();
    /* 00610136: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00610139:; BB(0x00610139);
    /* 00610139: movzx eax, byte ptr [ebp - 0x11] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 0061013d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061013f: jne 0x61018c */ if (!fZ) goto L_0061018c;
L_00610141:; BB(0x00610141);
    /* 00610141: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610144: movzx edx, byte ptr [ecx + 0x30] */ r_edx = (u32)R8((u32)(r_ecx+0x30u));
    /* 00610148: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061014a: je 0x61015d */ if (fZ) goto L_0061015d;
L_0061014c:; BB(0x0061014c);
    /* 0061014c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061014f: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00610152: add ecx, 0x190 */ {  u32 a = r_ecx; u32 b = 0x190u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00610158: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0061015b: jmp 0x61016b */ goto L_0061016b;
L_0061015d:; BB(0x0061015d);
    /* 0061015d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610160: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00610163: add eax, 0x1b0 */ {  u32 a = r_eax; u32 b = 0x1b0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00610168: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_0061016b:; BB(0x0061016b);
    /* 0061016b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0061016e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00610171: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00610173: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00610176: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00610177: call 0x6110a0 */ r_esp -= 4; W32(r_esp, 0x61017cu); f_006110a0();
    /* 0061017c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061017f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00610181: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00610184: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00610187: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x61018cu); f_005f5df0();
L_0061018c:; BB(0x0061018c);
    /* 0061018c: mov esp, ebp */ r_esp = r_ebp;
    /* 0061018e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061018f: ret  */ FN_RET(0x0060ff40); r_esp += 4; return;
}

