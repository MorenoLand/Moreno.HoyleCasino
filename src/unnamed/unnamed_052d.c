#include "protos.h"

void f_0052d0e0(void) /* sub_52D0E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052d0e0);
    /* 0052d0e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d0e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052d0e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d0e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052d0e7: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052d0ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d0ee: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d0f4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052d0f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d0f8u); call_ind(t); }
    /* 0052d0f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0052d0fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d0fb: ret  */ FN_RET(0x0052d0e0); r_esp += 4; return;
}

void f_0052d100(void) /* sub_52D100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052d100);
    /* 0052d100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d101: mov ebp, esp */ r_ebp = r_esp;
    /* 0052d103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052d107: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052d10c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d10e: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d114: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0052d117: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d119u); call_ind(t); }
    /* 0052d119: mov esp, ebp */ r_esp = r_ebp;
    /* 0052d11b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d11c: ret  */ FN_RET(0x0052d100); r_esp += 4; return;
}

void f_0052d120(void) /* sub_52D120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052d120);
    /* 0052d120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d121: mov ebp, esp */ r_ebp = r_esp;
    /* 0052d123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052d127: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052d12c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d12e: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d134: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052d137: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d139u); call_ind(t); }
    /* 0052d139: mov esp, ebp */ r_esp = r_ebp;
    /* 0052d13b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d13c: ret  */ FN_RET(0x0052d120); r_esp += 4; return;
}

void f_0052d140(void) /* sub_52D140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052d140);
    /* 0052d140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d141: mov ebp, esp */ r_ebp = r_esp;
    /* 0052d143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052d147: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052d14c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d14e: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d154: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0052d157: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d159u); call_ind(t); }
    /* 0052d159: mov esp, ebp */ r_esp = r_ebp;
    /* 0052d15b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d15c: ret  */ FN_RET(0x0052d140); r_esp += 4; return;
}

void f_0052d160(void) /* sub_52D160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052d160);
    /* 0052d160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d161: mov ebp, esp */ r_ebp = r_esp;
    /* 0052d163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052d167: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052d16c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d16e: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d174: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0052d177: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d179u); call_ind(t); }
    /* 0052d179: mov esp, ebp */ r_esp = r_ebp;
    /* 0052d17b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d17c: ret  */ FN_RET(0x0052d160); r_esp += 4; return;
}

void f_0052d180(void) /* sub_52D180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052d180);
    /* 0052d180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d181: mov ebp, esp */ r_ebp = r_esp;
    /* 0052d183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052d187: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052d18c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d18e: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d194: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0052d197: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d199u); call_ind(t); }
    /* 0052d199: mov esp, ebp */ r_esp = r_ebp;
    /* 0052d19b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d19c: ret  */ FN_RET(0x0052d180); r_esp += 4; return;
}

void f_0052d1a0(void) /* sub_52D1A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052d1a0);
    /* 0052d1a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d1a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052d1a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d1a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052d1a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052d1aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d1ab: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d1b1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052d1b3: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d1b9: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0052d1bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d1beu); call_ind(t); }
    /* 0052d1be: mov esp, ebp */ r_esp = r_ebp;
    /* 0052d1c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d1c1: ret 4 */ FN_RET(0x0052d1a0); r_esp += 8; return;
}

void f_0052d1d0(void) /* sub_52D1D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052d1d0);
    /* 0052d1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052d1d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d1d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052d1d7: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052d1dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d1de: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d1e4: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0052d1e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d1e9u); call_ind(t); }
    /* 0052d1e9: mov esp, ebp */ r_esp = r_ebp;
    /* 0052d1eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d1ec: ret  */ FN_RET(0x0052d1d0); r_esp += 4; return;
}

void f_0052d1f0(void) /* sub_52D1F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052d1f0);
    /* 0052d1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d1f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052d1f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d1f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052d1f7: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052d1fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d1fe: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d204: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0052d207: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d209u); call_ind(t); }
    /* 0052d209: mov esp, ebp */ r_esp = r_ebp;
    /* 0052d20b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d20c: ret  */ FN_RET(0x0052d1f0); r_esp += 4; return;
}

void f_0052d210(void) /* sub_52D210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052d210);
    /* 0052d210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d211: mov ebp, esp */ r_ebp = r_esp;
    /* 0052d213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d214: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052d217: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052d21c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d21e: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d224: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0052d227: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d229u); call_ind(t); }
    /* 0052d229: mov esp, ebp */ r_esp = r_ebp;
    /* 0052d22b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d22c: ret  */ FN_RET(0x0052d210); r_esp += 4; return;
}

