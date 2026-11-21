#include "protos.h"

void f_00520870(void) /* pokerTournRoom::func_00520870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00520870);
    /* 00520870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00520871: mov ebp, esp */ r_ebp = r_esp;
    /* 00520873: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00520877: jl 0x52087f */ if ((fS!=fO)) goto L_0052087f;
L_00520879:; BB(0x00520879);
    /* 00520879: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052087d: jle 0x520896 */ if ((fZ||fS!=fO)) goto L_00520896;
L_0052087f:; BB(0x0052087f);
    /* 0052087f: push 0x2cf */ { u32 v = 0x2cfu; r_esp -= 4; W32(r_esp, v); }
    /* 00520884: push 0x6c2cf0 */ { u32 v = 0x6c2cf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00520889: push 0x6c2cd4 */ { u32 v = 0x6c2cd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052088e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x520893u); f_005e9f20();
    /* 00520893: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00520896:; BB(0x00520896);
    /* 00520896: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00520899: mov edx, dword ptr [ecx*4 + 0x721c54] */ r_edx = R32((u32)(r_ecx*4+0x721c54u));
    /* 005208a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005208a1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5208a6u); f_00630f40();
    /* 005208a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005208a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005208aa: ret  */ FN_RET(0x00520870); r_esp += 4; return;
}

