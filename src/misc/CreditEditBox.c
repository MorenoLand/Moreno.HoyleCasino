#include "protos.h"

void f_005cfdf0(void) /* CreditEditBox::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cfdf0);
    /* 005cfdf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cfdf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cfdf3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cfdf6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005cfdf9: mov ax, word ptr [0x6b2b64] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6b2b64u))) & 0xffffu);
    /* 005cfdff: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 005cfe03: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cfe06: mov dl, byte ptr [ecx + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x14u))) & 0xffu);
    /* 005cfe09: mov byte ptr [ebp - 4], dl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_edx);
    /* 005cfe0c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfe0f: call 0x60c370 */ r_esp -= 4; W32(r_esp, 0x5cfe14u); f_0060c370();
    /* 005cfe14: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005cfe17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfe19: je 0x5cfe4f */ if (fZ) goto L_005cfe4f;
L_005cfe1b:; BB(0x005cfe1b);
    /* 005cfe1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cfe1e: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 005cfe22: cmp edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cfe25: jle 0x5cfe4f */ if ((fZ||fS!=fO)) goto L_005cfe4f;
L_005cfe27:; BB(0x005cfe27);
    /* 005cfe27: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 005cfe2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe2b: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x5cfe31u); call_ind(t); }
    /* 005cfe31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfe34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfe36: jne 0x5cfe4f */ if (!fZ) goto L_005cfe4f;
L_005cfe38:; BB(0x005cfe38);
    /* 005cfe38: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe3d: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 005cfe40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe41: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5cfe46u); f_00686ec0();
    /* 005cfe46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cfe49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cfe4b: je 0x5cfe4f */ if (fZ) goto L_005cfe4f;
L_005cfe4d:; BB(0x005cfe4d);
    /* 005cfe4d: jmp 0x5cfe5b */ goto L_005cfe5b;
L_005cfe4f:; BB(0x005cfe4f);
    /* 005cfe4f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005cfe52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cfe53: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cfe56: call 0x60b7d0 */ r_esp -= 4; W32(r_esp, 0x5cfe5bu); f_0060b7d0();
L_005cfe5b:; BB(0x005cfe5b);
    /* 005cfe5b: mov esp, ebp */ r_esp = r_ebp;
    /* 005cfe5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cfe5e: ret 4 */ FN_RET(0x005cfdf0); r_esp += 8; return;
}

