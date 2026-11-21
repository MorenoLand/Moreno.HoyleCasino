#include "protos.h"

void f_005388e0(void) /* SlotMachineFunnyMoney::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005388e0);
    /* 005388e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005388e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005388e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005388e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005388e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005388ea: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005388ed: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005388f0: mov eax, dword ptr [eax + ecx*4 + 0x72c358] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72c358u));
    /* 005388f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005388f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005388fa: ret 8 */ FN_RET(0x005388e0); r_esp += 12; return;
}

void f_00538900(void) /* SlotMachineFunnyMoney::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538900);
    /* 00538900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538901: mov ebp, esp */ r_ebp = r_esp;
    /* 00538903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538907: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053890a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0053890d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538910: mov eax, dword ptr [eax + ecx*4 + 0x72c460] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72c460u));
    /* 00538917: mov esp, ebp */ r_esp = r_ebp;
    /* 00538919: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053891a: ret 8 */ FN_RET(0x00538900); r_esp += 12; return;
}

void f_00538920(void) /* SlotMachineFunnyMoney::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538920);
    /* 00538920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538921: mov ebp, esp */ r_ebp = r_esp;
    /* 00538923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538927: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053892a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053892d: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538930: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538933: mov eax, dword ptr [eax + ecx*4 + 0x72c300] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72c300u));
    /* 0053893a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053893c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053893d: ret 8 */ FN_RET(0x00538920); r_esp += 12; return;
}

void f_00538940(void) /* SlotMachineFunnyMoney::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538940);
    /* 00538940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538941: mov ebp, esp */ r_ebp = r_esp;
    /* 00538943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538947: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053894a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053894d: mov eax, dword ptr [eax + 0x72c780] */ r_eax = R32((u32)(r_eax+0x72c780u));
    /* 00538953: mov esp, ebp */ r_esp = r_ebp;
    /* 00538955: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538956: ret 4 */ FN_RET(0x00538940); r_esp += 8; return;
}

void f_00538960(void) /* SlotMachineFunnyMoney::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538960);
    /* 00538960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538961: mov ebp, esp */ r_ebp = r_esp;
    /* 00538963: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538964: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538967: mov eax, 7 */ r_eax = 0x7u;
    /* 0053896c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053896e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053896f: ret  */ FN_RET(0x00538960); r_esp += 4; return;
}

void f_00538970(void) /* SlotMachineFunnyMoney::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538970);
    /* 00538970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538971: mov ebp, esp */ r_ebp = r_esp;
    /* 00538973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538977: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053897a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053897d: add eax, 0x72c760 */ {  u32 a = r_eax; u32 b = 0x72c760u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538982: mov esp, ebp */ r_esp = r_ebp;
    /* 00538984: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538985: ret 4 */ FN_RET(0x00538970); r_esp += 8; return;
}