void f_0052d230(void) /* sub_52D230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052d230);
    /* 0052d230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d231: mov ebp, esp */ r_ebp = r_esp;
    /* 0052d233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052d237: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052d23c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d23e: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d244: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0052d247: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d249u); call_ind(t); }
    /* 0052d249: mov esp, ebp */ r_esp = r_ebp;
    /* 0052d24b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d24c: ret  */ FN_RET(0x0052d230); r_esp += 4; return;
}

void f_0052d250(void) /* sub_52D250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052d250);
    /* 0052d250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d251: mov ebp, esp */ r_ebp = r_esp;
    /* 0052d253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052d257: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052d25c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d25e: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d264: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0052d267: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d269u); call_ind(t); }
    /* 0052d269: mov esp, ebp */ r_esp = r_ebp;
    /* 0052d26b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052d26c: ret  */ FN_RET(0x0052d250); r_esp += 4; return;
}

void f_0052d270(void) /* sub_52D270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052d270);
    /* 0052d270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052d271: mov ebp, esp */ r_ebp = r_esp;
    /* 0052d273: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052d275: push 0x6a44f6 */ { u32 v = 0x6a44f6u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d27a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052d280: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d281: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052d287: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052d28c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052d28e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d28f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052d292: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052d298: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0052d29e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0052d2a5: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052d2aa: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052d2ad: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0052d2b0: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0052d2b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d2b4: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052d2b9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d2bb: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d2c1: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0052d2c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d2c6u); call_ind(t); }
    /* 0052d2c6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052d2c9: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052d2cf: movzx edx, byte ptr [ecx + 0x7e] */ r_edx = (u32)R8((u32)(r_ecx+0x7eu));
    /* 0052d2d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d2d5: jne 0x52da70 */ if (!fZ) goto L_0052da70;
L_0052d2db:; BB(0x0052d2db);
    /* 0052d2db: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052d2e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d2e2: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d2e8: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0052d2eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d2edu); call_ind(t); }
    /* 0052d2ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d2f0: jle 0x52d754 */ if ((fZ||fS!=fO)) goto L_0052d754;
L_0052d2f6:; BB(0x0052d2f6);
    /* 0052d2f6: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052d2fc: call 0x538440 */ r_esp -= 4; W32(r_esp, 0x52d301u); f_00538440();
    /* 0052d301: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052d304: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d306: je 0x52d566 */ if (fZ) goto L_0052d566;
L_0052d30c:; BB(0x0052d30c);
    /* 0052d30c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052d313: jmp 0x52d31e */ goto L_0052d31e;
L_0052d315:; BB(0x0052d315);
    /* 0052d315: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d318: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052d31b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0052d31e:; BB(0x0052d31e);
    /* 0052d31e: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d322: jge 0x52d561 */ if ((fS==fO)) goto L_0052d561;
L_0052d328:; BB(0x0052d328);
    /* 0052d328: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d32b: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052d331: cmp dword ptr [ecx + eax*4 + 0x64], -1 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x64u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d336: je 0x52d55c */ if (fZ) goto L_0052d55c;
L_0052d33c:; BB(0x0052d33c);
    /* 0052d33c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d33f: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052d344: mov ecx, dword ptr [eax + edx*4 + 0x64] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 0052d348: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d34b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d34c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d34f: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d355: mov ecx, dword ptr [eax + edx*4 + 0xcc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xccu));
    /* 0052d35c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d35f: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d365: mov edx, dword ptr [eax + edx*4 + 0xcc] */ r_edx = R32((u32)(r_eax+r_edx*4+0xccu));
    /* 0052d36c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052d36e: mov ecx, edx */ r_ecx = r_edx;
    /* 0052d370: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0052d376: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52d378u); call_ind(t); }
    /* 0052d378: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d37a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52d37fu); f_00686d82();
    /* 0052d37f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052d382: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0052d385: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052d38c: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d390: je 0x52d3ac */ if (fZ) goto L_0052d3ac;
L_0052d392:; BB(0x0052d392);
    /* 0052d392: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d394: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d396: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d398: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d39a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d39c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0052d39f: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x52d3a4u); f_00601110();
    /* 0052d3a4: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0052d3aa: jmp 0x52d3b6 */ goto L_0052d3b6;
