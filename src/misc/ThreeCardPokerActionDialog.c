#include "protos.h"

void f_0053ccb0(void) /* ThreeCardPokerActionDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053ccb0);
    /* 0053ccb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053ccb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053ccb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ccb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053ccb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ccb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ccbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ccbe: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x53ccc3u); f_005f71f0();
    /* 0053ccc3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ccc6: mov dword ptr [eax], 0x6c5d24 */ W32((u32)(r_eax), 0x6c5d24u);
    /* 0053cccc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053cccf: mov esp, ebp */ r_esp = r_ebp;
    /* 0053ccd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ccd2: ret  */ FN_RET(0x0053ccb0); r_esp += 4; return;
}

void f_0053cd00(void) /* ThreeCardPokerActionDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053cd00);
    /* 0053cd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd01: mov ebp, esp */ r_ebp = r_esp;
    /* 0053cd03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053cd07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053cd0a: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0053cd0e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cd10: jne 0x53cd21 */ if (!fZ) goto L_0053cd21;
L_0053cd12:; BB(0x0053cd12);
    /* 0053cd12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053cd15: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x53cd1au); f_005f88f0();
    /* 0053cd1a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0053cd1d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cd1f: je 0x53cd26 */ if (fZ) goto L_0053cd26;
L_0053cd21:; BB(0x0053cd21);
    /* 0053cd21: jmp 0x53ce15 */ goto L_0053ce15;
L_0053cd26:; BB(0x0053cd26);
    /* 0053cd26: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053cd29: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cd2d: jne 0x53ce09 */ if (!fZ) goto L_0053ce09;
L_0053cd33:; BB(0x0053cd33);
    /* 0053cd33: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053cd36: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0053cd3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd3b: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x53cd41u); call_ind(t); }
    /* 0053cd41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053cd44: cmp eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cd47: jne 0x53cd5b */ if (!fZ) goto L_0053cd5b;
L_0053cd49:; BB(0x0053cd49);
    /* 0053cd49: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053cd4f: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x53cd54u); f_005db240();
    /* 0053cd54: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053cd57: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_0053cd5b:; BB(0x0053cd5b);
    /* 0053cd5b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053cd5e: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0053cd62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd63: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x53cd69u); call_ind(t); }
    /* 0053cd69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053cd6c: cmp eax, 0x66 */ {  u32 a = r_eax; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cd6f: jne 0x53cda7 */ if (!fZ) goto L_0053cda7;
L_0053cd71:; BB(0x0053cd71);
    /* 0053cd71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd73: push 0x310e9b */ { u32 v = 0x310e9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd78: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053cd7e: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x53cd83u); f_005f2a60();
    /* 0053cd83: mov ecx, eax */ r_ecx = r_eax;
    /* 0053cd85: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x53cd8au); f_006026d0();
    /* 0053cd8a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053cd8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cd8f: je 0x53cda7 */ if (fZ) goto L_0053cda7;
L_0053cd91:; BB(0x0053cd91);
    /* 0053cd91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cd93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053cd96: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053cd98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053cd9b: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0053cd9e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53cda0u); call_ind(t); }
    /* 0053cda0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053cda3: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_0053cda7:; BB(0x0053cda7);
    /* 0053cda7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053cdaa: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0053cdae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cdaf: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x53cdb5u); call_ind(t); }
    /* 0053cdb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053cdb8: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cdbb: je 0x53cdd3 */ if (fZ) goto L_0053cdd3;
L_0053cdbd:; BB(0x0053cdbd);
    /* 0053cdbd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053cdc0: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0053cdc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053cdc5: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x53cdcbu); call_ind(t); }
    /* 0053cdcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053cdce: cmp eax, 0x70 */ {  u32 a = r_eax; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cdd1: jne 0x53ce09 */ if (!fZ) goto L_0053ce09;
L_0053cdd3:; BB(0x0053cdd3);
    /* 0053cdd3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cdd5: push 0x310e9c */ { u32 v = 0x310e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053cdda: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0053cde0: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x53cde5u); f_005f2a60();
    /* 0053cde5: mov ecx, eax */ r_ecx = r_eax;
    /* 0053cde7: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x53cdecu); f_006026d0();
    /* 0053cdec: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053cdef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cdf1: je 0x53ce09 */ if (fZ) goto L_0053ce09;
L_0053cdf3:; BB(0x0053cdf3);
    /* 0053cdf3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cdf5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053cdf8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053cdfa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053cdfd: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0053ce00: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53ce02u); call_ind(t); }
    /* 0053ce02: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053ce05: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_0053ce09:; BB(0x0053ce09);
    /* 0053ce09: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053ce0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ce0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053ce10: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x53ce15u); f_005f72f0();
L_0053ce15:; BB(0x0053ce15);
    /* 0053ce15: mov esp, ebp */ r_esp = r_ebp;
    /* 0053ce17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ce18: ret 4 */ FN_RET(0x0053cd00); r_esp += 8; return;
}

void f_0053ce20(void) /* ThreeCardPokerActionDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053ce20);
    /* 0053ce20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053ce21: mov ebp, esp */ r_ebp = r_esp;
    /* 0053ce23: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053ce26: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0053ce29: mov dword ptr [ebp - 0xc], 0x6c5b7c */ W32((u32)(r_ebp+0xfffffff4u), 0x6c5b7cu);
    /* 0053ce30: mov dword ptr [ebp - 8], 0x6c5d64 */ W32((u32)(r_ebp+0xfffffff8u), 0x6c5d64u);
    /* 0053ce37: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0053ce3e: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0053ce45: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053ce4a: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 0053ce50: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0053ce53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ce55: push 0x424 */ { u32 v = 0x424u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ce5a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053ce5d: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x53ce62u); f_005f83d0();
    /* 0053ce62: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ce64: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053ce67: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x53ce6cu); f_005f89d0();
    /* 0053ce6c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ce6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ce70: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ce72: push 0x6b6084 */ { u32 v = 0x6b6084u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ce77: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53ce7cu); f_00630f40();
    /* 0053ce7c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ce7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053ce80: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053ce83: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x53ce88u); f_005f73e0();
    /* 0053ce88: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0053ce8f: jmp 0x53ce9a */ goto L_0053ce9a;
L_0053ce91:; BB(0x0053ce91);
    /* 0053ce91: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ce94: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053ce97: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0053ce9a:; BB(0x0053ce9a);
    /* 0053ce9a: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053ce9e: jge 0x53cef7 */ if ((fS==fO)) goto L_0053cef7;
L_0053cea0:; BB(0x0053cea0);
    /* 0053cea0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cea2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053cea4: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0053cea6: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0053cea8: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ceaa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053cead: mov ecx, dword ptr [ebp + eax*4 - 0xc] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff4u));
    /* 0053ceb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ceb2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x53ceb7u); f_00630f40();
    /* 0053ceb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053ceba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cebb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cebd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053cec0: imul edx, edx, 0x23 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x23u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053cec3: add edx, 0x26 */ {  u32 a = r_edx; u32 b = 0x26u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053cec6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053cec7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0053cec9: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0053cece: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ced1: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0053ced5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053ced6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053ced8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053cedb: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x53cee0u); f_005f9de0();
    /* 0053cee0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cee2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053cee5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053cee6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053cee9: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x53ceeeu); f_005fb300();
    /* 0053ceee: mov ecx, eax */ r_ecx = r_eax;
    /* 0053cef0: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x53cef5u); f_005eb700();
    /* 0053cef5: jmp 0x53ce91 */ goto L_0053ce91;
L_0053cef7:; BB(0x0053cef7);
    /* 0053cef7: mov esp, ebp */ r_esp = r_ebp;
    /* 0053cef9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053cefa: ret  */ FN_RET(0x0053ce20); r_esp += 4; return;
}

