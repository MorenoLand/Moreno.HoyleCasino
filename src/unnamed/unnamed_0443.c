#include "protos.h"

void f_00443300(void) /* sub_443300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443300);
    /* 00443300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443301: mov ebp, esp */ r_ebp = r_esp;
    /* 00443303: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443306: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00443309: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044330c: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 00443312: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443315: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 0044331b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044331d: mov ecx, eax */ r_ecx = r_eax;
    /* 0044331f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00443322: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443324u); call_ind(t); }
    /* 00443324: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443327: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 0044332d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443330: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00443336: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00443338: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0044333b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44333du); call_ind(t); }
    /* 0044333d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044333f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00443345: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00443348: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x44334du); f_005fb300();
    /* 0044334d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044334f: je 0x443371 */ if (fZ) goto L_00443371;
L_00443351:; BB(0x00443351);
    /* 00443351: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00443353: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00443359: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0044335c: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x443361u); f_005fb300();
    /* 00443361: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00443364: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00443367: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443369: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044336c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0044336f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443371u); call_ind(t); }
L_00443371:; BB(0x00443371);
    /* 00443371: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00443378: jmp 0x443383 */ goto L_00443383;
L_0044337a:; BB(0x0044337a);
    /* 0044337a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044337d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00443380: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00443383:; BB(0x00443383);
    /* 00443383: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443387: jge 0x4433c9 */ if ((fS==fO)) goto L_004433c9;
L_00443389:; BB(0x00443389);
    /* 00443389: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044338c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044338f: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00443393: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443396: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443399: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0044339d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044339f: mov ecx, edx */ r_ecx = r_edx;
    /* 004433a1: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004433a4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4433a6u); call_ind(t); }
    /* 004433a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004433a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004433ac: mov edx, dword ptr [ecx + eax*4 + 0xb4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 004433b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004433b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004433b9: mov ecx, dword ptr [ecx + eax*4 + 0xb4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 004433c0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004433c2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004433c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4433c7u); call_ind(t); }
    /* 004433c7: jmp 0x44337a */ goto L_0044337a;
L_004433c9:; BB(0x004433c9);
    /* 004433c9: mov esp, ebp */ r_esp = r_ebp;
    /* 004433cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004433cc: ret  */ FN_RET(0x00443300); r_esp += 4; return;
}

void f_004433d0(void) /* sub_4433D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004433d0);
    /* 004433d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004433d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004433d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004433d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004433d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004433da: call 0x442850 */ r_esp -= 4; W32(r_esp, 0x4433dfu); f_00442850();
    /* 004433df: mov eax, dword ptr [0x7906f0] */ r_eax = R32((u32)(0x7906f0u));
    /* 004433e4: mov byte ptr [eax + 0x25e], 1 */ W8((u32)(r_eax+0x25eu), 0x1u);
    /* 004433eb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004433ed: mov ecx, dword ptr [0x7906ec] */ r_ecx = R32((u32)(0x7906ecu));
    /* 004433f3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004433f6: mov eax, dword ptr [0x7906ec] */ r_eax = R32((u32)(0x7906ecu));
    /* 004433fb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004433fe: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00443400: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00443403: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443405u); call_ind(t); }
    /* 00443405: mov esp, ebp */ r_esp = r_ebp;
    /* 00443407: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443408: ret  */ FN_RET(0x004433d0); r_esp += 4; return;
}