L_0052d3ac:; BB(0x0052d3ac);
    /* 0052d3ac: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0052d3b6:; BB(0x0052d3b6);
    /* 0052d3b6: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0052d3bc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0052d3bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052d3c6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0052d3c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d3ca: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d3cd: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d3d3: mov ecx, dword ptr [eax + edx*4 + 0xcc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xccu));
    /* 0052d3da: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52d3dfu); f_005f5d50();
    /* 0052d3df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d3e2: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d3e8: mov eax, dword ptr [edx + ecx*4 + 0xcc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xccu));
    /* 0052d3ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d3f2: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d3f8: mov ecx, dword ptr [edx + ecx*4 + 0xcc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xccu));
    /* 0052d3ff: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052d401: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0052d404: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52d406u); call_ind(t); }
    /* 0052d406: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d409: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052d40f: mov edx, dword ptr [ecx + eax*4 + 0x64] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 0052d413: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d414: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d417: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d41d: mov edx, dword ptr [ecx + eax*4 + 0xe0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xe0u));
    /* 0052d424: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d427: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d42d: mov ecx, dword ptr [ecx + eax*4 + 0xe0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xe0u));
    /* 0052d434: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052d436: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052d43c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d43eu); call_ind(t); }
    /* 0052d43e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d440: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52d445u); f_00686d82();
    /* 0052d445: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052d448: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0052d44b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0052d452: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d456: je 0x52d472 */ if (fZ) goto L_0052d472;
L_0052d458:; BB(0x0052d458);
    /* 0052d458: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d45a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d45c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d45e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d460: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d462: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0052d465: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x52d46au); f_00601110();
    /* 0052d46a: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0052d470: jmp 0x52d47c */ goto L_0052d47c;
L_0052d472:; BB(0x0052d472);
    /* 0052d472: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0052d47c:; BB(0x0052d47c);
    /* 0052d47c: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0052d482: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0052d485: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052d48c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052d48f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d490: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d493: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d499: mov ecx, dword ptr [ecx + eax*4 + 0xe0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xe0u));
    /* 0052d4a0: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52d4a5u); f_005f5d50();
    /* 0052d4a5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d4a8: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d4ae: mov ecx, dword ptr [eax + edx*4 + 0xe0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xe0u));
    /* 0052d4b5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d4b8: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d4be: mov edx, dword ptr [eax + edx*4 + 0xe0] */ r_edx = R32((u32)(r_eax+r_edx*4+0xe0u));
    /* 0052d4c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052d4c7: mov ecx, edx */ r_ecx = r_edx;
    /* 0052d4c9: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0052d4cc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52d4ceu); call_ind(t); }
    /* 0052d4ce: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d4d0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52d4d5u); f_00686d82();
    /* 0052d4d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052d4d8: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0052d4db: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0052d4e2: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d4e6: je 0x52d502 */ if (fZ) goto L_0052d502;
L_0052d4e8:; BB(0x0052d4e8);
    /* 0052d4e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d4ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d4ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d4ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d4f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d4f2: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0052d4f5: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x52d4fau); f_00601110();
    /* 0052d4fa: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0052d500: jmp 0x52d50c */ goto L_0052d50c;
L_0052d502:; BB(0x0052d502);
    /* 0052d502: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0052d50c:; BB(0x0052d50c);
    /* 0052d50c: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0052d512: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0052d515: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052d51c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0052d51f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d520: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d523: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d529: mov ecx, dword ptr [eax + edx*4 + 0xb4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xb4u));
    /* 0052d530: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52d535u); f_005f5d50();
    /* 0052d535: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d538: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d53e: mov eax, dword ptr [edx + ecx*4 + 0xb4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xb4u));
    /* 0052d545: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d548: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d54e: mov ecx, dword ptr [edx + ecx*4 + 0xb4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xb4u));
    /* 0052d555: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052d557: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0052d55a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52d55cu); call_ind(t); }
L_0052d55c:; BB(0x0052d55c);
    /* 0052d55c: jmp 0x52d315 */ goto L_0052d315;
L_0052d561:; BB(0x0052d561);
    /* 0052d561: jmp 0x52d74f */ goto L_0052d74f;
L_0052d566:; BB(0x0052d566);
    /* 0052d566: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052d56d: jmp 0x52d578 */ goto L_0052d578;
L_0052d56f:; BB(0x0052d56f);
    /* 0052d56f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d572: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d575: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0052d578:; BB(0x0052d578);
    /* 0052d578: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052d57c: jge 0x52d74f */ if ((fS==fO)) goto L_0052d74f;
L_0052d582:; BB(0x0052d582);
    /* 0052d582: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d585: mov edx, dword ptr [0x79338c] */ r_edx = R32((u32)(0x79338cu));
    /* 0052d58b: cmp dword ptr [edx + ecx*4 + 0x64], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x64u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d590: je 0x52d74a */ if (fZ) goto L_0052d74a;
