#include "protos.h"

void f_00614d30(void) /* sciListBox::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00614d30);
    /* 00614d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00614d33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00614d36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00614d39: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614d3c: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00614d3f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614d42: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00614d45: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00614d47: mov ecx, eax */ r_ecx = r_eax;
    /* 00614d49: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00614d4c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614d4eu); call_ind(t); }
    /* 00614d4e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00614d51: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00614d53: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00614d56: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614d59: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00614d5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614d5f: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 00614d62: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00614d64: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00614d67: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614d69u); call_ind(t); }
    /* 00614d69: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00614d6c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00614d6e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00614d71: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00614d74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00614d75: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00614d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614d79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614d7c: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00614d7f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614d82: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00614d85: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00614d87: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00614d8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614d8cu); call_ind(t); }
    /* 00614d8c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614d8f: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00614d92: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614d95: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00614d98: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00614d9a: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00614d9d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614d9fu); call_ind(t); }
    /* 00614d9f: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614da2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614da3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614da6: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00614da9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614dac: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00614daf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00614db1: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00614db4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614db6u); call_ind(t); }
    /* 00614db6: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614db9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614dba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614dbd: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00614dc0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614dc3: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00614dc6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00614dc8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00614dcb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614dcdu); call_ind(t); }
    /* 00614dcd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614dd0: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00614dd3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614dd6: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00614dd9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00614ddb: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00614dde: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614de0u); call_ind(t); }
    /* 00614de0: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614de3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614de4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614de7: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00614dea: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614ded: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00614df0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00614df2: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00614df5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614df7u); call_ind(t); }
    /* 00614df7: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614dfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614dfb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614dfe: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00614e01: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614e04: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00614e07: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00614e09: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00614e0c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614e0eu); call_ind(t); }
    /* 00614e0e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614e11: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00614e14: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614e17: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00614e1a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00614e1c: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00614e1f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614e21u); call_ind(t); }
    /* 00614e21: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614e24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614e25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614e28: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00614e2b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614e2e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00614e31: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00614e33: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00614e36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614e38u); call_ind(t); }
    /* 00614e38: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614e3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614e3c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614e3f: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00614e42: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00614e45: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00614e48: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00614e4a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00614e4d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614e4fu); call_ind(t); }
    /* 00614e4f: mov esp, ebp */ r_esp = r_ebp;
    /* 00614e51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614e52: ret 8 */ FN_RET(0x00614d30); r_esp += 12; return;
}

void f_00614e60(void) /* sciListBox::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00614e60);
    /* 00614e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00614e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614e64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00614e67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614e6a: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00614e6d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614e70: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00614e73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00614e75: mov ecx, eax */ r_ecx = r_eax;
    /* 00614e77: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00614e7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614e7cu); call_ind(t); }
    /* 00614e7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00614e7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614e7f: ret  */ FN_RET(0x00614e60); r_esp += 4; return;
}

void f_00614e80(void) /* sciListBox::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00614e80);
    /* 00614e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00614e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00614e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00614e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00614e87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614e8a: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00614e8d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00614e90: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00614e93: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00614e95: mov ecx, eax */ r_ecx = r_eax;
    /* 00614e97: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00614e9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x614e9cu); call_ind(t); }
    /* 00614e9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00614e9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00614e9f: ret  */ FN_RET(0x00614e80); r_esp += 4; return;
}

void f_00615050(void) /* sciListBox::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615050);
    /* 00615050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615051: mov ebp, esp */ r_ebp = r_esp;
    /* 00615053: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615054: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615057: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061505a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061505b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061505e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061505f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615062: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00615065: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615068: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0061506b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0061506d: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00615073: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615075u); call_ind(t); }
    /* 00615075: mov esp, ebp */ r_esp = r_ebp;
    /* 00615077: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615078: ret 8 */ FN_RET(0x00615050); r_esp += 12; return;
}

void f_006153e0(void) /* sciListBox::vfunc52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006153e0);
    /* 006153e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006153e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006153e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006153e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006153e7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006153ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006153f1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006153f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006153f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006153f9: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 006153ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615401u); call_ind(t); }
    /* 00615401: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615403: jne 0x61540a */ if (!fZ) goto L_0061540a;
L_00615405:; BB(0x00615405);
    /* 00615405: jmp 0x61552d */ goto L_0061552d;
L_0061540a:; BB(0x0061540a);
    /* 0061540a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061540d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061540f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615412: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00615418: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61541au); call_ind(t); }
    /* 0061541a: mov esi, eax */ r_esi = r_eax;
    /* 0061541c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061541f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615421: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615424: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 0061542a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61542cu); call_ind(t); }
    /* 0061542c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061542e: jle 0x615471 */ if ((fZ||fS!=fO)) goto L_00615471;
L_00615430:; BB(0x00615430);
    /* 00615430: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615433: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00615436: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615439: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0061543c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0061543e: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00615444: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615446u); call_ind(t); }
    /* 00615446: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615449: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0061544c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061544f: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00615452: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00615454: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0061545a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61545cu); call_ind(t); }
    /* 0061545c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061545f: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00615462: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615465: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00615468: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0061546a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0061546d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61546fu); call_ind(t); }
    /* 0061546f: jmp 0x6154b0 */ goto L_006154b0;
L_00615471:; BB(0x00615471);
    /* 00615471: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615474: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00615477: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061547a: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0061547d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0061547f: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00615485: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615487u); call_ind(t); }
    /* 00615487: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061548a: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0061548d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615490: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00615493: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00615495: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0061549b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61549du); call_ind(t); }
    /* 0061549d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006154a0: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006154a3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006154a6: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 006154a9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006154ab: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006154ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6154b0u); call_ind(t); }
L_006154b0:; BB(0x006154b0);
    /* 006154b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006154b3: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 006154b6: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 006154b9: jmp 0x6154c4 */ goto L_006154c4;
L_006154bb:; BB(0x006154bb);
    /* 006154bb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006154be: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006154c1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_006154c4:; BB(0x006154c4);
    /* 006154c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006154c7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006154c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006154cc: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 006154d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6154d4u); call_ind(t); }
    /* 006154d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006154d7: add eax, dword ptr [ecx + 0x6c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x6cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006154da: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006154dd: jge 0x61552d */ if ((fS==fO)) goto L_0061552d;
