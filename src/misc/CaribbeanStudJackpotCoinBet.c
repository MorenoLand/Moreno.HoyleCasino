#include "protos.h"

void f_00420b60(void) /* CaribbeanStudJackpotCoinBet::vfunc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420b60);
    /* 00420b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00420b63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00420b66: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00420b69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00420b6c: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x420b71u); f_005eb220();
    /* 00420b71: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420b74: jne 0x420b9d */ if (!fZ) goto L_00420b9d;
L_00420b76:; BB(0x00420b76);
    /* 00420b76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00420b79: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x420b7eu); f_005f5400();
    /* 00420b7e: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00420b84: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 00420b88: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00420b8b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00420b8d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00420b90: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00420b92: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00420b95: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00420b9b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x420b9du); call_ind(t); }
L_00420b9d:; BB(0x00420b9d);
    /* 00420b9d: mov esp, ebp */ r_esp = r_ebp;
    /* 00420b9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420ba0: ret  */ FN_RET(0x00420b60); r_esp += 4; return;
}

