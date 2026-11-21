#include "protos.h"

void f_0045f6a0(void) /* PaiGowState::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f6a0);
    /* 0045f6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f6a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f6a5: push 0x69f358 */ { u32 v = 0x69f358u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f6aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045f6b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f6b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f6b2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045f6b7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045f6b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f6ba: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045f6bd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0045f6c3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045f6c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f6c9: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x45f6ceu); f_005e9e20();
    /* 0045f6ce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045f6d5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f6d8: mov dword ptr [eax], 0x6ba2fc */ W32((u32)(r_eax), 0x6ba2fcu);
    /* 0045f6de: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f6e1: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 0045f6e8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f6eb: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0045f6f2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f6f5: mov dword ptr [eax + 0x108], 0xffffffff */ W32((u32)(r_eax+0x108u), 0xffffffffu);
    /* 0045f6ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f702: mov dword ptr [ecx + 0x10c], 0xffffffff */ W32((u32)(r_ecx+0x10cu), 0xffffffffu);
    /* 0045f70c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f70f: mov dword ptr [edx + 0x12c], 0 */ W32((u32)(r_edx+0x12cu), 0x0u);
    /* 0045f719: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f71b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x45f720u); f_0062fbf0();
    /* 0045f720: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045f723: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f726: mov dword ptr [ecx + 0x110], eax */ W32((u32)(r_ecx+0x110u), r_eax);
    /* 0045f72c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f72f: mov dword ptr [edx + 0x118], 0xffffffff */ W32((u32)(r_edx+0x118u), 0xffffffffu);
    /* 0045f739: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f73c: mov dword ptr [eax + 0x11c], 0xffffffff */ W32((u32)(r_eax+0x11cu), 0xffffffffu);
    /* 0045f746: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f749: mov dword ptr [ecx + 0x120], 0xffffffff */ W32((u32)(r_ecx+0x120u), 0xffffffffu);
    /* 0045f753: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045f75a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f75d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045f760: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045f767: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045f768: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f76a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f76b: ret  */ FN_RET(0x0045f6a0); r_esp += 4; return;
}

void f_0045f770(void) /* PaiGowState::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f770);
    /* 0045f770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f771: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f773: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f775: push 0x69f37b */ { u32 v = 0x69f37bu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f77a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045f780: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f781: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045f784: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045f789: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045f78b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f78c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045f78f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0045f795: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045f798: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045f79b: mov dword ptr [eax], 0x6ba2fc */ W32((u32)(r_eax), 0x6ba2fcu);
    /* 0045f7a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045f7a8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045f7ab: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0045f7ae: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0045f7b1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045f7b4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045f7b7: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f7bb: je 0x45f7d0 */ if (fZ) goto L_0045f7d0;
L_0045f7bd:; BB(0x0045f7bd);
    /* 0045f7bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f7bf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f7c2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045f7c4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f7c7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045f7c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45f7cbu); call_ind(t); }
    /* 0045f7cb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045f7ce: jmp 0x45f7d7 */ goto L_0045f7d7;
L_0045f7d0:; BB(0x0045f7d0);
    /* 0045f7d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0045f7d7:; BB(0x0045f7d7);
    /* 0045f7d7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045f7da: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0045f7dd: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0045f7e0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045f7e3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045f7e6: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f7ea: je 0x45f7ff */ if (fZ) goto L_0045f7ff;
L_0045f7ec:; BB(0x0045f7ec);
    /* 0045f7ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f7ee: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045f7f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045f7f3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045f7f6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045f7f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45f7fau); call_ind(t); }
    /* 0045f7fa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0045f7fd: jmp 0x45f806 */ goto L_0045f806;
L_0045f7ff:; BB(0x0045f7ff);
    /* 0045f7ff: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0045f806:; BB(0x0045f806);
    /* 0045f806: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045f80d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045f810: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x45f815u); f_005e9e40();
    /* 0045f815: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045f818: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045f81f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045f820: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f822: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f823: ret  */ FN_RET(0x0045f770); r_esp += 4; return;
}