L_006154df:; BB(0x006154df);
    /* 006154df: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006154e2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006154e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006154e7: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 006154ed: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6154efu); call_ind(t); }
    /* 006154ef: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006154f2: jge 0x61550e */ if ((fS==fO)) goto L_0061550e;
L_006154f4:; BB(0x006154f4);
    /* 006154f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006154f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006154f8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006154fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006154fc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006154ff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00615501: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615504: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0061550a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x61550cu); call_ind(t); }
    /* 0061550c: jmp 0x615522 */ goto L_00615522;
L_0061550e:; BB(0x0061550e);
    /* 0061550e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615511: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615512: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00615515: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615517: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061551a: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00615520: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615522u); call_ind(t); }
L_00615522:; BB(0x00615522);
    /* 00615522: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615525: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00615528: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061552b: jmp 0x6154bb */ goto L_006154bb;
L_0061552d:; BB(0x0061552d);
    /* 0061552d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061552e: mov esp, ebp */ r_esp = r_ebp;
    /* 00615530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615531: ret  */ FN_RET(0x006153e0); r_esp += 4; return;
}

void f_006158d0(void) /* sciListBox::vfunc55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006158d0);
    /* 006158d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006158d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006158d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006158d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006158d7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006158da: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006158dd: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 006158e0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006158e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006158e6: call 0x615880 */ r_esp -= 4; W32(r_esp, 0x6158ebu); f_00615880();
    /* 006158eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006158ed: jne 0x61590b */ if (!fZ) goto L_0061590b;
L_006158ef:; BB(0x006158ef);
    /* 006158ef: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006158f2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006158f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006158f7: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 006158fd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6158ffu); call_ind(t); }
    /* 006158ff: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00615902: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615904: jne 0x61590b */ if (!fZ) goto L_0061590b;
L_00615906:; BB(0x00615906);
    /* 00615906: jmp 0x615a0c */ goto L_00615a0c;
L_0061590b:; BB(0x0061590b);
    /* 0061590b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061590f: jne 0x61597f */ if (!fZ) goto L_0061597f;
L_00615911:; BB(0x00615911);
    /* 00615911: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615914: mov esi, dword ptr [ecx + 0x6c] */ r_esi = R32((u32)(r_ecx+0x6cu));
    /* 00615917: add esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0061591a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061591d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0061591f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615922: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 00615928: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x61592au); call_ind(t); }
    /* 0061592a: lea esi, [esi + eax - 1] */ r_esi = (u32)(r_esi+r_eax+0xffffffffu);
    /* 0061592e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615931: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00615933: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615936: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0061593c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x61593eu); call_ind(t); }
    /* 0061593e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00615940: jge 0x615953 */ if ((fS==fO)) goto L_00615953;
L_00615942:; BB(0x00615942);
    /* 00615942: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615945: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00615948: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061594b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061594e: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 00615951: jmp 0x61597d */ goto L_0061597d;
L_00615953:; BB(0x00615953);
    /* 00615953: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615956: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00615958: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061595b: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00615961: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615963u); call_ind(t); }
    /* 00615963: mov esi, eax */ r_esi = r_eax;
    /* 00615965: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615968: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0061596a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061596d: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00615973: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615975u); call_ind(t); }
    /* 00615975: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00615977: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061597a: mov dword ptr [ecx + 0x6c], esi */ W32((u32)(r_ecx+0x6cu), r_esi);
L_0061597d:; BB(0x0061597d);
    /* 0061597d: jmp 0x6159a5 */ goto L_006159a5;
L_0061597f:; BB(0x0061597f);
    /* 0061597f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615982: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00615985: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00615988: jns 0x615996 */ if (!fS) goto L_00615996;
L_0061598a:; BB(0x0061598a);
    /* 0061598a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061598d: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
    /* 00615994: jmp 0x6159a5 */ goto L_006159a5;
L_00615996:; BB(0x00615996);
    /* 00615996: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615999: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0061599c: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061599f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006159a2: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
L_006159a5:; BB(0x006159a5);
    /* 006159a5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006159a8: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006159ab: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006159ae: jne 0x6159b2 */ if (!fZ) goto L_006159b2;
L_006159b0:; BB(0x006159b0);
    /* 006159b0: jmp 0x615a0c */ goto L_00615a0c;
L_006159b2:; BB(0x006159b2);
    /* 006159b2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006159b5: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006159b9: jl 0x6159d6 */ if ((fS!=fO)) goto L_006159d6;
L_006159bb:; BB(0x006159bb);
    /* 006159bb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006159be: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006159c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006159c3: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 006159c9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6159cbu); call_ind(t); }
    /* 006159cb: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006159ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006159d1: cmp dword ptr [ecx + 0x6c], eax */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006159d4: jle 0x6159ed */ if ((fZ||fS!=fO)) goto L_006159ed;
L_006159d6:; BB(0x006159d6);
    /* 006159d6: push 0x15e */ { u32 v = 0x15eu; r_esp -= 4; W32(r_esp, v); }
    /* 006159db: push 0x6d86ac */ { u32 v = 0x6d86acu; r_esp -= 4; W32(r_esp, v); }
    /* 006159e0: push 0x6d8668 */ { u32 v = 0x6d8668u; r_esp -= 4; W32(r_esp, v); }
    /* 006159e5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6159eau); f_005e9f20();
    /* 006159ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006159ed:; BB(0x006159ed);
    /* 006159ed: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006159f0: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 006159f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006159f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006159f7: call 0x615540 */ r_esp -= 4; W32(r_esp, 0x6159fcu); f_00615540();
    /* 006159fc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006159ff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00615a01: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00615a04: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00615a0a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x615a0cu); call_ind(t); }
L_00615a0c:; BB(0x00615a0c);
    /* 00615a0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00615a0d: mov esp, ebp */ r_esp = r_ebp;
    /* 00615a0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615a10: ret 8 */ FN_RET(0x006158d0); r_esp += 12; return;
}

void f_00615ef0(void) /* sciListBox::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615ef0);
    /* 00615ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00615ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00615ef7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615efa: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00615efe: je 0x615f1c */ if (fZ) goto L_00615f1c;
