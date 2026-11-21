#include "protos.h"

void f_0046dbe0(void) /* sub_46DBE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0046dbe0);
    /* 0046dbe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0046dbe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0046dbe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046dbe4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0046dbe5: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046dbeb: jmp 0x46dbf9 */ goto L_0046dbf9;
L_0046dbed:; BB(0x0046dbed);
    /* 0046dbed: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0046dbf1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0046dbf5: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_0046dbf9:; BB(0x0046dbf9);
    /* 0046dbf9: movsx esi, word ptr [ebp - 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046dbfd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dc03: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x46dc08u); f_0047f950();
    /* 0046dc08: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046dc0a: jge 0x46dc74 */ if ((fS==fO)) goto L_0046dc74;
L_0046dc0c:; BB(0x0046dc0c);
    /* 0046dc0c: movsx esi, word ptr [ebp - 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046dc10: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dc16: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x46dc1bu); f_0047e420();
    /* 0046dc1b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dc1d: jne 0x46dc21 */ if (!fZ) goto L_0046dc21;
L_0046dc1f:; BB(0x0046dc1f);
    /* 0046dc1f: jmp 0x46dbed */ goto L_0046dbed;
L_0046dc21:; BB(0x0046dc21);
    /* 0046dc21: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046dc25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046dc26: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dc2c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46dc31u); f_0047e390();
    /* 0046dc31: mov ecx, eax */ r_ecx = r_eax;
    /* 0046dc33: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x46dc38u); f_004c7010();
    /* 0046dc38: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dc3b: jne 0x46dc6f */ if (!fZ) goto L_0046dc6f;
L_0046dc3d:; BB(0x0046dc3d);
    /* 0046dc3d: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0046dc41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046dc42: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dc48: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x46dc4du); f_0047e390();
    /* 0046dc4d: mov ecx, eax */ r_ecx = r_eax;
    /* 0046dc4f: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x46dc54u); f_004c7050();
    /* 0046dc54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046dc55: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046dc5b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046dc5e: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x46dc63u); f_004f69e0();
    /* 0046dc63: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0046dc66: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046dc69: je 0x46dc6f */ if (fZ) goto L_0046dc6f;
L_0046dc6b:; BB(0x0046dc6b);
    /* 0046dc6b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0046dc6d: jmp 0x46dc76 */ goto L_0046dc76;
L_0046dc6f:; BB(0x0046dc6f);
    /* 0046dc6f: jmp 0x46dbed */ goto L_0046dbed;
L_0046dc74:; BB(0x0046dc74);
    /* 0046dc74: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0046dc76:; BB(0x0046dc76);
    /* 0046dc76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0046dc77: mov esp, ebp */ r_esp = r_ebp;
    /* 0046dc79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046dc7a: ret  */ FN_RET(0x0046dbe0); r_esp += 4; return;
}

