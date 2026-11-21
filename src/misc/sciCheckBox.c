#include "protos.h"

void f_00600160(void) /* sciCheckBox::vfunc61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600160);
    /* 00600160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600161: mov ebp, esp */ r_ebp = r_esp;
    /* 00600163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600167: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060016a: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x60016fu); f_00600230();
    /* 0060016f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00600172: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600174: je 0x600178 */ if (fZ) goto L_00600178;
L_00600176:; BB(0x00600176);
    /* 00600176: jmp 0x6001a2 */ goto L_006001a2;
L_00600178:; BB(0x00600178);
    /* 00600178: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060017b: mov byte ptr [ecx + 0x1dc], 1 */ W8((u32)(r_ecx+0x1dcu), 0x1u);
    /* 00600182: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600185: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00600187: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060018a: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 00600190: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x600192u); call_ind(t); }
    /* 00600192: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600195: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00600197: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060019a: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 006001a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6001a2u); call_ind(t); }
L_006001a2:; BB(0x006001a2);
    /* 006001a2: mov esp, ebp */ r_esp = r_ebp;
    /* 006001a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006001a5: ret  */ FN_RET(0x00600160); r_esp += 4; return;
}

void f_006001b0(void) /* sciCheckBox::vfunc62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006001b0);
    /* 006001b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006001b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006001b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006001b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006001b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006001ba: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x6001bfu); f_00600230();
    /* 006001bf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006001c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006001c4: jne 0x6001c8 */ if (!fZ) goto L_006001c8;
L_006001c6:; BB(0x006001c6);
    /* 006001c6: jmp 0x6001f2 */ goto L_006001f2;
L_006001c8:; BB(0x006001c8);
    /* 006001c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006001cb: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 006001d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006001d5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006001d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006001da: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 006001e0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6001e2u); call_ind(t); }
    /* 006001e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006001e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006001e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006001ea: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 006001f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6001f2u); call_ind(t); }
L_006001f2:; BB(0x006001f2);
    /* 006001f2: mov esp, ebp */ r_esp = r_ebp;
    /* 006001f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006001f5: ret  */ FN_RET(0x006001b0); r_esp += 4; return;
}