L_00615f00:; BB(0x00615f00);
    /* 00615f00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615f03: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x615f08u); f_005f5400();
    /* 00615f08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615f09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615f0c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00615f0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00615f12: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00615f15: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00615f17: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00615f1a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x615f1cu); call_ind(t); }
L_00615f1c:; BB(0x00615f1c);
    /* 00615f1c: mov esp, ebp */ r_esp = r_ebp;
    /* 00615f1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00615f1f: ret  */ FN_RET(0x00615ef0); r_esp += 4; return;
}

void f_006280d0(void) /* sciListBox::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006280d0);
    /* 006280d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006280d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006280d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006280d5: push 0x6ab513 */ { u32 v = 0x6ab513u; r_esp -= 4; W32(r_esp, v); }
    /* 006280da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006280e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006280e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006280e2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006280e7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006280e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006280ea: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006280ed: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006280f3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006280f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006280f9: call 0x614810 */ r_esp -= 4; W32(r_esp, 0x6280feu); f_00614810();
    /* 006280fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00628105: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628108: mov dword ptr [eax], 0x6d934c */ W32((u32)(r_eax), 0x6d934cu);
    /* 0062810e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628111: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628114: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x628119u); f_0060c5f0();
    /* 00628119: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0062811d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628120: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628126: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x62812bu); f_0060c5f0();
    /* 0062812b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062812e: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
    /* 00628138: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062813b: mov dword ptr [edx + 0x9c], 0 */ W32((u32)(r_edx+0x9cu), 0x0u);
    /* 00628145: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628148: mov dword ptr [eax + 0xa0], 0 */ W32((u32)(r_eax+0xa0u), 0x0u);
    /* 00628152: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628155: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
    /* 0062815f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628162: mov dword ptr [edx + 0xa8], 0 */ W32((u32)(r_edx+0xa8u), 0x0u);
    /* 0062816c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062816f: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
    /* 00628179: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062817c: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 00628186: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628189: mov dword ptr [edx + 0xb8], 5 */ W32((u32)(r_edx+0xb8u), 0x5u);
    /* 00628193: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628196: mov dword ptr [eax + 0x90], 0xffffffff */ W32((u32)(r_eax+0x90u), 0xffffffffu);
    /* 006281a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006281a3: mov dword ptr [ecx + 0x94], 0 */ W32((u32)(r_ecx+0x94u), 0x0u);
    /* 006281ad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006281b0: mov byte ptr [edx + 0xb4], 0 */ W8((u32)(r_edx+0xb4u), 0x0u);
    /* 006281b7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006281ba: mov byte ptr [eax + 0xb5], 0 */ W8((u32)(r_eax+0xb5u), 0x0u);
    /* 006281c1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006281c4: mov byte ptr [ecx + 0xb6], 0 */ W8((u32)(r_ecx+0xb6u), 0x0u);
    /* 006281cb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006281ce: mov dword ptr [edx + 0xbc], 0 */ W32((u32)(r_edx+0xbcu), 0x0u);
    /* 006281d8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006281db: mov byte ptr [eax + 0xc0], 0 */ W8((u32)(r_eax+0xc0u), 0x0u);
    /* 006281e2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006281e5: mov dword ptr [ecx + 0xc4], 0 */ W32((u32)(r_ecx+0xc4u), 0x0u);
    /* 006281ef: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006281f2: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 006281fc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00628203: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628206: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628209: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00628210: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628211: mov esp, ebp */ r_esp = r_ebp;
    /* 00628213: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628214: ret  */ FN_RET(0x006280d0); r_esp += 4; return;
}

void f_00628220(void) /* sciListBox::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628220);
    /* 00628220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628221: mov ebp, esp */ r_ebp = r_esp;
    /* 00628223: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00628225: push 0x6ab54f */ { u32 v = 0x6ab54fu; r_esp -= 4; W32(r_esp, v); }
    /* 0062822a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00628230: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628231: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628234: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00628239: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062823b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062823c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062823f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00628245: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00628248: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062824b: mov dword ptr [eax], 0x6d934c */ W32((u32)(r_eax), 0x6d934cu);
    /* 00628251: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
L_00628258:; BB(0x00628258);
    /* 00628258: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062825b: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628261: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x628266u); f_0060c9a0();
    /* 00628266: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628268: je 0x6282bd */ if (fZ) goto L_006282bd;
L_0062826a:; BB(0x0062826a);
    /* 0062826a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062826c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062826f: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628275: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x62827au); f_0060ca40();
    /* 0062827a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062827d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628280: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628281: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00628284: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062828a: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x62828fu); f_0060c890();
    /* 0062828f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628292: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00628295: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00628298: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0062829b: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062829f: je 0x6282b4 */ if (fZ) goto L_006282b4;
L_006282a1:; BB(0x006282a1);
    /* 006282a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006282a3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006282a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006282a8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006282ab: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006282ad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6282afu); call_ind(t); }
    /* 006282af: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006282b2: jmp 0x6282bb */ goto L_006282bb;
L_006282b4:; BB(0x006282b4);
    /* 006282b4: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006282bb:; BB(0x006282bb);
    /* 006282bb: jmp 0x628258 */ goto L_00628258;
L_006282bd:; BB(0x006282bd);
    /* 006282bd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006282c0: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006282c3: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x6282c8u); f_0060c9a0();
    /* 006282c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006282ca: je 0x628319 */ if (fZ) goto L_00628319;
L_006282cc:; BB(0x006282cc);
    /* 006282cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006282ce: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006282d1: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006282d4: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6282d9u); f_0060ca40();
    /* 006282d9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006282dc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006282df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006282e0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006282e3: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006282e6: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x6282ebu); f_0060c890();
    /* 006282eb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006282ee: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006282f1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006282f4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006282f7: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006282fb: je 0x628310 */ if (fZ) goto L_00628310;
L_006282fd:; BB(0x006282fd);
    /* 006282fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006282ff: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00628302: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628304: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00628307: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00628309: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62830bu); call_ind(t); }
    /* 0062830b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062830e: jmp 0x628317 */ goto L_00628317;
