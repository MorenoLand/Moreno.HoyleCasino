#include "protos.h"

void f_00421ed0(void) /* CaribbeanStudActionDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00421ed0);
    /* 00421ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00421ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00421ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00421ed7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421ed9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421edb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421ede: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x421ee3u); f_005f71f0();
    /* 00421ee3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421ee6: mov dword ptr [eax], 0x6b6044 */ W32((u32)(r_eax), 0x6b6044u);
    /* 00421eec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421eef: mov esp, ebp */ r_esp = r_ebp;
    /* 00421ef1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00421ef2: ret  */ FN_RET(0x00421ed0); r_esp += 4; return;
}

void f_00421f20(void) /* CaribbeanStudActionDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00421f20);
    /* 00421f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00421f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00421f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421f24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00421f27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00421f2a: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 00421f2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421f30: jne 0x421f41 */ if (!fZ) goto L_00421f41;
L_00421f32:; BB(0x00421f32);
    /* 00421f32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421f35: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x421f3au); f_005f88f0();
    /* 00421f3a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00421f3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421f3f: je 0x421f46 */ if (fZ) goto L_00421f46;
L_00421f41:; BB(0x00421f41);
    /* 00421f41: jmp 0x42201f */ goto L_0042201f;
L_00421f46:; BB(0x00421f46);
    /* 00421f46: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00421f49: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421f4d: jne 0x422013 */ if (!fZ) goto L_00422013;
L_00421f53:; BB(0x00421f53);
    /* 00421f53: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00421f56: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 00421f5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00421f5b: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x421f61u); call_ind(t); }
    /* 00421f61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421f64: cmp eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421f67: jne 0x421f7b */ if (!fZ) goto L_00421f7b;
L_00421f69:; BB(0x00421f69);
    /* 00421f69: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 00421f6f: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x421f74u); f_005db240();
    /* 00421f74: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00421f77: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_00421f7b:; BB(0x00421f7b);
    /* 00421f7b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00421f7e: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 00421f82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00421f83: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x421f89u); call_ind(t); }
    /* 00421f89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421f8c: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421f8f: jne 0x421fc7 */ if (!fZ) goto L_00421fc7;
L_00421f91:; BB(0x00421f91);
    /* 00421f91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421f93: push 0x3106cc */ { u32 v = 0x3106ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00421f98: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00421f9e: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x421fa3u); f_005f2a60();
    /* 00421fa3: mov ecx, eax */ r_ecx = r_eax;
    /* 00421fa5: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x421faau); f_006026d0();
    /* 00421faa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00421fad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421faf: je 0x421fc7 */ if (fZ) goto L_00421fc7;
L_00421fb1:; BB(0x00421fb1);
    /* 00421fb1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00421fb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421fb6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00421fb8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421fbb: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00421fbe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x421fc0u); call_ind(t); }
    /* 00421fc0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00421fc3: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00421fc7:; BB(0x00421fc7);
    /* 00421fc7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00421fca: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 00421fce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00421fcf: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x421fd5u); call_ind(t); }
    /* 00421fd5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00421fd8: cmp eax, 0x66 */ {  u32 a = r_eax; u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421fdb: jne 0x422013 */ if (!fZ) goto L_00422013;
L_00421fdd:; BB(0x00421fdd);
    /* 00421fdd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421fdf: push 0x3106cb */ { u32 v = 0x3106cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00421fe4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00421fea: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x421fefu); f_005f2a60();
    /* 00421fef: mov ecx, eax */ r_ecx = r_eax;
    /* 00421ff1: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x421ff6u); f_006026d0();
    /* 00421ff6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00421ff9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00421ffb: je 0x422013 */ if (fZ) goto L_00422013;
L_00421ffd:; BB(0x00421ffd);
    /* 00421ffd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00421fff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422002: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00422004: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00422007: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0042200a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42200cu); call_ind(t); }
    /* 0042200c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042200f: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_00422013:; BB(0x00422013);
    /* 00422013: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00422016: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00422017: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042201a: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x42201fu); f_005f72f0();
L_0042201f:; BB(0x0042201f);
    /* 0042201f: mov esp, ebp */ r_esp = r_ebp;
    /* 00422021: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422022: ret 4 */ FN_RET(0x00421f20); r_esp += 8; return;
}

