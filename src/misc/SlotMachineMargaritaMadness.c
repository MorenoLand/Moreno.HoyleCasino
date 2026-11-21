#include "protos.h"

void f_00534e90(void) /* SlotMachineMargaritaMadness::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534e90);
    /* 00534e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00534e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534e94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534e97: mov eax, 0x30f08e */ r_eax = 0x30f08eu;
    /* 00534e9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534e9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534e9f: ret  */ FN_RET(0x00534e90); r_esp += 4; return;
}

void f_00534ea0(void) /* SlotMachineMargaritaMadness::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534ea0);
    /* 00534ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534ea7: mov eax, 0x30f0b8 */ r_eax = 0x30f0b8u;
    /* 00534eac: mov esp, ebp */ r_esp = r_ebp;
    /* 00534eae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534eaf: ret  */ FN_RET(0x00534ea0); r_esp += 4; return;
}

void f_00534eb0(void) /* SlotMachineMargaritaMadness::vfunc10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534eb0);
    /* 00534eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534eb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534eb7: mov eax, 0x30f09c */ r_eax = 0x30f09cu;
    /* 00534ebc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534ebe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534ebf: ret  */ FN_RET(0x00534eb0); r_esp += 4; return;
}

void f_00534ec0(void) /* SlotMachineMargaritaMadness::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534ec0);
    /* 00534ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534ec7: mov eax, 0x30f09d */ r_eax = 0x30f09du;
    /* 00534ecc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534ece: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534ecf: ret  */ FN_RET(0x00534ec0); r_esp += 4; return;
}

void f_00534ed0(void) /* SlotMachineMargaritaMadness::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534ed0);
    /* 00534ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534ed7: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534edb: jne 0x534ee4 */ if (!fZ) goto L_00534ee4;
L_00534edd:; BB(0x00534edd);
    /* 00534edd: mov eax, 0xe */ r_eax = 0xeu;
    /* 00534ee2: jmp 0x534ee9 */ goto L_00534ee9;
L_00534ee4:; BB(0x00534ee4);
    /* 00534ee4: mov eax, 0x1b */ r_eax = 0x1bu;
L_00534ee9:; BB(0x00534ee9);
    /* 00534ee9: mov esp, ebp */ r_esp = r_ebp;
    /* 00534eeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534eec: ret 4 */ FN_RET(0x00534ed0); r_esp += 8; return;
}

void f_005393e0(void) /* SlotMachineMargaritaMadness::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005393e0);
    /* 005393e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005393e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005393e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005393e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005393e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005393ea: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005393ed: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005393f0: mov eax, dword ptr [eax + ecx*4 + 0x734140] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x734140u));
    /* 005393f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005393f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005393fa: ret 8 */ FN_RET(0x005393e0); r_esp += 12; return;
}

void f_00539400(void) /* SlotMachineMargaritaMadness::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539400);
    /* 00539400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539401: mov ebp, esp */ r_ebp = r_esp;
    /* 00539403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539407: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053940a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053940d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539410: mov eax, dword ptr [eax + ecx*4 + 0x734038] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x734038u));
    /* 00539417: mov esp, ebp */ r_esp = r_ebp;
    /* 00539419: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053941a: ret 8 */ FN_RET(0x00539400); r_esp += 12; return;
}

void f_00539420(void) /* SlotMachineMargaritaMadness::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539420);
    /* 00539420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539421: mov ebp, esp */ r_ebp = r_esp;
    /* 00539423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539427: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053942a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053942d: mov eax, dword ptr [eax + 0x733ba8] */ r_eax = R32((u32)(r_eax+0x733ba8u));
    /* 00539433: mov esp, ebp */ r_esp = r_ebp;
    /* 00539435: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539436: ret 4 */ FN_RET(0x00539420); r_esp += 8; return;
}

void f_00539440(void) /* SlotMachineMargaritaMadness::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539440);
    /* 00539440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539441: mov ebp, esp */ r_ebp = r_esp;
    /* 00539443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539447: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053944a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053944d: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539450: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539453: mov eax, dword ptr [eax + ecx*4 + 0x733978] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x733978u));
    /* 0053945a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053945c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053945d: ret 8 */ FN_RET(0x00539440); r_esp += 12; return;
}

void f_00539460(void) /* SlotMachineMargaritaMadness::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539460);
    /* 00539460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539461: mov ebp, esp */ r_ebp = r_esp;
    /* 00539463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539467: mov eax, 0xf */ r_eax = 0xfu;
    /* 0053946c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053946e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053946f: ret  */ FN_RET(0x00539460); r_esp += 4; return;
}

void f_00539470(void) /* SlotMachineMargaritaMadness::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539470);
    /* 00539470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539471: mov ebp, esp */ r_ebp = r_esp;
    /* 00539473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539477: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053947a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053947d: add eax, 0x733b88 */ {  u32 a = r_eax; u32 b = 0x733b88u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00539482: mov esp, ebp */ r_esp = r_ebp;
    /* 00539484: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539485: ret 4 */ FN_RET(0x00539470); r_esp += 8; return;
}