L_00628310:; BB(0x00628310);
    /* 00628310: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00628317:; BB(0x00628317);
    /* 00628317: jmp 0x6282bd */ goto L_006282bd;
L_00628319:; BB(0x00628319);
    /* 00628319: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062831c: cmp dword ptr [ecx + 0xc4], 0 */ {  u32 a = R32((u32)(r_ecx+0xc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628323: je 0x62834a */ if (fZ) goto L_0062834a;
L_00628325:; BB(0x00628325);
    /* 00628325: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00628328: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0062832e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00628331: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00628334: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628335: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62833au); f_00686cae();
    /* 0062833a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062833d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00628340: mov dword ptr [edx + 0xc4], 0 */ W32((u32)(r_edx+0xc4u), 0x0u);
L_0062834a:; BB(0x0062834a);
    /* 0062834a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0062834d: cmp dword ptr [eax + 0xc8], 0 */ {  u32 a = R32((u32)(r_eax+0xc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628354: je 0x62837b */ if (fZ) goto L_0062837b;
L_00628356:; BB(0x00628356);
    /* 00628356: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00628359: mov edx, dword ptr [ecx + 0xc8] */ r_edx = R32((u32)(r_ecx+0xc8u));
    /* 0062835f: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00628362: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00628365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628366: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62836bu); f_00686cae();
    /* 0062836b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062836e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00628371: mov dword ptr [ecx + 0xc8], 0 */ W32((u32)(r_ecx+0xc8u), 0x0u);
L_0062837b:; BB(0x0062837b);
    /* 0062837b: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0062837f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00628382: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628388: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x62838du); f_0060c6a0();
    /* 0062838d: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00628391: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00628394: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628397: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x62839cu); f_0060c6a0();
    /* 0062839c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006283a3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006283a6: call 0x614a10 */ r_esp -= 4; W32(r_esp, 0x6283abu); f_00614a10();
    /* 006283ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006283ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006283b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006283b6: mov esp, ebp */ r_esp = r_ebp;
    /* 006283b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006283b9: ret  */ FN_RET(0x00628220); r_esp += 4; return;
}

void f_006283c0(void) /* sciListBox::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006283c0);
    /* 006283c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006283c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006283c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006283c5: push 0x6ab575 */ { u32 v = 0x6ab575u; r_esp -= 4; W32(r_esp, v); }
    /* 006283ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006283d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006283d1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006283d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006283d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006283db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006283dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006283df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006283e5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006283e8: push 0x1d8 */ { u32 v = 0x1d8u; r_esp -= 4; W32(r_esp, v); }
    /* 006283ed: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6283f2u); f_00686d82();
    /* 006283f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006283f5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006283f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006283ff: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628403: je 0x628416 */ if (fZ) goto L_00628416;
L_00628405:; BB(0x00628405);
    /* 00628405: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00628408: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628409: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062840c: call 0x629730 */ r_esp -= 4; W32(r_esp, 0x628411u); f_00629730();
    /* 00628411: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00628414: jmp 0x62841d */ goto L_0062841d;
L_00628416:; BB(0x00628416);
    /* 00628416: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0062841d:; BB(0x0062841d);
    /* 0062841d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00628420: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00628423: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062842a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062842d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628430: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00628437: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628438: mov esp, ebp */ r_esp = r_ebp;
    /* 0062843a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062843b: ret 4 */ FN_RET(0x006283c0); r_esp += 8; return;
}

void f_00628440(void) /* sciListBox::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628440);
    /* 00628440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628441: mov ebp, esp */ r_ebp = r_esp;
    /* 00628443: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628446: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00628449: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062844c: call 0x615140 */ r_esp -= 4; W32(r_esp, 0x628451u); f_00615140();
    /* 00628451: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00628454: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628456: je 0x628474 */ if (fZ) goto L_00628474;
L_00628458:; BB(0x00628458);
    /* 00628458: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062845b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062845c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062845f: call 0x5f4b60 */ r_esp -= 4; W32(r_esp, 0x628464u); f_005f4b60();
    /* 00628464: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00628467: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628469: je 0x628474 */ if (fZ) goto L_00628474;
L_0062846b:; BB(0x0062846b);
    /* 0062846b: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00628472: jmp 0x62847b */ goto L_0062847b;
L_00628474:; BB(0x00628474);
    /* 00628474: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0062847b:; BB(0x0062847b);
    /* 0062847b: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0062847e: mov esp, ebp */ r_esp = r_ebp;
    /* 00628480: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628481: ret 4 */ FN_RET(0x00628440); r_esp += 8; return;
}

void f_00628490(void) /* sciListBox::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628490);
    /* 00628490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628491: mov ebp, esp */ r_ebp = r_esp;
    /* 00628493: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628496: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00628499: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0062849f: call 0x5f3fe0 */ r_esp -= 4; W32(r_esp, 0x6284a4u); f_005f3fe0();
    /* 006284a4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006284a7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006284aa: movzx ecx, byte ptr [eax + 0xc0] */ r_ecx = (u32)R8((u32)(r_eax+0xc0u));
    /* 006284b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006284b3: je 0x6284c6 */ if (fZ) goto L_006284c6;
L_006284b5:; BB(0x006284b5);
    /* 006284b5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006284b9: je 0x6284f0 */ if (fZ) goto L_006284f0;
L_006284bb:; BB(0x006284bb);
    /* 006284bb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006284be: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006284c1: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006284c4: je 0x6284f0 */ if (fZ) goto L_006284f0;
L_006284c6:; BB(0x006284c6);
    /* 006284c6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006284c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006284ca: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006284cd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006284cf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006284d2: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 006284d8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6284dau); call_ind(t); }
    /* 006284da: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006284dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006284df: je 0x628516 */ if (fZ) goto L_00628516;
L_006284e1:; BB(0x006284e1);
    /* 006284e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006284e4: call 0x615140 */ r_esp -= 4; W32(r_esp, 0x6284e9u); f_00615140();
    /* 006284e9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006284ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006284ee: je 0x628516 */ if (fZ) goto L_00628516;
L_006284f0:; BB(0x006284f0);
    /* 006284f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006284f2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006284f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006284f7: cmp dword ptr [edx + 0x10], 0 */ {  u32 a = R32((u32)(r_edx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006284fb: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 006284fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006284ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628502: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628504: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628507: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0062850d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62850fu); call_ind(t); }
    /* 0062850f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00628512: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00628516:; BB(0x00628516);
    /* 00628516: mov esp, ebp */ r_esp = r_ebp;
    /* 00628518: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628519: ret 4 */ FN_RET(0x00628490); r_esp += 8; return;
}

void f_00628720(void) /* sciListBox::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628720);
    /* 00628720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628721: mov ebp, esp */ r_ebp = r_esp;
    /* 00628723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00628727: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062872a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062872b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062872e: call 0x614ea0 */ r_esp -= 4; W32(r_esp, 0x628733u); f_00614ea0();
    /* 00628733: mov esp, ebp */ r_esp = r_ebp;
    /* 00628735: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628736: ret 4 */ FN_RET(0x00628720); r_esp += 8; return;
}

void f_00628740(void) /* sciListBox::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628740);
    /* 00628740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628741: mov ebp, esp */ r_ebp = r_esp;
    /* 00628743: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628746: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00628749: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062874c: call 0x615080 */ r_esp -= 4; W32(r_esp, 0x628751u); f_00615080();
    /* 00628751: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00628758: jmp 0x628763 */ goto L_00628763;
L_0062875a:; BB(0x0062875a);
    /* 0062875a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062875d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00628760: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00628763:; BB(0x00628763);
    /* 00628763: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628766: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628768: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062876b: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00628771: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628773u); call_ind(t); }
    /* 00628773: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628776: jge 0x6287b4 */ if ((fS==fO)) goto L_006287b4;
L_00628778:; BB(0x00628778);
    /* 00628778: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628779: mov ecx, esp */ r_ecx = r_esp;
    /* 0062877b: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00628782: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00628785: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0062878a: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0062878d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062878f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628792: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 00628798: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628799: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062879c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062879d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006287a0: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006287a6: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6287abu); f_0060ca40();
    /* 006287ab: mov ecx, eax */ r_ecx = r_eax;
    /* 006287ad: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x6287b2u); f_005ecd00();
    /* 006287b2: jmp 0x62875a */ goto L_0062875a;
L_006287b4:; BB(0x006287b4);
    /* 006287b4: mov esp, ebp */ r_esp = r_ebp;
    /* 006287b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006287b7: ret  */ FN_RET(0x00628740); r_esp += 4; return;
}

void f_006287c0(void) /* sciListBox::vfunc45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006287c0);
    /* 006287c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006287c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006287c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006287c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006287c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006287cc: call 0x6150e0 */ r_esp -= 4; W32(r_esp, 0x6287d1u); f_006150e0();
    /* 006287d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006287d8: jmp 0x6287e3 */ goto L_006287e3;
L_006287da:; BB(0x006287da);
    /* 006287da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006287dd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006287e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006287e3:; BB(0x006287e3);
    /* 006287e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006287e6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006287e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006287eb: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 006287f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6287f3u); call_ind(t); }
    /* 006287f3: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006287f6: jge 0x628834 */ if ((fS==fO)) goto L_00628834;
L_006287f8:; BB(0x006287f8);
    /* 006287f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006287f9: mov ecx, esp */ r_ecx = r_esp;
    /* 006287fb: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00628802: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00628805: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0062880a: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0062880d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062880f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628812: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 00628818: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628819: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062881c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062881d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628820: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628826: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x62882bu); f_0060ca40();
    /* 0062882b: mov ecx, eax */ r_ecx = r_eax;
    /* 0062882d: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x628832u); f_005ecd00();
    /* 00628832: jmp 0x6287da */ goto L_006287da;
L_00628834:; BB(0x00628834);
    /* 00628834: mov esp, ebp */ r_esp = r_ebp;
    /* 00628836: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628837: ret  */ FN_RET(0x006287c0); r_esp += 4; return;
}