void f_00461f80(void) /* paigowstate::func_00461f80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00461f80);
    /* 00461f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00461f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00461f83: sub esp, 0x7d4 */ {  u32 a = r_esp; u32 b = 0x7d4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00461f89: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00461f8e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00461f90: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00461f93: mov dword ptr [ebp - 0x7d4], ecx */ W32((u32)(r_ebp+0xfffff82cu), r_ecx);
    /* 00461f99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00461f9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461f9d: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 00461fa3: call 0x452500 */ r_esp -= 4; W32(r_esp, 0x461fa8u); f_00452500();
    /* 00461fa8: mov word ptr [ebp - 0x10c], ax */ W16((u32)(r_ebp+0xfffffef4u), (u16)r_eax);
    /* 00461faf: movsx ecx, word ptr [ebp - 0x10c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef4u));
    /* 00461fb6: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00461fb9: jne 0x461fd2 */ if (!fZ) goto L_00461fd2;
L_00461fbb:; BB(0x00461fbb);
    /* 00461fbb: push 0x39f */ { u32 v = 0x39fu; r_esp -= 4; W32(r_esp, v); }
    /* 00461fc0: push 0x6ba5d0 */ { u32 v = 0x6ba5d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461fc5: push 0x6b681c */ { u32 v = 0x6b681cu; r_esp -= 4; W32(r_esp, v); }
    /* 00461fca: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x461fcfu); f_005e9f20();
    /* 00461fcf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00461fd2:; BB(0x00461fd2);
    /* 00461fd2: movsx eax, word ptr [ebp - 0x10c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffef4u));
    /* 00461fd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00461fda: push 0x6ba5b0 */ { u32 v = 0x6ba5b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00461fdf: lea ecx, [ebp - 0x350] */ r_ecx = (u32)(r_ebp+0xfffffcb0u);
    /* 00461fe5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00461fe6: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x461fecu); call_ind(t); }
    /* 00461fec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461fef: lea edx, [ebp - 0x350] */ r_edx = (u32)(r_ebp+0xfffffcb0u);
    /* 00461ff5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00461ff6: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x461ffbu); f_0062fde0();
    /* 00461ffb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00461ffe: lea eax, [ebp - 0x7d0] */ r_eax = (u32)(r_ebp+0xfffff830u);
    /* 00462004: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462005: mov cx, word ptr [ebp - 0x10c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffef4u))) & 0xffffu);
    /* 0046200c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046200d: mov ecx, dword ptr [ebp - 0x7d4] */ r_ecx = R32((u32)(r_ebp+0xfffff82cu));
    /* 00462013: call 0x4620c0 */ r_esp -= 4; W32(r_esp, 0x462018u); f_004620c0();
    /* 00462018: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0046201e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046201f: mov ax, word ptr [ebp - 0x10c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffef4u))) & 0xffffu);
    /* 00462026: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462027: mov ecx, dword ptr [ebp - 0x7d4] */ r_ecx = R32((u32)(r_ebp+0xfffff82cu));
    /* 0046202d: call 0x462120 */ r_esp -= 4; W32(r_esp, 0x462032u); f_00462120();
    /* 00462032: lea ecx, [ebp - 0x310] */ r_ecx = (u32)(r_ebp+0xfffffcf0u);
    /* 00462038: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462039: mov dx, word ptr [ebp - 0x10c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffef4u))) & 0xffffu);
    /* 00462040: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462041: mov ecx, dword ptr [ebp - 0x7d4] */ r_ecx = R32((u32)(r_ebp+0xfffff82cu));
    /* 00462047: call 0x462180 */ r_esp -= 4; W32(r_esp, 0x46204cu); f_00462180();
    /* 0046204c: lea eax, [ebp - 0x310] */ r_eax = (u32)(r_ebp+0xfffffcf0u);
    /* 00462052: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462053: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 00462059: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046205a: lea edx, [ebp - 0x7d0] */ r_edx = (u32)(r_ebp+0xfffff830u);
    /* 00462060: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462061: push 0x6ba58c */ { u32 v = 0x6ba58cu; r_esp -= 4; W32(r_esp, v); }
    /* 00462066: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46206bu); f_00630f40();
    /* 0046206b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046206e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046206f: lea eax, [ebp - 0x750] */ r_eax = (u32)(r_ebp+0xfffff8b0u);
    /* 00462075: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462076: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x46207cu); call_ind(t); }
    /* 0046207c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046207f: lea ecx, [ebp - 0x750] */ r_ecx = (u32)(r_ebp+0xfffff8b0u);
    /* 00462085: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462086: push 0x6b678c */ { u32 v = 0x6b678cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046208b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x462090u); f_00630f40();
    /* 00462090: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462093: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462094: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00462096: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0046209c: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x4620a1u); f_0057be80();
    /* 004620a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004620a4: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004620a6: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4620abu); f_00686d72();
    /* 004620ab: mov esp, ebp */ r_esp = r_ebp;
    /* 004620ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004620ae: ret 4 */ FN_RET(0x00461f80); r_esp += 8; return;
}

