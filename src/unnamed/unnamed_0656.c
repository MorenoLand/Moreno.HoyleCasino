#include "protos.h"

void f_00656230(void) /* sub_656230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00656230);
    /* 00656230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00656231: mov ebp, esp */ r_ebp = r_esp;
    /* 00656233: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00656236: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00656239: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065623d: je 0x656263 */ if (fZ) goto L_00656263;
L_0065623f:; BB(0x0065623f);
    /* 0065623f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00656242: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656243: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00656246: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00656248: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0065624b: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00656251: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x656253u); call_ind(t); }
    /* 00656253: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00656256: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656258: je 0x656263 */ if (fZ) goto L_00656263;
L_0065625a:; BB(0x0065625a);
    /* 0065625a: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00656261: jmp 0x65626a */ goto L_0065626a;
L_00656263:; BB(0x00656263);
    /* 00656263: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0065626a:; BB(0x0065626a);
    /* 0065626a: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0065626d: mov esp, ebp */ r_esp = r_ebp;
    /* 0065626f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00656270: ret 8 */ FN_RET(0x00656230); r_esp += 12; return;
}