void f_00628840(void) /* sciListBox::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628840);
    /* 00628840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628841: mov ebp, esp */ r_ebp = r_esp;
    /* 00628843: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628846: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628847: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062884a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00628851: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628854: call 0x614f40 */ r_esp -= 4; W32(r_esp, 0x628859u); f_00614f40();
    /* 00628859: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062885c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062885e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628861: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00628867: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628869u); call_ind(t); }
    /* 00628869: mov esi, eax */ r_esi = r_eax;
    /* 0062886b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062886e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628870: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628873: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00628879: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62887bu); call_ind(t); }
    /* 0062887b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062887d: jg 0x628892 */ if ((!fZ&&fS==fO)) goto L_00628892;
L_0062887f:; BB(0x0062887f);
    /* 0062887f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628882: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00628885: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628888: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0062888b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0062888d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00628890: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628892u); call_ind(t); }
L_00628892:; BB(0x00628892);
    /* 00628892: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628895: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628897: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062889a: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 006288a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6288a2u); call_ind(t); }
    /* 006288a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006288a3: mov esp, ebp */ r_esp = r_ebp;
    /* 006288a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006288a6: ret  */ FN_RET(0x00628840); r_esp += 4; return;
}

void f_006288b0(void) /* sciListBox::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006288b0);
    /* 006288b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006288b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006288b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006288b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006288b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006288bc: call 0x614fd0 */ r_esp -= 4; W32(r_esp, 0x6288c1u); f_00614fd0();
    /* 006288c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006288c8: jmp 0x6288d3 */ goto L_006288d3;
L_006288ca:; BB(0x006288ca);
    /* 006288ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006288cd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006288d0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006288d3:; BB(0x006288d3);
    /* 006288d3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006288d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006288d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006288db: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 006288e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6288e3u); call_ind(t); }
    /* 006288e3: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006288e6: jge 0x62890c */ if ((fS==fO)) goto L_0062890c;
L_006288e8:; BB(0x006288e8);
    /* 006288e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006288eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006288ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006288ef: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006288f5: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6288fau); f_0060ca40();
    /* 006288fa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006288fd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628900: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00628902: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628905: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00628908: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62890au); call_ind(t); }
    /* 0062890a: jmp 0x6288ca */ goto L_006288ca;
