#include "protos.h"

void f_00467ec0(void) /* sub_467EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00467ec0);
    /* 00467ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00467ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00467ec3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00467ec6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00467ec9: push 0x6bb080 */ { u32 v = 0x6bb080u; r_esp -= 4; W32(r_esp, v); }
    /* 00467ece: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x467ed3u); f_00630f40();
    /* 00467ed3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00467ed6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00467ed7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00467eda: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00467ee0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00467ee3: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 00467ee9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00467eeb: mov ecx, eax */ r_ecx = r_eax;
    /* 00467eed: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00467ef3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467ef5u); call_ind(t); }
    /* 00467ef5: push 0x6bb07c */ { u32 v = 0x6bb07cu; r_esp -= 4; W32(r_esp, v); }
    /* 00467efa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467efc: push 0x30e79f */ { u32 v = 0x30e79fu; r_esp -= 4; W32(r_esp, v); }
    /* 00467f01: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00467f07: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x467f0cu); f_005f2a60();
    /* 00467f0c: mov ecx, eax */ r_ecx = r_eax;
    /* 00467f0e: call 0x5fd730 */ r_esp -= 4; W32(r_esp, 0x467f13u); f_005fd730();
    /* 00467f13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467f15: push 0x30e79f */ { u32 v = 0x30e79fu; r_esp -= 4; W32(r_esp, v); }
    /* 00467f1a: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00467f20: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x467f25u); f_005f2a60();
    /* 00467f25: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00467f28: push 0x6bb080 */ { u32 v = 0x6bb080u; r_esp -= 4; W32(r_esp, v); }
    /* 00467f2d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x467f32u); f_00630f40();
    /* 00467f32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00467f35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00467f36: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00467f39: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00467f3b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00467f3e: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00467f44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467f46u); call_ind(t); }
    /* 00467f46: mov esp, ebp */ r_esp = r_ebp;
    /* 00467f48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00467f49: ret  */ FN_RET(0x00467ec0); r_esp += 4; return;
}

void f_00467f50(void) /* sub_467F50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00467f50);
    /* 00467f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00467f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00467f53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00467f56: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00467f59: push 0x6bb05c */ { u32 v = 0x6bb05cu; r_esp -= 4; W32(r_esp, v); }
    /* 00467f5e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x467f63u); f_00630f40();
    /* 00467f63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00467f66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00467f67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00467f6a: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00467f70: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00467f73: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 00467f79: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00467f7b: mov ecx, eax */ r_ecx = r_eax;
    /* 00467f7d: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00467f83: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467f85u); call_ind(t); }
    /* 00467f85: push 0x6bb090 */ { u32 v = 0x6bb090u; r_esp -= 4; W32(r_esp, v); }
    /* 00467f8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467f8c: push 0x30e79f */ { u32 v = 0x30e79fu; r_esp -= 4; W32(r_esp, v); }
    /* 00467f91: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00467f97: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x467f9cu); f_005f2a60();
    /* 00467f9c: mov ecx, eax */ r_ecx = r_eax;
    /* 00467f9e: call 0x5fd730 */ r_esp -= 4; W32(r_esp, 0x467fa3u); f_005fd730();
    /* 00467fa3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467fa5: push 0x30e79f */ { u32 v = 0x30e79fu; r_esp -= 4; W32(r_esp, v); }
    /* 00467faa: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00467fb0: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x467fb5u); f_005f2a60();
    /* 00467fb5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00467fb8: push 0x6bb05c */ { u32 v = 0x6bb05cu; r_esp -= 4; W32(r_esp, v); }
    /* 00467fbd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x467fc2u); f_00630f40();
    /* 00467fc2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00467fc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00467fc6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00467fc9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00467fcb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00467fce: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00467fd4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467fd6u); call_ind(t); }
    /* 00467fd6: mov esp, ebp */ r_esp = r_ebp;
    /* 00467fd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00467fd9: ret  */ FN_RET(0x00467f50); r_esp += 4; return;
}

