#include "protos.h"

void f_004103e0(void) /* BlackjackDealerToReadyScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004103e0);
    /* 004103e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004103e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004103e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004103e5: push 0x69dc12 */ { u32 v = 0x69dc12u; r_esp -= 4; W32(r_esp, v); }
    /* 004103ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004103f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004103f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004103f2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004103f7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004103f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004103fa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004103fd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00410403: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00410406: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00410409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041040a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041040d: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x410412u); f_005fc0d0();
    /* 00410412: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00410419: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041041c: mov dword ptr [ecx], 0x6b3acc */ W32((u32)(r_ecx), 0x6b3accu);
    /* 00410422: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00410425: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00410428: mov byte ptr [edx + 0x20], al */ W8((u32)(r_edx+0x20u), (u8)r_eax);
    /* 0041042b: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0041042f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410431: je 0x41045a */ if (fZ) goto L_0041045a;
L_00410433:; BB(0x00410433);
    /* 00410433: push 0x13a2 */ { u32 v = 0x13a2u; r_esp -= 4; W32(r_esp, v); }
    /* 00410438: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 0041043e: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 00410441: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x410446u); f_005eaf00();
    /* 00410446: push 0x13a3 */ { u32 v = 0x13a3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041044b: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00410450: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 00410453: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x410458u); f_005eaf00();
    /* 00410458: jmp 0x410480 */ goto L_00410480;
L_0041045a:; BB(0x0041045a);
    /* 0041045a: push 0x13a4 */ { u32 v = 0x13a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041045f: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00410465: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 00410468: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x41046du); f_005eaf00();
    /* 0041046d: push 0x13a5 */ { u32 v = 0x13a5u; r_esp -= 4; W32(r_esp, v); }
    /* 00410472: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 00410478: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 0041047b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x410480u); f_005eaf00();
L_00410480:; BB(0x00410480);
    /* 00410480: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00410482: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00410487: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0041048a: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 00410490: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00410493: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00410495: mov ecx, eax */ r_ecx = r_eax;
    /* 00410497: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0041049d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41049fu); call_ind(t); }
    /* 0041049f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004104a1: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004104a7: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004104aa: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 004104af: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004104b2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004104b4: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004104ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4104bcu); call_ind(t); }
    /* 004104bc: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004104c2: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004104c5: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 004104ca: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004104cd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004104cf: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004104d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4104d4u); call_ind(t); }
    /* 004104d4: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004104da: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004104dd: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 004104e2: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004104e5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004104e7: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004104ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4104ecu); call_ind(t); }
    /* 004104ec: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004104f3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004104f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004104f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00410500: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00410501: mov esp, ebp */ r_esp = r_ebp;
    /* 00410503: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00410504: ret 8 */ FN_RET(0x004103e0); r_esp += 12; return;
}

void f_00410510(void) /* BlackjackDealerToReadyScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00410510);
    /* 00410510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00410511: mov ebp, esp */ r_ebp = r_esp;
    /* 00410513: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00410516: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00410519: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041051c: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x410521u); f_005fc360();
    /* 00410521: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00410524: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410528: je 0x41053f */ if (fZ) goto L_0041053f;
L_0041052a:; BB(0x0041052a);
    /* 0041052a: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041052e: je 0x410585 */ if (fZ) goto L_00410585;
L_00410530:; BB(0x00410530);
    /* 00410530: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410534: je 0x4106b6 */ if (fZ) goto L_004106b6;
L_0041053a:; BB(0x0041053a);
    /* 0041053a: jmp 0x4106e1 */ goto L_004106e1;
L_0041053f:; BB(0x0041053f);
    /* 0041053f: mov word ptr [0x79030c], 0 */ W16((u32)(0x79030cu), 0x0u);
    /* 00410548: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0041054d: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00410550: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x410555u); f_005eb240();
    /* 00410555: mov word ptr [0x790308], ax */ W16((u32)(0x790308u), (u16)r_eax);
    /* 0041055b: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00410561: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 00410564: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x410569u); f_005eb240();
    /* 00410569: mov word ptr [0x790304], ax */ W16((u32)(0x790304u), (u16)r_eax);
    /* 0041056f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00410571: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410573: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00410576: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00410578: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041057b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0041057e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x410580u); call_ind(t); }
    /* 00410580: jmp 0x4106e1 */ goto L_004106e1;
