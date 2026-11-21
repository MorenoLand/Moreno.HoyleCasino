#include "protos.h"

void f_00597ac0(void) /* FourCardPokerState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597ac0);
    /* 00597ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00597ac3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597ac6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00597ac9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00597acc: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x597ad1u); f_005e9e20();
    /* 00597ad1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00597ad4: mov dword ptr [eax], 0x6cea48 */ W32((u32)(r_eax), 0x6cea48u);
    /* 00597ada: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00597add: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00597ae4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00597aeb: jmp 0x597af6 */ goto L_00597af6;
L_00597aed:; BB(0x00597aed);
    /* 00597aed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597af0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00597af3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00597af6:; BB(0x00597af6);
    /* 00597af6: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00597afa: jge 0x597b0c */ if ((fS==fO)) goto L_00597b0c;
L_00597afc:; BB(0x00597afc);
    /* 00597afc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00597aff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00597b02: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 00597b0a: jmp 0x597aed */ goto L_00597aed;
L_00597b0c:; BB(0x00597b0c);
    /* 00597b0c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00597b0f: mov byte ptr [edx + 0x12c], 0 */ W8((u32)(r_edx+0x12cu), 0x0u);
    /* 00597b16: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00597b19: mov esp, ebp */ r_esp = r_ebp;
    /* 00597b1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597b1c: ret  */ FN_RET(0x00597ac0); r_esp += 4; return;
}

void f_00597b20(void) /* FourCardPokerState::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00597b20);
    /* 00597b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00597b23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00597b25: push 0x6a7428 */ { u32 v = 0x6a7428u; r_esp -= 4; W32(r_esp, v); }
    /* 00597b2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00597b30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597b31: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597b34: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00597b39: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00597b3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597b3c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00597b3f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00597b45: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00597b48: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00597b4b: mov dword ptr [eax], 0x6cea48 */ W32((u32)(r_eax), 0x6cea48u);
    /* 00597b51: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00597b58: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00597b5b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00597b5e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00597b61: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00597b64: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00597b67: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597b6b: je 0x597b80 */ if (fZ) goto L_00597b80;
L_00597b6d:; BB(0x00597b6d);
    /* 00597b6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00597b6f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00597b72: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00597b74: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00597b77: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00597b79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x597b7bu); call_ind(t); }
    /* 00597b7b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00597b7e: jmp 0x597b87 */ goto L_00597b87;
L_00597b80:; BB(0x00597b80);
    /* 00597b80: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00597b87:; BB(0x00597b87);
    /* 00597b87: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00597b8e: jmp 0x597b99 */ goto L_00597b99;
L_00597b90:; BB(0x00597b90);
    /* 00597b90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00597b93: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00597b96: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00597b99:; BB(0x00597b99);
    /* 00597b99: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00597b9d: jge 0x597bd4 */ if ((fS==fO)) goto L_00597bd4;
L_00597b9f:; BB(0x00597b9f);
    /* 00597b9f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00597ba2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00597ba5: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00597ba9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00597bac: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00597baf: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00597bb2: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597bb6: je 0x597bcb */ if (fZ) goto L_00597bcb;
L_00597bb8:; BB(0x00597bb8);
    /* 00597bb8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00597bba: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00597bbd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00597bbf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00597bc2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00597bc4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x597bc6u); call_ind(t); }
    /* 00597bc6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00597bc9: jmp 0x597bd2 */ goto L_00597bd2;
L_00597bcb:; BB(0x00597bcb);
    /* 00597bcb: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00597bd2:; BB(0x00597bd2);
    /* 00597bd2: jmp 0x597b90 */ goto L_00597b90;
L_00597bd4:; BB(0x00597bd4);
    /* 00597bd4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00597bdb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00597bde: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x597be3u); f_005e9e40();
    /* 00597be3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00597be6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00597bed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00597bee: mov esp, ebp */ r_esp = r_ebp;
    /* 00597bf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597bf1: ret  */ FN_RET(0x00597b20); r_esp += 4; return;
}

