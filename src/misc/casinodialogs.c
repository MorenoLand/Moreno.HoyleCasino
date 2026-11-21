#include "protos.h"

void f_005ce980(void) /* casinodialogs::func_005ce980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ce980);
    /* 005ce980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce981: mov ebp, esp */ r_ebp = r_esp;
    /* 005ce983: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ce986: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ce989: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ce98c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce98d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005ce993: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ce995: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005ce99b: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 005ce9a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ce9a3u); call_ind(t); }
    /* 005ce9a3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ce9a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ce9a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ce9ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ce9ae: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 005ce9b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ce9b6u); call_ind(t); }
    /* 005ce9b6: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005ce9bc: mov dword ptr [ecx + 0x4ef0], eax */ W32((u32)(r_ecx+0x4ef0u), r_eax);
    /* 005ce9c2: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005ce9c8: cmp dword ptr [edx + 0x4ef0], 0 */ {  u32 a = R32((u32)(r_edx+0x4ef0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce9cf: jne 0x5ce9e8 */ if (!fZ) goto L_005ce9e8;
L_005ce9d1:; BB(0x005ce9d1);
    /* 005ce9d1: push 0x183 */ { u32 v = 0x183u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9d6: push 0x6d2dfc */ { u32 v = 0x6d2dfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9db: push 0x6d2dd8 */ { u32 v = 0x6d2dd8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9e0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ce9e5u); f_005e9f20();
    /* 005ce9e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ce9e8:; BB(0x005ce9e8);
    /* 005ce9e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9ea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ce9ed: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x5ce9f2u); f_005fb3a0();
    /* 005ce9f2: mov ecx, eax */ r_ecx = r_eax;
    /* 005ce9f4: call 0x606490 */ r_esp -= 4; W32(r_esp, 0x5ce9f9u); f_00606490();
    /* 005ce9f9: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005ce9ff: mov edx, dword ptr [eax*4 + 0x75d33c] */ r_edx = R32((u32)(r_eax*4+0x75d33cu));
    /* 005cea06: mov dword ptr [ecx + 0x4eec], edx */ W32((u32)(r_ecx+0x4eecu), r_edx);
    /* 005cea0c: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005cea11: mov dword ptr [eax + 0x4ef8], 1 */ W32((u32)(r_eax+0x4ef8u), 0x1u);
    /* 005cea1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cea1e: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 005cea24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cea25: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005cea2a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cea2c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005cea32: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 005cea38: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cea3au); call_ind(t); }
    /* 005cea3a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cea3d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cea41: je 0x5cea57 */ if (fZ) goto L_005cea57;
L_005cea43:; BB(0x005cea43);
    /* 005cea43: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005cea46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cea47: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cea4a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cea4c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cea4f: mov edx, dword ptr [eax + 0xa8] */ r_edx = R32((u32)(r_eax+0xa8u));
    /* 005cea55: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cea57u); call_ind(t); }
L_005cea57:; BB(0x005cea57);
    /* 005cea57: mov esp, ebp */ r_esp = r_ebp;
    /* 005cea59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cea5a: ret 4 */ FN_RET(0x005ce980); r_esp += 8; return;
}