L_0062890c:; BB(0x0062890c);
    /* 0062890c: mov esp, ebp */ r_esp = r_ebp;
    /* 0062890e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062890f: ret  */ FN_RET(0x006288b0); r_esp += 4; return;
}

void f_00628910(void) /* sciListBox::vfunc59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628910);
    /* 00628910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628911: mov ebp, esp */ r_ebp = r_esp;
    /* 00628913: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628916: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00628919: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00628920: jmp 0x62892b */ goto L_0062892b;
L_00628922:; BB(0x00628922);
    /* 00628922: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628925: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00628928: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0062892b:; BB(0x0062892b);
    /* 0062892b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062892e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628930: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628933: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00628939: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62893bu); call_ind(t); }
    /* 0062893b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062893e: jge 0x628972 */ if ((fS==fO)) goto L_00628972;
L_00628940:; BB(0x00628940);
    /* 00628940: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628944: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628947: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062894a: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x62894fu); f_0060ca40();
    /* 0062894f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00628952: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628955: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x62895au); f_00629c70();
    /* 0062895a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062895b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062895e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062895f: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x628964u); f_00686ec0();
    /* 00628964: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628967: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628969: jne 0x628970 */ if (!fZ) goto L_00628970;
L_0062896b:; BB(0x0062896b);
    /* 0062896b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062896e: jmp 0x628975 */ goto L_00628975;
L_00628970:; BB(0x00628970);
    /* 00628970: jmp 0x628922 */ goto L_00628922;
L_00628972:; BB(0x00628972);
    /* 00628972: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00628975:; BB(0x00628975);
    /* 00628975: mov esp, ebp */ r_esp = r_ebp;
    /* 00628977: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628978: ret 4 */ FN_RET(0x00628910); r_esp += 8; return;
}

void f_00628c50(void) /* sciListBox::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628c50);
    /* 00628c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00628c53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628c56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00628c59: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628c5c: mov dword ptr [eax + 0x68], 0xffffffff */ W32((u32)(r_eax+0x68u), 0xffffffffu);
    /* 00628c63: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00628c6a: jmp 0x628c75 */ goto L_00628c75;
L_00628c6c:; BB(0x00628c6c);
    /* 00628c6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628c6f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628c72: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00628c75:; BB(0x00628c75);
    /* 00628c75: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628c78: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00628c7a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628c7d: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00628c83: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x628c85u); call_ind(t); }
    /* 00628c85: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628c88: jge 0x628cad */ if ((fS==fO)) goto L_00628cad;
L_00628c8a:; BB(0x00628c8a);
    /* 00628c8a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628c8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628c8e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628c91: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628c94: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x628c99u); f_0060ca40();
    /* 00628c99: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00628c9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628c9e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628ca1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628ca3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628ca6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00628ca9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628cabu); call_ind(t); }
    /* 00628cab: jmp 0x628c6c */ goto L_00628c6c;
L_00628cad:; BB(0x00628cad);
    /* 00628cad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628cb0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628cb2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628cb5: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00628cbb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628cbdu); call_ind(t); }
    /* 00628cbd: mov esp, ebp */ r_esp = r_ebp;
    /* 00628cbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628cc0: ret  */ FN_RET(0x00628c50); r_esp += 4; return;
}

void f_00628cd0(void) /* sciListBox::vfunc60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628cd0);
    /* 00628cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00628cd3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628cd6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00628cd9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00628ce0: jmp 0x628ceb */ goto L_00628ceb;
L_00628ce2:; BB(0x00628ce2);
    /* 00628ce2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628ce5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00628ce8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00628ceb:; BB(0x00628ceb);
    /* 00628ceb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00628cee: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628cf1: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x628cf6u); f_0060c9a0();
    /* 00628cf6: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628cf9: jge 0x628d69 */ if ((fS==fO)) goto L_00628d69;
L_00628cfb:; BB(0x00628cfb);
    /* 00628cfb: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 00628cff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628d01: je 0x628d30 */ if (fZ) goto L_00628d30;
L_00628d03:; BB(0x00628d03);
    /* 00628d03: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628d06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628d07: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00628d0a: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628d0d: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x628d12u); f_0060ca40();
    /* 00628d12: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00628d15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628d18: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x628d1du); f_00629c70();
    /* 00628d1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628d1e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00628d21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628d22: call dword ptr [0x6b21e4] */ { u32 t = R32((u32)(0x6b21e4u)); r_esp -= 4; W32(r_esp, 0x628d28u); call_ind(t); }
    /* 00628d28: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628d2b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00628d2e: jmp 0x628d5a */ goto L_00628d5a;
L_00628d30:; BB(0x00628d30);
    /* 00628d30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628d33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628d34: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00628d37: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628d3a: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x628d3fu); f_0060ca40();
    /* 00628d3f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00628d42: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628d45: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x628d4au); f_00629c70();
    /* 00628d4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628d4b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00628d4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628d4f: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x628d54u); f_00686ec0();
    /* 00628d54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628d57: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00628d5a:; BB(0x00628d5a);
    /* 00628d5a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628d5e: jne 0x628d64 */ if (!fZ) goto L_00628d64;
L_00628d60:; BB(0x00628d60);
    /* 00628d60: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00628d62: jmp 0x628d6b */ goto L_00628d6b;
L_00628d64:; BB(0x00628d64);
    /* 00628d64: jmp 0x628ce2 */ goto L_00628ce2;
L_00628d69:; BB(0x00628d69);
    /* 00628d69: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00628d6b:; BB(0x00628d6b);
    /* 00628d6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00628d6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628d6e: ret 8 */ FN_RET(0x00628cd0); r_esp += 12; return;
}

void f_00628db0(void) /* sciListBox::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628db0);
    /* 00628db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00628db3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628db6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00628db7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00628dba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628dbd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00628dbf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628dc2: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00628dc8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628dcau); call_ind(t); }
    /* 00628dca: mov esi, eax */ r_esi = r_eax;
    /* 00628dcc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628dcf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628dd1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628dd4: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00628dda: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628ddcu); call_ind(t); }
    /* 00628ddc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628dde: jne 0x628e55 */ if (!fZ) goto L_00628e55;
