#include "protos.h"

void f_005781c0(void) /* SultanOscillateCycle::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005781c0);
    /* 005781c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005781c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005781c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005781c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005781c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005781ca: cmp dword ptr [eax + 0xc], 1 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005781ce: jne 0x5781dc */ if (!fZ) goto L_005781dc;
L_005781d0:; BB(0x005781d0);
    /* 005781d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005781d3: mov dword ptr [ecx + 0xc], 0xffffffff */ W32((u32)(r_ecx+0xcu), 0xffffffffu);
    /* 005781da: jmp 0x5781fd */ goto L_005781fd;
L_005781dc:; BB(0x005781dc);
    /* 005781dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005781df: call 0x6005d0 */ r_esp -= 4; W32(r_esp, 0x5781e4u); f_006005d0();
    /* 005781e4: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 005781ea: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005781ed: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 005781f3: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005781f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005781f8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005781fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5781fdu); call_ind(t); }
L_005781fd:; BB(0x005781fd);
    /* 005781fd: mov esp, ebp */ r_esp = r_ebp;
    /* 005781ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578200: ret  */ FN_RET(0x005781c0); r_esp += 4; return;
}

void f_00601340(void) /* SultanOscillateCycle::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601340);
    /* 00601340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601341: mov ebp, esp */ r_ebp = r_esp;
    /* 00601343: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601346: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00601349: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060134c: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 00601350: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601352: jne 0x601356 */ if (!fZ) goto L_00601356;
L_00601354:; BB(0x00601354);
    /* 00601354: jmp 0x6013b0 */ goto L_006013b0;
L_00601356:; BB(0x00601356);
    /* 00601356: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601359: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060135b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060135e: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00601361: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x601363u); call_ind(t); }
    /* 00601363: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00601366: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601369: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0060136c: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x601371u); f_005eb220();
    /* 00601371: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601374: je 0x6013b0 */ if (fZ) goto L_006013b0;
L_00601376:; BB(0x00601376);
    /* 00601376: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00601379: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060137c: cmp edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060137f: jg 0x601387 */ if ((!fZ&&fS==fO)) goto L_00601387;
L_00601381:; BB(0x00601381);
    /* 00601381: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00601385: jge 0x601396 */ if ((fS==fO)) goto L_00601396;
L_00601387:; BB(0x00601387);
    /* 00601387: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060138a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060138c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060138f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00601392: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x601394u); call_ind(t); }
    /* 00601394: jmp 0x6013b0 */ goto L_006013b0;
L_00601396:; BB(0x00601396);
    /* 00601396: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00601399: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060139a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060139d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006013a0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006013a3: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 006013a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006013a8: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 006013ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6013b0u); call_ind(t); }
L_006013b0:; BB(0x006013b0);
    /* 006013b0: mov esp, ebp */ r_esp = r_ebp;
    /* 006013b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006013b3: ret  */ FN_RET(0x00601340); r_esp += 4; return;
}