void f_0053cf60(void) /* ThreeCardPokerActionDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053cf60);
    /* 0053cf60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf61: mov ebp, esp */ r_ebp = r_esp;
    /* 0053cf63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf65: push 0x6a4caf */ { u32 v = 0x6a4cafu; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053cf70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf71: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053cf74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0053cf79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053cf7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cf7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053cf7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0053cf85: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053cf88: mov eax, dword ptr [0x7933ec] */ r_eax = R32((u32)(0x7933ecu));
    /* 0053cf8d: mov ecx, dword ptr [eax + 0xe8] */ r_ecx = R32((u32)(r_eax+0xe8u));
    /* 0053cf93: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0053cf96: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053cf98: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cf9c: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0053cf9f: mov byte ptr [ebp - 0xd], dl */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_edx);
    /* 0053cfa2: mov al, byte ptr [ebp - 0xd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff3u))) & 0xffu);
    /* 0053cfa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cfa6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053cfa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053cfaa: mov ecx, dword ptr [0x7933ec] */ r_ecx = R32((u32)(0x7933ecu));
    /* 0053cfb0: call 0x541540 */ r_esp -= 4; W32(r_esp, 0x53cfb5u); f_00541540();
    /* 0053cfb5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0053cfb8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cfba: je 0x53cfbe */ if (fZ) goto L_0053cfbe;
L_0053cfbc:; BB(0x0053cfbc);
    /* 0053cfbc: jmp 0x53d019 */ goto L_0053d019;
L_0053cfbe:; BB(0x0053cfbe);
    /* 0053cfbe: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 0053cfc4: call 0x53ba60 */ r_esp -= 4; W32(r_esp, 0x53cfc9u); f_0053ba60();
    /* 0053cfc9: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cfcb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x53cfd0u); f_00686d82();
    /* 0053cfd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053cfd3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053cfd6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053cfdd: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cfe1: je 0x53cff4 */ if (fZ) goto L_0053cff4;
L_0053cfe3:; BB(0x0053cfe3);
    /* 0053cfe3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053cfe6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cfe7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053cfea: call 0x53d030 */ r_esp -= 4; W32(r_esp, 0x53cfefu); f_0053d030();
    /* 0053cfef: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053cff2: jmp 0x53cffb */ goto L_0053cffb;
L_0053cff4:; BB(0x0053cff4);
    /* 0053cff4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0053cffb:; BB(0x0053cffb);
    /* 0053cffb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053cffe: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0053d001: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053d008: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053d00b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d00c: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 0053d011: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0053d014: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x53d019u); f_005fc420();
L_0053d019:; BB(0x0053d019);
    /* 0053d019: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053d01c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053d023: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053d024: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d026: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d027: ret 4 */ FN_RET(0x0053cf60); r_esp += 8; return;
}