L_0052d596:; BB(0x0052d596);
    /* 0052d596: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d599: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052d59f: cmp dword ptr [ecx + eax*4 + 0x64], 0x3e8 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x64u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d5a7: jne 0x52d670 */ if (!fZ) goto L_0052d670;
L_0052d5ad:; BB(0x0052d5ad);
    /* 0052d5ad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d5b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d5b1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d5b4: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d5ba: mov edx, dword ptr [ecx + eax*4 + 0xe0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xe0u));
    /* 0052d5c1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d5c4: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d5ca: mov ecx, dword ptr [ecx + eax*4 + 0xe0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xe0u));
    /* 0052d5d1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052d5d3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052d5d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d5dbu); call_ind(t); }
    /* 0052d5db: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d5dd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52d5e2u); f_00686d82();
    /* 0052d5e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052d5e5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0052d5e8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0052d5ef: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d5f3: je 0x52d60f */ if (fZ) goto L_0052d60f;
L_0052d5f5:; BB(0x0052d5f5);
    /* 0052d5f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d5f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d5f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d5fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d5fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d5ff: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0052d602: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x52d607u); f_00601110();
    /* 0052d607: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0052d60d: jmp 0x52d619 */ goto L_0052d619;
L_0052d60f:; BB(0x0052d60f);
    /* 0052d60f: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0052d619:; BB(0x0052d619);
    /* 0052d619: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0052d61f: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0052d622: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052d629: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0052d62c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d62d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d630: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d636: mov ecx, dword ptr [ecx + eax*4 + 0xe0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xe0u));
    /* 0052d63d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52d642u); f_005f5d50();
    /* 0052d642: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d645: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d64b: mov ecx, dword ptr [eax + edx*4 + 0xe0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xe0u));
    /* 0052d652: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d655: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d65b: mov edx, dword ptr [eax + edx*4 + 0xe0] */ r_edx = R32((u32)(r_eax+r_edx*4+0xe0u));
    /* 0052d662: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052d664: mov ecx, edx */ r_ecx = r_edx;
    /* 0052d666: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0052d669: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52d66bu); call_ind(t); }
    /* 0052d66b: jmp 0x52d738 */ goto L_0052d738;
L_0052d670:; BB(0x0052d670);
    /* 0052d670: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d673: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052d679: mov edx, dword ptr [ecx + eax*4 + 0x64] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x64u));
    /* 0052d67d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d67e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d681: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d687: mov edx, dword ptr [ecx + eax*4 + 0xcc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xccu));
    /* 0052d68e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d691: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d697: mov ecx, dword ptr [ecx + eax*4 + 0xcc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xccu));
    /* 0052d69e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052d6a0: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052d6a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d6a8u); call_ind(t); }
    /* 0052d6a8: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d6aa: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52d6afu); f_00686d82();
    /* 0052d6af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052d6b2: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0052d6b5: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0052d6bc: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d6c0: je 0x52d6dc */ if (fZ) goto L_0052d6dc;
L_0052d6c2:; BB(0x0052d6c2);
    /* 0052d6c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d6c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d6c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d6c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d6ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d6cc: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0052d6cf: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x52d6d4u); f_00601110();
    /* 0052d6d4: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0052d6da: jmp 0x52d6e6 */ goto L_0052d6e6;
L_0052d6dc:; BB(0x0052d6dc);
    /* 0052d6dc: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_0052d6e6:; BB(0x0052d6e6);
    /* 0052d6e6: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0052d6ec: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0052d6ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052d6f6: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0052d6f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d6fa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d6fd: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d703: mov ecx, dword ptr [ecx + eax*4 + 0xcc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xccu));
    /* 0052d70a: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52d70fu); f_005f5d50();
    /* 0052d70f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d712: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d718: mov ecx, dword ptr [eax + edx*4 + 0xcc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xccu));
    /* 0052d71f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d722: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d728: mov edx, dword ptr [eax + edx*4 + 0xcc] */ r_edx = R32((u32)(r_eax+r_edx*4+0xccu));
    /* 0052d72f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052d731: mov ecx, edx */ r_ecx = r_edx;
    /* 0052d733: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0052d736: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52d738u); call_ind(t); }
L_0052d738:; BB(0x0052d738);
    /* 0052d738: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052d73b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d73e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052d73f: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d745: call 0x52aea0 */ r_esp -= 4; W32(r_esp, 0x52d74au); f_0052aea0();
L_0052d74a:; BB(0x0052d74a);
    /* 0052d74a: jmp 0x52d56f */ goto L_0052d56f;