L_00410585:; BB(0x00410585);
    /* 00410585: mov ax, word ptr [0x79030c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x79030cu))) & 0xffffu);
    /* 0041058b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0041058f: mov word ptr [0x79030c], ax */ W16((u32)(0x79030cu), (u16)r_eax);
    /* 00410595: movsx ecx, word ptr [0x79030c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79030cu));
    /* 0041059c: movsx edx, word ptr [0x790304] */ r_edx = (u32)(i32)(i16)R16((u32)(0x790304u));
    /* 004105a3: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004105a5: jg 0x4105ca */ if ((!fZ&&fS==fO)) goto L_004105ca;
L_004105a7:; BB(0x004105a7);
    /* 004105a7: movsx eax, word ptr [0x79030c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79030cu));
    /* 004105ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004105af: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004105b5: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004105b8: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 004105bd: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004105c0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004105c2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004105c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4105cau); call_ind(t); }
L_004105ca:; BB(0x004105ca);
    /* 004105ca: movsx ecx, word ptr [0x79030c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79030cu));
    /* 004105d1: movsx edx, word ptr [0x790308] */ r_edx = (u32)(i32)(i16)R16((u32)(0x790308u));
    /* 004105d8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004105da: jg 0x4105ff */ if ((!fZ&&fS==fO)) goto L_004105ff;
L_004105dc:; BB(0x004105dc);
    /* 004105dc: movsx eax, word ptr [0x79030c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79030cu));
    /* 004105e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004105e4: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004105ea: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004105ed: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 004105f2: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004105f5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004105f7: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 004105fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4105ffu); call_ind(t); }
L_004105ff:; BB(0x004105ff);
    /* 004105ff: movsx ecx, word ptr [0x79030c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79030cu));
    /* 00410606: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00410609: movzx eax, byte ptr [edx + 0x20] */ r_eax = (u32)R8((u32)(r_edx+0x20u));
    /* 0041060d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0041060f: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00410611: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00410614: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00410617: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410619: jne 0x410661 */ if (!fZ) goto L_00410661;
L_0041061b:; BB(0x0041061b);
    /* 0041061b: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00410621: call 0x418e70 */ r_esp -= 4; W32(r_esp, 0x410626u); f_00418e70();
    /* 00410626: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041062c: cmp dword ptr [ecx + 0x4c8], eax */ {  u32 a = R32((u32)(r_ecx+0x4c8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00410632: jne 0x410661 */ if (!fZ) goto L_00410661;
L_00410634:; BB(0x00410634);
    /* 00410634: push 0x13a1 */ { u32 v = 0x13a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410639: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 0041063f: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 00410642: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x410647u); f_005eaf00();
    /* 00410647: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0041064c: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0041064f: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 00410655: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00410658: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041065a: mov ecx, eax */ r_ecx = r_eax;
    /* 0041065c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0041065f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x410661u); call_ind(t); }
L_00410661:; BB(0x00410661);
    /* 00410661: movsx ecx, word ptr [0x79030c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79030cu));
    /* 00410668: movsx edx, word ptr [0x790308] */ r_edx = (u32)(i32)(i16)R16((u32)(0x790308u));
    /* 0041066f: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410671: jl 0x410685 */ if ((fS!=fO)) goto L_00410685;
L_00410673:; BB(0x00410673);
    /* 00410673: movsx eax, word ptr [0x79030c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79030cu));
    /* 0041067a: movsx ecx, word ptr [0x790304] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790304u));
    /* 00410681: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00410683: jge 0x410696 */ if ((fS==fO)) goto L_00410696;
L_00410685:; BB(0x00410685);
    /* 00410685: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00410687: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041068a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041068c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041068f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00410692: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x410694u); call_ind(t); }
    /* 00410694: jmp 0x4106a5 */ goto L_004106a5;
L_00410696:; BB(0x00410696);
    /* 00410696: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00410698: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041069b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041069d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004106a0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004106a3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4106a5u); call_ind(t); }
L_004106a5:; BB(0x004106a5);
    /* 004106a5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004106a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004106aa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004106ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004106af: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004106b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4106b4u); call_ind(t); }
    /* 004106b4: jmp 0x4106e1 */ goto L_004106e1;
L_004106b6:; BB(0x004106b6);
    /* 004106b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004106b9: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004106bd: je 0x4106e1 */ if (fZ) goto L_004106e1;
L_004106bf:; BB(0x004106bf);
    /* 004106bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004106c1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004106c4: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 004106c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004106ca: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 004106cd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004106cf: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004106d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4106d4u); call_ind(t); }
    /* 004106d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004106d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004106d9: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 004106dc: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4106e1u); f_005fc420();
L_004106e1:; BB(0x004106e1);
    /* 004106e1: mov esp, ebp */ r_esp = r_ebp;
    /* 004106e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004106e4: ret  */ FN_RET(0x00410510); r_esp += 4; return;
}