void f_00599590(void) /* fourcardpokerstate::func_00599590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00599590);
    /* 00599590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00599591: mov ebp, esp */ r_ebp = r_esp;
    /* 00599593: sub esp, 0x7ec */ {  u32 a = r_esp; u32 b = 0x7ecu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00599599: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059959e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005995a0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005995a3: mov dword ptr [ebp - 0x7e8], ecx */ W32((u32)(r_ebp+0xfffff818u), r_ecx);
    /* 005995a9: mov dword ptr [ebp - 0x7e4], 0 */ W32((u32)(r_ebp+0xfffff81cu), 0x0u);
    /* 005995b3: jmp 0x5995c4 */ goto L_005995c4;
L_005995b5:; BB(0x005995b5);
    /* 005995b5: mov eax, dword ptr [ebp - 0x7e4] */ r_eax = R32((u32)(r_ebp+0xfffff81cu));
    /* 005995bb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005995be: mov dword ptr [ebp - 0x7e4], eax */ W32((u32)(r_ebp+0xfffff81cu), r_eax);
L_005995c4:; BB(0x005995c4);
    /* 005995c4: cmp dword ptr [ebp - 0x7e4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffff81cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005995cb: jge 0x5995df */ if ((fS==fO)) goto L_005995df;
L_005995cd:; BB(0x005995cd);
    /* 005995cd: mov ecx, dword ptr [ebp - 0x7e4] */ r_ecx = R32((u32)(r_ebp+0xfffff81cu));
    /* 005995d3: mov word ptr [ebp + ecx*2 - 0x35c], 0 */ W16((u32)(r_ebp+r_ecx*2+0xfffffca4u), 0x0u);
    /* 005995dd: jmp 0x5995b5 */ goto L_005995b5;
L_005995df:; BB(0x005995df);
    /* 005995df: lea edx, [ebp - 0x35c] */ r_edx = (u32)(r_ebp+0xfffffca4u);
    /* 005995e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005995e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005995e8: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005995ec: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005995ef: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005995f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005995f3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005995f6: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005995f9: mov edx, dword ptr [ebp - 0x7e8] */ r_edx = R32((u32)(r_ebp+0xfffff818u));
    /* 005995ff: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 00599606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599607: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00599609: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x59960eu); f_00462a40();
    /* 0059960e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599611: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00599613: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00599615: lea ecx, [ebp - 0x35c] */ r_ecx = (u32)(r_ebp+0xfffffca4u);
    /* 0059961b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059961c: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x599621u); f_00462ba0();
    /* 00599621: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599624: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 0059962a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0059962d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059962e: mov ecx, dword ptr [0x793598] */ r_ecx = R32((u32)(0x793598u));
    /* 00599634: call 0x590850 */ r_esp -= 4; W32(r_esp, 0x599639u); f_00590850();
    /* 00599639: mov byte ptr [ebp - 0x351], al */ W8((u32)(r_ebp+0xfffffcafu), (u8)r_eax);
    /* 0059963f: cmp dword ptr [ebp - 0x10c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00599646: jne 0x59965f */ if (!fZ) goto L_0059965f;
L_00599648:; BB(0x00599648);
    /* 00599648: push 0x26f */ { u32 v = 0x26fu; r_esp -= 4; W32(r_esp, v); }
    /* 0059964d: push 0x6cea9c */ { u32 v = 0x6cea9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00599652: push 0x6b681c */ { u32 v = 0x6b681cu; r_esp -= 4; W32(r_esp, v); }
    /* 00599657: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x59965cu); f_005e9f20();
    /* 0059965c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059965f:; BB(0x0059965f);
    /* 0059965f: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00599665: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599666: push 0x6cea74 */ { u32 v = 0x6cea74u; r_esp -= 4; W32(r_esp, v); }
    /* 0059966b: lea edx, [ebp - 0x350] */ r_edx = (u32)(r_ebp+0xfffffcb0u);
    /* 00599671: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599672: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x599678u); call_ind(t); }
    /* 00599678: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059967b: lea eax, [ebp - 0x350] */ r_eax = (u32)(r_ebp+0xfffffcb0u);
    /* 00599681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599682: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x599687u); f_0062fde0();
    /* 00599687: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059968a: lea ecx, [ebp - 0x7e0] */ r_ecx = (u32)(r_ebp+0xfffff820u);
    /* 00599690: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599691: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00599697: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599698: call 0x462f40 */ r_esp -= 4; W32(r_esp, 0x59969du); f_00462f40();
    /* 0059969d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005996a0: movzx eax, byte ptr [ebp - 0x351] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffcafu));
    /* 005996a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005996a9: je 0x5996c0 */ if (fZ) goto L_005996c0;
L_005996ab:; BB(0x005996ab);
    /* 005996ab: push 0x6ce1cc */ { u32 v = 0x6ce1ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005996b0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5996b5u); f_00630f40();
    /* 005996b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005996b8: mov dword ptr [ebp - 0x7ec], eax */ W32((u32)(r_ebp+0xfffff814u), r_eax);
    /* 005996be: jmp 0x5996d3 */ goto L_005996d3;
L_005996c0:; BB(0x005996c0);
    /* 005996c0: push 0x6ce250 */ { u32 v = 0x6ce250u; r_esp -= 4; W32(r_esp, v); }
    /* 005996c5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5996cau); f_00630f40();
    /* 005996ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005996cd: mov dword ptr [ebp - 0x7ec], eax */ W32((u32)(r_ebp+0xfffff814u), r_eax);
L_005996d3:; BB(0x005996d3);
    /* 005996d3: mov ecx, dword ptr [ebp - 0x7ec] */ r_ecx = R32((u32)(r_ebp+0xfffff814u));
    /* 005996d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005996da: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 005996e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005996e1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5996e6u); f_00686d8e();
    /* 005996e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005996e9: lea eax, [ebp - 0x310] */ r_eax = (u32)(r_ebp+0xfffffcf0u);
    /* 005996ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005996f0: mov cl, byte ptr [ebp - 0x351] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffcafu))) & 0xffu);
    /* 005996f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005996f7: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005996fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005996fe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00599701: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599702: mov ecx, dword ptr [0x793598] */ r_ecx = R32((u32)(0x793598u));
    /* 00599708: call 0x590340 */ r_esp -= 4; W32(r_esp, 0x59970du); f_00590340();
    /* 0059970d: lea ecx, [ebp - 0x310] */ r_ecx = (u32)(r_ebp+0xfffffcf0u);
    /* 00599713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599714: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0059971a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059971b: lea eax, [ebp - 0x7e0] */ r_eax = (u32)(r_ebp+0xfffff820u);
    /* 00599721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599722: push 0x6cea4c */ { u32 v = 0x6cea4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00599727: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x59972cu); f_00630f40();
    /* 0059972c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059972f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599730: lea ecx, [ebp - 0x760] */ r_ecx = (u32)(r_ebp+0xfffff8a0u);
    /* 00599736: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00599737: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x59973du); call_ind(t); }
    /* 0059973d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599740: lea edx, [ebp - 0x760] */ r_edx = (u32)(r_ebp+0xfffff8a0u);
    /* 00599746: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00599747: push 0x6b678c */ { u32 v = 0x6b678cu; r_esp -= 4; W32(r_esp, v); }
    /* 0059974c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x599751u); f_00630f40();
    /* 00599751: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00599754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00599755: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00599757: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0059975d: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x599762u); f_0057be80();
    /* 00599762: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00599765: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00599767: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x59976cu); f_00686d72();
    /* 0059976c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059976e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059976f: ret 4 */ FN_RET(0x00599590); r_esp += 8; return;
}

