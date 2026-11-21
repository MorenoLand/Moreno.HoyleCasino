#include "protos.h"

void f_006077f0(void) /* VIniFile::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006077f0);
    /* 006077f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006077f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006077f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006077f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006077f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006077fa: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x6077ffu); f_0062aea0();
    /* 006077ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00607802: mov dword ptr [eax], 0x6d7e44 */ W32((u32)(r_eax), 0x6d7e44u);
    /* 00607808: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060780b: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 0060780f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00607812: mov byte ptr [edx + 0x107], 0 */ W8((u32)(r_edx+0x107u), 0x0u);
    /* 00607819: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060781c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060781e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060781f: ret  */ FN_RET(0x006077f0); r_esp += 4; return;
}

void f_00607820(void) /* VIniFile::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00607820);
    /* 00607820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607821: mov ebp, esp */ r_ebp = r_esp;
    /* 00607823: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00607824: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00607827: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060782a: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x60782fu); f_0062aea0();
    /* 0060782f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00607832: mov dword ptr [eax], 0x6d7e44 */ W32((u32)(r_eax), 0x6d7e44u);
    /* 00607838: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060783b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060783c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060783f: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00607842: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00607843: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x607848u); f_00686d8e();
    /* 00607848: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060784b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060784e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060784f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00607852: add ecx, 0x107 */ {  u32 a = r_ecx; u32 b = 0x107u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00607858: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00607859: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x60785eu); f_00686d8e();
    /* 0060785e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00607861: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00607864: mov esp, ebp */ r_esp = r_ebp;
    /* 00607866: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607867: ret 8 */ FN_RET(0x00607820); r_esp += 12; return;
}

void f_00607890(void) /* VIniFile::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00607890);
    /* 00607890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607891: mov ebp, esp */ r_ebp = r_esp;
    /* 00607893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00607894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00607897: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060789a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060789b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060789e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006078a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006078a2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6078a7u); f_00686d8e();
    /* 006078a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006078aa: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006078ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006078ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006078b1: add eax, 0x107 */ {  u32 a = r_eax; u32 b = 0x107u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006078b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006078b7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6078bcu); f_00686d8e();
    /* 006078bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006078bf: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006078c1: mov esp, ebp */ r_esp = r_ebp;
    /* 006078c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006078c4: ret 8 */ FN_RET(0x00607890); r_esp += 12; return;
}

