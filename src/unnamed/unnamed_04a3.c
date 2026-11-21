#include "protos.h"

void f_004a39c0(void) /* sub_4A39C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a39c0);
    /* 004a39c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a39c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a39c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a39c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a39c5: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a39cb: jmp 0x4a39d9 */ goto L_004a39d9;
L_004a39cd:; BB(0x004a39cd);
    /* 004a39cd: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004a39d1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a39d5: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004a39d9:; BB(0x004a39d9);
    /* 004a39d9: movsx esi, word ptr [ebp - 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004a39dd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a39e3: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4a39e8u); f_0047f950();
    /* 004a39e8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a39ea: jge 0x4a3a54 */ if ((fS==fO)) goto L_004a3a54;
L_004a39ec:; BB(0x004a39ec);
    /* 004a39ec: movsx esi, word ptr [ebp - 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004a39f0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a39f6: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4a39fbu); f_0047e420();
    /* 004a39fb: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a39fd: jne 0x4a3a01 */ if (!fZ) goto L_004a3a01;
L_004a39ff:; BB(0x004a39ff);
    /* 004a39ff: jmp 0x4a39cd */ goto L_004a39cd;
L_004a3a01:; BB(0x004a3a01);
    /* 004a3a01: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004a3a05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3a06: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a3a0c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a3a11u); f_0047e390();
    /* 004a3a11: mov ecx, eax */ r_ecx = r_eax;
    /* 004a3a13: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4a3a18u); f_004c7010();
    /* 004a3a18: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3a1b: jne 0x4a3a4f */ if (!fZ) goto L_004a3a4f;
L_004a3a1d:; BB(0x004a3a1d);
    /* 004a3a1d: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004a3a21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3a22: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a3a28: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a3a2du); f_0047e390();
    /* 004a3a2d: mov ecx, eax */ r_ecx = r_eax;
    /* 004a3a2f: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4a3a34u); f_004c7050();
    /* 004a3a34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a3a35: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a3a3b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a3a3e: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x4a3a43u); f_004f69e0();
    /* 004a3a43: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a3a46: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3a49: je 0x4a3a4f */ if (fZ) goto L_004a3a4f;
L_004a3a4b:; BB(0x004a3a4b);
    /* 004a3a4b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004a3a4d: jmp 0x4a3a56 */ goto L_004a3a56;
L_004a3a4f:; BB(0x004a3a4f);
    /* 004a3a4f: jmp 0x4a39cd */ goto L_004a39cd;
L_004a3a54:; BB(0x004a3a54);
    /* 004a3a54: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004a3a56:; BB(0x004a3a56);
    /* 004a3a56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a3a57: mov esp, ebp */ r_esp = r_ebp;
    /* 004a3a59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a3a5a: ret  */ FN_RET(0x004a39c0); r_esp += 4; return;
}

