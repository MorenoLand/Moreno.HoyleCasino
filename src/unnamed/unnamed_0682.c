#include "protos.h"

void f_00682ff0(void) /* sub_682FF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00682ff0);
    /* 00682ff0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00682ff1: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00682ff5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682ff7: je 0x683033 */ if (fZ) goto L_00683033;
L_00682ff9:; BB(0x00682ff9);
    /* 00682ff9: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00682ffc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682ffe: je 0x683033 */ if (fZ) goto L_00683033;
L_00683000:; BB(0x00683000);
    /* 00683000: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00683003: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00683005: je 0x683033 */ if (fZ) goto L_00683033;
L_00683007:; BB(0x00683007);
    /* 00683007: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0068300a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068300c: je 0x683018 */ if (fZ) goto L_00683018;
L_0068300e:; BB(0x0068300e);
    /* 0068300e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068300f: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00683012: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00683013: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x683015u); call_ind(t); }
    /* 00683015: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00683018:; BB(0x00683018);
    /* 00683018: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0068301b: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0068301e: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00683021: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00683022: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00683023: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x683025u); call_ind(t); }
    /* 00683025: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00683028: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0068302f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00683031: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00683032: ret  */ FN_RET(0x00682ff0); r_esp += 4; return;
L_00683033:; BB(0x00683033);
    /* 00683033: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 00683038: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00683039: ret  */ FN_RET(0x00682ff0); r_esp += 4; return;
}