L_0052d74f:; BB(0x0052d74f);
    /* 0052d74f: jmp 0x52da70 */ goto L_0052da70;
L_0052d754:; BB(0x0052d754);
    /* 0052d754: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0052d75a: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0052d760: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0052d766: cmp dword ptr [ebp - 0x84], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d76d: jne 0x52d8e6 */ if (!fZ) goto L_0052d8e6;
L_0052d773:; BB(0x0052d773);
    /* 0052d773: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052d778: cmp dword ptr [eax + 0x64], -1 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d77c: je 0x52d8e1 */ if (fZ) goto L_0052d8e1;
L_0052d782:; BB(0x0052d782);
    /* 0052d782: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052d788: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0052d78b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0052d78e: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052d793: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d795: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052d79b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0052d79e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d7a0u); call_ind(t); }
    /* 0052d7a0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052d7a3: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0052d7aa: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052d7b0: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0052d7b3: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0052d7b9: cmp dword ptr [ebp - 0xa0], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0052d7c0: ja 0x52d839 */ if ((!fC&&!fZ)) goto L_0052d839;
L_0052d7c2:; BB(0x0052d7c2);
    /* 0052d7c2: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0052d7c8: jmp dword ptr [eax*4 + 0x52dc7c] */ { u32 t = R32((u32)(r_eax*4+0x52dc7cu)); switch (t) { case 0x52d832u: goto L_0052d832; case 0x52d829u: goto L_0052d829; case 0x52d820u: goto L_0052d820; case 0x52d817u: goto L_0052d817; case 0x52d80eu: goto L_0052d80e; case 0x52d7f9u: goto L_0052d7f9; case 0x52d7e4u: goto L_0052d7e4; case 0x52d7cfu: goto L_0052d7cf; default: UNSUP(0x0052d7c8, "jump table entry is not a known target"); } }
L_0052d7cf:; BB(0x0052d7cf);
    /* 0052d7cf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052d7d2: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d7d5: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0052d7d7: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0052d7d9: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d7dc: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d7df: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0052d7e2: jmp 0x52d839 */ goto L_0052d839;
L_0052d7e4:; BB(0x0052d7e4);
    /* 0052d7e4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052d7e7: sub edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0052d7ea: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0052d7ec: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0052d7ee: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0052d7f1: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052d7f4: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0052d7f7: jmp 0x52d839 */ goto L_0052d839;
L_0052d7f9:; BB(0x0052d7f9);
    /* 0052d7f9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052d7fc: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052d7ff: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0052d801: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0052d803: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052d806: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052d809: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0052d80c: jmp 0x52d839 */ goto L_0052d839;
L_0052d80e:; BB(0x0052d80e);
    /* 0052d80e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0052d815: jmp 0x52d839 */ goto L_0052d839;
L_0052d817:; BB(0x0052d817);
    /* 0052d817: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 0052d81e: jmp 0x52d839 */ goto L_0052d839;