void f_00422030(void) /* CaribbeanStudActionDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422030);
    /* 00422030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422031: mov ebp, esp */ r_ebp = r_esp;
    /* 00422033: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00422036: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00422039: mov dword ptr [ebp - 0xc], 0x6b5d78 */ W32((u32)(r_ebp+0xfffffff4u), 0x6b5d78u);
    /* 00422040: mov dword ptr [ebp - 8], 0x6b6098 */ W32((u32)(r_ebp+0xfffffff8u), 0x6b6098u);
    /* 00422047: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0042204e: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00422055: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 0042205a: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 00422060: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00422063: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422065: push 0x424 */ { u32 v = 0x424u; r_esp -= 4; W32(r_esp, v); }
    /* 0042206a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042206d: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x422072u); f_005f83d0();
    /* 00422072: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00422074: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00422077: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x42207cu); f_005f89d0();
    /* 0042207c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042207e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00422080: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00422082: push 0x6b6084 */ { u32 v = 0x6b6084u; r_esp -= 4; W32(r_esp, v); }
    /* 00422087: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x42208cu); f_00630f40();
    /* 0042208c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042208f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422090: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00422093: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x422098u); f_005f73e0();
    /* 00422098: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0042209f: jmp 0x4220aa */ goto L_004220aa;
L_004220a1:; BB(0x004220a1);
    /* 004220a1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004220a4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004220a7: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_004220aa:; BB(0x004220aa);
    /* 004220aa: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004220ae: jge 0x422107 */ if ((fS==fO)) goto L_00422107;
L_004220b0:; BB(0x004220b0);
    /* 004220b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004220b2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004220b4: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 004220b6: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 004220b8: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 004220ba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004220bd: mov ecx, dword ptr [ebp + eax*4 - 0xc] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xfffffff4u));
    /* 004220c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004220c2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4220c7u); f_00630f40();
    /* 004220c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004220ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004220cb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004220cd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004220d0: imul edx, edx, 0x23 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x23u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004220d3: add edx, 0x26 */ {  u32 a = r_edx; u32 b = 0x26u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004220d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004220d7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004220d9: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 004220de: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004220e1: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 004220e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004220e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004220e8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004220eb: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x4220f0u); f_005f9de0();
    /* 004220f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004220f2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004220f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004220f6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004220f9: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x4220feu); f_005fb300();
    /* 004220fe: mov ecx, eax */ r_ecx = r_eax;
    /* 00422100: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x422105u); f_005eb700();
    /* 00422105: jmp 0x4220a1 */ goto L_004220a1;
L_00422107:; BB(0x00422107);
    /* 00422107: mov esp, ebp */ r_esp = r_ebp;
    /* 00422109: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042210a: ret  */ FN_RET(0x00422030); r_esp += 4; return;
}

void f_00422170(void) /* CaribbeanStudActionDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00422170);
    /* 00422170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00422171: mov ebp, esp */ r_ebp = r_esp;
    /* 00422173: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00422175: push 0x69e23b */ { u32 v = 0x69e23bu; r_esp -= 4; W32(r_esp, v); }
    /* 0042217a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00422180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00422181: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00422184: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00422189: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042218b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042218c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042218f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00422195: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00422198: mov eax, dword ptr [0x790358] */ r_eax = R32((u32)(0x790358u));
    /* 0042219d: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004221a3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004221a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004221a8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004221ac: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004221af: mov byte ptr [ebp - 0xd], dl */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_edx);
    /* 004221b2: mov al, byte ptr [ebp - 0xd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff3u))) & 0xffu);
    /* 004221b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004221b6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004221b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004221ba: mov ecx, dword ptr [0x790358] */ r_ecx = R32((u32)(0x790358u));
    /* 004221c0: call 0x426c80 */ r_esp -= 4; W32(r_esp, 0x4221c5u); f_00426c80();
    /* 004221c5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004221c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004221ca: je 0x4221ce */ if (fZ) goto L_004221ce;
L_004221cc:; BB(0x004221cc);
    /* 004221cc: jmp 0x422229 */ goto L_00422229;
L_004221ce:; BB(0x004221ce);
    /* 004221ce: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 004221d4: call 0x41fc50 */ r_esp -= 4; W32(r_esp, 0x4221d9u); f_0041fc50();
    /* 004221d9: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004221db: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4221e0u); f_00686d82();
    /* 004221e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004221e3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004221e6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004221ed: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004221f1: je 0x422204 */ if (fZ) goto L_00422204;
L_004221f3:; BB(0x004221f3);
    /* 004221f3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004221f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004221f7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004221fa: call 0x422240 */ r_esp -= 4; W32(r_esp, 0x4221ffu); f_00422240();
    /* 004221ff: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00422202: jmp 0x42220b */ goto L_0042220b;
L_00422204:; BB(0x00422204);
    /* 00422204: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0042220b:; BB(0x0042220b);
    /* 0042220b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042220e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00422211: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00422218: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042221b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042221c: mov eax, dword ptr [0x790354] */ r_eax = R32((u32)(0x790354u));
    /* 00422221: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00422224: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x422229u); f_005fc420();
L_00422229:; BB(0x00422229);
    /* 00422229: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042222c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00422233: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00422234: mov esp, ebp */ r_esp = r_ebp;
    /* 00422236: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00422237: ret 4 */ FN_RET(0x00422170); r_esp += 8; return;
}

