#include "protos.h"

void f_00546900(void) /* VideoBlackjackCycleCashOut::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546900);
    /* 00546900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546901: mov ebp, esp */ r_ebp = r_esp;
    /* 00546903: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00546905: push 0x6a5111 */ { u32 v = 0x6a5111u; r_esp -= 4; W32(r_esp, v); }
    /* 0054690a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00546910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546911: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546912: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00546917: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00546919: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054691a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0054691d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00546923: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00546926: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00546929: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054692a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054692d: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x546932u); f_00600a70();
    /* 00546932: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00546939: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054693c: mov dword ptr [ecx], 0x6c6890 */ W32((u32)(r_ecx), 0x6c6890u);
    /* 00546942: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546944: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546945: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0054694b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054694e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054694f: fld1  */ FPUSH(1.0);
    /* 00546951: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00546954: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546956: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00546958: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054695a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054695c: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 00546961: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00546967: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00546969: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0054696f: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00546975: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x546977u); call_ind(t); }
    /* 00546977: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054697e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546981: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546984: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054698b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054698c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054698e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054698f: ret 4 */ FN_RET(0x00546900); r_esp += 8; return;
}

void f_005469c0(void) /* VideoBlackjackCycleCashOut::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005469c0);
    /* 005469c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005469c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005469c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005469c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005469c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005469c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005469cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005469cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005469d0: call 0x6004e0 */ r_esp -= 4; W32(r_esp, 0x5469d5u); f_006004e0();
    /* 005469d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005469d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005469da: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005469dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005469e0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005469e3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005469e5: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005469eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5469edu); call_ind(t); }
    /* 005469ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005469f0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005469f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005469f6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005469f9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005469fb: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005469fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546a00u); call_ind(t); }
    /* 00546a00: mov esp, ebp */ r_esp = r_ebp;
    /* 00546a02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546a03: ret 8 */ FN_RET(0x005469c0); r_esp += 12; return;
}

void f_00546a10(void) /* VideoBlackjackCycleCashOut::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546a10);
    /* 00546a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00546a13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546a14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00546a17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546a1a: call 0x600b30 */ r_esp -= 4; W32(r_esp, 0x546a1fu); f_00600b30();
    /* 00546a1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546a22: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00546a25: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546a28: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00546a2b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00546a2d: mov ecx, eax */ r_ecx = r_eax;
    /* 00546a2f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00546a32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546a34u); call_ind(t); }
    /* 00546a34: mov esp, ebp */ r_esp = r_ebp;
    /* 00546a36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546a37: ret  */ FN_RET(0x00546a10); r_esp += 4; return;
}

