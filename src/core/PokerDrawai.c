#include "protos.h"

void f_0046cd10(void) /* PokerDrawai::func_0046cd10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046cd10);
    /* 0046cd10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd11: mov ebp, esp */ r_ebp = r_esp;
    /* 0046cd13: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046cd19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd1b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046cd21: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x46cd26u); f_0047e420();
    /* 0046cd26: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0046cd29: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046cd2d: jge 0x46cd46 */ if ((fS==fO)) goto L_0046cd46;
L_0046cd2f:; BB(0x0046cd2f);
    /* 0046cd2f: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd34: push 0x6bc1e8 */ { u32 v = 0x6bc1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd39: push 0x6bc1d4 */ { u32 v = 0x6bc1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd3e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46cd43u); f_005e9f20();
    /* 0046cd43: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046cd46:; BB(0x0046cd46);
    /* 0046cd46: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046cd4c: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x46cd51u); f_0047f950();
    /* 0046cd51: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046cd54: jl 0x46cd6d */ if ((fS!=fO)) goto L_0046cd6d;
L_0046cd56:; BB(0x0046cd56);
    /* 0046cd56: push 0x1c9 */ { u32 v = 0x1c9u; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd5b: push 0x6bc1e8 */ { u32 v = 0x6bc1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd60: push 0x6bc19c */ { u32 v = 0x6bc19cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046cd65: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46cd6au); f_005e9f20();
    /* 0046cd6a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046cd6d:; BB(0x0046cd6d);
    /* 0046cd6d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046cd73: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46cd78u); f_0047e3b0();
    /* 0046cd78: mov dword ptr [0x791048], eax */ W32((u32)(0x791048u), r_eax);
    /* 0046cd7d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cd80: movsx eax, word ptr [edx*2 + 0x790fb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x790fb8u));
    /* 0046cd88: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046cd8c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0046cd8e: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0046cd90: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046cd93: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cd95: je 0x46d07a */ if (fZ) goto L_0046d07a;
L_0046cd9b:; BB(0x0046cd9b);
    /* 0046cd9b: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046cd9f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cda1: je 0x46cda8 */ if (fZ) goto L_0046cda8;
L_0046cda3:; BB(0x0046cda3);
    /* 0046cda3: call 0x46e6f0 */ r_esp -= 4; W32(r_esp, 0x46cda8u); f_0046e6f0();
L_0046cda8:; BB(0x0046cda8);
    /* 0046cda8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0046cdab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cdac: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046cdaf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cdb0: call 0x46e1f0 */ r_esp -= 4; W32(r_esp, 0x46cdb5u); f_0046e1f0();
    /* 0046cdb5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046cdb8: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046cdbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cdbe: je 0x46cead */ if (fZ) goto L_0046cead;
L_0046cdc4:; BB(0x0046cdc4);
    /* 0046cdc4: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0046cdca: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0046cdd0: jmp 0x46cdde */ goto L_0046cdde;
L_0046cdd2:; BB(0x0046cdd2);
    /* 0046cdd2: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0046cdd6: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046cdda: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
L_0046cdde:; BB(0x0046cdde);
    /* 0046cdde: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0046cde2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046cde8: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x46cdedu); f_0047f950();
    /* 0046cded: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046cdef: jge 0x46ce4d */ if ((fS==fO)) goto L_0046ce4d;
L_0046cdf1:; BB(0x0046cdf1);
    /* 0046cdf1: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0046cdf5: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cdf8: jne 0x46cdfc */ if (!fZ) goto L_0046cdfc;
L_0046cdfa:; BB(0x0046cdfa);
    /* 0046cdfa: jmp 0x46cdd2 */ goto L_0046cdd2;
L_0046cdfc:; BB(0x0046cdfc);
    /* 0046cdfc: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0046ce00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ce01: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ce07: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46ce0cu); f_0047e390();
    /* 0046ce0c: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ce0e: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x46ce13u); f_004c7010();
    /* 0046ce13: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ce16: jne 0x46ce4b */ if (!fZ) goto L_0046ce4b;
L_0046ce18:; BB(0x0046ce18);
    /* 0046ce18: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0046ce1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ce1d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ce23: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46ce28u); f_0047e390();
    /* 0046ce28: mov ecx, eax */ r_ecx = r_eax;
    /* 0046ce2a: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x46ce2fu); f_004c7050();
    /* 0046ce2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ce30: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ce36: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046ce39: call 0x4f6a90 */ r_esp -= 4; W32(r_esp, 0x46ce3eu); f_004f6a90();
    /* 0046ce3e: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046ce41: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0046ce45: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046ce47: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_0046ce4b:; BB(0x0046ce4b);
    /* 0046ce4b: jmp 0x46cdd2 */ goto L_0046cdd2;
L_0046ce4d:; BB(0x0046ce4d);
    /* 0046ce4d: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046ce53: call 0x4e04d0 */ r_esp -= 4; W32(r_esp, 0x46ce58u); f_004e04d0();
    /* 0046ce58: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 0046ce5c: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0046ce60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ce61: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46ce66u); f_0062fbf0();
    /* 0046ce66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ce69: mov esi, eax */ r_esi = r_eax;
    /* 0046ce6b: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0046ce6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ce70: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46ce75u); f_0062fbf0();
    /* 0046ce75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ce78: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046ce7a: movsx edi, word ptr [ebp - 8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0046ce7e: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046ce84: call 0x4e0490 */ r_esp -= 4; W32(r_esp, 0x46ce89u); f_004e0490();
    /* 0046ce89: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046ce8c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046ce8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ce90: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46ce95u); f_0062fbf0();
    /* 0046ce95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046ce98: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046ce9b: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046ce9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cea0: mov word ptr [eax*2 + 0x791010], si */ W16((u32)(r_eax*2+0x791010u), (u16)r_esi);
    /* 0046cea8: jmp 0x46cf6f */ goto L_0046cf6f;
L_0046cead:; BB(0x0046cead);
    /* 0046cead: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0046ceb3: mov word ptr [ebp - 0x18], 0 */ W16((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0046ceb9: jmp 0x46cec7 */ goto L_0046cec7;
L_0046cebb:; BB(0x0046cebb);
    /* 0046cebb: mov cx, word ptr [ebp - 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 0046cebf: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046cec3: mov word ptr [ebp - 0x18], cx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_ecx);
L_0046cec7:; BB(0x0046cec7);
    /* 0046cec7: movsx esi, word ptr [ebp - 0x18] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 0046cecb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ced1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x46ced6u); f_0047f950();
    /* 0046ced6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ced8: jge 0x46cf36 */ if ((fS==fO)) goto L_0046cf36;
L_0046ceda:; BB(0x0046ceda);
    /* 0046ceda: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 0046cede: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cee1: jne 0x46cee5 */ if (!fZ) goto L_0046cee5;
L_0046cee3:; BB(0x0046cee3);
    /* 0046cee3: jmp 0x46cebb */ goto L_0046cebb;
L_0046cee5:; BB(0x0046cee5);
    /* 0046cee5: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 0046cee9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ceea: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046cef0: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46cef5u); f_0047e390();
    /* 0046cef5: mov ecx, eax */ r_ecx = r_eax;
    /* 0046cef7: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x46cefcu); f_004c7010();
    /* 0046cefc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ceff: jne 0x46cf34 */ if (!fZ) goto L_0046cf34;
L_0046cf01:; BB(0x0046cf01);
    /* 0046cf01: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 0046cf05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cf06: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046cf0c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46cf11u); f_0047e390();
    /* 0046cf11: mov ecx, eax */ r_ecx = r_eax;
    /* 0046cf13: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x46cf18u); f_004c7050();
    /* 0046cf18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cf19: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046cf1f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046cf22: call 0x4f6a90 */ r_esp -= 4; W32(r_esp, 0x46cf27u); f_004f6a90();
    /* 0046cf27: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046cf2a: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0046cf2e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046cf30: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
L_0046cf34:; BB(0x0046cf34);
    /* 0046cf34: jmp 0x46cebb */ goto L_0046cebb;
L_0046cf36:; BB(0x0046cf36);
    /* 0046cf36: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0046cf3a: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046cf40: call 0x4e0490 */ r_esp -= 4; W32(r_esp, 0x46cf45u); f_004e0490();
    /* 0046cf45: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046cf48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046cf4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cf4c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46cf51u); f_0062fbf0();
    /* 0046cf51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046cf54: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046cf57: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cf5a: movsx eax, word ptr [edx*2 + 0x791010] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791010u));
    /* 0046cf62: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046cf64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cf67: mov word ptr [ecx*2 + 0x791010], ax */ W16((u32)(r_ecx*2+0x791010u), (u16)r_eax);
L_0046cf6f:; BB(0x0046cf6f);
    /* 0046cf6f: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046cf73: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0046cf75: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0046cf77: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046cf7a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cf7d: mov word ptr [eax*2 + 0x790fb8], dx */ W16((u32)(r_eax*2+0x790fb8u), (u16)r_edx);
    /* 0046cf85: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cf88: mov dx, word ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 0046cf8c: mov word ptr [ecx*2 + 0x79104c], dx */ W16((u32)(r_ecx*2+0x79104cu), (u16)r_edx);
    /* 0046cf94: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046cf97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046cf98: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046cf9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046cf9c: call 0x46dc80 */ r_esp -= 4; W32(r_esp, 0x46cfa1u); f_0046dc80();
    /* 0046cfa1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046cfa4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cfa7: fstp qword ptr [edx*8 + 0x791260] */ W_F64((u32)(r_edx*8+0x791260u), ST(0)); FPOP();
    /* 0046cfae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cfb1: mov word ptr [eax*2 + 0x791020], 1 */ W16((u32)(r_eax*2+0x791020u), 0x1u);
    /* 0046cfbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cfbe: movsx edx, word ptr [ecx*2 + 0x791030] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791030u));
    /* 0046cfc6: cmp edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cfc9: jne 0x46cfdd */ if (!fZ) goto L_0046cfdd;
L_0046cfcb:; BB(0x0046cfcb);
    /* 0046cfcb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cfce: mov word ptr [eax*2 + 0x791020], 6 */ W16((u32)(r_eax*2+0x791020u), 0x6u);
    /* 0046cfd8: jmp 0x46d075 */ goto L_0046d075;
L_0046cfdd:; BB(0x0046cfdd);
    /* 0046cfdd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cfe0: movsx edx, word ptr [ecx*2 + 0x791030] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791030u));
    /* 0046cfe8: cmp edx, 0x1b */ {  u32 a = r_edx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046cfeb: jne 0x46cffc */ if (!fZ) goto L_0046cffc;
L_0046cfed:; BB(0x0046cfed);
    /* 0046cfed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cff0: mov word ptr [eax*2 + 0x791020], 7 */ W16((u32)(r_eax*2+0x791020u), 0x7u);
    /* 0046cffa: jmp 0x46d075 */ goto L_0046d075;
L_0046cffc:; BB(0x0046cffc);
    /* 0046cffc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046cfff: movsx edx, word ptr [ecx*2 + 0x791030] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791030u));
    /* 0046d007: cmp edx, 0x1a */ {  u32 a = r_edx; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d00a: jne 0x46d01b */ if (!fZ) goto L_0046d01b;
L_0046d00c:; BB(0x0046d00c);
    /* 0046d00c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d00f: mov word ptr [eax*2 + 0x791020], 7 */ W16((u32)(r_eax*2+0x791020u), 0x7u);
    /* 0046d019: jmp 0x46d075 */ goto L_0046d075;
L_0046d01b:; BB(0x0046d01b);
    /* 0046d01b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d01e: movsx edx, word ptr [ecx*2 + 0x791030] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791030u));
    /* 0046d026: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d029: jne 0x46d049 */ if (!fZ) goto L_0046d049;
L_0046d02b:; BB(0x0046d02b);
    /* 0046d02b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d02d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d032u); f_0062fbf0();
    /* 0046d032: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d035: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d038: jge 0x46d049 */ if ((fS==fO)) goto L_0046d049;
L_0046d03a:; BB(0x0046d03a);
    /* 0046d03a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d03d: mov word ptr [eax*2 + 0x791020], 7 */ W16((u32)(r_eax*2+0x791020u), 0x7u);
    /* 0046d047: jmp 0x46d075 */ goto L_0046d075;
L_0046d049:; BB(0x0046d049);
    /* 0046d049: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d04c: movsx edx, word ptr [ecx*2 + 0x791030] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791030u));
    /* 0046d054: cmp edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d057: jne 0x46d075 */ if (!fZ) goto L_0046d075;
L_0046d059:; BB(0x0046d059);
    /* 0046d059: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d05b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d060u); f_0062fbf0();
    /* 0046d060: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d063: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d066: jge 0x46d075 */ if ((fS==fO)) goto L_0046d075;
L_0046d068:; BB(0x0046d068);
    /* 0046d068: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d06b: mov word ptr [eax*2 + 0x791020], 7 */ W16((u32)(r_eax*2+0x791020u), 0x7u);
L_0046d075:; BB(0x0046d075);
    /* 0046d075: jmp 0x46d11c */ goto L_0046d11c;
L_0046d07a:; BB(0x0046d07a);
    /* 0046d07a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d07d: movsx edx, word ptr [ecx*2 + 0x79104c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x79104cu));
    /* 0046d085: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d088: je 0x46d102 */ if (fZ) goto L_0046d102;
L_0046d08a:; BB(0x0046d08a);
    /* 0046d08a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d08d: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046d095: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d098: je 0x46d102 */ if (fZ) goto L_0046d102;
L_0046d09a:; BB(0x0046d09a);
    /* 0046d09a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d09d: movsx eax, word ptr [edx*2 + 0x791020] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791020u));
    /* 0046d0a5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d0a8: je 0x46d102 */ if (fZ) goto L_0046d102;
L_0046d0aa:; BB(0x0046d0aa);
    /* 0046d0aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d0ad: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046d0b5: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d0b8: je 0x46d102 */ if (fZ) goto L_0046d102;
L_0046d0ba:; BB(0x0046d0ba);
    /* 0046d0ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d0bd: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 0046d0c1: mov word ptr [eax*2 + 0x79104c], cx */ W16((u32)(r_eax*2+0x79104cu), (u16)r_ecx);
    /* 0046d0c9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0046d0cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d0cd: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046d0d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d0d1: call 0x46e1f0 */ r_esp -= 4; W32(r_esp, 0x46d0d6u); f_0046e1f0();
    /* 0046d0d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d0d9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0046d0dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d0dd: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046d0e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d0e1: call 0x46dc80 */ r_esp -= 4; W32(r_esp, 0x46d0e6u); f_0046dc80();
    /* 0046d0e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d0e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d0ec: fstp qword ptr [eax*8 + 0x791260] */ W_F64((u32)(r_eax*8+0x791260u), ST(0)); FPOP();
    /* 0046d0f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d0f6: mov word ptr [ecx*2 + 0x791020], 1 */ W16((u32)(r_ecx*2+0x791020u), 0x1u);
    /* 0046d100: jmp 0x46d11c */ goto L_0046d11c;
L_0046d102:; BB(0x0046d102);
    /* 0046d102: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0046d105: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d106: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046d109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d10a: call 0x46dc80 */ r_esp -= 4; W32(r_esp, 0x46d10fu); f_0046dc80();
    /* 0046d10f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d112: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d115: fstp qword ptr [ecx*8 + 0x791260] */ W_F64((u32)(r_ecx*8+0x791260u), ST(0)); FPOP();
L_0046d11c:; BB(0x0046d11c);
    /* 0046d11c: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046d120: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d122: je 0x46d1df */ if (fZ) goto L_0046d1df;
L_0046d128:; BB(0x0046d128);
    /* 0046d128: cmp dword ptr [ebp + 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d12c: jle 0x46d1df */ if ((fZ||fS!=fO)) goto L_0046d1df;
L_0046d132:; BB(0x0046d132);
    /* 0046d132: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d138: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d13b: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46d140u); f_004f6640();
    /* 0046d140: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046d143: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d145: je 0x46d1df */ if (fZ) goto L_0046d1df;
L_0046d14b:; BB(0x0046d14b);
    /* 0046d14b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d14e: movsx edx, word ptr [ecx*2 + 0x791030] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791030u));
    /* 0046d156: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d159: jl 0x46d1df */ if ((fS!=fO)) goto L_0046d1df;
L_0046d15f:; BB(0x0046d15f);
    /* 0046d15f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d162: movsx ecx, word ptr [eax*2 + 0x791030] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791030u));
    /* 0046d16a: cmp ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d16d: jg 0x46d1df */ if ((!fZ&&fS==fO)) goto L_0046d1df;
L_0046d16f:; BB(0x0046d16f);
    /* 0046d16f: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 0046d176: jmp 0x46d181 */ goto L_0046d181;
L_0046d178:; BB(0x0046d178);
    /* 0046d178: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046d17b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046d17e: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_0046d181:; BB(0x0046d181);
    /* 0046d181: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d187: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x46d18cu); f_0047f950();
    /* 0046d18c: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046d18f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046d190: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046d192: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0046d194: add eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d197: cmp dword ptr [ebp - 0x1c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d19a: jge 0x46d1df */ if ((fS==fO)) goto L_0046d1df;
L_0046d19c:; BB(0x0046d19c);
    /* 0046d19c: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d19e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d1a3u); f_0062fbf0();
    /* 0046d1a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d1a6: mov esi, eax */ r_esi = r_eax;
    /* 0046d1a8: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d1ae: call 0x4e1650 */ r_esp -= 4; W32(r_esp, 0x46d1b3u); f_004e1650();
    /* 0046d1b3: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046d1b6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d1b8: jge 0x46d1dd */ if ((fS==fO)) goto L_0046d1dd;
L_0046d1ba:; BB(0x0046d1ba);
    /* 0046d1ba: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d1bc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d1c1u); f_0062fbf0();
    /* 0046d1c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d1c4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d1c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d1c8: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d1ce: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x46d1d3u); f_004c79d0();
    /* 0046d1d3: mov eax, 2 */ r_eax = 0x2u;
    /* 0046d1d8: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d1dd:; BB(0x0046d1dd);
    /* 0046d1dd: jmp 0x46d178 */ goto L_0046d178;
L_0046d1df:; BB(0x0046d1df);
    /* 0046d1df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d1e2: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046d1ea: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d1ed: jne 0x46d26e */ if (!fZ) goto L_0046d26e;
L_0046d1ef:; BB(0x0046d1ef);
    /* 0046d1ef: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d1f1: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d1f7: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x46d1fcu); f_004c79d0();
    /* 0046d1fc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d202: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d205: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46d20au); f_004f6640();
    /* 0046d20a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046d20d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d20f: je 0x46d243 */ if (fZ) goto L_0046d243;
L_0046d211:; BB(0x0046d211);
    /* 0046d211: call 0x46dbe0 */ r_esp -= 4; W32(r_esp, 0x46d216u); f_0046dbe0();
    /* 0046d216: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046d219: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d21b: jne 0x46d237 */ if (!fZ) goto L_0046d237;
L_0046d21d:; BB(0x0046d21d);
    /* 0046d21d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d21f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d224u); f_0062fbf0();
    /* 0046d224: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d227: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d229: jne 0x46d237 */ if (!fZ) goto L_0046d237;
L_0046d22b:; BB(0x0046d22b);
    /* 0046d22b: mov eax, 1 */ r_eax = 0x1u;
    /* 0046d230: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d237:; BB(0x0046d237);
    /* 0046d237: mov eax, 2 */ r_eax = 0x2u;
    /* 0046d23c: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d243:; BB(0x0046d243);
    /* 0046d243: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d249: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d24c: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46d251u); f_004f66e0();
    /* 0046d251: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046d254: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d256: je 0x46d264 */ if (fZ) goto L_0046d264;
L_0046d258:; BB(0x0046d258);
    /* 0046d258: mov eax, 4 */ r_eax = 0x4u;
    /* 0046d25d: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d264:; BB(0x0046d264);
    /* 0046d264: mov eax, 3 */ r_eax = 0x3u;
    /* 0046d269: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d26e:; BB(0x0046d26e);
    /* 0046d26e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d271: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046d279: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d27c: jne 0x46d34a */ if (!fZ) goto L_0046d34a;
L_0046d282:; BB(0x0046d282);
    /* 0046d282: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d284: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d28a: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x46d28fu); f_004c79d0();
    /* 0046d28f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d295: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d298: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46d29du); f_004f6640();
    /* 0046d29d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046d2a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d2a2: je 0x46d2d6 */ if (fZ) goto L_0046d2d6;
L_0046d2a4:; BB(0x0046d2a4);
    /* 0046d2a4: call 0x46dbe0 */ r_esp -= 4; W32(r_esp, 0x46d2a9u); f_0046dbe0();
    /* 0046d2a9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046d2ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d2ae: jne 0x46d2ca */ if (!fZ) goto L_0046d2ca;
L_0046d2b0:; BB(0x0046d2b0);
    /* 0046d2b0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0046d2b2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d2b7u); f_0062fbf0();
    /* 0046d2b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d2ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d2bc: jne 0x46d2ca */ if (!fZ) goto L_0046d2ca;
L_0046d2be:; BB(0x0046d2be);
    /* 0046d2be: mov eax, 1 */ r_eax = 0x1u;
    /* 0046d2c3: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d2ca:; BB(0x0046d2ca);
    /* 0046d2ca: mov eax, 2 */ r_eax = 0x2u;
    /* 0046d2cf: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d2d6:; BB(0x0046d2d6);
    /* 0046d2d6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d2dc: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d2df: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46d2e4u); f_004f66e0();
    /* 0046d2e4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046d2e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d2e9: je 0x46d340 */ if (fZ) goto L_0046d340;
L_0046d2eb:; BB(0x0046d2eb);
    /* 0046d2eb: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d2ed: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d2f2u); f_0062fbf0();
    /* 0046d2f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d2f5: mov esi, eax */ r_esi = r_eax;
    /* 0046d2f7: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d2fd: call 0x4e0390 */ r_esp -= 4; W32(r_esp, 0x46d302u); f_004e0390();
    /* 0046d302: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046d305: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d307: jge 0x46d334 */ if ((fS==fO)) goto L_0046d334;
L_0046d309:; BB(0x0046d309);
    /* 0046d309: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d30b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d310u); f_0062fbf0();
    /* 0046d310: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d313: mov esi, eax */ r_esi = r_eax;
    /* 0046d315: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d31b: call 0x4e0390 */ r_esp -= 4; W32(r_esp, 0x46d320u); f_004e0390();
    /* 0046d320: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046d323: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d325: jge 0x46d334 */ if ((fS==fO)) goto L_0046d334;
L_0046d327:; BB(0x0046d327);
    /* 0046d327: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d32a: mov word ptr [ecx*2 + 0x791020], 5 */ W16((u32)(r_ecx*2+0x791020u), 0x5u);
L_0046d334:; BB(0x0046d334);
    /* 0046d334: mov eax, 4 */ r_eax = 0x4u;
    /* 0046d339: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d340:; BB(0x0046d340);
    /* 0046d340: mov eax, 3 */ r_eax = 0x3u;
    /* 0046d345: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d34a:; BB(0x0046d34a);
    /* 0046d34a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d34d: movsx eax, word ptr [edx*2 + 0x791020] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791020u));
    /* 0046d355: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d358: jne 0x46d5d6 */ if (!fZ) goto L_0046d5d6;
L_0046d35e:; BB(0x0046d35e);
    /* 0046d35e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d364: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d367: call 0x4f6690 */ r_esp -= 4; W32(r_esp, 0x46d36cu); f_004f6690();
    /* 0046d36c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046d36f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d371: je 0x46d5b3 */ if (fZ) goto L_0046d5b3;
L_0046d377:; BB(0x0046d377);
    /* 0046d377: fld qword ptr [0x6b3748] */ FPUSH(R_F64((u32)(0x6b3748u)));
    /* 0046d37d: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0046d380: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046d384: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d386: je 0x46d3a5 */ if (fZ) goto L_0046d3a5;
L_0046d388:; BB(0x0046d388);
    /* 0046d388: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d38e: call 0x4c6db0 */ r_esp -= 4; W32(r_esp, 0x46d393u); f_004c6db0();
    /* 0046d393: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0046d396: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 0046d399: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0046d39f: fadd qword ptr [ebp - 0x30] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffd0u));
    /* 0046d3a2: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
L_0046d3a5:; BB(0x0046d3a5);
    /* 0046d3a5: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d3ab: call 0x4c6df0 */ r_esp -= 4; W32(r_esp, 0x46d3b0u); f_004c6df0();
    /* 0046d3b0: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0046d3b3: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 0046d3b6: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0046d3bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d3bf: fadd qword ptr [eax*8 + 0x791260] */ ST(0) = ST(0) + R_F64((u32)(r_eax*8+0x791260u));
    /* 0046d3c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d3c9: fmul qword ptr [ecx*8 + 0x791260] */ ST(0) = ST(0) * R_F64((u32)(r_ecx*8+0x791260u));
    /* 0046d3d0: fmul qword ptr [ebp - 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd0u));
    /* 0046d3d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d3d9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d3dc: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0046d3df: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x46d3e4u); f_004f67d0();
    /* 0046d3e4: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0046d3e7: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 0046d3ea: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d3f0: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d3f3: fstp qword ptr [ebp - 0x6c] */ W_F64((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 0046d3f6: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x46d3fbu); f_004f6840();
    /* 0046d3fb: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0046d3fe: fild dword ptr [ebp - 0x70] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff90u)));
    /* 0046d401: fdivr qword ptr [ebp - 0x6c] */ ST(0) = R_F64((u32)(r_ebp+0xffffff94u)) / ST(0);
    /* 0046d404: fdivr qword ptr [ebp - 0x60] */ ST(0) = R_F64((u32)(r_ebp+0xffffffa0u)) / ST(0);
    /* 0046d407: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0046d40a: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d410: call 0x4e1520 */ r_esp -= 4; W32(r_esp, 0x46d415u); f_004e1520();
    /* 0046d415: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046d418: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0046d41b: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0046d41e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d41f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d424u); f_0062fbf0();
    /* 0046d424: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d427: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046d42a: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046d42d: mov word ptr [ebp - 0x20], si */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_esi);
    /* 0046d431: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046d435: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d437: je 0x46d44f */ if (fZ) goto L_0046d44f;
L_0046d439:; BB(0x0046d439);
    /* 0046d439: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d43f: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x46d444u); f_0047d6b0();
    /* 0046d444: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d447: je 0x46d44f */ if (fZ) goto L_0046d44f;
L_0046d449:; BB(0x0046d449);
    /* 0046d449: mov word ptr [ebp - 0x20], 0 */ W16((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0046d44f:; BB(0x0046d44f);
    /* 0046d44f: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0046d453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d454: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d459u); f_0062fbf0();
    /* 0046d459: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d45c: mov esi, eax */ r_esi = r_eax;
    /* 0046d45e: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0046d462: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d463: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d468u); f_0062fbf0();
    /* 0046d468: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d46b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0046d46d: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0046d471: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d472: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d477u); f_0062fbf0();
    /* 0046d477: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d47a: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046d47c: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 0046d47f: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046d483: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d485: je 0x46d4a6 */ if (fZ) goto L_0046d4a6;
L_0046d487:; BB(0x0046d487);
    /* 0046d487: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d48d: call 0x4df9e0 */ r_esp -= 4; W32(r_esp, 0x46d492u); f_004df9e0();
    /* 0046d492: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046d495: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d496: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d49bu); f_0062fbf0();
    /* 0046d49b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d49e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0046d4a1: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d4a3: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_0046d4a6:; BB(0x0046d4a6);
    /* 0046d4a6: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046d4aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d4ac: je 0x46d4fb */ if (fZ) goto L_0046d4fb;
L_0046d4ae:; BB(0x0046d4ae);
    /* 0046d4ae: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d4b4: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x46d4b9u); f_0047d6b0();
    /* 0046d4b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d4bb: jne 0x46d4fb */ if (!fZ) goto L_0046d4fb;
L_0046d4bd:; BB(0x0046d4bd);
    /* 0046d4bd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d4c3: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d4c6: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x46d4cbu); f_004f67d0();
    /* 0046d4cb: mov esi, eax */ r_esi = r_eax;
    /* 0046d4cd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d4d3: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x46d4d8u); f_0047bce0();
    /* 0046d4d8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d4da: jg 0x46d4fb */ if ((!fZ&&fS==fO)) goto L_0046d4fb;
L_0046d4dc:; BB(0x0046d4dc);
    /* 0046d4dc: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d4e2: call 0x4df9e0 */ r_esp -= 4; W32(r_esp, 0x46d4e7u); f_004df9e0();
    /* 0046d4e7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046d4ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d4eb: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d4f0u); f_0062fbf0();
    /* 0046d4f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d4f3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0046d4f6: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d4f8: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_0046d4fb:; BB(0x0046d4fb);
    /* 0046d4fb: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046d4ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d501: je 0x46d536 */ if (fZ) goto L_0046d536;
L_0046d503:; BB(0x0046d503);
    /* 0046d503: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d509: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x46d50eu); f_0047d6b0();
    /* 0046d50e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d510: jne 0x46d536 */ if (!fZ) goto L_0046d536;
L_0046d512:; BB(0x0046d512);
    /* 0046d512: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d518: call 0x4df9e0 */ r_esp -= 4; W32(r_esp, 0x46d51du); f_004df9e0();
    /* 0046d51d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046d520: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046d521: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046d523: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0046d525: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d526: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d52bu); f_0062fbf0();
    /* 0046d52b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d52e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0046d531: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d533: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_0046d536:; BB(0x0046d536);
    /* 0046d536: cmp dword ptr [ebp - 0x34], -0x13 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0xffffffedu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d53a: jge 0x46d543 */ if ((fS==fO)) goto L_0046d543;
L_0046d53c:; BB(0x0046d53c);
    /* 0046d53c: mov dword ptr [ebp - 0x34], 0xffffffed */ W32((u32)(r_ebp+0xffffffccu), 0xffffffedu);
L_0046d543:; BB(0x0046d543);
    /* 0046d543: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 0046d546: fdiv qword ptr [0x6b6978] */ ST(0) = ST(0) / R_F64((u32)(0x6b6978u));
    /* 0046d54c: fld1  */ FPUSH(1.0);
    /* 0046d54e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0046d550: fcomp qword ptr [ebp - 0x28] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffd8u))); FPOP();
    /* 0046d553: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046d555: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0046d558: jp 0x46d5aa */ if (fP) goto L_0046d5aa;
L_0046d55a:; BB(0x0046d55a);
    /* 0046d55a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0046d55d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d55e: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046d561: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d562: call 0x46e2f0 */ r_esp -= 4; W32(r_esp, 0x46d567u); f_0046e2f0();
    /* 0046d567: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d56a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046d56d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d56f: je 0x46d573 */ if (fZ) goto L_0046d573;
L_0046d571:; BB(0x0046d571);
    /* 0046d571: jmp 0x46d5a8 */ goto L_0046d5a8;
L_0046d573:; BB(0x0046d573);
    /* 0046d573: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d575: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d57au); f_0062fbf0();
    /* 0046d57a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d57d: mov esi, eax */ r_esi = r_eax;
    /* 0046d57f: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d585: call 0x4e11f0 */ r_esp -= 4; W32(r_esp, 0x46d58au); f_004e11f0();
    /* 0046d58a: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046d58d: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d58f: jge 0x46d59e */ if ((fS==fO)) goto L_0046d59e;
L_0046d591:; BB(0x0046d591);
    /* 0046d591: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d594: mov word ptr [eax*2 + 0x791020], 2 */ W16((u32)(r_eax*2+0x791020u), 0x2u);
L_0046d59e:; BB(0x0046d59e);
    /* 0046d59e: mov eax, 3 */ r_eax = 0x3u;
    /* 0046d5a3: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d5a8:; BB(0x0046d5a8);
    /* 0046d5a8: jmp 0x46d5b1 */ goto L_0046d5b1;
L_0046d5aa:; BB(0x0046d5aa);
    /* 0046d5aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046d5ac: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d5b1:; BB(0x0046d5b1);
    /* 0046d5b1: jmp 0x46d5d6 */ goto L_0046d5d6;
L_0046d5b3:; BB(0x0046d5b3);
    /* 0046d5b3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0046d5b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d5b7: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046d5ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d5bb: call 0x46e2f0 */ r_esp -= 4; W32(r_esp, 0x46d5c0u); f_0046e2f0();
    /* 0046d5c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d5c3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046d5c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d5c8: je 0x46d5cc */ if (fZ) goto L_0046d5cc;
L_0046d5ca:; BB(0x0046d5ca);
    /* 0046d5ca: jmp 0x46d5d6 */ goto L_0046d5d6;
L_0046d5cc:; BB(0x0046d5cc);
    /* 0046d5cc: mov eax, 1 */ r_eax = 0x1u;
    /* 0046d5d1: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d5d6:; BB(0x0046d5d6);
    /* 0046d5d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d5d9: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046d5e1: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d5e4: je 0x46d5fa */ if (fZ) goto L_0046d5fa;
L_0046d5e6:; BB(0x0046d5e6);
    /* 0046d5e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d5e9: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046d5f1: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d5f4: jne 0x46d786 */ if (!fZ) goto L_0046d786;
L_0046d5fa:; BB(0x0046d5fa);
    /* 0046d5fa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d5fd: movsx eax, word ptr [edx*2 + 0x791020] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791020u));
    /* 0046d605: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d608: jne 0x46d630 */ if (!fZ) goto L_0046d630;
L_0046d60a:; BB(0x0046d60a);
    /* 0046d60a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d610: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x46d615u); f_0047ce60();
    /* 0046d615: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d616: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046d61a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d61c: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0046d61f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d620: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d626: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x46d62bu); f_004c6ef0();
    /* 0046d62b: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0046d62e: jmp 0x46d63e */ goto L_0046d63e;
L_0046d630:; BB(0x0046d630);
    /* 0046d630: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d636: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x46d63bu); f_004c6f50();
    /* 0046d63b: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
L_0046d63e:; BB(0x0046d63e);
    /* 0046d63e: mov eax, 0x64 */ r_eax = 0x64u;
    /* 0046d643: sub eax, dword ptr [ebp - 0x74] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046d646: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d647: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d64cu); f_0062fbf0();
    /* 0046d64c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d64f: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0046d652: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 0046d655: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0046d658: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0046d65b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d65c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d65e: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046d661: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d662: call 0x46e810 */ r_esp -= 4; W32(r_esp, 0x46d667u); f_0046e810();
    /* 0046d667: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d66a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046d66d: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0046d670: fild dword ptr [ebp - 0x7c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff84u)));
    /* 0046d673: fcomp qword ptr [ebp - 0x40] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffc0u))); FPOP();
    /* 0046d676: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046d678: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046d67b: jne 0x46d781 */ if (!fZ) goto L_0046d781;
L_0046d681:; BB(0x0046d681);
    /* 0046d681: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d683: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d689: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x46d68eu); f_004c79d0();
    /* 0046d68e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d694: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d697: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46d69cu); f_004f6640();
    /* 0046d69c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046d69f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d6a1: jne 0x46d6cf */ if (!fZ) goto L_0046d6cf;
L_0046d6a3:; BB(0x0046d6a3);
    /* 0046d6a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d6a9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d6ac: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46d6b1u); f_004f66e0();
    /* 0046d6b1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046d6b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d6b6: jne 0x46d6cf */ if (!fZ) goto L_0046d6cf;
L_0046d6b8:; BB(0x0046d6b8);
    /* 0046d6b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d6bb: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046d6c3: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d6c6: jne 0x46d6cf */ if (!fZ) goto L_0046d6cf;
L_0046d6c8:; BB(0x0046d6c8);
    /* 0046d6c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046d6ca: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d6cf:; BB(0x0046d6cf);
    /* 0046d6cf: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d6d1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d6d6u); f_0062fbf0();
    /* 0046d6d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d6d9: mov esi, eax */ r_esi = r_eax;
    /* 0046d6db: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d6e1: call 0x4e0390 */ r_esp -= 4; W32(r_esp, 0x46d6e6u); f_004e0390();
    /* 0046d6e6: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046d6e9: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d6eb: jge 0x46d6fc */ if ((fS==fO)) goto L_0046d6fc;
L_0046d6ed:; BB(0x0046d6ed);
    /* 0046d6ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d6f0: mov word ptr [eax*2 + 0x791020], 4 */ W16((u32)(r_eax*2+0x791020u), 0x4u);
    /* 0046d6fa: jmp 0x46d727 */ goto L_0046d727;
L_0046d6fc:; BB(0x0046d6fc);
    /* 0046d6fc: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d6fe: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d703u); f_0062fbf0();
    /* 0046d703: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d706: mov esi, eax */ r_esi = r_eax;
    /* 0046d708: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d70e: call 0x4e03b0 */ r_esp -= 4; W32(r_esp, 0x46d713u); f_004e03b0();
    /* 0046d713: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046d716: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d718: jge 0x46d727 */ if ((fS==fO)) goto L_0046d727;
L_0046d71a:; BB(0x0046d71a);
    /* 0046d71a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d71d: mov word ptr [edx*2 + 0x791020], 1 */ W16((u32)(r_edx*2+0x791020u), 0x1u);
L_0046d727:; BB(0x0046d727);
    /* 0046d727: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d72d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d730: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46d735u); f_004f6640();
    /* 0046d735: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046d738: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d73a: je 0x46d748 */ if (fZ) goto L_0046d748;
L_0046d73c:; BB(0x0046d73c);
    /* 0046d73c: mov eax, 2 */ r_eax = 0x2u;
    /* 0046d741: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d748:; BB(0x0046d748);
    /* 0046d748: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d74e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d751: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46d756u); f_004f66e0();
    /* 0046d756: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046d759: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d75b: je 0x46d777 */ if (fZ) goto L_0046d777;
L_0046d75d:; BB(0x0046d75d);
    /* 0046d75d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d75f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d764u); f_0062fbf0();
    /* 0046d764: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d767: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d769: je 0x46d777 */ if (fZ) goto L_0046d777;
L_0046d76b:; BB(0x0046d76b);
    /* 0046d76b: mov eax, 4 */ r_eax = 0x4u;
    /* 0046d770: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d777:; BB(0x0046d777);
    /* 0046d777: mov eax, 3 */ r_eax = 0x3u;
    /* 0046d77c: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d781:; BB(0x0046d781);
    /* 0046d781: jmp 0x46db34 */ goto L_0046db34;
L_0046d786:; BB(0x0046d786);
    /* 0046d786: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d789: movsx eax, word ptr [edx*2 + 0x791020] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791020u));
    /* 0046d791: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d794: je 0x46d7aa */ if (fZ) goto L_0046d7aa;
L_0046d796:; BB(0x0046d796);
    /* 0046d796: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d799: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046d7a1: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d7a4: jne 0x46d95b */ if (!fZ) goto L_0046d95b;
L_0046d7aa:; BB(0x0046d7aa);
    /* 0046d7aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d7ad: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046d7b5: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d7b8: jne 0x46d7e0 */ if (!fZ) goto L_0046d7e0;
L_0046d7ba:; BB(0x0046d7ba);
    /* 0046d7ba: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d7c0: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x46d7c5u); f_0047ce60();
    /* 0046d7c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d7c6: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046d7ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d7cc: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0046d7cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d7d0: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d7d6: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x46d7dbu); f_004c6ef0();
    /* 0046d7db: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0046d7de: jmp 0x46d7ee */ goto L_0046d7ee;
L_0046d7e0:; BB(0x0046d7e0);
    /* 0046d7e0: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d7e6: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x46d7ebu); f_004c6f50();
    /* 0046d7eb: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
L_0046d7ee:; BB(0x0046d7ee);
    /* 0046d7ee: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0046d7f3: sub ecx, dword ptr [ebp - 0x80] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff80u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d7f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d7f7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d7fcu); f_0062fbf0();
    /* 0046d7fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d7ff: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0046d805: fild dword ptr [ebp - 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff7cu)));
    /* 0046d80b: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0046d80e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0046d811: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d812: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d814: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046d817: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d818: call 0x46e810 */ r_esp -= 4; W32(r_esp, 0x46d81du); f_0046e810();
    /* 0046d81d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d820: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046d823: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0046d829: fild dword ptr [ebp - 0x88] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff78u)));
    /* 0046d82f: fcomp qword ptr [ebp - 0x48] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffb8u))); FPOP();
    /* 0046d832: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046d834: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046d837: jne 0x46d956 */ if (!fZ) goto L_0046d956;
L_0046d83d:; BB(0x0046d83d);
    /* 0046d83d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d83f: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d845: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x46d84au); f_004c79d0();
    /* 0046d84a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d850: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d853: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46d858u); f_004f6640();
    /* 0046d858: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046d85b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d85d: jne 0x46d88b */ if (!fZ) goto L_0046d88b;
L_0046d85f:; BB(0x0046d85f);
    /* 0046d85f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d865: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d868: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46d86du); f_004f66e0();
    /* 0046d86d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046d870: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d872: jne 0x46d88b */ if (!fZ) goto L_0046d88b;
L_0046d874:; BB(0x0046d874);
    /* 0046d874: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d877: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046d87f: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d882: jne 0x46d88b */ if (!fZ) goto L_0046d88b;
L_0046d884:; BB(0x0046d884);
    /* 0046d884: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046d886: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d88b:; BB(0x0046d88b);
    /* 0046d88b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d88d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d892u); f_0062fbf0();
    /* 0046d892: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d895: mov esi, eax */ r_esi = r_eax;
    /* 0046d897: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d89d: call 0x4e0390 */ r_esp -= 4; W32(r_esp, 0x46d8a2u); f_004e0390();
    /* 0046d8a2: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046d8a5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d8a7: jge 0x46d8b8 */ if ((fS==fO)) goto L_0046d8b8;
L_0046d8a9:; BB(0x0046d8a9);
    /* 0046d8a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d8ac: mov word ptr [ecx*2 + 0x791020], 3 */ W16((u32)(r_ecx*2+0x791020u), 0x3u);
    /* 0046d8b6: jmp 0x46d8e3 */ goto L_0046d8e3;
L_0046d8b8:; BB(0x0046d8b8);
    /* 0046d8b8: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d8ba: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d8bfu); f_0062fbf0();
    /* 0046d8bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d8c2: mov esi, eax */ r_esi = r_eax;
    /* 0046d8c4: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d8ca: call 0x4e03b0 */ r_esp -= 4; W32(r_esp, 0x46d8cfu); f_004e03b0();
    /* 0046d8cf: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046d8d2: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046d8d4: jge 0x46d8e3 */ if ((fS==fO)) goto L_0046d8e3;
L_0046d8d6:; BB(0x0046d8d6);
    /* 0046d8d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d8d9: mov word ptr [eax*2 + 0x791020], 1 */ W16((u32)(r_eax*2+0x791020u), 0x1u);
L_0046d8e3:; BB(0x0046d8e3);
    /* 0046d8e3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d8e9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d8ec: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46d8f1u); f_004f6640();
    /* 0046d8f1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046d8f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d8f6: je 0x46d904 */ if (fZ) goto L_0046d904;
L_0046d8f8:; BB(0x0046d8f8);
    /* 0046d8f8: mov eax, 2 */ r_eax = 0x2u;
    /* 0046d8fd: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d904:; BB(0x0046d904);
    /* 0046d904: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d90a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d90d: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46d912u); f_004f66e0();
    /* 0046d912: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046d915: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d917: je 0x46d933 */ if (fZ) goto L_0046d933;
L_0046d919:; BB(0x0046d919);
    /* 0046d919: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d91b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d920u); f_0062fbf0();
    /* 0046d920: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d923: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d925: je 0x46d933 */ if (fZ) goto L_0046d933;
L_0046d927:; BB(0x0046d927);
    /* 0046d927: mov eax, 4 */ r_eax = 0x4u;
    /* 0046d92c: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d933:; BB(0x0046d933);
    /* 0046d933: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d936: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046d93e: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d941: jne 0x46d94c */ if (!fZ) goto L_0046d94c;
L_0046d943:; BB(0x0046d943);
    /* 0046d943: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046d945: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d94c:; BB(0x0046d94c);
    /* 0046d94c: mov eax, 3 */ r_eax = 0x3u;
    /* 0046d951: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046d956:; BB(0x0046d956);
    /* 0046d956: jmp 0x46db34 */ goto L_0046db34;
L_0046d95b:; BB(0x0046d95b);
    /* 0046d95b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d95e: movsx eax, word ptr [edx*2 + 0x791020] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791020u));
    /* 0046d966: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d969: je 0x46d97f */ if (fZ) goto L_0046d97f;
L_0046d96b:; BB(0x0046d96b);
    /* 0046d96b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d96e: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046d976: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d979: jne 0x46db34 */ if (!fZ) goto L_0046db34;
L_0046d97f:; BB(0x0046d97f);
    /* 0046d97f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046d982: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046d98a: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d98d: jne 0x46d9b8 */ if (!fZ) goto L_0046d9b8;
L_0046d98f:; BB(0x0046d98f);
    /* 0046d98f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046d995: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x46d99au); f_0047ce60();
    /* 0046d99a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d99b: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046d99f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046d9a1: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0046d9a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d9a5: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d9ab: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x46d9b0u); f_004c6ef0();
    /* 0046d9b0: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0046d9b6: jmp 0x46d9c9 */ goto L_0046d9c9;
L_0046d9b8:; BB(0x0046d9b8);
    /* 0046d9b8: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046d9be: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x46d9c3u); f_004c6f50();
    /* 0046d9c3: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
L_0046d9c9:; BB(0x0046d9c9);
    /* 0046d9c9: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0046d9ce: sub ecx, dword ptr [ebp - 0x8c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff74u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046d9d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d9d5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46d9dau); f_0062fbf0();
    /* 0046d9da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d9dd: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0046d9e3: fild dword ptr [ebp - 0x90] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff70u)));
    /* 0046d9e9: fstp qword ptr [ebp - 0x50] */ W_F64((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0046d9ec: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0046d9ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046d9f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046d9f2: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046d9f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046d9f6: call 0x46e810 */ r_esp -= 4; W32(r_esp, 0x46d9fbu); f_0046e810();
    /* 0046d9fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046d9fe: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046da01: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 0046da07: fild dword ptr [ebp - 0x94] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff6cu)));
    /* 0046da0d: fcomp qword ptr [ebp - 0x50] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffb0u))); FPOP();
    /* 0046da10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046da12: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046da15: jne 0x46db34 */ if (!fZ) goto L_0046db34;
L_0046da1b:; BB(0x0046da1b);
    /* 0046da1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046da1d: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046da23: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x46da28u); f_004c79d0();
    /* 0046da28: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046da2e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046da31: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46da36u); f_004f6640();
    /* 0046da36: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046da39: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046da3b: jne 0x46da69 */ if (!fZ) goto L_0046da69;
L_0046da3d:; BB(0x0046da3d);
    /* 0046da3d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046da43: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046da46: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46da4bu); f_004f66e0();
    /* 0046da4b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046da4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046da50: jne 0x46da69 */ if (!fZ) goto L_0046da69;
L_0046da52:; BB(0x0046da52);
    /* 0046da52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046da55: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046da5d: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046da60: jne 0x46da69 */ if (!fZ) goto L_0046da69;
L_0046da62:; BB(0x0046da62);
    /* 0046da62: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046da64: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046da69:; BB(0x0046da69);
    /* 0046da69: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046da6b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46da70u); f_0062fbf0();
    /* 0046da70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046da73: mov esi, eax */ r_esi = r_eax;
    /* 0046da75: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046da7b: call 0x4e0390 */ r_esp -= 4; W32(r_esp, 0x46da80u); f_004e0390();
    /* 0046da80: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046da83: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046da85: jge 0x46da96 */ if ((fS==fO)) goto L_0046da96;
L_0046da87:; BB(0x0046da87);
    /* 0046da87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046da8a: mov word ptr [ecx*2 + 0x791020], 2 */ W16((u32)(r_ecx*2+0x791020u), 0x2u);
    /* 0046da94: jmp 0x46dac1 */ goto L_0046dac1;
L_0046da96:; BB(0x0046da96);
    /* 0046da96: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046da98: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46da9du); f_0062fbf0();
    /* 0046da9d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046daa0: mov esi, eax */ r_esi = r_eax;
    /* 0046daa2: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046daa8: call 0x4e03b0 */ r_esp -= 4; W32(r_esp, 0x46daadu); f_004e03b0();
    /* 0046daad: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046dab0: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046dab2: jge 0x46dac1 */ if ((fS==fO)) goto L_0046dac1;
L_0046dab4:; BB(0x0046dab4);
    /* 0046dab4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dab7: mov word ptr [eax*2 + 0x791020], 1 */ W16((u32)(r_eax*2+0x791020u), 0x1u);
L_0046dac1:; BB(0x0046dac1);
    /* 0046dac1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dac7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046daca: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46dacfu); f_004f6640();
    /* 0046dacf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046dad2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dad4: je 0x46dae2 */ if (fZ) goto L_0046dae2;
L_0046dad6:; BB(0x0046dad6);
    /* 0046dad6: mov eax, 2 */ r_eax = 0x2u;
    /* 0046dadb: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046dae2:; BB(0x0046dae2);
    /* 0046dae2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dae8: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046daeb: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46daf0u); f_004f66e0();
    /* 0046daf0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046daf3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046daf5: je 0x46db11 */ if (fZ) goto L_0046db11;
L_0046daf7:; BB(0x0046daf7);
    /* 0046daf7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046daf9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46dafeu); f_0062fbf0();
    /* 0046dafe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046db01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046db03: je 0x46db11 */ if (fZ) goto L_0046db11;
L_0046db05:; BB(0x0046db05);
    /* 0046db05: mov eax, 4 */ r_eax = 0x4u;
    /* 0046db0a: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046db11:; BB(0x0046db11);
    /* 0046db11: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046db14: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046db1c: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046db1f: jne 0x46db2a */ if (!fZ) goto L_0046db2a;
L_0046db21:; BB(0x0046db21);
    /* 0046db21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046db23: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046db2a:; BB(0x0046db2a);
    /* 0046db2a: mov eax, 3 */ r_eax = 0x3u;
    /* 0046db2f: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046db34:; BB(0x0046db34);
    /* 0046db34: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046db3a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046db3d: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46db42u); f_004f6640();
    /* 0046db42: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046db45: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046db47: jne 0x46db89 */ if (!fZ) goto L_0046db89;
L_0046db49:; BB(0x0046db49);
    /* 0046db49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046db4c: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046db54: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046db57: jne 0x46db5f */ if (!fZ) goto L_0046db5f;
L_0046db59:; BB(0x0046db59);
    /* 0046db59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046db5b: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046db5f:; BB(0x0046db5f);
    /* 0046db5f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046db62: movsx eax, word ptr [edx*2 + 0x791020] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791020u));
    /* 0046db6a: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046db6d: jne 0x46db75 */ if (!fZ) goto L_0046db75;
L_0046db6f:; BB(0x0046db6f);
    /* 0046db6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046db71: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046db75:; BB(0x0046db75);
    /* 0046db75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046db78: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046db80: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046db83: jne 0x46db89 */ if (!fZ) goto L_0046db89;
L_0046db85:; BB(0x0046db85);
    /* 0046db85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046db87: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046db89:; BB(0x0046db89);
    /* 0046db89: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046db8b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46db90u); f_0062fbf0();
    /* 0046db90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046db93: mov esi, eax */ r_esi = r_eax;
    /* 0046db95: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046db9b: call 0x4e03b0 */ r_esp -= 4; W32(r_esp, 0x46dba0u); f_004e03b0();
    /* 0046dba0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046dba3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046dba5: jge 0x46dbb4 */ if ((fS==fO)) goto L_0046dbb4;
L_0046dba7:; BB(0x0046dba7);
    /* 0046dba7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046dbaa: mov word ptr [ecx*2 + 0x791020], 1 */ W16((u32)(r_ecx*2+0x791020u), 0x1u);
L_0046dbb4:; BB(0x0046dbb4);
    /* 0046dbb4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dbba: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046dbbd: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46dbc2u); f_004f6640();
    /* 0046dbc2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046dbc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dbc7: je 0x46dbd2 */ if (fZ) goto L_0046dbd2;
L_0046dbc9:; BB(0x0046dbc9);
    /* 0046dbc9: mov eax, 1 */ r_eax = 0x1u;
    /* 0046dbce: jmp 0x46dbd7 */ goto L_0046dbd7;
L_0046dbd2:; BB(0x0046dbd2);
    /* 0046dbd2: mov eax, 3 */ r_eax = 0x3u;
L_0046dbd7:; BB(0x0046dbd7);
    /* 0046dbd7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046dbd8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0046dbd9: mov esp, ebp */ r_esp = r_ebp;
    /* 0046dbdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046dbdc: ret  */ FN_RET(0x0046cd10); r_esp += 4; return;
}

void f_0046dc80(void) /* PokerDrawai::func_0046dc80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046dc80);
    /* 0046dc80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046dc81: mov ebp, esp */ r_ebp = r_esp;
    /* 0046dc83: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046dc89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046dc8a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dc90: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x46dc95u); f_0047e420();
    /* 0046dc95: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0046dc98: fld1  */ FPUSH(1.0);
    /* 0046dc9a: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0046dc9d: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046dca3: call 0x4dfad0 */ r_esp -= 4; W32(r_esp, 0x46dca8u); f_004dfad0();
    /* 0046dca8: fidiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xcu));
    /* 0046dcab: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0046dcae: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 0046dcb2: mov eax, dword ptr [0x791048] */ r_eax = R32((u32)(0x791048u));
    /* 0046dcb7: movzx ecx, byte ptr [eax + 0x1d] */ r_ecx = (u32)R8((u32)(r_eax+0x1du));
    /* 0046dcbb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dcbd: je 0x46dcc3 */ if (fZ) goto L_0046dcc3;
L_0046dcbf:; BB(0x0046dcbf);
    /* 0046dcbf: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_0046dcc3:; BB(0x0046dcc3);
    /* 0046dcc3: mov word ptr [ebp - 0x20], 0 */ W16((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0046dcc9: jmp 0x46dcd7 */ goto L_0046dcd7;
L_0046dccb:; BB(0x0046dccb);
    /* 0046dccb: mov dx, word ptr [ebp - 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 0046dccf: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046dcd3: mov word ptr [ebp - 0x20], dx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edx);
L_0046dcd7:; BB(0x0046dcd7);
    /* 0046dcd7: movsx esi, word ptr [ebp - 0x20] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0046dcdb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dce1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x46dce6u); f_0047f950();
    /* 0046dce6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046dce8: jge 0x46e17a */ if ((fS==fO)) goto L_0046e17a;
L_0046dcee:; BB(0x0046dcee);
    /* 0046dcee: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0046dcf2: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dcf5: jne 0x46dcf9 */ if (!fZ) goto L_0046dcf9;
L_0046dcf7:; BB(0x0046dcf7);
    /* 0046dcf7: jmp 0x46dccb */ goto L_0046dccb;
L_0046dcf9:; BB(0x0046dcf9);
    /* 0046dcf9: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0046dcfd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046dcfe: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dd04: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46dd09u); f_0047e390();
    /* 0046dd09: mov ecx, eax */ r_ecx = r_eax;
    /* 0046dd0b: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x46dd10u); f_004c7010();
    /* 0046dd10: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dd13: jne 0x46e175 */ if (!fZ) goto L_0046e175;
L_0046dd19:; BB(0x0046dd19);
    /* 0046dd19: fldz  */ FPUSH(0.0);
    /* 0046dd1b: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0046dd1e: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0046dd22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046dd23: mov ax, word ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 0046dd27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046dd28: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046dd2e: call 0x4e1020 */ r_esp -= 4; W32(r_esp, 0x46dd33u); f_004e1020();
    /* 0046dd33: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0046dd36: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046dd39: shl ecx, 6 */ { u32 c = (6u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0046dd3c: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0046dd40: fld qword ptr [ebp - 0x28] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd8u)));
    /* 0046dd43: fmul qword ptr [ecx + edx*8 + 0x791060] */ ST(0) = ST(0) * R_F64((u32)(r_ecx+r_edx*8+0x791060u));
    /* 0046dd4a: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 0046dd4d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046dd4f: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046dd52: jne 0x46dd5d */ if (!fZ) goto L_0046dd5d;
L_0046dd54:; BB(0x0046dd54);
    /* 0046dd54: mov byte ptr [ebp - 0x31], 1 */ W8((u32)(r_ebp+0xffffffcfu), 0x1u);
    /* 0046dd58: jmp 0x46e0db */ goto L_0046e0db;
L_0046dd5d:; BB(0x0046dd5d);
    /* 0046dd5d: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0046dd61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046dd62: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dd68: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46dd6du); f_0047e390();
    /* 0046dd6d: mov ecx, eax */ r_ecx = r_eax;
    /* 0046dd6f: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x46dd74u); f_004c7050();
    /* 0046dd74: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0046dd77: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046dd7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dd7d: je 0x46ddbe */ if (fZ) goto L_0046ddbe;
L_0046dd7f:; BB(0x0046dd7f);
    /* 0046dd7f: mov dx, word ptr [ebp - 0x48] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046dd83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046dd84: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dd8a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046dd8d: call 0x4f6a90 */ r_esp -= 4; W32(r_esp, 0x46dd92u); f_004f6a90();
    /* 0046dd92: mov word ptr [ebp - 0x54], ax */ W16((u32)(r_ebp+0xffffffacu), (u16)r_eax);
    /* 0046dd96: mov ax, word ptr [ebp - 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046dd9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046dd9b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dda1: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046dda4: call 0x4f6b20 */ r_esp -= 4; W32(r_esp, 0x46dda9u); f_004f6b20();
    /* 0046dda9: mov word ptr [ebp - 0x4c], ax */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_eax);
    /* 0046ddad: mov word ptr [ebp - 0x58], 0 */ W16((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0046ddb3: mov word ptr [ebp - 0x44], 0 */ W16((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0046ddb9: jmp 0x46de40 */ goto L_0046de40;
L_0046ddbe:; BB(0x0046ddbe);
    /* 0046ddbe: mov cx, word ptr [ebp - 0x48] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046ddc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ddc3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ddc9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046ddcc: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x46ddd1u); f_004f6880();
    /* 0046ddd1: mov word ptr [ebp - 0x54], ax */ W16((u32)(r_ebp+0xffffffacu), (u16)r_eax);
    /* 0046ddd5: mov dx, word ptr [ebp - 0x48] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046ddd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ddda: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dde0: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046dde3: call 0x4f6930 */ r_esp -= 4; W32(r_esp, 0x46dde8u); f_004f6930();
    /* 0046dde8: mov word ptr [ebp - 0x4c], ax */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_eax);
    /* 0046ddec: mov ax, word ptr [ebp - 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046ddf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ddf1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ddf7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046ddfa: call 0x4f6a90 */ r_esp -= 4; W32(r_esp, 0x46ddffu); f_004f6a90();
    /* 0046ddff: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046de02: movsx edx, word ptr [ebp - 0x54] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 0046de06: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046de08: mov word ptr [ebp - 0x58], cx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_ecx);
    /* 0046de0c: mov ax, word ptr [ebp - 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046de10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046de11: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046de17: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046de1a: call 0x4f6b20 */ r_esp -= 4; W32(r_esp, 0x46de1fu); f_004f6b20();
    /* 0046de1f: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046de22: movsx edx, word ptr [ebp - 0x4c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0046de26: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046de28: mov word ptr [ebp - 0x44], cx */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_ecx);
    /* 0046de2c: movsx eax, word ptr [ebp - 0x54] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 0046de30: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0046de32: mov word ptr [ebp - 0x54], ax */ W16((u32)(r_ebp+0xffffffacu), (u16)r_eax);
    /* 0046de36: movsx ecx, word ptr [ebp - 0x4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0046de3a: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0046de3c: mov word ptr [ebp - 0x4c], cx */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_ecx);
L_0046de40:; BB(0x0046de40);
    /* 0046de40: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0046de44: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046de46: je 0x46de5c */ if (fZ) goto L_0046de5c;
L_0046de48:; BB(0x0046de48);
    /* 0046de48: movsx eax, word ptr [ebp - 0x54] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 0046de4c: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0046de4e: mov word ptr [ebp - 0x54], ax */ W16((u32)(r_ebp+0xffffffacu), (u16)r_eax);
    /* 0046de52: movsx ecx, word ptr [ebp - 0x4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0046de56: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0046de58: mov word ptr [ebp - 0x4c], cx */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_ecx);
L_0046de5c:; BB(0x0046de5c);
    /* 0046de5c: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046de60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046de62: je 0x46de8d */ if (fZ) goto L_0046de8d;
L_0046de64:; BB(0x0046de64);
    /* 0046de64: movsx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0046de68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046de6a: jne 0x46de8d */ if (!fZ) goto L_0046de8d;
L_0046de6c:; BB(0x0046de6c);
    /* 0046de6c: movsx ecx, word ptr [ebp - 0x54] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 0046de70: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046de72: jne 0x46de8d */ if (!fZ) goto L_0046de8d;
L_0046de74:; BB(0x0046de74);
    /* 0046de74: mov dx, word ptr [ebp - 0x48] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046de78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046de79: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046de7f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046de82: call 0x4f6bb0 */ r_esp -= 4; W32(r_esp, 0x46de87u); f_004f6bb0();
    /* 0046de87: mov word ptr [ebp - 0x50], ax */ W16((u32)(r_ebp+0xffffffb0u), (u16)r_eax);
    /* 0046de8b: jmp 0x46de93 */ goto L_0046de93;
L_0046de8d:; BB(0x0046de8d);
    /* 0046de8d: mov word ptr [ebp - 0x50], 0 */ W16((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0046de93:; BB(0x0046de93);
    /* 0046de93: fldz  */ FPUSH(0.0);
    /* 0046de95: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0046de98: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046de9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046de9e: jne 0x46dec9 */ if (!fZ) goto L_0046dec9;
L_0046dea0:; BB(0x0046dea0);
    /* 0046dea0: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0046dea4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046dea5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046deab: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46deb0u); f_0047e390();
    /* 0046deb0: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046deb4: jne 0x46dec9 */ if (!fZ) goto L_0046dec9;
L_0046deb6:; BB(0x0046deb6);
    /* 0046deb6: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046debc: call 0x4dfe40 */ r_esp -= 4; W32(r_esp, 0x46dec1u); f_004dfe40();
    /* 0046dec1: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0046dec4: jmp 0x46df51 */ goto L_0046df51;
L_0046dec9:; BB(0x0046dec9);
    /* 0046dec9: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046decd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046decf: jne 0x46def7 */ if (!fZ) goto L_0046def7;
L_0046ded1:; BB(0x0046ded1);
    /* 0046ded1: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0046ded5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ded6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dedc: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46dee1u); f_0047e390();
    /* 0046dee1: cmp dword ptr [eax + 0x18], 1 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dee5: jne 0x46def7 */ if (!fZ) goto L_0046def7;
L_0046dee7:; BB(0x0046dee7);
    /* 0046dee7: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046deed: call 0x4dff10 */ r_esp -= 4; W32(r_esp, 0x46def2u); f_004dff10();
    /* 0046def2: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0046def5: jmp 0x46df51 */ goto L_0046df51;
L_0046def7:; BB(0x0046def7);
    /* 0046def7: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046defb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046defd: jne 0x46df25 */ if (!fZ) goto L_0046df25;
L_0046deff:; BB(0x0046deff);
    /* 0046deff: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0046df03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046df04: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046df0a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46df0fu); f_0047e390();
    /* 0046df0f: cmp dword ptr [eax + 0x18], 2 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046df13: jne 0x46df25 */ if (!fZ) goto L_0046df25;
L_0046df15:; BB(0x0046df15);
    /* 0046df15: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046df1b: call 0x4dffe0 */ r_esp -= 4; W32(r_esp, 0x46df20u); f_004dffe0();
    /* 0046df20: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0046df23: jmp 0x46df51 */ goto L_0046df51;
L_0046df25:; BB(0x0046df25);
    /* 0046df25: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046df29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046df2b: jne 0x46df51 */ if (!fZ) goto L_0046df51;
L_0046df2d:; BB(0x0046df2d);
    /* 0046df2d: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0046df31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046df32: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046df38: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46df3du); f_0047e390();
    /* 0046df3d: cmp dword ptr [eax + 0x18], 3 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046df41: jne 0x46df51 */ if (!fZ) goto L_0046df51;
L_0046df43:; BB(0x0046df43);
    /* 0046df43: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046df49: call 0x4e00b0 */ r_esp -= 4; W32(r_esp, 0x46df4eu); f_004e00b0();
    /* 0046df4e: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
L_0046df51:; BB(0x0046df51);
    /* 0046df51: movsx edx, word ptr [ebp - 0x54] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 0046df55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0046df57: jge 0x46df70 */ if ((fS==fO)) goto L_0046df70;
L_0046df59:; BB(0x0046df59);
    /* 0046df59: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 0046df5e: push 0x6bc1e8 */ { u32 v = 0x6bc1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046df63: push 0x6bc25c */ { u32 v = 0x6bc25cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046df68: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46df6du); f_005e9f20();
    /* 0046df6d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046df70:; BB(0x0046df70);
    /* 0046df70: movsx ecx, word ptr [ebp - 0x4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0046df74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0046df76: jge 0x46df8f */ if ((fS==fO)) goto L_0046df8f;
L_0046df78:; BB(0x0046df78);
    /* 0046df78: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0046df7d: push 0x6bc1e8 */ { u32 v = 0x6bc1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046df82: push 0x6bc248 */ { u32 v = 0x6bc248u; r_esp -= 4; W32(r_esp, v); }
    /* 0046df87: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46df8cu); f_005e9f20();
    /* 0046df8c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046df8f:; BB(0x0046df8f);
    /* 0046df8f: movsx eax, word ptr [ebp - 0x50] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 0046df93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0046df95: jge 0x46dfae */ if ((fS==fO)) goto L_0046dfae;
L_0046df97:; BB(0x0046df97);
    /* 0046df97: push 0x97 */ { u32 v = 0x97u; r_esp -= 4; W32(r_esp, v); }
    /* 0046df9c: push 0x6bc1e8 */ { u32 v = 0x6bc1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046dfa1: push 0x6bc230 */ { u32 v = 0x6bc230u; r_esp -= 4; W32(r_esp, v); }
    /* 0046dfa6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46dfabu); f_005e9f20();
    /* 0046dfab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046dfae:; BB(0x0046dfae);
    /* 0046dfae: movsx edx, word ptr [ebp - 0x58] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa8u));
    /* 0046dfb2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0046dfb4: jge 0x46dfcd */ if ((fS==fO)) goto L_0046dfcd;
L_0046dfb6:; BB(0x0046dfb6);
    /* 0046dfb6: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 0046dfbb: push 0x6bc1e8 */ { u32 v = 0x6bc1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046dfc0: push 0x6bc220 */ { u32 v = 0x6bc220u; r_esp -= 4; W32(r_esp, v); }
    /* 0046dfc5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46dfcau); f_005e9f20();
    /* 0046dfca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046dfcd:; BB(0x0046dfcd);
    /* 0046dfcd: movsx ecx, word ptr [ebp - 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0046dfd1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0046dfd3: jge 0x46dfec */ if ((fS==fO)) goto L_0046dfec;
L_0046dfd5:; BB(0x0046dfd5);
    /* 0046dfd5: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 0046dfda: push 0x6bc1e8 */ { u32 v = 0x6bc1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046dfdf: push 0x6bc210 */ { u32 v = 0x6bc210u; r_esp -= 4; W32(r_esp, v); }
    /* 0046dfe4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46dfe9u); f_005e9f20();
    /* 0046dfe9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046dfec:; BB(0x0046dfec);
    /* 0046dfec: mov byte ptr [ebp - 0x31], 0 */ W8((u32)(r_ebp+0xffffffcfu), 0x0u);
    /* 0046dff0: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046dff6: call 0x4dfb00 */ r_esp -= 4; W32(r_esp, 0x46dffbu); f_004dfb00();
    /* 0046dffb: movsx eax, word ptr [ebp - 0x58] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa8u));
    /* 0046dfff: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0046e002: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 0046e005: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0046e007: fld1  */ FPUSH(1.0);
    /* 0046e009: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0046e00b: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e011: fstp qword ptr [ebp - 0x6c] */ W_F64((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 0046e014: call 0x4dfbd0 */ r_esp -= 4; W32(r_esp, 0x46e019u); f_004dfbd0();
    /* 0046e019: movsx ecx, word ptr [ebp - 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0046e01d: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0046e020: fild dword ptr [ebp - 0x70] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff90u)));
    /* 0046e023: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0046e025: fadd qword ptr [ebp - 0x6c] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff94u));
    /* 0046e028: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e02e: fstp qword ptr [ebp - 0x78] */ W_F64((u32)(r_ebp+0xffffff88u), ST(0)); FPOP();
    /* 0046e031: call 0x4dfca0 */ r_esp -= 4; W32(r_esp, 0x46e036u); f_004dfca0();
    /* 0046e036: movsx edx, word ptr [ebp - 0x54] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 0046e03a: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0046e03d: fild dword ptr [ebp - 0x7c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff84u)));
    /* 0046e040: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0046e042: fadd qword ptr [ebp - 0x78] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff88u));
    /* 0046e045: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e04b: fstp qword ptr [ebp - 0x84] */ W_F64((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 0046e051: call 0x4dfd70 */ r_esp -= 4; W32(r_esp, 0x46e056u); f_004dfd70();
    /* 0046e056: movsx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0046e05a: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0046e060: fild dword ptr [ebp - 0x88] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff78u)));
    /* 0046e066: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0046e068: fadd qword ptr [ebp - 0x84] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff7cu));
    /* 0046e06e: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e074: fstp qword ptr [ebp - 0x90] */ W_F64((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 0046e07a: call 0x4df9e0 */ r_esp -= 4; W32(r_esp, 0x46e07fu); f_004df9e0();
    /* 0046e07f: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046e082: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 0046e088: fild dword ptr [ebp - 0x94] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff6cu)));
    /* 0046e08e: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0046e094: movsx edx, word ptr [ebp - 0x50] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 0046e098: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0046e09e: fild dword ptr [ebp - 0x98] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff68u)));
    /* 0046e0a4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0046e0a6: fsubr qword ptr [ebp - 0x90] */ ST(0) = R_F64((u32)(r_ebp+0xffffff70u)) - ST(0);
    /* 0046e0ac: fadd qword ptr [ebp - 0x60] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffa0u));
    /* 0046e0af: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0046e0b2: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0046e0b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e0b7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e0bd: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46e0c2u); f_0047e390();
    /* 0046e0c2: movzx ecx, byte ptr [eax + 0x1d] */ r_ecx = (u32)R8((u32)(r_eax+0x1du));
    /* 0046e0c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e0c8: je 0x46e0db */ if (fZ) goto L_0046e0db;
L_0046e0ca:; BB(0x0046e0ca);
    /* 0046e0ca: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e0d0: call 0x4e00b0 */ r_esp -= 4; W32(r_esp, 0x46e0d5u); f_004e00b0();
    /* 0046e0d5: fadd qword ptr [ebp - 0x30] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffd0u));
    /* 0046e0d8: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
L_0046e0db:; BB(0x0046e0db);
    /* 0046e0db: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e0de: mov ax, word ptr [edx*2 + 0x791030] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx*2+0x791030u))) & 0xffffu);
    /* 0046e0e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046e0e7: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e0ed: call 0x4e15d0 */ r_esp -= 4; W32(r_esp, 0x46e0f2u); f_004e15d0();
    /* 0046e0f2: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046e0f5: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0046e0fb: fild dword ptr [ebp - 0x9c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff64u)));
    /* 0046e101: fdiv qword ptr [0x6bc208] */ ST(0) = ST(0) / R_F64((u32)(0x6bc208u));
    /* 0046e107: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0046e10a: movzx edx, byte ptr [ebp - 0x31] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 0046e10e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e110: je 0x46e11d */ if (fZ) goto L_0046e11d;
L_0046e112:; BB(0x0046e112);
    /* 0046e112: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0046e115: fmul qword ptr [ebp - 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc0u));
    /* 0046e118: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0046e11b: jmp 0x46e12f */ goto L_0046e12f;
L_0046e11d:; BB(0x0046e11d);
    /* 0046e11d: fld1  */ FPUSH(1.0);
    /* 0046e11f: fsub qword ptr [ebp - 0x40] */ ST(0) = ST(0) - R_F64((u32)(r_ebp+0xffffffc0u));
    /* 0046e122: fmul qword ptr [ebp - 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd0u));
    /* 0046e125: fld1  */ FPUSH(1.0);
    /* 0046e127: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0046e129: fmul qword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffe8u));
    /* 0046e12c: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_0046e12f:; BB(0x0046e12f);
    /* 0046e12f: fldz  */ FPUSH(0.0);
    /* 0046e131: fcomp qword ptr [ebp - 0x18] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe8u))); FPOP();
    /* 0046e134: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046e136: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046e139: jne 0x46e140 */ if (!fZ) goto L_0046e140;
L_0046e13b:; BB(0x0046e13b);
    /* 0046e13b: fldz  */ FPUSH(0.0);
    /* 0046e13d: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_0046e140:; BB(0x0046e140);
    /* 0046e140: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046e144: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e146: jne 0x46e175 */ if (!fZ) goto L_0046e175;
L_0046e148:; BB(0x0046e148);
    /* 0046e148: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 0046e14c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046e14d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046e153: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46e158u); f_0047e390();
    /* 0046e158: movzx edx, byte ptr [eax + 0x1d] */ r_edx = (u32)R8((u32)(r_eax+0x1du));
    /* 0046e15c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e15e: je 0x46e175 */ if (fZ) goto L_0046e175;
L_0046e160:; BB(0x0046e160);
    /* 0046e160: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e163: movsx ecx, word ptr [eax*2 + 0x791030] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791030u));
    /* 0046e16b: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046e16e: jge 0x46e175 */ if ((fS==fO)) goto L_0046e175;
L_0046e170:; BB(0x0046e170);
    /* 0046e170: fldz  */ FPUSH(0.0);
    /* 0046e172: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_0046e175:; BB(0x0046e175);
    /* 0046e175: jmp 0x46dccb */ goto L_0046dccb;
L_0046e17a:; BB(0x0046e17a);
    /* 0046e17a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e17d: movzx eax, byte ptr [edx + 0x7912e0] */ r_eax = (u32)R8((u32)(r_edx+0x7912e0u));
    /* 0046e184: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046e186: je 0x46e1b7 */ if (fZ) goto L_0046e1b7;
L_0046e188:; BB(0x0046e188);
    /* 0046e188: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e18b: mov dx, word ptr [ecx*2 + 0x791030] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx*2+0x791030u))) & 0xffffu);
    /* 0046e193: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046e194: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046e19a: call 0x4e15d0 */ r_esp -= 4; W32(r_esp, 0x46e19fu); f_004e15d0();
    /* 0046e19f: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046e1a2: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0046e1a8: fild dword ptr [ebp - 0xa0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff60u)));
    /* 0046e1ae: fdiv qword ptr [0x6bc208] */ ST(0) = ST(0) / R_F64((u32)(0x6bc208u));
    /* 0046e1b4: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_0046e1b7:; BB(0x0046e1b7);
    /* 0046e1b7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046e1ba: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0046e1bd: fmul qword ptr [ecx*8 + 0x7912a0] */ ST(0) = ST(0) * R_F64((u32)(r_ecx*8+0x7912a0u));
    /* 0046e1c4: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0046e1c7: fld qword ptr [0x6b4b00] */ FPUSH(R_F64((u32)(0x6b4b00u)));
    /* 0046e1cd: fcomp qword ptr [ebp - 0x18] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe8u))); FPOP();
    /* 0046e1d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046e1d2: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0046e1d5: jp 0x46e1e0 */ if (fP) goto L_0046e1e0;
L_0046e1d7:; BB(0x0046e1d7);
    /* 0046e1d7: fld qword ptr [0x6b4b00] */ FPUSH(R_F64((u32)(0x6b4b00u)));
    /* 0046e1dd: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_0046e1e0:; BB(0x0046e1e0);
    /* 0046e1e0: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0046e1e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0046e1e4: mov esp, ebp */ r_esp = r_ebp;
    /* 0046e1e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046e1e7: ret  */ FN_RET(0x0046dc80); r_esp += 4; return;
}

void f_0046ef30(void) /* PokerDrawai::func_0046ef30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046ef30);
    /* 0046ef30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046ef31: mov ebp, esp */ r_ebp = r_esp;
    /* 0046ef33: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046ef36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046ef37: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0046ef38: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ef3e: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x46ef43u); f_0047e420();
    /* 0046ef43: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0046ef46: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ef4a: jge 0x46ef63 */ if ((fS==fO)) goto L_0046ef63;
L_0046ef4c:; BB(0x0046ef4c);
    /* 0046ef4c: push 0x50f */ { u32 v = 0x50fu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ef51: push 0x6bc1e8 */ { u32 v = 0x6bc1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ef56: push 0x6bc1d4 */ { u32 v = 0x6bc1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ef5b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46ef60u); f_005e9f20();
    /* 0046ef60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046ef63:; BB(0x0046ef63);
    /* 0046ef63: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ef69: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x46ef6eu); f_0047f950();
    /* 0046ef6e: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ef71: jl 0x46ef8a */ if ((fS!=fO)) goto L_0046ef8a;
L_0046ef73:; BB(0x0046ef73);
    /* 0046ef73: push 0x510 */ { u32 v = 0x510u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ef78: push 0x6bc1e8 */ { u32 v = 0x6bc1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ef7d: push 0x6bc19c */ { u32 v = 0x6bc19cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ef82: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46ef87u); f_005e9f20();
    /* 0046ef87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046ef8a:; BB(0x0046ef8a);
    /* 0046ef8a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046ef90: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x46ef95u); f_0047e3b0();
    /* 0046ef95: mov dword ptr [0x791048], eax */ W32((u32)(0x791048u), r_eax);
    /* 0046ef9a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046ef9d: movsx eax, word ptr [edx*2 + 0x790fb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x790fb8u));
    /* 0046efa5: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046efa9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0046efab: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0046efad: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046efb0: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046efb2: je 0x46f2cd */ if (fZ) goto L_0046f2cd;
L_0046efb8:; BB(0x0046efb8);
    /* 0046efb8: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046efbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046efbe: je 0x46efc5 */ if (fZ) goto L_0046efc5;
L_0046efc0:; BB(0x0046efc0);
    /* 0046efc0: call 0x4708e0 */ r_esp -= 4; W32(r_esp, 0x46efc5u); f_004708e0();
L_0046efc5:; BB(0x0046efc5);
    /* 0046efc5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0046efc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046efc9: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046efcc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046efcd: call 0x470210 */ r_esp -= 4; W32(r_esp, 0x46efd2u); f_00470210();
    /* 0046efd2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046efd5: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046efd9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046efdb: je 0x46f0ca */ if (fZ) goto L_0046f0ca;
L_0046efe1:; BB(0x0046efe1);
    /* 0046efe1: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0046efe7: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0046efed: jmp 0x46effb */ goto L_0046effb;
L_0046efef:; BB(0x0046efef);
    /* 0046efef: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0046eff3: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046eff7: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
L_0046effb:; BB(0x0046effb);
    /* 0046effb: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0046efff: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f005: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x46f00au); f_0047f950();
    /* 0046f00a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f00c: jge 0x46f06a */ if ((fS==fO)) goto L_0046f06a;
L_0046f00e:; BB(0x0046f00e);
    /* 0046f00e: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0046f012: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f015: jne 0x46f019 */ if (!fZ) goto L_0046f019;
L_0046f017:; BB(0x0046f017);
    /* 0046f017: jmp 0x46efef */ goto L_0046efef;
L_0046f019:; BB(0x0046f019);
    /* 0046f019: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0046f01d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f01e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f024: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46f029u); f_0047e390();
    /* 0046f029: mov ecx, eax */ r_ecx = r_eax;
    /* 0046f02b: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x46f030u); f_004c7010();
    /* 0046f030: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f033: jne 0x46f068 */ if (!fZ) goto L_0046f068;
L_0046f035:; BB(0x0046f035);
    /* 0046f035: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0046f039: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f03a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f040: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46f045u); f_0047e390();
    /* 0046f045: mov ecx, eax */ r_ecx = r_eax;
    /* 0046f047: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x46f04cu); f_004c7050();
    /* 0046f04c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f04d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f053: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f056: call 0x4f6a90 */ r_esp -= 4; W32(r_esp, 0x46f05bu); f_004f6a90();
    /* 0046f05b: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f05e: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0046f062: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046f064: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_0046f068:; BB(0x0046f068);
    /* 0046f068: jmp 0x46efef */ goto L_0046efef;
L_0046f06a:; BB(0x0046f06a);
    /* 0046f06a: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f070: call 0x4e9e20 */ r_esp -= 4; W32(r_esp, 0x46f075u); f_004e9e20();
    /* 0046f075: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 0046f079: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0046f07d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f07e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f083u); f_0062fbf0();
    /* 0046f083: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f086: mov esi, eax */ r_esi = r_eax;
    /* 0046f088: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0046f08c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f08d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f092u); f_0062fbf0();
    /* 0046f092: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f095: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046f097: movsx edi, word ptr [ebp - 8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0046f09b: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f0a1: call 0x4e9de0 */ r_esp -= 4; W32(r_esp, 0x46f0a6u); f_004e9de0();
    /* 0046f0a6: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f0a9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046f0ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f0ad: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f0b2u); f_0062fbf0();
    /* 0046f0b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f0b5: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046f0b8: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046f0ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f0bd: mov word ptr [eax*2 + 0x791010], si */ W16((u32)(r_eax*2+0x791010u), (u16)r_esi);
    /* 0046f0c5: jmp 0x46f18c */ goto L_0046f18c;
L_0046f0ca:; BB(0x0046f0ca);
    /* 0046f0ca: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0046f0d0: mov word ptr [ebp - 0x18], 0 */ W16((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0046f0d6: jmp 0x46f0e4 */ goto L_0046f0e4;
L_0046f0d8:; BB(0x0046f0d8);
    /* 0046f0d8: mov cx, word ptr [ebp - 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 0046f0dc: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046f0e0: mov word ptr [ebp - 0x18], cx */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_ecx);
L_0046f0e4:; BB(0x0046f0e4);
    /* 0046f0e4: movsx esi, word ptr [ebp - 0x18] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 0046f0e8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f0ee: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x46f0f3u); f_0047f950();
    /* 0046f0f3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f0f5: jge 0x46f153 */ if ((fS==fO)) goto L_0046f153;
L_0046f0f7:; BB(0x0046f0f7);
    /* 0046f0f7: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 0046f0fb: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f0fe: jne 0x46f102 */ if (!fZ) goto L_0046f102;
L_0046f100:; BB(0x0046f100);
    /* 0046f100: jmp 0x46f0d8 */ goto L_0046f0d8;
L_0046f102:; BB(0x0046f102);
    /* 0046f102: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 0046f106: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f107: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f10d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46f112u); f_0047e390();
    /* 0046f112: mov ecx, eax */ r_ecx = r_eax;
    /* 0046f114: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x46f119u); f_004c7010();
    /* 0046f119: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f11c: jne 0x46f151 */ if (!fZ) goto L_0046f151;
L_0046f11e:; BB(0x0046f11e);
    /* 0046f11e: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 0046f122: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f123: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f129: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46f12eu); f_0047e390();
    /* 0046f12e: mov ecx, eax */ r_ecx = r_eax;
    /* 0046f130: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x46f135u); f_004c7050();
    /* 0046f135: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f136: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f13c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f13f: call 0x4f6a90 */ r_esp -= 4; W32(r_esp, 0x46f144u); f_004f6a90();
    /* 0046f144: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f147: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0046f14b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046f14d: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
L_0046f151:; BB(0x0046f151);
    /* 0046f151: jmp 0x46f0d8 */ goto L_0046f0d8;
L_0046f153:; BB(0x0046f153);
    /* 0046f153: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0046f157: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f15d: call 0x4e9de0 */ r_esp -= 4; W32(r_esp, 0x46f162u); f_004e9de0();
    /* 0046f162: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f165: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f168: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f169: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f16eu); f_0062fbf0();
    /* 0046f16e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f171: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046f174: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f177: movsx eax, word ptr [edx*2 + 0x791010] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791010u));
    /* 0046f17f: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046f181: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f184: mov word ptr [ecx*2 + 0x791010], ax */ W16((u32)(r_ecx*2+0x791010u), (u16)r_eax);
L_0046f18c:; BB(0x0046f18c);
    /* 0046f18c: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046f190: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0046f192: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0046f194: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046f197: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f19a: mov word ptr [eax*2 + 0x790fb8], dx */ W16((u32)(r_eax*2+0x790fb8u), (u16)r_edx);
    /* 0046f1a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f1a5: mov dx, word ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 0046f1a9: mov word ptr [ecx*2 + 0x79104c], dx */ W16((u32)(r_ecx*2+0x79104cu), (u16)r_edx);
    /* 0046f1b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f1b3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046f1b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f1b7: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046f1ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f1bb: call 0x46fd10 */ r_esp -= 4; W32(r_esp, 0x46f1c0u); f_0046fd10();
    /* 0046f1c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f1c3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f1c6: fstp qword ptr [edx*8 + 0x791260] */ W_F64((u32)(r_edx*8+0x791260u), ST(0)); FPOP();
    /* 0046f1cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f1d0: mov word ptr [eax*2 + 0x791020], 1 */ W16((u32)(r_eax*2+0x791020u), 0x1u);
    /* 0046f1da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f1dd: movsx edx, word ptr [ecx*2 + 0x791030] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791030u));
    /* 0046f1e5: cmp edx, 0x29 */ {  u32 a = r_edx; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f1e8: jne 0x46f1fc */ if (!fZ) goto L_0046f1fc;
L_0046f1ea:; BB(0x0046f1ea);
    /* 0046f1ea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f1ed: mov word ptr [eax*2 + 0x791020], 6 */ W16((u32)(r_eax*2+0x791020u), 0x6u);
    /* 0046f1f7: jmp 0x46f2c8 */ goto L_0046f2c8;
L_0046f1fc:; BB(0x0046f1fc);
    /* 0046f1fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f1ff: movsx edx, word ptr [ecx*2 + 0x791030] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791030u));
    /* 0046f207: cmp edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f20a: jne 0x46f21e */ if (!fZ) goto L_0046f21e;
L_0046f20c:; BB(0x0046f20c);
    /* 0046f20c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f20f: mov word ptr [eax*2 + 0x791020], 7 */ W16((u32)(r_eax*2+0x791020u), 0x7u);
    /* 0046f219: jmp 0x46f2c8 */ goto L_0046f2c8;
L_0046f21e:; BB(0x0046f21e);
    /* 0046f21e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f221: movsx edx, word ptr [ecx*2 + 0x791030] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791030u));
    /* 0046f229: cmp edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f22c: jne 0x46f240 */ if (!fZ) goto L_0046f240;
L_0046f22e:; BB(0x0046f22e);
    /* 0046f22e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f231: mov word ptr [eax*2 + 0x791020], 7 */ W16((u32)(r_eax*2+0x791020u), 0x7u);
    /* 0046f23b: jmp 0x46f2c8 */ goto L_0046f2c8;
L_0046f240:; BB(0x0046f240);
    /* 0046f240: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f243: movsx edx, word ptr [ecx*2 + 0x791030] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791030u));
    /* 0046f24b: cmp edx, 0x26 */ {  u32 a = r_edx; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f24e: jne 0x46f26e */ if (!fZ) goto L_0046f26e;
L_0046f250:; BB(0x0046f250);
    /* 0046f250: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0046f252: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f257u); f_0062fbf0();
    /* 0046f257: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f25a: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f25d: jge 0x46f26e */ if ((fS==fO)) goto L_0046f26e;
L_0046f25f:; BB(0x0046f25f);
    /* 0046f25f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f262: mov word ptr [eax*2 + 0x791020], 7 */ W16((u32)(r_eax*2+0x791020u), 0x7u);
    /* 0046f26c: jmp 0x46f2c8 */ goto L_0046f2c8;
L_0046f26e:; BB(0x0046f26e);
    /* 0046f26e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f271: movsx edx, word ptr [ecx*2 + 0x791030] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791030u));
    /* 0046f279: cmp edx, 0x25 */ {  u32 a = r_edx; u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f27c: jne 0x46f29c */ if (!fZ) goto L_0046f29c;
L_0046f27e:; BB(0x0046f27e);
    /* 0046f27e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0046f280: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f285u); f_0062fbf0();
    /* 0046f285: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f288: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f28b: jge 0x46f29c */ if ((fS==fO)) goto L_0046f29c;
L_0046f28d:; BB(0x0046f28d);
    /* 0046f28d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f290: mov word ptr [eax*2 + 0x791020], 7 */ W16((u32)(r_eax*2+0x791020u), 0x7u);
    /* 0046f29a: jmp 0x46f2c8 */ goto L_0046f2c8;
L_0046f29c:; BB(0x0046f29c);
    /* 0046f29c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f29f: movsx edx, word ptr [ecx*2 + 0x791030] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791030u));
    /* 0046f2a7: cmp edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f2aa: jne 0x46f2c8 */ if (!fZ) goto L_0046f2c8;
L_0046f2ac:; BB(0x0046f2ac);
    /* 0046f2ac: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0046f2ae: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f2b3u); f_0062fbf0();
    /* 0046f2b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f2b6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f2b9: jge 0x46f2c8 */ if ((fS==fO)) goto L_0046f2c8;
L_0046f2bb:; BB(0x0046f2bb);
    /* 0046f2bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f2be: mov word ptr [eax*2 + 0x791020], 7 */ W16((u32)(r_eax*2+0x791020u), 0x7u);
L_0046f2c8:; BB(0x0046f2c8);
    /* 0046f2c8: jmp 0x46f373 */ goto L_0046f373;
L_0046f2cd:; BB(0x0046f2cd);
    /* 0046f2cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f2d0: movsx edx, word ptr [ecx*2 + 0x79104c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x79104cu));
    /* 0046f2d8: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f2db: je 0x46f357 */ if (fZ) goto L_0046f357;
L_0046f2dd:; BB(0x0046f2dd);
    /* 0046f2dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f2e0: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046f2e8: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f2eb: je 0x46f357 */ if (fZ) goto L_0046f357;
L_0046f2ed:; BB(0x0046f2ed);
    /* 0046f2ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f2f0: movsx eax, word ptr [edx*2 + 0x791020] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791020u));
    /* 0046f2f8: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f2fb: je 0x46f357 */ if (fZ) goto L_0046f357;
L_0046f2fd:; BB(0x0046f2fd);
    /* 0046f2fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f300: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046f308: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f30b: je 0x46f357 */ if (fZ) goto L_0046f357;
L_0046f30d:; BB(0x0046f30d);
    /* 0046f30d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f310: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 0046f314: mov word ptr [eax*2 + 0x79104c], cx */ W16((u32)(r_eax*2+0x79104cu), (u16)r_ecx);
    /* 0046f31c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0046f31f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f320: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046f323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f324: call 0x470210 */ r_esp -= 4; W32(r_esp, 0x46f329u); f_00470210();
    /* 0046f329: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f32c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f32e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0046f331: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f332: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046f335: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f336: call 0x46fd10 */ r_esp -= 4; W32(r_esp, 0x46f33bu); f_0046fd10();
    /* 0046f33b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f33e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f341: fstp qword ptr [eax*8 + 0x791260] */ W_F64((u32)(r_eax*8+0x791260u), ST(0)); FPOP();
    /* 0046f348: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f34b: mov word ptr [ecx*2 + 0x791020], 1 */ W16((u32)(r_ecx*2+0x791020u), 0x1u);
    /* 0046f355: jmp 0x46f373 */ goto L_0046f373;
L_0046f357:; BB(0x0046f357);
    /* 0046f357: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f359: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0046f35c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f35d: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046f360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f361: call 0x46fd10 */ r_esp -= 4; W32(r_esp, 0x46f366u); f_0046fd10();
    /* 0046f366: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f369: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f36c: fstp qword ptr [ecx*8 + 0x791260] */ W_F64((u32)(r_ecx*8+0x791260u), ST(0)); FPOP();
L_0046f373:; BB(0x0046f373);
    /* 0046f373: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f376: movsx eax, word ptr [edx*2 + 0x791020] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791020u));
    /* 0046f37e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f381: jne 0x46f402 */ if (!fZ) goto L_0046f402;
L_0046f383:; BB(0x0046f383);
    /* 0046f383: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f385: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f38b: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x46f390u); f_004c79d0();
    /* 0046f390: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f396: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f399: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46f39eu); f_004f6640();
    /* 0046f39e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046f3a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f3a3: je 0x46f3d7 */ if (fZ) goto L_0046f3d7;
L_0046f3a5:; BB(0x0046f3a5);
    /* 0046f3a5: call 0x46dbe0 */ r_esp -= 4; W32(r_esp, 0x46f3aau); f_0046dbe0();
    /* 0046f3aa: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046f3ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f3af: jne 0x46f3cb */ if (!fZ) goto L_0046f3cb;
L_0046f3b1:; BB(0x0046f3b1);
    /* 0046f3b1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f3b3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f3b8u); f_0062fbf0();
    /* 0046f3b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f3bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f3bd: jne 0x46f3cb */ if (!fZ) goto L_0046f3cb;
L_0046f3bf:; BB(0x0046f3bf);
    /* 0046f3bf: mov eax, 1 */ r_eax = 0x1u;
    /* 0046f3c4: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f3cb:; BB(0x0046f3cb);
    /* 0046f3cb: mov eax, 2 */ r_eax = 0x2u;
    /* 0046f3d0: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f3d7:; BB(0x0046f3d7);
    /* 0046f3d7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f3dd: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f3e0: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46f3e5u); f_004f66e0();
    /* 0046f3e5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046f3e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f3ea: je 0x46f3f8 */ if (fZ) goto L_0046f3f8;
L_0046f3ec:; BB(0x0046f3ec);
    /* 0046f3ec: mov eax, 4 */ r_eax = 0x4u;
    /* 0046f3f1: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f3f8:; BB(0x0046f3f8);
    /* 0046f3f8: mov eax, 3 */ r_eax = 0x3u;
    /* 0046f3fd: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f402:; BB(0x0046f402);
    /* 0046f402: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f405: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046f40d: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f410: jne 0x46f4de */ if (!fZ) goto L_0046f4de;
L_0046f416:; BB(0x0046f416);
    /* 0046f416: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f418: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f41e: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x46f423u); f_004c79d0();
    /* 0046f423: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f429: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f42c: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46f431u); f_004f6640();
    /* 0046f431: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046f434: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f436: je 0x46f46a */ if (fZ) goto L_0046f46a;
L_0046f438:; BB(0x0046f438);
    /* 0046f438: call 0x46dbe0 */ r_esp -= 4; W32(r_esp, 0x46f43du); f_0046dbe0();
    /* 0046f43d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046f440: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f442: jne 0x46f45e */ if (!fZ) goto L_0046f45e;
L_0046f444:; BB(0x0046f444);
    /* 0046f444: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0046f446: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f44bu); f_0062fbf0();
    /* 0046f44b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f44e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f450: jne 0x46f45e */ if (!fZ) goto L_0046f45e;
L_0046f452:; BB(0x0046f452);
    /* 0046f452: mov eax, 1 */ r_eax = 0x1u;
    /* 0046f457: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f45e:; BB(0x0046f45e);
    /* 0046f45e: mov eax, 2 */ r_eax = 0x2u;
    /* 0046f463: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f46a:; BB(0x0046f46a);
    /* 0046f46a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f470: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f473: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46f478u); f_004f66e0();
    /* 0046f478: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046f47b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f47d: je 0x46f4d4 */ if (fZ) goto L_0046f4d4;
L_0046f47f:; BB(0x0046f47f);
    /* 0046f47f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f481: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f486u); f_0062fbf0();
    /* 0046f486: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f489: mov esi, eax */ r_esi = r_eax;
    /* 0046f48b: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f491: call 0x4e9ce0 */ r_esp -= 4; W32(r_esp, 0x46f496u); f_004e9ce0();
    /* 0046f496: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f499: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f49b: jge 0x46f4c8 */ if ((fS==fO)) goto L_0046f4c8;
L_0046f49d:; BB(0x0046f49d);
    /* 0046f49d: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f49f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f4a4u); f_0062fbf0();
    /* 0046f4a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f4a7: mov esi, eax */ r_esi = r_eax;
    /* 0046f4a9: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f4af: call 0x4e9ce0 */ r_esp -= 4; W32(r_esp, 0x46f4b4u); f_004e9ce0();
    /* 0046f4b4: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f4b7: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f4b9: jge 0x46f4c8 */ if ((fS==fO)) goto L_0046f4c8;
L_0046f4bb:; BB(0x0046f4bb);
    /* 0046f4bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f4be: mov word ptr [edx*2 + 0x791020], 5 */ W16((u32)(r_edx*2+0x791020u), 0x5u);
L_0046f4c8:; BB(0x0046f4c8);
    /* 0046f4c8: mov eax, 4 */ r_eax = 0x4u;
    /* 0046f4cd: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f4d4:; BB(0x0046f4d4);
    /* 0046f4d4: mov eax, 3 */ r_eax = 0x3u;
    /* 0046f4d9: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f4de:; BB(0x0046f4de);
    /* 0046f4de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f4e1: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046f4e9: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f4ec: jne 0x46f76a */ if (!fZ) goto L_0046f76a;
L_0046f4f2:; BB(0x0046f4f2);
    /* 0046f4f2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f4f8: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f4fb: call 0x4f6690 */ r_esp -= 4; W32(r_esp, 0x46f500u); f_004f6690();
    /* 0046f500: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046f503: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f505: je 0x46f747 */ if (fZ) goto L_0046f747;
L_0046f50b:; BB(0x0046f50b);
    /* 0046f50b: fld qword ptr [0x6bc278] */ FPUSH(R_F64((u32)(0x6bc278u)));
    /* 0046f511: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0046f514: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046f518: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f51a: je 0x46f539 */ if (fZ) goto L_0046f539;
L_0046f51c:; BB(0x0046f51c);
    /* 0046f51c: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f522: call 0x4c6db0 */ r_esp -= 4; W32(r_esp, 0x46f527u); f_004c6db0();
    /* 0046f527: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0046f52a: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 0046f52d: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0046f533: fadd qword ptr [ebp - 0x30] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffd0u));
    /* 0046f536: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
L_0046f539:; BB(0x0046f539);
    /* 0046f539: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f53f: call 0x4c6df0 */ r_esp -= 4; W32(r_esp, 0x46f544u); f_004c6df0();
    /* 0046f544: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0046f547: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 0046f54a: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0046f550: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f553: fadd qword ptr [ecx*8 + 0x791260] */ ST(0) = ST(0) + R_F64((u32)(r_ecx*8+0x791260u));
    /* 0046f55a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f55d: fmul qword ptr [edx*8 + 0x791260] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x791260u));
    /* 0046f564: fmul qword ptr [ebp - 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd0u));
    /* 0046f567: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f56d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f570: fstp qword ptr [ebp - 0x44] */ W_F64((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 0046f573: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x46f578u); f_004f67d0();
    /* 0046f578: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0046f57b: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 0046f57e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f584: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f587: fstp qword ptr [ebp - 0x50] */ W_F64((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0046f58a: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x46f58fu); f_004f6840();
    /* 0046f58f: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0046f592: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 0046f595: fdivr qword ptr [ebp - 0x50] */ ST(0) = R_F64((u32)(r_ebp+0xffffffb0u)) / ST(0);
    /* 0046f598: fdivr qword ptr [ebp - 0x44] */ ST(0) = R_F64((u32)(r_ebp+0xffffffbcu)) / ST(0);
    /* 0046f59b: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0046f59e: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f5a4: call 0x4eae70 */ r_esp -= 4; W32(r_esp, 0x46f5a9u); f_004eae70();
    /* 0046f5a9: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f5ac: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0046f5af: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046f5b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f5b3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f5b8u); f_0062fbf0();
    /* 0046f5b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f5bb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046f5be: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046f5c1: mov word ptr [ebp - 0x1c], si */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_esi);
    /* 0046f5c5: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046f5c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f5cb: je 0x46f5e3 */ if (fZ) goto L_0046f5e3;
L_0046f5cd:; BB(0x0046f5cd);
    /* 0046f5cd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f5d3: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x46f5d8u); f_0047d6b0();
    /* 0046f5d8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f5db: je 0x46f5e3 */ if (fZ) goto L_0046f5e3;
L_0046f5dd:; BB(0x0046f5dd);
    /* 0046f5dd: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0046f5e3:; BB(0x0046f5e3);
    /* 0046f5e3: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0046f5e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f5e8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f5edu); f_0062fbf0();
    /* 0046f5ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f5f0: mov esi, eax */ r_esi = r_eax;
    /* 0046f5f2: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0046f5f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f5f7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f5fcu); f_0062fbf0();
    /* 0046f5fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f5ff: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0046f601: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0046f605: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f606: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f60bu); f_0062fbf0();
    /* 0046f60b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f60e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0046f610: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 0046f613: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046f617: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f619: je 0x46f63a */ if (fZ) goto L_0046f63a;
L_0046f61b:; BB(0x0046f61b);
    /* 0046f61b: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f621: call 0x4e9390 */ r_esp -= 4; W32(r_esp, 0x46f626u); f_004e9390();
    /* 0046f626: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f629: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f62a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f62fu); f_0062fbf0();
    /* 0046f62f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f632: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0046f635: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f637: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_0046f63a:; BB(0x0046f63a);
    /* 0046f63a: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046f63e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f640: je 0x46f68f */ if (fZ) goto L_0046f68f;
L_0046f642:; BB(0x0046f642);
    /* 0046f642: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f648: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x46f64du); f_0047d6b0();
    /* 0046f64d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f64f: jne 0x46f68f */ if (!fZ) goto L_0046f68f;
L_0046f651:; BB(0x0046f651);
    /* 0046f651: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f657: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f65a: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x46f65fu); f_004f67d0();
    /* 0046f65f: mov esi, eax */ r_esi = r_eax;
    /* 0046f661: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f667: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x46f66cu); f_0047bce0();
    /* 0046f66c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f66e: jg 0x46f68f */ if ((!fZ&&fS==fO)) goto L_0046f68f;
L_0046f670:; BB(0x0046f670);
    /* 0046f670: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f676: call 0x4df9e0 */ r_esp -= 4; W32(r_esp, 0x46f67bu); f_004df9e0();
    /* 0046f67b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f67e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f67f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f684u); f_0062fbf0();
    /* 0046f684: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f687: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0046f68a: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f68c: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_0046f68f:; BB(0x0046f68f);
    /* 0046f68f: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046f693: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f695: je 0x46f6ca */ if (fZ) goto L_0046f6ca;
L_0046f697:; BB(0x0046f697);
    /* 0046f697: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f69d: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x46f6a2u); f_0047d6b0();
    /* 0046f6a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f6a4: jne 0x46f6ca */ if (!fZ) goto L_0046f6ca;
L_0046f6a6:; BB(0x0046f6a6);
    /* 0046f6a6: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f6ac: call 0x4df9e0 */ r_esp -= 4; W32(r_esp, 0x46f6b1u); f_004df9e0();
    /* 0046f6b1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f6b4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046f6b5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046f6b7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0046f6b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f6ba: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f6bfu); f_0062fbf0();
    /* 0046f6bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f6c2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0046f6c5: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f6c7: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_0046f6ca:; BB(0x0046f6ca);
    /* 0046f6ca: cmp dword ptr [ebp - 0x34], -0x13 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0xffffffedu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f6ce: jge 0x46f6d7 */ if ((fS==fO)) goto L_0046f6d7;
L_0046f6d0:; BB(0x0046f6d0);
    /* 0046f6d0: mov dword ptr [ebp - 0x34], 0xffffffed */ W32((u32)(r_ebp+0xffffffccu), 0xffffffedu);
L_0046f6d7:; BB(0x0046f6d7);
    /* 0046f6d7: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 0046f6da: fdiv qword ptr [0x6b6978] */ ST(0) = ST(0) / R_F64((u32)(0x6b6978u));
    /* 0046f6e0: fld1  */ FPUSH(1.0);
    /* 0046f6e2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0046f6e4: fcomp qword ptr [ebp - 0x28] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffd8u))); FPOP();
    /* 0046f6e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046f6e9: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0046f6ec: jp 0x46f73e */ if (fP) goto L_0046f73e;
L_0046f6ee:; BB(0x0046f6ee);
    /* 0046f6ee: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0046f6f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f6f2: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046f6f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f6f6: call 0x4704d0 */ r_esp -= 4; W32(r_esp, 0x46f6fbu); f_004704d0();
    /* 0046f6fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f6fe: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046f701: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f703: je 0x46f707 */ if (fZ) goto L_0046f707;
L_0046f705:; BB(0x0046f705);
    /* 0046f705: jmp 0x46f73c */ goto L_0046f73c;
L_0046f707:; BB(0x0046f707);
    /* 0046f707: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f709: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f70eu); f_0062fbf0();
    /* 0046f70e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f711: mov esi, eax */ r_esi = r_eax;
    /* 0046f713: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f719: call 0x4eab40 */ r_esp -= 4; W32(r_esp, 0x46f71eu); f_004eab40();
    /* 0046f71e: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f721: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f723: jge 0x46f732 */ if ((fS==fO)) goto L_0046f732;
L_0046f725:; BB(0x0046f725);
    /* 0046f725: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f728: mov word ptr [eax*2 + 0x791020], 2 */ W16((u32)(r_eax*2+0x791020u), 0x2u);
L_0046f732:; BB(0x0046f732);
    /* 0046f732: mov eax, 3 */ r_eax = 0x3u;
    /* 0046f737: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f73c:; BB(0x0046f73c);
    /* 0046f73c: jmp 0x46f745 */ goto L_0046f745;
L_0046f73e:; BB(0x0046f73e);
    /* 0046f73e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046f740: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f745:; BB(0x0046f745);
    /* 0046f745: jmp 0x46f76a */ goto L_0046f76a;
L_0046f747:; BB(0x0046f747);
    /* 0046f747: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0046f74a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f74b: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046f74e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f74f: call 0x4704d0 */ r_esp -= 4; W32(r_esp, 0x46f754u); f_004704d0();
    /* 0046f754: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f757: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046f75a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f75c: je 0x46f760 */ if (fZ) goto L_0046f760;
L_0046f75e:; BB(0x0046f75e);
    /* 0046f75e: jmp 0x46f76a */ goto L_0046f76a;
L_0046f760:; BB(0x0046f760);
    /* 0046f760: mov eax, 1 */ r_eax = 0x1u;
    /* 0046f765: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f76a:; BB(0x0046f76a);
    /* 0046f76a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f76d: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046f775: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f778: je 0x46f78e */ if (fZ) goto L_0046f78e;
L_0046f77a:; BB(0x0046f77a);
    /* 0046f77a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f77d: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046f785: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f788: jne 0x46f904 */ if (!fZ) goto L_0046f904;
L_0046f78e:; BB(0x0046f78e);
    /* 0046f78e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f791: movsx eax, word ptr [edx*2 + 0x791020] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791020u));
    /* 0046f799: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f79c: jne 0x46f7c4 */ if (!fZ) goto L_0046f7c4;
L_0046f79e:; BB(0x0046f79e);
    /* 0046f79e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f7a4: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x46f7a9u); f_0047ce60();
    /* 0046f7a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f7aa: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046f7ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f7b0: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0046f7b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f7b4: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f7ba: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x46f7bfu); f_004c6ef0();
    /* 0046f7bf: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0046f7c2: jmp 0x46f7d2 */ goto L_0046f7d2;
L_0046f7c4:; BB(0x0046f7c4);
    /* 0046f7c4: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f7ca: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x46f7cfu); f_004c6f50();
    /* 0046f7cf: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
L_0046f7d2:; BB(0x0046f7d2);
    /* 0046f7d2: mov eax, 0x64 */ r_eax = 0x64u;
    /* 0046f7d7: sub eax, dword ptr [ebp - 0x58] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046f7da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f7db: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f7e0u); f_0062fbf0();
    /* 0046f7e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f7e3: mov esi, eax */ r_esi = r_eax;
    /* 0046f7e5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f7e7: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046f7ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f7eb: call 0x470a00 */ r_esp -= 4; W32(r_esp, 0x46f7f0u); f_00470a00();
    /* 0046f7f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f7f3: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f7f6: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f7f8: jge 0x46f8ff */ if ((fS==fO)) goto L_0046f8ff;
L_0046f7fe:; BB(0x0046f7fe);
    /* 0046f7fe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f800: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f806: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x46f80bu); f_004c79d0();
    /* 0046f80b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f811: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f814: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46f819u); f_004f6640();
    /* 0046f819: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046f81c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f81e: jne 0x46f84c */ if (!fZ) goto L_0046f84c;
L_0046f820:; BB(0x0046f820);
    /* 0046f820: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f826: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f829: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46f82eu); f_004f66e0();
    /* 0046f82e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046f831: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f833: jne 0x46f84c */ if (!fZ) goto L_0046f84c;
L_0046f835:; BB(0x0046f835);
    /* 0046f835: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f838: movsx eax, word ptr [edx*2 + 0x791020] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791020u));
    /* 0046f840: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f843: jne 0x46f84c */ if (!fZ) goto L_0046f84c;
L_0046f845:; BB(0x0046f845);
    /* 0046f845: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046f847: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f84c:; BB(0x0046f84c);
    /* 0046f84c: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f84e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f853u); f_0062fbf0();
    /* 0046f853: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f856: mov esi, eax */ r_esi = r_eax;
    /* 0046f858: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f85e: call 0x4e9ce0 */ r_esp -= 4; W32(r_esp, 0x46f863u); f_004e9ce0();
    /* 0046f863: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f866: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f868: jge 0x46f879 */ if ((fS==fO)) goto L_0046f879;
L_0046f86a:; BB(0x0046f86a);
    /* 0046f86a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f86d: mov word ptr [edx*2 + 0x791020], 4 */ W16((u32)(r_edx*2+0x791020u), 0x4u);
    /* 0046f877: jmp 0x46f8a4 */ goto L_0046f8a4;
L_0046f879:; BB(0x0046f879);
    /* 0046f879: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f87b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f880u); f_0062fbf0();
    /* 0046f880: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f883: mov esi, eax */ r_esi = r_eax;
    /* 0046f885: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f88b: call 0x4e9d00 */ r_esp -= 4; W32(r_esp, 0x46f890u); f_004e9d00();
    /* 0046f890: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f893: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f895: jge 0x46f8a4 */ if ((fS==fO)) goto L_0046f8a4;
L_0046f897:; BB(0x0046f897);
    /* 0046f897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f89a: mov word ptr [ecx*2 + 0x791020], 1 */ W16((u32)(r_ecx*2+0x791020u), 0x1u);
L_0046f8a4:; BB(0x0046f8a4);
    /* 0046f8a4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f8aa: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f8ad: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46f8b2u); f_004f6640();
    /* 0046f8b2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046f8b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f8b7: je 0x46f8c5 */ if (fZ) goto L_0046f8c5;
L_0046f8b9:; BB(0x0046f8b9);
    /* 0046f8b9: mov eax, 2 */ r_eax = 0x2u;
    /* 0046f8be: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f8c5:; BB(0x0046f8c5);
    /* 0046f8c5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f8cb: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f8ce: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46f8d3u); f_004f66e0();
    /* 0046f8d3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046f8d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f8d8: je 0x46f8f5 */ if (fZ) goto L_0046f8f5;
L_0046f8da:; BB(0x0046f8da);
    /* 0046f8da: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0046f8dc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f8e1u); f_0062fbf0();
    /* 0046f8e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f8e4: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f8e7: jle 0x46f8f5 */ if ((fZ||fS!=fO)) goto L_0046f8f5;
L_0046f8e9:; BB(0x0046f8e9);
    /* 0046f8e9: mov eax, 4 */ r_eax = 0x4u;
    /* 0046f8ee: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f8f5:; BB(0x0046f8f5);
    /* 0046f8f5: mov eax, 3 */ r_eax = 0x3u;
    /* 0046f8fa: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f8ff:; BB(0x0046f8ff);
    /* 0046f8ff: jmp 0x46fc65 */ goto L_0046fc65;
L_0046f904:; BB(0x0046f904);
    /* 0046f904: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f907: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046f90f: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f912: je 0x46f928 */ if (fZ) goto L_0046f928;
L_0046f914:; BB(0x0046f914);
    /* 0046f914: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f917: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046f91f: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f922: jne 0x46fab7 */ if (!fZ) goto L_0046fab7;
L_0046f928:; BB(0x0046f928);
    /* 0046f928: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f92b: movsx eax, word ptr [edx*2 + 0x791020] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791020u));
    /* 0046f933: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f936: jne 0x46f95e */ if (!fZ) goto L_0046f95e;
L_0046f938:; BB(0x0046f938);
    /* 0046f938: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f93e: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x46f943u); f_0047ce60();
    /* 0046f943: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f944: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046f948: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f94a: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0046f94d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f94e: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f954: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x46f959u); f_004c6ef0();
    /* 0046f959: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0046f95c: jmp 0x46f96c */ goto L_0046f96c;
L_0046f95e:; BB(0x0046f95e);
    /* 0046f95e: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f964: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x46f969u); f_004c6f50();
    /* 0046f969: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
L_0046f96c:; BB(0x0046f96c);
    /* 0046f96c: mov eax, 0x64 */ r_eax = 0x64u;
    /* 0046f971: sub eax, dword ptr [ebp - 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046f974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046f975: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f97au); f_0062fbf0();
    /* 0046f97a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f97d: mov esi, eax */ r_esi = r_eax;
    /* 0046f97f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f981: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046f984: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046f985: call 0x470a00 */ r_esp -= 4; W32(r_esp, 0x46f98au); f_00470a00();
    /* 0046f98a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f98d: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046f990: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046f992: jge 0x46fab2 */ if ((fS==fO)) goto L_0046fab2;
L_0046f998:; BB(0x0046f998);
    /* 0046f998: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f99a: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f9a0: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x46f9a5u); f_004c79d0();
    /* 0046f9a5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f9ab: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f9ae: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46f9b3u); f_004f6640();
    /* 0046f9b3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046f9b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f9b8: jne 0x46f9e6 */ if (!fZ) goto L_0046f9e6;
L_0046f9ba:; BB(0x0046f9ba);
    /* 0046f9ba: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046f9c0: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046f9c3: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46f9c8u); f_004f66e0();
    /* 0046f9c8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046f9cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f9cd: jne 0x46f9e6 */ if (!fZ) goto L_0046f9e6;
L_0046f9cf:; BB(0x0046f9cf);
    /* 0046f9cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046f9d2: movsx eax, word ptr [edx*2 + 0x791020] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791020u));
    /* 0046f9da: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046f9dd: jne 0x46f9e6 */ if (!fZ) goto L_0046f9e6;
L_0046f9df:; BB(0x0046f9df);
    /* 0046f9df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046f9e1: jmp 0x46fd08 */ goto L_0046fd08;
L_0046f9e6:; BB(0x0046f9e6);
    /* 0046f9e6: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046f9e8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46f9edu); f_0062fbf0();
    /* 0046f9ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046f9f0: mov esi, eax */ r_esi = r_eax;
    /* 0046f9f2: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046f9f8: call 0x4e9ce0 */ r_esp -= 4; W32(r_esp, 0x46f9fdu); f_004e9ce0();
    /* 0046f9fd: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046fa00: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046fa02: jge 0x46fa13 */ if ((fS==fO)) goto L_0046fa13;
L_0046fa04:; BB(0x0046fa04);
    /* 0046fa04: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046fa07: mov word ptr [edx*2 + 0x791020], 3 */ W16((u32)(r_edx*2+0x791020u), 0x3u);
    /* 0046fa11: jmp 0x46fa3e */ goto L_0046fa3e;
L_0046fa13:; BB(0x0046fa13);
    /* 0046fa13: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fa15: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46fa1au); f_0062fbf0();
    /* 0046fa1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046fa1d: mov esi, eax */ r_esi = r_eax;
    /* 0046fa1f: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046fa25: call 0x4e9d00 */ r_esp -= 4; W32(r_esp, 0x46fa2au); f_004e9d00();
    /* 0046fa2a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046fa2d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046fa2f: jge 0x46fa3e */ if ((fS==fO)) goto L_0046fa3e;
L_0046fa31:; BB(0x0046fa31);
    /* 0046fa31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046fa34: mov word ptr [ecx*2 + 0x791020], 1 */ W16((u32)(r_ecx*2+0x791020u), 0x1u);
L_0046fa3e:; BB(0x0046fa3e);
    /* 0046fa3e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fa44: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fa47: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46fa4cu); f_004f6640();
    /* 0046fa4c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046fa4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fa51: je 0x46fa5f */ if (fZ) goto L_0046fa5f;
L_0046fa53:; BB(0x0046fa53);
    /* 0046fa53: mov eax, 2 */ r_eax = 0x2u;
    /* 0046fa58: jmp 0x46fd08 */ goto L_0046fd08;
L_0046fa5f:; BB(0x0046fa5f);
    /* 0046fa5f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fa65: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fa68: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46fa6du); f_004f66e0();
    /* 0046fa6d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046fa70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fa72: je 0x46fa8f */ if (fZ) goto L_0046fa8f;
L_0046fa74:; BB(0x0046fa74);
    /* 0046fa74: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0046fa76: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46fa7bu); f_0062fbf0();
    /* 0046fa7b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046fa7e: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046fa81: jle 0x46fa8f */ if ((fZ||fS!=fO)) goto L_0046fa8f;
L_0046fa83:; BB(0x0046fa83);
    /* 0046fa83: mov eax, 4 */ r_eax = 0x4u;
    /* 0046fa88: jmp 0x46fd08 */ goto L_0046fd08;
L_0046fa8f:; BB(0x0046fa8f);
    /* 0046fa8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046fa92: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046fa9a: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fa9d: jne 0x46faa8 */ if (!fZ) goto L_0046faa8;
L_0046fa9f:; BB(0x0046fa9f);
    /* 0046fa9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046faa1: jmp 0x46fd08 */ goto L_0046fd08;
L_0046faa8:; BB(0x0046faa8);
    /* 0046faa8: mov eax, 3 */ r_eax = 0x3u;
    /* 0046faad: jmp 0x46fd08 */ goto L_0046fd08;
L_0046fab2:; BB(0x0046fab2);
    /* 0046fab2: jmp 0x46fc65 */ goto L_0046fc65;
L_0046fab7:; BB(0x0046fab7);
    /* 0046fab7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046faba: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046fac2: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fac5: je 0x46fadb */ if (fZ) goto L_0046fadb;
L_0046fac7:; BB(0x0046fac7);
    /* 0046fac7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046faca: movsx eax, word ptr [edx*2 + 0x791020] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791020u));
    /* 0046fad2: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fad5: jne 0x46fc65 */ if (!fZ) goto L_0046fc65;
L_0046fadb:; BB(0x0046fadb);
    /* 0046fadb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046fade: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046fae6: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fae9: jne 0x46fb11 */ if (!fZ) goto L_0046fb11;
L_0046faeb:; BB(0x0046faeb);
    /* 0046faeb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046faf1: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x46faf6u); f_0047ce60();
    /* 0046faf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046faf7: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046fafb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fafd: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0046fb00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb01: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046fb07: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x46fb0cu); f_004c6ef0();
    /* 0046fb0c: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0046fb0f: jmp 0x46fb1f */ goto L_0046fb1f;
L_0046fb11:; BB(0x0046fb11);
    /* 0046fb11: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046fb17: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x46fb1cu); f_004c6f50();
    /* 0046fb1c: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
L_0046fb1f:; BB(0x0046fb1f);
    /* 0046fb1f: mov edx, 0x64 */ r_edx = 0x64u;
    /* 0046fb24: sub edx, dword ptr [ebp - 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0046fb27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb28: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46fb2du); f_0062fbf0();
    /* 0046fb2d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046fb30: mov esi, eax */ r_esi = r_eax;
    /* 0046fb32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb34: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046fb37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb38: call 0x470a00 */ r_esp -= 4; W32(r_esp, 0x46fb3du); f_00470a00();
    /* 0046fb3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046fb40: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046fb43: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046fb45: jge 0x46fc65 */ if ((fS==fO)) goto L_0046fc65;
L_0046fb4b:; BB(0x0046fb4b);
    /* 0046fb4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb4d: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046fb53: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x46fb58u); f_004c79d0();
    /* 0046fb58: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fb5e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fb61: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46fb66u); f_004f6640();
    /* 0046fb66: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046fb69: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fb6b: jne 0x46fb99 */ if (!fZ) goto L_0046fb99;
L_0046fb6d:; BB(0x0046fb6d);
    /* 0046fb6d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fb73: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fb76: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46fb7bu); f_004f66e0();
    /* 0046fb7b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046fb7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fb80: jne 0x46fb99 */ if (!fZ) goto L_0046fb99;
L_0046fb82:; BB(0x0046fb82);
    /* 0046fb82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046fb85: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046fb8d: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fb90: jne 0x46fb99 */ if (!fZ) goto L_0046fb99;
L_0046fb92:; BB(0x0046fb92);
    /* 0046fb92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046fb94: jmp 0x46fd08 */ goto L_0046fd08;
L_0046fb99:; BB(0x0046fb99);
    /* 0046fb99: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fb9b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46fba0u); f_0062fbf0();
    /* 0046fba0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046fba3: mov esi, eax */ r_esi = r_eax;
    /* 0046fba5: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046fbab: call 0x4e9ce0 */ r_esp -= 4; W32(r_esp, 0x46fbb0u); f_004e9ce0();
    /* 0046fbb0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046fbb3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046fbb5: jge 0x46fbc6 */ if ((fS==fO)) goto L_0046fbc6;
L_0046fbb7:; BB(0x0046fbb7);
    /* 0046fbb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046fbba: mov word ptr [ecx*2 + 0x791020], 2 */ W16((u32)(r_ecx*2+0x791020u), 0x2u);
    /* 0046fbc4: jmp 0x46fbf1 */ goto L_0046fbf1;
L_0046fbc6:; BB(0x0046fbc6);
    /* 0046fbc6: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fbc8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46fbcdu); f_0062fbf0();
    /* 0046fbcd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046fbd0: mov esi, eax */ r_esi = r_eax;
    /* 0046fbd2: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046fbd8: call 0x4e9d00 */ r_esp -= 4; W32(r_esp, 0x46fbddu); f_004e9d00();
    /* 0046fbdd: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046fbe0: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046fbe2: jge 0x46fbf1 */ if ((fS==fO)) goto L_0046fbf1;
L_0046fbe4:; BB(0x0046fbe4);
    /* 0046fbe4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046fbe7: mov word ptr [eax*2 + 0x791020], 1 */ W16((u32)(r_eax*2+0x791020u), 0x1u);
L_0046fbf1:; BB(0x0046fbf1);
    /* 0046fbf1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fbf7: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fbfa: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46fbffu); f_004f6640();
    /* 0046fbff: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0046fc02: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fc04: je 0x46fc12 */ if (fZ) goto L_0046fc12;
L_0046fc06:; BB(0x0046fc06);
    /* 0046fc06: mov eax, 2 */ r_eax = 0x2u;
    /* 0046fc0b: jmp 0x46fd08 */ goto L_0046fd08;
L_0046fc12:; BB(0x0046fc12);
    /* 0046fc12: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fc18: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fc1b: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x46fc20u); f_004f66e0();
    /* 0046fc20: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046fc23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fc25: je 0x46fc42 */ if (fZ) goto L_0046fc42;
L_0046fc27:; BB(0x0046fc27);
    /* 0046fc27: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0046fc29: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46fc2eu); f_0062fbf0();
    /* 0046fc2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046fc31: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046fc34: jle 0x46fc42 */ if ((fZ||fS!=fO)) goto L_0046fc42;
L_0046fc36:; BB(0x0046fc36);
    /* 0046fc36: mov eax, 4 */ r_eax = 0x4u;
    /* 0046fc3b: jmp 0x46fd08 */ goto L_0046fd08;
L_0046fc42:; BB(0x0046fc42);
    /* 0046fc42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046fc45: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046fc4d: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fc50: jne 0x46fc5b */ if (!fZ) goto L_0046fc5b;
L_0046fc52:; BB(0x0046fc52);
    /* 0046fc52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046fc54: jmp 0x46fd08 */ goto L_0046fd08;
L_0046fc5b:; BB(0x0046fc5b);
    /* 0046fc5b: mov eax, 3 */ r_eax = 0x3u;
    /* 0046fc60: jmp 0x46fd08 */ goto L_0046fd08;
L_0046fc65:; BB(0x0046fc65);
    /* 0046fc65: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fc6b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fc6e: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46fc73u); f_004f6640();
    /* 0046fc73: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046fc76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fc78: jne 0x46fcba */ if (!fZ) goto L_0046fcba;
L_0046fc7a:; BB(0x0046fc7a);
    /* 0046fc7a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046fc7d: movsx ecx, word ptr [eax*2 + 0x791020] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791020u));
    /* 0046fc85: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fc88: jne 0x46fc90 */ if (!fZ) goto L_0046fc90;
L_0046fc8a:; BB(0x0046fc8a);
    /* 0046fc8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046fc8c: jmp 0x46fd08 */ goto L_0046fd08;
L_0046fc90:; BB(0x0046fc90);
    /* 0046fc90: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046fc93: movsx eax, word ptr [edx*2 + 0x791020] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791020u));
    /* 0046fc9b: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fc9e: jne 0x46fca6 */ if (!fZ) goto L_0046fca6;
L_0046fca0:; BB(0x0046fca0);
    /* 0046fca0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046fca2: jmp 0x46fd08 */ goto L_0046fd08;
L_0046fca6:; BB(0x0046fca6);
    /* 0046fca6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046fca9: movsx edx, word ptr [ecx*2 + 0x791020] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791020u));
    /* 0046fcb1: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fcb4: jne 0x46fcba */ if (!fZ) goto L_0046fcba;
L_0046fcb6:; BB(0x0046fcb6);
    /* 0046fcb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046fcb8: jmp 0x46fd08 */ goto L_0046fd08;
L_0046fcba:; BB(0x0046fcba);
    /* 0046fcba: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fcbc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46fcc1u); f_0062fbf0();
    /* 0046fcc1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046fcc4: mov esi, eax */ r_esi = r_eax;
    /* 0046fcc6: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046fccc: call 0x4e9d00 */ r_esp -= 4; W32(r_esp, 0x46fcd1u); f_004e9d00();
    /* 0046fcd1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046fcd4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046fcd6: jge 0x46fce5 */ if ((fS==fO)) goto L_0046fce5;
L_0046fcd8:; BB(0x0046fcd8);
    /* 0046fcd8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046fcdb: mov word ptr [ecx*2 + 0x791020], 1 */ W16((u32)(r_ecx*2+0x791020u), 0x1u);
L_0046fce5:; BB(0x0046fce5);
    /* 0046fce5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fceb: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fcee: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x46fcf3u); f_004f6640();
    /* 0046fcf3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0046fcf6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fcf8: je 0x46fd03 */ if (fZ) goto L_0046fd03;
L_0046fcfa:; BB(0x0046fcfa);
    /* 0046fcfa: mov eax, 1 */ r_eax = 0x1u;
    /* 0046fcff: jmp 0x46fd08 */ goto L_0046fd08;
L_0046fd03:; BB(0x0046fd03);
    /* 0046fd03: mov eax, 3 */ r_eax = 0x3u;
L_0046fd08:; BB(0x0046fd08);
    /* 0046fd08: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046fd09: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0046fd0a: mov esp, ebp */ r_esp = r_ebp;
    /* 0046fd0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046fd0d: ret  */ FN_RET(0x0046ef30); r_esp += 4; return;
}

void f_0046fd10(void) /* PokerDrawai::func_0046fd10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046fd10);
    /* 0046fd10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046fd11: mov ebp, esp */ r_ebp = r_esp;
    /* 0046fd13: sub esp, 0xa0 */ {  u32 a = r_esp; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0046fd19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046fd1a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fd20: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x46fd25u); f_0047e420();
    /* 0046fd25: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0046fd28: fld1  */ FPUSH(1.0);
    /* 0046fd2a: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0046fd2d: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046fd33: call 0x4e9480 */ r_esp -= 4; W32(r_esp, 0x46fd38u); f_004e9480();
    /* 0046fd38: fidiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xcu));
    /* 0046fd3b: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0046fd3e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0046fd45: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0046fd4b: jmp 0x46fd59 */ goto L_0046fd59;
L_0046fd4d:; BB(0x0046fd4d);
    /* 0046fd4d: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0046fd51: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046fd55: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_0046fd59:; BB(0x0046fd59);
    /* 0046fd59: movsx esi, word ptr [ebp - 0x1c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0046fd5d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fd63: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x46fd68u); f_0047f950();
    /* 0046fd68: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046fd6a: jge 0x47019d */ if ((fS==fO)) goto L_0047019d;
L_0046fd70:; BB(0x0046fd70);
    /* 0046fd70: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0046fd74: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fd77: jne 0x46fd7b */ if (!fZ) goto L_0046fd7b;
L_0046fd79:; BB(0x0046fd79);
    /* 0046fd79: jmp 0x46fd4d */ goto L_0046fd4d;
L_0046fd7b:; BB(0x0046fd7b);
    /* 0046fd7b: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0046fd7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046fd80: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fd86: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46fd8bu); f_0047e390();
    /* 0046fd8b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0046fd8e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046fd91: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x46fd96u); f_004c7010();
    /* 0046fd96: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fd99: jne 0x470198 */ if (!fZ) goto L_00470198;
L_0046fd9f:; BB(0x0046fd9f);
    /* 0046fd9f: fldz  */ FPUSH(0.0);
    /* 0046fda1: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0046fda4: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0046fda8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046fda9: mov cx, word ptr [ebp - 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0046fdad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046fdae: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046fdb4: call 0x4ea970 */ r_esp -= 4; W32(r_esp, 0x46fdb9u); f_004ea970();
    /* 0046fdb9: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0046fdbc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046fdbf: shl edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0046fdc2: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0046fdc6: fld qword ptr [ebp - 0x28] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd8u)));
    /* 0046fdc9: fmul qword ptr [edx + eax*8 + 0x791060] */ ST(0) = ST(0) * R_F64((u32)(r_edx+r_eax*8+0x791060u));
    /* 0046fdd0: fcomp qword ptr [ebp - 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 0046fdd3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0046fdd5: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0046fdd8: jne 0x46fde3 */ if (!fZ) goto L_0046fde3;
L_0046fdda:; BB(0x0046fdda);
    /* 0046fdda: mov byte ptr [ebp - 0x31], 1 */ W8((u32)(r_ebp+0xffffffcfu), 0x1u);
    /* 0046fdde: jmp 0x470133 */ goto L_00470133;
L_0046fde3:; BB(0x0046fde3);
    /* 0046fde3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046fde6: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x46fdebu); f_004c7050();
    /* 0046fdeb: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0046fdee: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046fdf2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fdf4: je 0x46fe32 */ if (fZ) goto L_0046fe32;
L_0046fdf6:; BB(0x0046fdf6);
    /* 0046fdf6: mov dx, word ptr [ebp - 0x48] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046fdfa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046fdfb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fe01: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fe04: call 0x4f6a90 */ r_esp -= 4; W32(r_esp, 0x46fe09u); f_004f6a90();
    /* 0046fe09: mov word ptr [ebp - 0x54], ax */ W16((u32)(r_ebp+0xffffffacu), (u16)r_eax);
    /* 0046fe0d: mov ax, word ptr [ebp - 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046fe11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046fe12: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fe18: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fe1b: call 0x4f6b20 */ r_esp -= 4; W32(r_esp, 0x46fe20u); f_004f6b20();
    /* 0046fe20: mov word ptr [ebp - 0x4c], ax */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_eax);
    /* 0046fe24: mov word ptr [ebp - 0x58], 0 */ W16((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0046fe2a: mov word ptr [ebp - 0x44], 0 */ W16((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0046fe30: jmp 0x46fea0 */ goto L_0046fea0;
L_0046fe32:; BB(0x0046fe32);
    /* 0046fe32: mov cx, word ptr [ebp - 0x48] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046fe36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046fe37: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fe3d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fe40: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x46fe45u); f_004f6880();
    /* 0046fe45: mov word ptr [ebp - 0x54], ax */ W16((u32)(r_ebp+0xffffffacu), (u16)r_eax);
    /* 0046fe49: mov dx, word ptr [ebp - 0x48] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046fe4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046fe4e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fe54: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fe57: call 0x4f6930 */ r_esp -= 4; W32(r_esp, 0x46fe5cu); f_004f6930();
    /* 0046fe5c: mov word ptr [ebp - 0x4c], ax */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_eax);
    /* 0046fe60: mov ax, word ptr [ebp - 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046fe64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046fe65: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fe6b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fe6e: call 0x4f6a90 */ r_esp -= 4; W32(r_esp, 0x46fe73u); f_004f6a90();
    /* 0046fe73: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046fe76: movsx edx, word ptr [ebp - 0x54] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 0046fe7a: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fe7c: mov word ptr [ebp - 0x58], cx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_ecx);
    /* 0046fe80: mov ax, word ptr [ebp - 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046fe84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046fe85: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fe8b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fe8e: call 0x4f6b20 */ r_esp -= 4; W32(r_esp, 0x46fe93u); f_004f6b20();
    /* 0046fe93: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0046fe96: movsx edx, word ptr [ebp - 0x4c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0046fe9a: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fe9c: mov word ptr [ebp - 0x44], cx */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_ecx);
L_0046fea0:; BB(0x0046fea0);
    /* 0046fea0: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046fea4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fea6: je 0x46fed1 */ if (fZ) goto L_0046fed1;
L_0046fea8:; BB(0x0046fea8);
    /* 0046fea8: movsx ecx, word ptr [ebp - 0x4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0046feac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046feae: jne 0x46fed1 */ if (!fZ) goto L_0046fed1;
L_0046feb0:; BB(0x0046feb0);
    /* 0046feb0: movsx edx, word ptr [ebp - 0x54] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 0046feb4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046feb6: jne 0x46fed1 */ if (!fZ) goto L_0046fed1;
L_0046feb8:; BB(0x0046feb8);
    /* 0046feb8: mov ax, word ptr [ebp - 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046febc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046febd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046fec3: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046fec6: call 0x4f6bb0 */ r_esp -= 4; W32(r_esp, 0x46fecbu); f_004f6bb0();
    /* 0046fecb: mov word ptr [ebp - 0x50], ax */ W16((u32)(r_ebp+0xffffffb0u), (u16)r_eax);
    /* 0046fecf: jmp 0x46ff00 */ goto L_0046ff00;
L_0046fed1:; BB(0x0046fed1);
    /* 0046fed1: movsx ecx, word ptr [ebp - 0x4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0046fed5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fed7: jne 0x46fefa */ if (!fZ) goto L_0046fefa;
L_0046fed9:; BB(0x0046fed9);
    /* 0046fed9: movsx edx, word ptr [ebp - 0x54] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 0046fedd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046fedf: jne 0x46fefa */ if (!fZ) goto L_0046fefa;
L_0046fee1:; BB(0x0046fee1);
    /* 0046fee1: mov ax, word ptr [ebp - 0x48] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb8u))) & 0xffffu);
    /* 0046fee5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046fee6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046feec: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046feef: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x46fef4u); f_004f69e0();
    /* 0046fef4: mov word ptr [ebp - 0x50], ax */ W16((u32)(r_ebp+0xffffffb0u), (u16)r_eax);
    /* 0046fef8: jmp 0x46ff00 */ goto L_0046ff00;
L_0046fefa:; BB(0x0046fefa);
    /* 0046fefa: mov word ptr [ebp - 0x50], 0 */ W16((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0046ff00:; BB(0x0046ff00);
    /* 0046ff00: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 0046ff04: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ff06: je 0x46ff24 */ if (fZ) goto L_0046ff24;
L_0046ff08:; BB(0x0046ff08);
    /* 0046ff08: mov dx, word ptr [ebp - 0x54] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffacu))) & 0xffffu);
    /* 0046ff0c: mov word ptr [ebp - 0x58], dx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_edx);
    /* 0046ff10: mov ax, word ptr [ebp - 0x4c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb4u))) & 0xffffu);
    /* 0046ff14: mov word ptr [ebp - 0x44], ax */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_eax);
    /* 0046ff18: mov word ptr [ebp - 0x54], 0 */ W16((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0046ff1e: mov word ptr [ebp - 0x4c], 0 */ W16((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0046ff24:; BB(0x0046ff24);
    /* 0046ff24: fldz  */ FPUSH(0.0);
    /* 0046ff26: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0046ff29: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046ff2d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ff2f: jne 0x46ff4a */ if (!fZ) goto L_0046ff4a;
L_0046ff31:; BB(0x0046ff31);
    /* 0046ff31: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046ff34: cmp dword ptr [edx + 0x18], 0 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ff38: jne 0x46ff4a */ if (!fZ) goto L_0046ff4a;
L_0046ff3a:; BB(0x0046ff3a);
    /* 0046ff3a: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046ff40: call 0x4e9830 */ r_esp -= 4; W32(r_esp, 0x46ff45u); f_004e9830();
    /* 0046ff45: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0046ff48: jmp 0x46ff8a */ goto L_0046ff8a;
L_0046ff4a:; BB(0x0046ff4a);
    /* 0046ff4a: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046ff4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ff50: jne 0x46ff6b */ if (!fZ) goto L_0046ff6b;
L_0046ff52:; BB(0x0046ff52);
    /* 0046ff52: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046ff55: cmp dword ptr [ecx + 0x18], 1 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ff59: jne 0x46ff6b */ if (!fZ) goto L_0046ff6b;
L_0046ff5b:; BB(0x0046ff5b);
    /* 0046ff5b: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046ff61: call 0x4e9910 */ r_esp -= 4; W32(r_esp, 0x46ff66u); f_004e9910();
    /* 0046ff66: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0046ff69: jmp 0x46ff8a */ goto L_0046ff8a;
L_0046ff6b:; BB(0x0046ff6b);
    /* 0046ff6b: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0046ff6f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ff71: jne 0x46ff8a */ if (!fZ) goto L_0046ff8a;
L_0046ff73:; BB(0x0046ff73);
    /* 0046ff73: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046ff76: cmp dword ptr [eax + 0x18], 2 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ff7a: jl 0x46ff8a */ if ((fS!=fO)) goto L_0046ff8a;
L_0046ff7c:; BB(0x0046ff7c);
    /* 0046ff7c: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046ff82: call 0x4e99f0 */ r_esp -= 4; W32(r_esp, 0x46ff87u); f_004e99f0();
    /* 0046ff87: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
L_0046ff8a:; BB(0x0046ff8a);
    /* 0046ff8a: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 0046ff8e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ff90: je 0x46ffd2 */ if (fZ) goto L_0046ffd2;
L_0046ff92:; BB(0x0046ff92);
    /* 0046ff92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046ff95: cmp dword ptr [edx + 0x18], 1 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046ff99: jne 0x46ffab */ if (!fZ) goto L_0046ffab;
L_0046ff9b:; BB(0x0046ff9b);
    /* 0046ff9b: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046ffa1: call 0x4e9910 */ r_esp -= 4; W32(r_esp, 0x46ffa6u); f_004e9910();
    /* 0046ffa6: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0046ffa9: jmp 0x46ffd2 */ goto L_0046ffd2;
L_0046ffab:; BB(0x0046ffab);
    /* 0046ffab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046ffae: cmp dword ptr [eax + 0x18], 2 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046ffb2: jl 0x46ffc4 */ if ((fS!=fO)) goto L_0046ffc4;
L_0046ffb4:; BB(0x0046ffb4);
    /* 0046ffb4: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046ffba: call 0x4e99f0 */ r_esp -= 4; W32(r_esp, 0x46ffbfu); f_004e99f0();
    /* 0046ffbf: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0046ffc2: jmp 0x46ffd2 */ goto L_0046ffd2;
L_0046ffc4:; BB(0x0046ffc4);
    /* 0046ffc4: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0046ffca: call 0x4e9830 */ r_esp -= 4; W32(r_esp, 0x46ffcfu); f_004e9830();
    /* 0046ffcf: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
L_0046ffd2:; BB(0x0046ffd2);
    /* 0046ffd2: movsx ecx, word ptr [ebp - 0x54] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 0046ffd6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0046ffd8: jge 0x46fff1 */ if ((fS==fO)) goto L_0046fff1;
L_0046ffda:; BB(0x0046ffda);
    /* 0046ffda: push 0x3c5 */ { u32 v = 0x3c5u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ffdf: push 0x6bc1e8 */ { u32 v = 0x6bc1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046ffe4: push 0x6bc25c */ { u32 v = 0x6bc25cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046ffe9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x46ffeeu); f_005e9f20();
    /* 0046ffee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046fff1:; BB(0x0046fff1);
    /* 0046fff1: movsx eax, word ptr [ebp - 0x4c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 0046fff5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0046fff7: jge 0x470010 */ if ((fS==fO)) goto L_00470010;
L_0046fff9:; BB(0x0046fff9);
    /* 0046fff9: push 0x3c6 */ { u32 v = 0x3c6u; r_esp -= 4; W32(r_esp, v); }
    /* 0046fffe: push 0x6bc1e8 */ { u32 v = 0x6bc1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00470003: push 0x6bc248 */ { u32 v = 0x6bc248u; r_esp -= 4; W32(r_esp, v); }
    /* 00470008: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47000du); f_005e9f20();
    /* 0047000d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00470010:; BB(0x00470010);
    /* 00470010: movsx edx, word ptr [ebp - 0x50] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 00470014: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00470016: jge 0x47002f */ if ((fS==fO)) goto L_0047002f;
L_00470018:; BB(0x00470018);
    /* 00470018: push 0x3c7 */ { u32 v = 0x3c7u; r_esp -= 4; W32(r_esp, v); }
    /* 0047001d: push 0x6bc1e8 */ { u32 v = 0x6bc1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00470022: push 0x6bc230 */ { u32 v = 0x6bc230u; r_esp -= 4; W32(r_esp, v); }
    /* 00470027: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47002cu); f_005e9f20();
    /* 0047002c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047002f:; BB(0x0047002f);
    /* 0047002f: movsx ecx, word ptr [ebp - 0x58] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa8u));
    /* 00470033: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00470035: jge 0x47004e */ if ((fS==fO)) goto L_0047004e;
L_00470037:; BB(0x00470037);
    /* 00470037: push 0x3c8 */ { u32 v = 0x3c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047003c: push 0x6bc1e8 */ { u32 v = 0x6bc1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00470041: push 0x6bc220 */ { u32 v = 0x6bc220u; r_esp -= 4; W32(r_esp, v); }
    /* 00470046: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47004bu); f_005e9f20();
    /* 0047004b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047004e:; BB(0x0047004e);
    /* 0047004e: movsx eax, word ptr [ebp - 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 00470052: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00470054: jge 0x47006d */ if ((fS==fO)) goto L_0047006d;
L_00470056:; BB(0x00470056);
    /* 00470056: push 0x3c9 */ { u32 v = 0x3c9u; r_esp -= 4; W32(r_esp, v); }
    /* 0047005b: push 0x6bc1e8 */ { u32 v = 0x6bc1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00470060: push 0x6bc210 */ { u32 v = 0x6bc210u; r_esp -= 4; W32(r_esp, v); }
    /* 00470065: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47006au); f_005e9f20();
    /* 0047006a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047006d:; BB(0x0047006d);
    /* 0047006d: mov byte ptr [ebp - 0x31], 0 */ W8((u32)(r_ebp+0xffffffcfu), 0x0u);
    /* 00470071: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470077: call 0x4e94b0 */ r_esp -= 4; W32(r_esp, 0x47007cu); f_004e94b0();
    /* 0047007c: movsx edx, word ptr [ebp - 0x58] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa8u));
    /* 00470080: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00470083: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 00470086: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00470088: fld1  */ FPUSH(1.0);
    /* 0047008a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0047008c: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470092: fstp qword ptr [ebp - 0x6c] */ W_F64((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 00470095: call 0x4e9590 */ r_esp -= 4; W32(r_esp, 0x47009au); f_004e9590();
    /* 0047009a: movsx eax, word ptr [ebp - 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0047009e: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004700a1: fild dword ptr [ebp - 0x70] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff90u)));
    /* 004700a4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004700a6: fadd qword ptr [ebp - 0x6c] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff94u));
    /* 004700a9: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 004700af: fstp qword ptr [ebp - 0x78] */ W_F64((u32)(r_ebp+0xffffff88u), ST(0)); FPOP();
    /* 004700b2: call 0x4e9670 */ r_esp -= 4; W32(r_esp, 0x4700b7u); f_004e9670();
    /* 004700b7: movsx ecx, word ptr [ebp - 0x54] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004700bb: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 004700be: fild dword ptr [ebp - 0x7c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff84u)));
    /* 004700c1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004700c3: fadd qword ptr [ebp - 0x78] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff88u));
    /* 004700c6: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 004700cc: fstp qword ptr [ebp - 0x84] */ W_F64((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 004700d2: call 0x4e9750 */ r_esp -= 4; W32(r_esp, 0x4700d7u); f_004e9750();
    /* 004700d7: movsx edx, word ptr [ebp - 0x4c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb4u));
    /* 004700db: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 004700e1: fild dword ptr [ebp - 0x88] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff78u)));
    /* 004700e7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004700e9: fadd qword ptr [ebp - 0x84] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff7cu));
    /* 004700ef: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 004700f5: fstp qword ptr [ebp - 0x90] */ W_F64((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 004700fb: call 0x4e9390 */ r_esp -= 4; W32(r_esp, 0x470100u); f_004e9390();
    /* 00470100: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00470103: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00470109: fild dword ptr [ebp - 0x94] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff6cu)));
    /* 0047010f: fdiv qword ptr [0x6bc280] */ ST(0) = ST(0) / R_F64((u32)(0x6bc280u));
    /* 00470115: movsx ecx, word ptr [ebp - 0x50] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 00470119: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0047011f: fild dword ptr [ebp - 0x98] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff68u)));
    /* 00470125: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00470127: fsubr qword ptr [ebp - 0x90] */ ST(0) = R_F64((u32)(r_ebp+0xffffff70u)) - ST(0);
    /* 0047012d: fadd qword ptr [ebp - 0x60] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffa0u));
    /* 00470130: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
L_00470133:; BB(0x00470133);
    /* 00470133: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00470136: mov ax, word ptr [edx*2 + 0x791030] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx*2+0x791030u))) & 0xffffu);
    /* 0047013e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047013f: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470145: call 0x4eaf20 */ r_esp -= 4; W32(r_esp, 0x47014au); f_004eaf20();
    /* 0047014a: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0047014d: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 00470153: fild dword ptr [ebp - 0x9c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff64u)));
    /* 00470159: fdiv qword ptr [0x6bc208] */ ST(0) = ST(0) / R_F64((u32)(0x6bc208u));
    /* 0047015f: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00470162: movzx edx, byte ptr [ebp - 0x31] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 00470166: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470168: je 0x470175 */ if (fZ) goto L_00470175;
L_0047016a:; BB(0x0047016a);
    /* 0047016a: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0047016d: fmul qword ptr [ebp - 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc0u));
    /* 00470170: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00470173: jmp 0x470187 */ goto L_00470187;
L_00470175:; BB(0x00470175);
    /* 00470175: fld1  */ FPUSH(1.0);
    /* 00470177: fsub qword ptr [ebp - 0x40] */ ST(0) = ST(0) - R_F64((u32)(r_ebp+0xffffffc0u));
    /* 0047017a: fmul qword ptr [ebp - 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd0u));
    /* 0047017d: fld1  */ FPUSH(1.0);
    /* 0047017f: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00470181: fmul qword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00470184: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00470187:; BB(0x00470187);
    /* 00470187: fldz  */ FPUSH(0.0);
    /* 00470189: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 0047018c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0047018e: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00470191: jne 0x470198 */ if (!fZ) goto L_00470198;
L_00470193:; BB(0x00470193);
    /* 00470193: fldz  */ FPUSH(0.0);
    /* 00470195: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00470198:; BB(0x00470198);
    /* 00470198: jmp 0x46fd4d */ goto L_0046fd4d;
L_0047019d:; BB(0x0047019d);
    /* 0047019d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004701a0: movzx ecx, byte ptr [eax + 0x7912e0] */ r_ecx = (u32)R8((u32)(r_eax+0x7912e0u));
    /* 004701a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004701a9: je 0x4701da */ if (fZ) goto L_004701da;
L_004701ab:; BB(0x004701ab);
    /* 004701ab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004701ae: mov ax, word ptr [edx*2 + 0x791030] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx*2+0x791030u))) & 0xffffu);
    /* 004701b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004701b7: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 004701bd: call 0x4eaf20 */ r_esp -= 4; W32(r_esp, 0x4701c2u); f_004eaf20();
    /* 004701c2: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004701c5: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 004701cb: fild dword ptr [ebp - 0xa0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff60u)));
    /* 004701d1: fdiv qword ptr [0x6bc208] */ ST(0) = ST(0) / R_F64((u32)(0x6bc208u));
    /* 004701d7: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_004701da:; BB(0x004701da);
    /* 004701da: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004701dd: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 004701e0: fmul qword ptr [edx*8 + 0x7912a0] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x7912a0u));
    /* 004701e7: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004701ea: fld qword ptr [0x6b4b00] */ FPUSH(R_F64((u32)(0x6b4b00u)));
    /* 004701f0: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 004701f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004701f5: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004701f8: jp 0x470203 */ if (fP) goto L_00470203;
L_004701fa:; BB(0x004701fa);
    /* 004701fa: fld qword ptr [0x6b4b00] */ FPUSH(R_F64((u32)(0x6b4b00u)));
    /* 00470200: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00470203:; BB(0x00470203);
    /* 00470203: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00470206: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00470207: mov esp, ebp */ r_esp = r_ebp;
    /* 00470209: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047020a: ret  */ FN_RET(0x0046fd10); r_esp += 4; return;
}

