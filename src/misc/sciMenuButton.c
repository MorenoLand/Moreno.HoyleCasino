#include "protos.h"

void f_005fc680(void) /* sciMenuButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc680);
    /* 005fc680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc681: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc683: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc685: push 0x6aa5a8 */ { u32 v = 0x6aa5a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc68a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fc690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc691: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc692: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fc697: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fc699: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc69a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fc69d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fc6a3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005fc6a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc6a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc6aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc6ac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc6af: call 0x603120 */ r_esp -= 4; W32(r_esp, 0x5fc6b4u); f_00603120();
    /* 005fc6b4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fc6bb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc6be: mov dword ptr [eax], 0x6d6ec4 */ W32((u32)(r_eax), 0x6d6ec4u);
    /* 005fc6c4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc6c7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fc6ca: mov dword ptr [ecx + 0x1ec], edx */ W32((u32)(r_ecx+0x1ecu), r_edx);
    /* 005fc6d0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc6d3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fc6d6: mov dword ptr [eax + 0x1e8], ecx */ W32((u32)(r_eax+0x1e8u), r_ecx);
    /* 005fc6dc: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005fc6e2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fc6e4: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fc6ea: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005fc6ed: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fc6efu); call_ind(t); }
    /* 005fc6ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc6f0: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005fc6f5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fc6f7: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fc6fd: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005fc700: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fc702u); call_ind(t); }
    /* 005fc702: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc703: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fc709: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fc70b: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fc711: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005fc714: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fc716u); call_ind(t); }
    /* 005fc716: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc717: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc71a: call 0x603190 */ r_esp -= 4; W32(r_esp, 0x5fc71fu); f_00603190();
    /* 005fc71f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fc726: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc729: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc72c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc733: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fc734: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc736: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc737: ret 8 */ FN_RET(0x005fc680); r_esp += 12; return;
}

void f_005fc760(void) /* sciMenuButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc760);
    /* 005fc760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc761: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fc767: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc76a: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 005fc770: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc771: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fc777: call 0x5f2920 */ r_esp -= 4; W32(r_esp, 0x5fc77cu); f_005f2920();
    /* 005fc77c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005fc77f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc781: je 0x5fc79a */ if (fZ) goto L_005fc79a;
L_005fc783:; BB(0x005fc783);
    /* 005fc783: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc786: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 005fc78c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc78d: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fc793: call 0x5f2840 */ r_esp -= 4; W32(r_esp, 0x5fc798u); f_005f2840();
    /* 005fc798: jmp 0x5fc7e4 */ goto L_005fc7e4;
L_005fc79a:; BB(0x005fc79a);
    /* 005fc79a: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fc7a0: call 0x5f2870 */ r_esp -= 4; W32(r_esp, 0x5fc7a5u); f_005f2870();
    /* 005fc7a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc7a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc7a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc7ac: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 005fc7b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc7b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc7b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fc7b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc7bb: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005fc7be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fc7c0u); call_ind(t); }
    /* 005fc7c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc7c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc7c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fc7c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc7c9: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005fc7cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fc7ceu); call_ind(t); }
    /* 005fc7ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc7cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc7d2: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 005fc7d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc7d9: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fc7df: call 0x5f2670 */ r_esp -= 4; W32(r_esp, 0x5fc7e4u); f_005f2670();
L_005fc7e4:; BB(0x005fc7e4);
    /* 005fc7e4: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc7e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc7e7: ret  */ FN_RET(0x005fc760); r_esp += 4; return;
}