L_0052d820:; BB(0x0052d820);
    /* 0052d820: mov dword ptr [ebp - 0x18], 2 */ W32((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 0052d827: jmp 0x52d839 */ goto L_0052d839;
L_0052d829:; BB(0x0052d829);
    /* 0052d829: mov dword ptr [ebp - 0x18], 3 */ W32((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 0052d830: jmp 0x52d839 */ goto L_0052d839;
L_0052d832:; BB(0x0052d832);
    /* 0052d832: mov dword ptr [ebp - 0x18], 4 */ W32((u32)(r_ebp+0xffffffe8u), 0x4u);
L_0052d839:; BB(0x0052d839);
    /* 0052d839: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052d83c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d83d: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d843: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0052d849: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d84f: mov ecx, dword ptr [ecx + 0xcc] */ r_ecx = R32((u32)(r_ecx+0xccu));
    /* 0052d855: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d857: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052d85d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d85fu); call_ind(t); }
    /* 0052d85f: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d861: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52d866u); f_00686d82();
    /* 0052d866: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052d869: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0052d86c: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0052d873: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d877: je 0x52d893 */ if (fZ) goto L_0052d893;
L_0052d879:; BB(0x0052d879);
    /* 0052d879: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d87b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d87d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d87f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d881: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d883: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0052d886: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x52d88bu); f_00601110();
    /* 0052d88b: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0052d891: jmp 0x52d89d */ goto L_0052d89d;
L_0052d893:; BB(0x0052d893);
    /* 0052d893: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_0052d89d:; BB(0x0052d89d);
    /* 0052d89d: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0052d8a3: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0052d8a6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052d8ad: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0052d8b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d8b1: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d8b7: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0052d8bd: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52d8c2u); f_005f5d50();
    /* 0052d8c2: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d8c8: mov edx, dword ptr [ecx + 0xcc] */ r_edx = R32((u32)(r_ecx+0xccu));
    /* 0052d8ce: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d8d4: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0052d8da: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052d8dc: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052d8df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d8e1u); call_ind(t); }
L_0052d8e1:; BB(0x0052d8e1);
    /* 0052d8e1: jmp 0x52da70 */ goto L_0052da70;
L_0052d8e6:; BB(0x0052d8e6);
    /* 0052d8e6: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052d8ec: cmp dword ptr [ecx + 0x64], -1 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d8f0: je 0x52da70 */ if (fZ) goto L_0052da70;
L_0052d8f6:; BB(0x0052d8f6);
    /* 0052d8f6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052d8f9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0052d8fc: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052d901: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0052d904: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0052d907: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052d90d: call 0x535e50 */ r_esp -= 4; W32(r_esp, 0x52d912u); f_00535e50();
    /* 0052d912: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0052d915: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052d918: sub edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0052d91b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d91c: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d922: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0052d928: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d92e: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0052d934: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052d936: mov ecx, eax */ r_ecx = r_eax;
    /* 0052d938: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052d93e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d940u); call_ind(t); }
    /* 0052d940: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d942: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52d947u); f_00686d82();
    /* 0052d947: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052d94a: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0052d94d: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0052d954: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052d958: je 0x52d974 */ if (fZ) goto L_0052d974;
L_0052d95a:; BB(0x0052d95a);
    /* 0052d95a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d95c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d95e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d960: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d962: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d964: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0052d967: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x52d96cu); f_00601110();
    /* 0052d96c: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0052d972: jmp 0x52d97e */ goto L_0052d97e;
L_0052d974:; BB(0x0052d974);
    /* 0052d974: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_0052d97e:; BB(0x0052d97e);
    /* 0052d97e: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0052d984: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0052d987: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052d98e: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0052d991: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d992: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d998: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0052d99e: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52d9a3u); f_005f5d50();
    /* 0052d9a3: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d9a9: mov edx, dword ptr [ecx + 0xcc] */ r_edx = R32((u32)(r_ecx+0xccu));
    /* 0052d9af: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d9b5: mov ecx, dword ptr [eax + 0xcc] */ r_ecx = R32((u32)(r_eax+0xccu));
    /* 0052d9bb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052d9bd: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052d9c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d9c2u); call_ind(t); }
    /* 0052d9c2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052d9c5: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d9c8: sub ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0052d9cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052d9cc: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d9d2: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0052d9d8: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052d9de: mov ecx, dword ptr [ecx + 0xe0] */ r_ecx = R32((u32)(r_ecx+0xe0u));
    /* 0052d9e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052d9e6: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052d9ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52d9eeu); call_ind(t); }
    /* 0052d9ee: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0052d9f0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52d9f5u); f_00686d82();
    /* 0052d9f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052d9f8: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0052d9fb: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0052da02: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052da06: je 0x52da22 */ if (fZ) goto L_0052da22;
L_0052da08:; BB(0x0052da08);
    /* 0052da08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052da0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052da0c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052da0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052da10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052da12: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0052da15: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x52da1au); f_00601110();
    /* 0052da1a: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0052da20: jmp 0x52da2c */ goto L_0052da2c;
L_0052da22:; BB(0x0052da22);
    /* 0052da22: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_0052da2c:; BB(0x0052da2c);
    /* 0052da2c: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0052da32: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0052da35: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052da3c: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0052da3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052da40: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052da46: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0052da4c: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52da51u); f_005f5d50();
    /* 0052da51: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052da57: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 0052da5d: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052da63: mov ecx, dword ptr [eax + 0xe0] */ r_ecx = R32((u32)(r_eax+0xe0u));
    /* 0052da69: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052da6b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052da6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52da70u); call_ind(t); }
L_0052da70:; BB(0x0052da70);
    /* 0052da70: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052da76: cmp dword ptr [ecx + 0x78], 0x64 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052da7a: jl 0x52db1e */ if ((fS!=fO)) goto L_0052db1e;
L_0052da80:; BB(0x0052da80);
    /* 0052da80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052da82: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052da88: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0052da8e: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052da94: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 0052da9a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052da9c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052daa2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52daa4u); call_ind(t); }
    /* 0052daa4: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052daa6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52daabu); f_00686d82();
    /* 0052daab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052daae: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0052dab1: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0052dab8: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052dabc: je 0x52dad0 */ if (fZ) goto L_0052dad0;
L_0052dabe:; BB(0x0052dabe);
    /* 0052dabe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dac0: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0052dac3: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x52dac8u); f_00600a70();
    /* 0052dac8: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0052dace: jmp 0x52dada */ goto L_0052dada;
L_0052dad0:; BB(0x0052dad0);
    /* 0052dad0: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_0052dada:; BB(0x0052dada);
    /* 0052dada: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0052dae0: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0052dae3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052daea: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0052daed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052daee: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052daf4: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0052dafa: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52daffu); f_005f5d50();
    /* 0052daff: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052db05: mov edx, dword ptr [ecx + 0xc0] */ r_edx = R32((u32)(r_ecx+0xc0u));
    /* 0052db0b: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052db11: mov ecx, dword ptr [eax + 0xc0] */ r_ecx = R32((u32)(r_eax+0xc0u));
    /* 0052db17: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052db19: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052db1c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52db1eu); call_ind(t); }
L_0052db1e:; BB(0x0052db1e);
    /* 0052db1e: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052db24: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052db28: jle 0x52db86 */ if ((fZ||fS!=fO)) goto L_0052db86;
L_0052db2a:; BB(0x0052db2a);
    /* 0052db2a: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 0052db30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052db32: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052db38: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0052db3b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52db3du); call_ind(t); }
    /* 0052db3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052db3f: je 0x52db86 */ if (fZ) goto L_0052db86;
L_0052db41:; BB(0x0052db41);
    /* 0052db41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052db43: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052db49: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 0052db4f: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052db55: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0052db5b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052db5d: mov ecx, eax */ r_ecx = r_eax;
    /* 0052db5f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052db65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52db67u); call_ind(t); }
    /* 0052db67: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052db6d: mov edx, dword ptr [ecx + 0xc8] */ r_edx = R32((u32)(r_ecx+0xc8u));
    /* 0052db73: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052db79: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 0052db7f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052db81: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052db84: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52db86u); call_ind(t); }
L_0052db86:; BB(0x0052db86);
    /* 0052db86: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052db8c: movzx edx, byte ptr [ecx + 0x7c] */ r_edx = (u32)R8((u32)(r_ecx+0x7cu));
    /* 0052db90: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052db92: je 0x52dc6a */ if (fZ) goto L_0052dc6a;
L_0052db98:; BB(0x0052db98);
    /* 0052db98: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052db9f: jmp 0x52dbaa */ goto L_0052dbaa;
L_0052dba1:; BB(0x0052dba1);
    /* 0052dba1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052dba4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052dba7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0052dbaa:; BB(0x0052dbaa);
    /* 0052dbaa: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052dbae: jge 0x52dbf0 */ if ((fS==fO)) goto L_0052dbf0;
L_0052dbb0:; BB(0x0052dbb0);
    /* 0052dbb0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dbb2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052dbb5: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052dbbb: mov ecx, dword ptr [edx + ecx*4 + 0xe0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xe0u));
    /* 0052dbc2: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52dbc7u); f_005f5d50();
    /* 0052dbc7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052dbca: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052dbd0: mov edx, dword ptr [ecx + eax*4 + 0xe0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xe0u));
    /* 0052dbd7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052dbda: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052dbe0: mov ecx, dword ptr [ecx + eax*4 + 0xe0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xe0u));
    /* 0052dbe7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052dbe9: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052dbec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52dbeeu); call_ind(t); }
    /* 0052dbee: jmp 0x52dba1 */ goto L_0052dba1;
L_0052dbf0:; BB(0x0052dbf0);
    /* 0052dbf0: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052dbf2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52dbf7u); f_00686d82();
    /* 0052dbf7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052dbfa: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0052dbfd: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0052dc04: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052dc08: je 0x52dc1c */ if (fZ) goto L_0052dc1c;
L_0052dc0a:; BB(0x0052dc0a);
    /* 0052dc0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dc0c: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0052dc0f: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x52dc14u); f_00600a70();
    /* 0052dc14: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0052dc1a: jmp 0x52dc26 */ goto L_0052dc26;
L_0052dc1c:; BB(0x0052dc1c);
    /* 0052dc1c: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_0052dc26:; BB(0x0052dc26);
    /* 0052dc26: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0052dc2c: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0052dc2f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052dc36: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0052dc39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052dc3a: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052dc40: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 0052dc46: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52dc4bu); f_005f5d50();
    /* 0052dc4b: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052dc51: mov edx, dword ptr [ecx + 0xc8] */ r_edx = R32((u32)(r_ecx+0xc8u));
    /* 0052dc57: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0052dc5d: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 0052dc63: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052dc65: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052dc68: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52dc6au); call_ind(t); }
L_0052dc6a:; BB(0x0052dc6a);
    /* 0052dc6a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052dc6d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052dc74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052dc75: mov esp, ebp */ r_esp = r_ebp;
    /* 0052dc77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052dc78: ret  */ FN_RET(0x0052d270); r_esp += 4; return;
}

void f_0052dca0(void) /* sub_52DCA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052dca0);
    /* 0052dca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052dca1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052dca3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052dca6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0052dca9: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052dcae: movzx ecx, byte ptr [eax + 0x7c] */ r_ecx = (u32)R8((u32)(r_eax+0x7cu));
    /* 0052dcb2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052dcb4: je 0x52dd3f */ if (fZ) goto L_0052dd3f;
L_0052dcba:; BB(0x0052dcba);
    /* 0052dcba: mov edx, dword ptr [0x79338c] */ r_edx = R32((u32)(0x79338cu));
    /* 0052dcc0: cmp dword ptr [edx + 0x78], 0x64 */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052dcc4: jl 0x52dd3f */ if ((fS!=fO)) goto L_0052dd3f;
L_0052dcc6:; BB(0x0052dcc6);
    /* 0052dcc6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052dcc9: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052dccc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052dccd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052dcce: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0052dcd4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052dcd7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052dcd8: fld1  */ FPUSH(1.0);
    /* 0052dcda: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052dcdd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dcdf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0052dce1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dce3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dce5: push 0x18a95 */ { u32 v = 0x18a95u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dcea: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052dcf0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052dcf2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052dcf8: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0052dcfe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52dd00u); call_ind(t); }
    /* 0052dd00: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052dd03: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052dd06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd08: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0052dd0e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052dd11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd12: fld1  */ FPUSH(1.0);
    /* 0052dd14: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052dd17: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd19: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd1f: push 0x18a94 */ { u32 v = 0x18a94u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd24: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0052dd2a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052dd2c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052dd32: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0052dd38: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52dd3au); call_ind(t); }
    /* 0052dd3a: jmp 0x52dde0 */ goto L_0052dde0;
L_0052dd3f:; BB(0x0052dd3f);
    /* 0052dd3f: mov eax, dword ptr [0x79338c] */ r_eax = R32((u32)(0x79338cu));
    /* 0052dd44: movzx ecx, byte ptr [eax + 0x7e] */ r_ecx = (u32)R8((u32)(r_eax+0x7eu));
    /* 0052dd48: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052dd4a: je 0x52dd81 */ if (fZ) goto L_0052dd81;
L_0052dd4c:; BB(0x0052dd4c);
    /* 0052dd4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd4f: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0052dd55: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052dd58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd59: fld1  */ FPUSH(1.0);
    /* 0052dd5b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052dd5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd60: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd66: push 0x30f0ca */ { u32 v = 0x30f0cau; r_esp -= 4; W32(r_esp, v); }
    /* 0052dd6b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0052dd71: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052dd73: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052dd79: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0052dd7f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52dd81u); call_ind(t); }
L_0052dd81:; BB(0x0052dd81);
    /* 0052dd81: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052dd87: call 0x535e70 */ r_esp -= 4; W32(r_esp, 0x52dd8cu); f_00535e70();
    /* 0052dd8c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0052dd8f: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052dd93: jne 0x52dd97 */ if (!fZ) goto L_0052dd97;
L_0052dd95:; BB(0x0052dd95);
    /* 0052dd95: jmp 0x52dde0 */ goto L_0052dde0;
L_0052dd97:; BB(0x0052dd97);
    /* 0052dd97: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052dd9b: jg 0x52dda4 */ if ((!fZ&&fS==fO)) goto L_0052dda4;
L_0052dd9d:; BB(0x0052dd9d);
    /* 0052dd9d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0052dda4:; BB(0x0052dda4);
    /* 0052dda4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052dda7: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052ddaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ddab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ddac: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0052ddb2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052ddb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ddb6: fld1  */ FPUSH(1.0);
    /* 0052ddb8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052ddbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ddbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ddbf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0052ddc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ddc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ddc5: push 0x18a94 */ { u32 v = 0x18a94u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ddca: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0052ddd0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052ddd2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052ddd8: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0052ddde: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52dde0u); call_ind(t); }
L_0052dde0:; BB(0x0052dde0);
    /* 0052dde0: mov esp, ebp */ r_esp = r_ebp;
    /* 0052dde2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052dde3: ret  */ FN_RET(0x0052dca0); r_esp += 4; return;
}

