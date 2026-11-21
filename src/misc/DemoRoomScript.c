#include "protos.h"

void f_0057a370(void) /* DemoRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a370);
    /* 0057a370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a371: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a373: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a376: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a379: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a37c: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x57a381u); f_005fc360();
    /* 0057a381: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0057a384: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0057a388: ja 0x57a415 */ if ((!fC&&!fZ)) goto L_0057a415;
L_0057a38e:; BB(0x0057a38e);
    /* 0057a38e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057a391: jmp dword ptr [eax*4 + 0x57a41c] */ { u32 t = R32((u32)(r_eax*4+0x57a41cu)); switch (t) { case 0x57a398u: goto L_0057a398; case 0x57a3abu: goto L_0057a3ab; case 0x57a3f0u: goto L_0057a3f0; case 0x57a40eu: goto L_0057a40e; default: UNSUP(0x0057a391, "jump table entry is not a known target"); } }
L_0057a398:; BB(0x0057a398);
    /* 0057a398: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a39a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a39c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a39f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057a3a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a3a4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0057a3a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57a3a9u); call_ind(t); }
    /* 0057a3a9: jmp 0x57a415 */ goto L_0057a415;
L_0057a3ab:; BB(0x0057a3ab);
    /* 0057a3ab: cmp dword ptr [0x793570], -1 */ {  u32 a = R32((u32)(0x793570u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a3b2: jne 0x57a3c7 */ if (!fZ) goto L_0057a3c7;
L_0057a3b4:; BB(0x0057a3b4);
    /* 0057a3b4: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a3b6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a3b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a3bb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057a3bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a3c0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0057a3c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57a3c5u); call_ind(t); }
    /* 0057a3c5: jmp 0x57a3ee */ goto L_0057a3ee;
L_0057a3c7:; BB(0x0057a3c7);
    /* 0057a3c7: cmp dword ptr [0x793570], 0 */ {  u32 a = R32((u32)(0x793570u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057a3ce: jl 0x57a3dd */ if ((fS!=fO)) goto L_0057a3dd;
L_0057a3d0:; BB(0x0057a3d0);
    /* 0057a3d0: mov ecx, dword ptr [0x793468] */ r_ecx = R32((u32)(0x793468u));
    /* 0057a3d6: call 0x579fc0 */ r_esp -= 4; W32(r_esp, 0x57a3dbu); f_00579fc0();
    /* 0057a3db: jmp 0x57a3ee */ goto L_0057a3ee;
L_0057a3dd:; BB(0x0057a3dd);
    /* 0057a3dd: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a3df: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a3e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a3e4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057a3e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a3e9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0057a3ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57a3eeu); call_ind(t); }
L_0057a3ee:; BB(0x0057a3ee);
    /* 0057a3ee: jmp 0x57a415 */ goto L_0057a415;
L_0057a3f0:; BB(0x0057a3f0);
    /* 0057a3f0: mov ecx, dword ptr [0x793468] */ r_ecx = R32((u32)(0x793468u));
    /* 0057a3f6: call 0x579c90 */ r_esp -= 4; W32(r_esp, 0x57a3fbu); f_00579c90();
    /* 0057a3fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a3fd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a3ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a402: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057a404: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a407: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0057a40a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57a40cu); call_ind(t); }
    /* 0057a40c: jmp 0x57a415 */ goto L_0057a415;
L_0057a40e:; BB(0x0057a40e);
    /* 0057a40e: mov byte ptr [0x79346c], 1 */ W8((u32)(0x79346cu), 0x1u);
L_0057a415:; BB(0x0057a415);
    /* 0057a415: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a417: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a418: ret  */ FN_RET(0x0057a370); r_esp += 4; return;
}

