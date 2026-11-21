#include "protos.h"

void f_00443a90(void) /* CycleHorse::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443a90);
    /* 00443a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00443a93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443a94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00443a97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00443a9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443a9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443a9e: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x443aa3u); f_006010a0();
    /* 00443aa3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443aa6: mov dword ptr [ecx], 0x6b8404 */ W32((u32)(r_ecx), 0x6b8404u);
    /* 00443aac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443aaf: mov esp, ebp */ r_esp = r_ebp;
    /* 00443ab1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443ab2: ret 4 */ FN_RET(0x00443a90); r_esp += 8; return;
}

void f_00443ae0(void) /* CycleHorse::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443ae0);
    /* 00443ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00443ae3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443ae6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00443ae9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443aec: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 00443af0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443af2: jne 0x443af9 */ if (!fZ) goto L_00443af9;
L_00443af4:; BB(0x00443af4);
    /* 00443af4: jmp 0x443b8f */ goto L_00443b8f;
L_00443af9:; BB(0x00443af9);
    /* 00443af9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443afc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00443afe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443b01: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00443b04: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x443b06u); call_ind(t); }
    /* 00443b06: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00443b09: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443b0c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00443b0f: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x443b14u); f_005eb220();
    /* 00443b14: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443b17: je 0x443b8f */ if (fZ) goto L_00443b8f;
L_00443b19:; BB(0x00443b19);
    /* 00443b19: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443b1c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443b1f: cmp edx, dword ptr [ecx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443b22: jne 0x443b50 */ if (!fZ) goto L_00443b50;
L_00443b24:; BB(0x00443b24);
    /* 00443b24: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443b27: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00443b2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443b2b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443b2e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00443b31: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443b34: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00443b37: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443b39: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00443b3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443b41u); call_ind(t); }
    /* 00443b41: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443b44: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00443b46: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443b49: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00443b4c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443b4eu); call_ind(t); }
    /* 00443b4e: jmp 0x443b8f */ goto L_00443b8f;
L_00443b50:; BB(0x00443b50);
    /* 00443b50: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443b53: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00443b56: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x443b5bu); f_005f5400();
    /* 00443b5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443b5c: mov ecx, dword ptr [0x7906f0] */ r_ecx = R32((u32)(0x7906f0u));
    /* 00443b62: call 0x445690 */ r_esp -= 4; W32(r_esp, 0x443b67u); f_00445690();
    /* 00443b67: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443b6a: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00443b6d: mov dword ptr [ecx + 0x178], eax */ W32((u32)(r_ecx+0x178u), r_eax);
    /* 00443b73: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443b76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00443b77: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443b7a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00443b7d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443b80: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00443b83: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00443b85: mov ecx, eax */ r_ecx = r_eax;
    /* 00443b87: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00443b8d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443b8fu); call_ind(t); }
L_00443b8f:; BB(0x00443b8f);
    /* 00443b8f: mov esp, ebp */ r_esp = r_ebp;
    /* 00443b91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443b92: ret  */ FN_RET(0x00443ae0); r_esp += 4; return;
}

