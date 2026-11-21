#include "protos.h"

void f_006060a0(void) /* sciRadioButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006060a0);
    /* 006060a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006060a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006060a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006060a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006060a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006060aa: call 0x5ffbb0 */ r_esp -= 4; W32(r_esp, 0x6060afu); f_005ffbb0();
    /* 006060af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006060b2: mov dword ptr [eax], 0x6d7bec */ W32((u32)(r_eax), 0x6d7becu);
    /* 006060b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006060bb: mov dword ptr [ecx + 0x208], 0 */ W32((u32)(r_ecx+0x208u), 0x0u);
    /* 006060c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006060c8: mov byte ptr [edx + 0x20c], 0 */ W8((u32)(r_edx+0x20cu), 0x0u);
    /* 006060cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006060d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006060d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006060d5: ret  */ FN_RET(0x006060a0); r_esp += 4; return;
}

void f_00606140(void) /* sciRadioButton::vfunc61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606140);
    /* 00606140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606141: mov ebp, esp */ r_ebp = r_esp;
    /* 00606143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00606147: movzx eax, byte ptr [0x796a40] */ r_eax = (u32)R8((u32)(0x796a40u));
    /* 0060614e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606150: jne 0x60616e */ if (!fZ) goto L_0060616e;
L_00606152:; BB(0x00606152);
    /* 00606152: mov byte ptr [0x796a40], 1 */ W8((u32)(0x796a40u), 0x1u);
    /* 00606159: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060615c: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 00606162: call 0x6067e0 */ r_esp -= 4; W32(r_esp, 0x606167u); f_006067e0();
    /* 00606167: mov byte ptr [0x796a40], 0 */ W8((u32)(0x796a40u), 0x0u);
L_0060616e:; BB(0x0060616e);
    /* 0060616e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606171: call 0x600160 */ r_esp -= 4; W32(r_esp, 0x606176u); f_00600160();
    /* 00606176: mov esp, ebp */ r_esp = r_ebp;
    /* 00606178: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606179: ret  */ FN_RET(0x00606140); r_esp += 4; return;
}

void f_006064e0(void) /* sciradiobutton::func_006064e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006064e0);
    /* 006064e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006064e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006064e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006064e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006064e9: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006064ed: jle 0x6064fc */ if ((fZ||fS!=fO)) goto L_006064fc;
L_006064ef:; BB(0x006064ef);
    /* 006064ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006064f2: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x6064f7u); f_006063e0();
    /* 006064f7: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006064fa: jl 0x606513 */ if ((fS!=fO)) goto L_00606513;
L_006064fc:; BB(0x006064fc);
    /* 006064fc: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 00606501: push 0x6d7dc4 */ { u32 v = 0x6d7dc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00606506: push 0x6d7da4 */ { u32 v = 0x6d7da4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060650b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x606510u); f_005e9f20();
    /* 00606510: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00606513:; BB(0x00606513);
    /* 00606513: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00606516: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606517: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060651a: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x60651fu); f_00606350();
    /* 0060651f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606521: je 0x606564 */ if (fZ) goto L_00606564;
L_00606523:; BB(0x00606523);
    /* 00606523: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00606526: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00606527: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060652a: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x60652fu); f_00606350();
    /* 0060652f: mov ecx, eax */ r_ecx = r_eax;
    /* 00606531: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x606536u); f_006026d0();
    /* 00606536: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00606539: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060653b: je 0x606564 */ if (fZ) goto L_00606564;
L_0060653d:; BB(0x0060653d);
    /* 0060653d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606540: call 0x6067e0 */ r_esp -= 4; W32(r_esp, 0x606545u); f_006067e0();
    /* 00606545: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00606548: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606549: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060654c: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x606551u); f_00606350();
    /* 00606551: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00606554: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00606557: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00606559: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060655c: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 00606562: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x606564u); call_ind(t); }
L_00606564:; BB(0x00606564);
    /* 00606564: mov esp, ebp */ r_esp = r_ebp;
    /* 00606566: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606567: ret 4 */ FN_RET(0x006064e0); r_esp += 8; return;
}

