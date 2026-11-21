#include "protos.h"

void f_0058afb0(void) /* KenoDialogButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058afb0);
    /* 0058afb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058afb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058afb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058afb6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0058afb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058afbc: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x58afc1u); f_005f5400();
    /* 0058afc1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0058afc4: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0058afc8: ja 0x58b05d */ if ((!fC&&!fZ)) goto L_0058b05d;
L_0058afce:; BB(0x0058afce);
    /* 0058afce: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058afd1: jmp dword ptr [eax*4 + 0x58b064] */ { u32 t = R32((u32)(r_eax*4+0x58b064u)); switch (t) { case 0x58afd8u: goto L_0058afd8; case 0x58afe5u: goto L_0058afe5; case 0x58aff2u: goto L_0058aff2; case 0x58afffu: goto L_0058afff; case 0x58b052u: goto L_0058b052; default: UNSUP(0x0058afd1, "jump table entry is not a known target"); } }
L_0058afd8:; BB(0x0058afd8);
    /* 0058afd8: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058afde: call 0x58acf0 */ r_esp -= 4; W32(r_esp, 0x58afe3u); f_0058acf0();
    /* 0058afe3: jmp 0x58b05d */ goto L_0058b05d;
L_0058afe5:; BB(0x0058afe5);
    /* 0058afe5: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058afeb: call 0x58a8c0 */ r_esp -= 4; W32(r_esp, 0x58aff0u); f_0058a8c0();
    /* 0058aff0: jmp 0x58b05d */ goto L_0058b05d;
L_0058aff2:; BB(0x0058aff2);
    /* 0058aff2: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058aff8: call 0x58aa10 */ r_esp -= 4; W32(r_esp, 0x58affdu); f_0058aa10();
    /* 0058affd: jmp 0x58b05d */ goto L_0058b05d;
L_0058afff:; BB(0x0058afff);
    /* 0058afff: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058b005: call 0x58a690 */ r_esp -= 4; W32(r_esp, 0x58b00au); f_0058a690();
    /* 0058b00a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058b00c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058b00f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058b011: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058b014: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 0058b01a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58b01cu); call_ind(t); }
    /* 0058b01c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058b01f: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0058b022: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x58b027u); f_005f87d0();
    /* 0058b027: cmp dword ptr [0x79357c], 0 */ {  u32 a = R32((u32)(0x79357cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058b02e: je 0x58b03b */ if (fZ) goto L_0058b03b;
L_0058b030:; BB(0x0058b030);
    /* 0058b030: mov ecx, dword ptr [0x79357c] */ r_ecx = R32((u32)(0x79357cu));
    /* 0058b036: call 0x583a20 */ r_esp -= 4; W32(r_esp, 0x58b03bu); f_00583a20();
L_0058b03b:; BB(0x0058b03b);
    /* 0058b03b: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058b041: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x58b046u); f_005f8990();
    /* 0058b046: mov dword ptr [0x793584], 0 */ W32((u32)(0x793584u), 0x0u);
    /* 0058b050: jmp 0x58b05d */ goto L_0058b05d;
L_0058b052:; BB(0x0058b052);
    /* 0058b052: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058b058: call 0x58a750 */ r_esp -= 4; W32(r_esp, 0x58b05du); f_0058a750();
L_0058b05d:; BB(0x0058b05d);
    /* 0058b05d: mov esp, ebp */ r_esp = r_ebp;
    /* 0058b05f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058b060: ret  */ FN_RET(0x0058afb0); r_esp += 4; return;
}