L_00628de0:; BB(0x00628de0);
    /* 00628de0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628de3: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628de9: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x628deeu); f_0060c9a0();
    /* 00628dee: mov esi, eax */ r_esi = r_eax;
    /* 00628df0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628df3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628df5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628df8: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 00628dfe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628e00u); call_ind(t); }
    /* 00628e00: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628e02: jge 0x628e08 */ if ((fS==fO)) goto L_00628e08;
L_00628e04:; BB(0x00628e04);
    /* 00628e04: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00628e06: jmp 0x628e57 */ goto L_00628e57;
L_00628e08:; BB(0x00628e08);
    /* 00628e08: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00628e0f: jmp 0x628e1a */ goto L_00628e1a;
L_00628e11:; BB(0x00628e11);
    /* 00628e11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628e14: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628e17: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00628e1a:; BB(0x00628e1a);
    /* 00628e1a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628e1d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00628e1f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628e22: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 00628e28: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x628e2au); call_ind(t); }
    /* 00628e2a: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628e2d: jge 0x628e55 */ if ((fS==fO)) goto L_00628e55;
L_00628e2f:; BB(0x00628e2f);
    /* 00628e2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628e32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628e33: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628e36: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628e3c: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x628e41u); f_0060ca40();
    /* 00628e41: mov ecx, eax */ r_ecx = r_eax;
    /* 00628e43: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x628e48u); f_005f54c0();
    /* 00628e48: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00628e4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628e4d: je 0x628e53 */ if (fZ) goto L_00628e53;
L_00628e4f:; BB(0x00628e4f);
    /* 00628e4f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00628e51: jmp 0x628e57 */ goto L_00628e57;
L_00628e53:; BB(0x00628e53);
    /* 00628e53: jmp 0x628e11 */ goto L_00628e11;
L_00628e55:; BB(0x00628e55);
    /* 00628e55: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00628e57:; BB(0x00628e57);
    /* 00628e57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00628e58: mov esp, ebp */ r_esp = r_ebp;
    /* 00628e5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628e5b: ret  */ FN_RET(0x00628db0); r_esp += 4; return;
}

void f_00628e60(void) /* sciListBox::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628e60);
    /* 00628e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00628e63: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628e66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00628e69: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628e6d: jl 0x628ea3 */ if ((fS!=fO)) goto L_00628ea3;
L_00628e6f:; BB(0x00628e6f);
    /* 00628e6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00628e72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628e73: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628e76: call 0x629080 */ r_esp -= 4; W32(r_esp, 0x628e7bu); f_00629080();
    /* 00628e7b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00628e7e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628e80: jne 0x628ea3 */ if (!fZ) goto L_00628ea3;
L_00628e82:; BB(0x00628e82);
    /* 00628e82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628e84: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628e87: call 0x629200 */ r_esp -= 4; W32(r_esp, 0x628e8cu); f_00629200();
    /* 00628e8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628e8d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628e90: call 0x6291e0 */ r_esp -= 4; W32(r_esp, 0x628e95u); f_006291e0();
    /* 00628e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628e96: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x628e9bu); f_0062ff10();
    /* 00628e9b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00628e9e: jmp 0x628f39 */ goto L_00628f39;
L_00628ea3:; BB(0x00628ea3);
    /* 00628ea3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00628eaa: jmp 0x628eb5 */ goto L_00628eb5;
L_00628eac:; BB(0x00628eac);
    /* 00628eac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628eaf: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00628eb2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00628eb5:; BB(0x00628eb5);
    /* 00628eb5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628eb8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00628eba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628ebd: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00628ec3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628ec5u); call_ind(t); }
    /* 00628ec5: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628ec8: jge 0x628eed */ if ((fS==fO)) goto L_00628eed;
L_00628eca:; BB(0x00628eca);
    /* 00628eca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628ecd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628ece: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628ed1: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628ed4: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x628ed9u); f_0060ca40();
    /* 00628ed9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00628edc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628ede: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628ee1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00628ee3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628ee6: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00628ee9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x628eebu); call_ind(t); }
    /* 00628eeb: jmp 0x628eac */ goto L_00628eac;
L_00628eed:; BB(0x00628eed);
    /* 00628eed: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628ef1: jl 0x628f29 */ if ((fS!=fO)) goto L_00628f29;
L_00628ef3:; BB(0x00628ef3);
    /* 00628ef3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628ef6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00628ef8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628efb: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00628f01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628f03u); call_ind(t); }
    /* 00628f03: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00628f06: jge 0x628f29 */ if ((fS==fO)) goto L_00628f29;
L_00628f08:; BB(0x00628f08);
    /* 00628f08: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00628f0b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628f0c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628f0f: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628f12: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x628f17u); f_0060ca40();
    /* 00628f17: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00628f1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628f1c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628f1f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00628f21: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628f24: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00628f27: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x628f29u); call_ind(t); }
L_00628f29:; BB(0x00628f29);
    /* 00628f29: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00628f2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628f2d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00628f30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628f31: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628f34: call 0x615180 */ r_esp -= 4; W32(r_esp, 0x628f39u); f_00615180();
L_00628f39:; BB(0x00628f39);
    /* 00628f39: mov esp, ebp */ r_esp = r_ebp;
    /* 00628f3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628f3c: ret 8 */ FN_RET(0x00628e60); r_esp += 12; return;
}

