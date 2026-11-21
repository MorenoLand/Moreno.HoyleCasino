#include "protos.h"

void f_00501040(void) /* sub_501040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00501040);
    /* 00501040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00501041: mov ebp, esp */ r_ebp = r_esp;
    /* 00501043: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00501046: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00501047: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050104e: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00501054: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0050105a: jmp 0x501068 */ goto L_00501068;
L_0050105c:; BB(0x0050105c);
    /* 0050105c: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00501060: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00501064: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_00501068:; BB(0x00501068);
    /* 00501068: movsx esi, word ptr [ebp - 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0050106c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00501072: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x501077u); f_0047f950();
    /* 00501077: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00501079: jge 0x5010da */ if ((fS==fO)) goto L_005010da;
L_0050107b:; BB(0x0050107b);
    /* 0050107b: movsx esi, word ptr [ebp - 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0050107f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00501085: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x50108au); f_0047e420();
    /* 0050108a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050108c: jne 0x501090 */ if (!fZ) goto L_00501090;
L_0050108e:; BB(0x0050108e);
    /* 0050108e: jmp 0x50105c */ goto L_0050105c;
L_00501090:; BB(0x00501090);
    /* 00501090: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00501094: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00501095: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050109b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5010a0u); f_0047e390();
    /* 005010a0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005010a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005010a6: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5010abu); f_004c7010();
    /* 005010ab: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005010ae: jne 0x5010d8 */ if (!fZ) goto L_005010d8;
L_005010b0:; BB(0x005010b0);
    /* 005010b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005010b3: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x5010b8u); f_004c7050();
    /* 005010b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005010b9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005010bf: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005010c2: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x5010c7u); f_004f69e0();
    /* 005010c7: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 005010cb: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005010cf: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005010d2: je 0x5010d8 */ if (fZ) goto L_005010d8;
L_005010d4:; BB(0x005010d4);
    /* 005010d4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005010d6: jmp 0x5010dc */ goto L_005010dc;
L_005010d8:; BB(0x005010d8);
    /* 005010d8: jmp 0x50105c */ goto L_0050105c;
L_005010da:; BB(0x005010da);
    /* 005010da: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005010dc:; BB(0x005010dc);
    /* 005010dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005010dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005010df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005010e0: ret  */ FN_RET(0x00501040); r_esp += 4; return;
}