void f_006294e0(void) /* sciListBox::vfunc53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006294e0);
    /* 006294e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006294e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006294e3: sub esp, 0x418 */ {  u32 a = r_esp; u32 b = 0x418u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006294e9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006294ee: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006294f0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006294f3: mov dword ptr [ebp - 0x40c], ecx */ W32((u32)(r_ebp+0xfffffbf4u), r_ecx);
    /* 006294f9: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006294fd: mov byte ptr [ebp - 3], 0 */ W8((u32)(r_ebp+0xfffffffdu), 0x0u);
    /* 00629501: mov byte ptr [ebp - 2], 0 */ W8((u32)(r_ebp+0xfffffffeu), 0x0u);
    /* 00629505: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0062950b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062950c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062950f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629510: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00629516: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00629518: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0062951e: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 00629524: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x629526u); call_ind(t); }
    /* 00629526: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629529: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062952a: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00629530: call 0x629080 */ r_esp -= 4; W32(r_esp, 0x629535u); f_00629080();
    /* 00629535: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00629538: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062953a: jne 0x6295a7 */ if (!fZ) goto L_006295a7;
L_0062953c:; BB(0x0062953c);
    /* 0062953c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062953f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629540: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00629546: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062954c: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x629551u); f_0060ca40();
    /* 00629551: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 00629557: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629559: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0062955f: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x629564u); f_005f53c0();
    /* 00629564: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00629567: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629568: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629569: mov eax, esp */ r_eax = r_esp;
    /* 0062956b: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0062956f: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00629572: mov dl, byte ptr [ebp - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 00629575: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 00629578: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0062957e: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 00629584: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629585: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0062958b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062958c: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 00629592: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00629594: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 0062959a: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 006295a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6295a2u); call_ind(t); }
    /* 006295a2: jmp 0x629696 */ goto L_00629696;
L_006295a7:; BB(0x006295a7);
    /* 006295a7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006295aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006295ab: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 006295b1: call 0x629000 */ r_esp -= 4; W32(r_esp, 0x6295b6u); f_00629000();
    /* 006295b6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006295b9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006295bb: je 0x629630 */ if (fZ) goto L_00629630;
L_006295bd:; BB(0x006295bd);
    /* 006295bd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006295c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006295c1: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 006295c7: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006295cd: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6295d2u); f_0060ca40();
    /* 006295d2: mov dword ptr [ebp - 0x414], eax */ W32((u32)(r_ebp+0xfffffbecu), r_eax);
    /* 006295d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006295da: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 006295e0: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x6295e5u); f_005f53c0();
    /* 006295e5: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006295e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006295e9: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 006295ef: add ecx, 0xb4 */ {  u32 a = r_ecx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006295f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006295f6: mov edx, esp */ r_edx = r_esp;
    /* 006295f8: mov ax, word ptr [ecx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 006295fb: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 006295fe: mov cl, byte ptr [ecx + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 00629601: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 00629604: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0062960a: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00629610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629611: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00629617: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629618: mov edx, dword ptr [ebp - 0x414] */ r_edx = R32((u32)(r_ebp+0xfffffbecu));
    /* 0062961e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00629620: mov ecx, dword ptr [ebp - 0x414] */ r_ecx = R32((u32)(r_ebp+0xfffffbecu));
    /* 00629626: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 0062962c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62962eu); call_ind(t); }
    /* 0062962e: jmp 0x629696 */ goto L_00629696;
L_00629630:; BB(0x00629630);
    /* 00629630: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00629633: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629634: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0062963a: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00629640: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x629645u); f_0060ca40();
    /* 00629645: mov dword ptr [ebp - 0x418], eax */ W32((u32)(r_ebp+0xfffffbe8u), r_eax);
    /* 0062964b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062964d: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00629653: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x629658u); f_005f53c0();
    /* 00629658: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062965b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062965c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062965d: mov ecx, esp */ r_ecx = r_esp;
    /* 0062965f: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00629663: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00629666: mov al, byte ptr [ebp - 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 00629669: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0062966c: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 00629672: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 00629678: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629679: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0062967f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629680: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00629686: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00629688: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0062968e: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00629694: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x629696u); call_ind(t); }
L_00629696:; BB(0x00629696);
    /* 00629696: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00629699: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062969b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6296a0u); f_00686d72();
    /* 006296a0: mov esp, ebp */ r_esp = r_ebp;
    /* 006296a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006296a3: ret 8 */ FN_RET(0x006294e0); r_esp += 12; return;
}

void f_006296b0(void) /* sciListBox::vfunc54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006296b0);
    /* 006296b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006296b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006296b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006296b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006296b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006296bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006296bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006296c0: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006296c6: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6296cbu); f_0060ca40();
    /* 006296cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006296cd: je 0x6296f1 */ if (fZ) goto L_006296f1;
L_006296cf:; BB(0x006296cf);
    /* 006296cf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006296d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006296d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006296d6: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006296dc: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6296e1u); f_0060ca40();
    /* 006296e1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006296e4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006296e7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006296e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006296ec: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 006296ef: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6296f1u); call_ind(t); }
L_006296f1:; BB(0x006296f1);
    /* 006296f1: mov esp, ebp */ r_esp = r_ebp;
    /* 006296f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006296f4: ret 4 */ FN_RET(0x006296b0); r_esp += 8; return;
}

void f_00629700(void) /* sciListBox::vfunc61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629700);
    /* 00629700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629701: mov ebp, esp */ r_ebp = r_esp;
    /* 00629703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00629707: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00629709: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062970c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062970e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00629711: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00629717: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x629719u); call_ind(t); }
    /* 00629719: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062971a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062971d: call 0x628f40 */ r_esp -= 4; W32(r_esp, 0x629722u); f_00628f40();
    /* 00629722: mov esp, ebp */ r_esp = r_ebp;
    /* 00629724: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629725: ret 4 */ FN_RET(0x00629700); r_esp += 8; return;
}

void f_00629d80(void) /* sciListBox::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629d80);
    /* 00629d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00629d83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629d86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00629d89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629d8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629d8d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00629d90: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00629d93: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x629d98u); f_0060ca40();
    /* 00629d98: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00629d9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629d9e: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x629da3u); f_00629c70();
    /* 00629da3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629da4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00629da7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629da8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x629dadu); f_00686d8e();
    /* 00629dad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629db0: mov esp, ebp */ r_esp = r_ebp;
    /* 00629db2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629db3: ret 8 */ FN_RET(0x00629d80); r_esp += 12; return;
}

void f_00629dc0(void) /* sciListBox::vfunc57 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629dc0);
    /* 00629dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00629dc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629dc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00629dc9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629dcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629dcd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00629dd0: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00629dd3: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x629dd8u); f_0060ca40();
    /* 00629dd8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00629ddb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629dde: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x629de3u); f_00629c70();
    /* 00629de3: mov esp, ebp */ r_esp = r_ebp;
    /* 00629de5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629de6: ret 4 */ FN_RET(0x00629dc0); r_esp += 8; return;
}

