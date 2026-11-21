#include "protos.h"

void f_00689750(void) /* Application::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689750);
    /* 00689750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689751: mov ebp, esp */ r_ebp = r_esp;
    /* 00689753: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00689755: push 0x6ade28 */ { u32 v = 0x6ade28u; r_esp -= 4; W32(r_esp, v); }
    /* 0068975a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00689760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689761: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00689764: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00689769: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068976b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068976c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068976f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00689775: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00689778: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068977b: call 0x624e80 */ r_esp -= 4; W32(r_esp, 0x689780u); f_00624e80();
    /* 00689780: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00689787: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068978a: mov dword ptr [eax], 0x6e55c0 */ W32((u32)(r_eax), 0x6e55c0u);
    /* 00689790: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00689792: call dword ptr [0x6b2500] */ { u32 t = R32((u32)(0x6b2500u)); r_esp -= 4; W32(r_esp, 0x689798u); call_ind(t); }
    /* 00689798: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0068979b: call dword ptr [0x6b2490] */ { u32 t = R32((u32)(0x6b2490u)); r_esp -= 4; W32(r_esp, 0x6897a1u); call_ind(t); }
    /* 006897a1: mov dword ptr [0x1631bb4], eax */ W32((u32)(0x1631bb4u), r_eax);
    /* 006897a6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006897a8: mov eax, dword ptr [0x1631bb4] */ r_eax = R32((u32)(0x1631bb4u));
    /* 006897ad: mov edx, 0x10 */ r_edx = 0x10u;
    /* 006897b2: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006897b4: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 006897b7: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006897b9: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006897bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006897bc: call 0x686c60 */ r_esp -= 4; W32(r_esp, 0x6897c1u); f_00686c60();
    /* 006897c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006897c4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006897c7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006897ca: mov dword ptr [0x1631bb8], eax */ W32((u32)(0x1631bb8u), r_eax);
    /* 006897cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006897d1: mov eax, dword ptr [0x1631bb4] */ r_eax = R32((u32)(0x1631bb4u));
    /* 006897d6: mov edx, 0x10 */ r_edx = 0x10u;
    /* 006897db: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006897dd: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 006897e0: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006897e2: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006897e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006897e5: call 0x686c60 */ r_esp -= 4; W32(r_esp, 0x6897eau); f_00686c60();
    /* 006897ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006897ed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006897f0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006897f3: mov dword ptr [0x1631bbc], eax */ W32((u32)(0x1631bbcu), r_eax);
    /* 006897f8: mov ecx, dword ptr [0x1631bb4] */ r_ecx = R32((u32)(0x1631bb4u));
    /* 006897fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006897ff: call 0x686c60 */ r_esp -= 4; W32(r_esp, 0x689804u); f_00686c60();
    /* 00689804: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689807: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0068980a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068980d: mov dword ptr [0x1631bc0], edx */ W32((u32)(0x1631bc0u), r_edx);
    /* 00689813: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0068981a: jmp 0x689825 */ goto L_00689825;
L_0068981c:; BB(0x0068981c);
    /* 0068981c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068981f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00689822: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00689825:; BB(0x00689825);
    /* 00689825: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00689828: cmp ecx, dword ptr [0x1631bb4] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x1631bb4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068982e: jge 0x689885 */ if ((fS==fO)) goto L_00689885;
L_00689830:; BB(0x00689830);
    /* 00689830: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00689833: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00689836: add edx, dword ptr [0x1631bb8] */ {  u32 a = r_edx; u32 b = R32((u32)(0x1631bb8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068983c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068983d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00689840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689841: call dword ptr [0x6b2494] */ { u32 t = R32((u32)(0x6b2494u)); r_esp -= 4; W32(r_esp, 0x689847u); call_ind(t); }
    /* 00689847: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0068984a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068984d: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00689850: add ecx, dword ptr [0x1631bbc] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x1631bbcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00689856: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689857: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068985a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068985b: call dword ptr [0x6b2494] */ { u32 t = R32((u32)(0x6b2494u)); r_esp -= 4; W32(r_esp, 0x689861u); call_ind(t); }
    /* 00689861: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00689864: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689868: jne 0x689877 */ if (!fZ) goto L_00689877;
L_0068986a:; BB(0x0068986a);
    /* 0068986a: mov eax, dword ptr [0x1631bc0] */ r_eax = R32((u32)(0x1631bc0u));
    /* 0068986f: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00689872: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
    /* 00689875: jmp 0x689883 */ goto L_00689883;
L_00689877:; BB(0x00689877);
    /* 00689877: mov ecx, dword ptr [0x1631bc0] */ r_ecx = R32((u32)(0x1631bc0u));
    /* 0068987d: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00689880: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
L_00689883:; BB(0x00689883);
    /* 00689883: jmp 0x68981c */ goto L_0068981c;
L_00689885:; BB(0x00689885);
    /* 00689885: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068988c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068988f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00689892: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00689899: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068989a: mov esp, ebp */ r_esp = r_ebp;
    /* 0068989c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068989d: ret  */ FN_RET(0x00689750); r_esp += 4; return;
}

void f_006898a0(void) /* Application::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006898a0);
    /* 006898a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006898a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006898a3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006898a6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006898a9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006898ac: mov dword ptr [eax], 0x6e55c0 */ W32((u32)(r_eax), 0x6e55c0u);
    /* 006898b2: call dword ptr [0x6b24fc] */ { u32 t = R32((u32)(0x6b24fcu)); r_esp -= 4; W32(r_esp, 0x6898b8u); call_ind(t); }
    /* 006898b8: mov ecx, dword ptr [0x1631bb8] */ r_ecx = R32((u32)(0x1631bb8u));
    /* 006898be: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006898c1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006898c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006898c5: call 0x68731e */ r_esp -= 4; W32(r_esp, 0x6898cau); f_0068731e();
    /* 006898ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006898cd: mov eax, dword ptr [0x1631bbc] */ r_eax = R32((u32)(0x1631bbcu));
    /* 006898d2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006898d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006898d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006898d9: call 0x68731e */ r_esp -= 4; W32(r_esp, 0x6898deu); f_0068731e();
    /* 006898de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006898e1: mov edx, dword ptr [0x1631bc0] */ r_edx = R32((u32)(0x1631bc0u));
    /* 006898e7: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006898ea: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006898ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006898ee: call 0x68731e */ r_esp -= 4; W32(r_esp, 0x6898f3u); f_0068731e();
    /* 006898f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006898f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006898f9: call 0x624ef0 */ r_esp -= 4; W32(r_esp, 0x6898feu); f_00624ef0();
    /* 006898fe: mov esp, ebp */ r_esp = r_ebp;
    /* 00689900: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689901: ret  */ FN_RET(0x006898a0); r_esp += 4; return;
}

void f_00689910(void) /* Application::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689910);
    /* 00689910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689911: mov ebp, esp */ r_ebp = r_esp;
    /* 00689913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689914: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00689917: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068991a: call 0x624f10 */ r_esp -= 4; W32(r_esp, 0x68991fu); f_00624f10();
    /* 0068991f: mov esp, ebp */ r_esp = r_ebp;
    /* 00689921: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689922: ret  */ FN_RET(0x00689910); r_esp += 4; return;
}

void f_00689930(void) /* Application::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689930);
    /* 00689930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689931: mov ebp, esp */ r_ebp = r_esp;
    /* 00689933: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00689935: push 0x6ade5f */ { u32 v = 0x6ade5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0068993a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00689940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689941: sub esp, 0x12c */ {  u32 a = r_esp; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00689947: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068994c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068994e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00689951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689952: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00689955: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068995b: mov dword ptr [ebp - 0x130], ecx */ W32((u32)(r_ebp+0xfffffed0u), r_ecx);
    /* 00689961: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00689966: lea eax, [ebp - 0x11c] */ r_eax = (u32)(r_ebp+0xfffffee4u);
    /* 0068996c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068996d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x689972u); f_00686d8e();
    /* 00689972: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689975: push 0x79542c */ { u32 v = 0x79542cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068997a: lea ecx, [ebp - 0x11c] */ r_ecx = (u32)(r_ebp+0xfffffee4u);
    /* 00689980: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689981: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x689986u); f_00686ec6();
    /* 00689986: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689989: push 0x21c */ { u32 v = 0x21cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068998e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x689993u); f_00686d82();
    /* 00689993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689996: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 0068999c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006899a3: cmp dword ptr [ebp - 0x124], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffedcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006899aa: je 0x6899cb */ if (fZ) goto L_006899cb;
L_006899ac:; BB(0x006899ac);
    /* 006899ac: push 0x6e55e8 */ { u32 v = 0x6e55e8u; r_esp -= 4; W32(r_esp, v); }
    /* 006899b1: lea edx, [ebp - 0x11c] */ r_edx = (u32)(r_ebp+0xfffffee4u);
    /* 006899b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006899b8: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 006899be: call 0x689f80 */ r_esp -= 4; W32(r_esp, 0x6899c3u); f_00689f80();
    /* 006899c3: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 006899c9: jmp 0x6899d5 */ goto L_006899d5;
L_006899cb:; BB(0x006899cb);
    /* 006899cb: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
L_006899d5:; BB(0x006899d5);
    /* 006899d5: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 006899db: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 006899e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006899e8: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 006899ee: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 006899f4: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 006899f7: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 006899fd: call 0x625080 */ r_esp -= 4; W32(r_esp, 0x689a02u); f_00625080();
    /* 00689a02: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00689a04: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x689a09u); f_00686d82();
    /* 00689a09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689a0c: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 00689a12: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00689a19: cmp dword ptr [ebp - 0x12c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffed4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689a20: je 0x689a35 */ if (fZ) goto L_00689a35;
L_00689a22:; BB(0x00689a22);
    /* 00689a22: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00689a28: call 0x689db0 */ r_esp -= 4; W32(r_esp, 0x689a2du); f_00689db0();
    /* 00689a2d: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 00689a33: jmp 0x689a3f */ goto L_00689a3f;
L_00689a35:; BB(0x00689a35);
    /* 00689a35: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
L_00689a3f:; BB(0x00689a3f);
    /* 00689a3f: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 00689a45: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 00689a4b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00689a52: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00689a58: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 00689a5e: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00689a61: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00689a64: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00689a6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689a6c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00689a6f: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00689a71: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x689a76u); f_00686d72();
    /* 00689a76: mov esp, ebp */ r_esp = r_ebp;
    /* 00689a78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689a79: ret  */ FN_RET(0x00689930); r_esp += 4; return;
}

void f_00689a80(void) /* Application::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689a80);
    /* 00689a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00689a83: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00689a86: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00689a89: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00689a8c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00689a8f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00689a92: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00689a95: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00689a98: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689a9c: je 0x689ab1 */ if (fZ) goto L_00689ab1;
L_00689a9e:; BB(0x00689a9e);
    /* 00689a9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00689aa0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689aa3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00689aa5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689aa8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00689aaa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x689aacu); call_ind(t); }
    /* 00689aac: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00689aaf: jmp 0x689ab8 */ goto L_00689ab8;
L_00689ab1:; BB(0x00689ab1);
    /* 00689ab1: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00689ab8:; BB(0x00689ab8);
    /* 00689ab8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00689abb: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00689abe: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00689ac1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00689ac4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00689ac7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689acb: je 0x689ae0 */ if (fZ) goto L_00689ae0;
L_00689acd:; BB(0x00689acd);
    /* 00689acd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00689acf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00689ad2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00689ad4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00689ad7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00689ad9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x689adbu); call_ind(t); }
    /* 00689adb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00689ade: jmp 0x689ae7 */ goto L_00689ae7;
L_00689ae0:; BB(0x00689ae0);
    /* 00689ae0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00689ae7:; BB(0x00689ae7);
    /* 00689ae7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00689aea: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00689aed: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00689af0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00689af3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00689af6: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689afa: je 0x689b0f */ if (fZ) goto L_00689b0f;
L_00689afc:; BB(0x00689afc);
    /* 00689afc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00689afe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00689b01: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00689b03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00689b06: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00689b08: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x689b0au); call_ind(t); }
    /* 00689b0a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00689b0d: jmp 0x689b16 */ goto L_00689b16;
L_00689b0f:; BB(0x00689b0f);
    /* 00689b0f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00689b16:; BB(0x00689b16);
    /* 00689b16: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00689b19: call 0x625100 */ r_esp -= 4; W32(r_esp, 0x689b1eu); f_00625100();
    /* 00689b1e: mov esp, ebp */ r_esp = r_ebp;
    /* 00689b20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689b21: ret  */ FN_RET(0x00689a80); r_esp += 4; return;
}

void f_00689b30(void) /* Application::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689b30);
    /* 00689b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689b31: mov ebp, esp */ r_ebp = r_esp;
    /* 00689b33: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00689b36: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00689b39: movzx eax, byte ptr [0x7960cc] */ r_eax = (u32)R8((u32)(0x7960ccu));
    /* 00689b40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689b42: je 0x689b46 */ if (fZ) goto L_00689b46;
L_00689b44:; BB(0x00689b44);
    /* 00689b44: jmp 0x689b8f */ goto L_00689b8f;
L_00689b46:; BB(0x00689b46);
    /* 00689b46: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00689b49: call 0x6251a0 */ r_esp -= 4; W32(r_esp, 0x689b4eu); f_006251a0();
L_00689b4e:; BB(0x00689b4e);
    /* 00689b4e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00689b50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00689b52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00689b54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00689b56: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00689b59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689b5a: call dword ptr [0x6b23ec] */ { u32 t = R32((u32)(0x6b23ecu)); r_esp -= 4; W32(r_esp, 0x689b60u); call_ind(t); }
    /* 00689b60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689b62: je 0x689b7a */ if (fZ) goto L_00689b7a;
L_00689b64:; BB(0x00689b64);
    /* 00689b64: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00689b67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00689b68: call dword ptr [0x6b23e8] */ { u32 t = R32((u32)(0x6b23e8u)); r_esp -= 4; W32(r_esp, 0x689b6eu); call_ind(t); }
    /* 00689b6e: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 00689b71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689b72: call dword ptr [0x6b2430] */ { u32 t = R32((u32)(0x6b2430u)); r_esp -= 4; W32(r_esp, 0x689b78u); call_ind(t); }
    /* 00689b78: jmp 0x689b4e */ goto L_00689b4e;
L_00689b7a:; BB(0x00689b7a);
    /* 00689b7a: movzx ecx, byte ptr [0x15e55d3] */ r_ecx = (u32)R8((u32)(0x15e55d3u));
    /* 00689b81: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689b83: jne 0x689b8f */ if (!fZ) goto L_00689b8f;
L_00689b85:; BB(0x00689b85);
    /* 00689b85: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00689b87: call 0x5e9f00 */ r_esp -= 4; W32(r_esp, 0x689b8cu); f_005e9f00();
    /* 00689b8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00689b8f:; BB(0x00689b8f);
    /* 00689b8f: mov esp, ebp */ r_esp = r_ebp;
    /* 00689b91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689b92: ret  */ FN_RET(0x00689b30); r_esp += 4; return;
}

void f_00689ba0(void) /* Application::vfunc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689ba0);
    /* 00689ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00689ba3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00689ba6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00689ba9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00689bb0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00689bb7: jmp 0x689bc2 */ goto L_00689bc2;
L_00689bb9:; BB(0x00689bb9);
    /* 00689bb9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00689bbc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00689bbf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00689bc2:; BB(0x00689bc2);
    /* 00689bc2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00689bc5: cmp ecx, dword ptr [0x1631bb4] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x1631bb4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00689bcb: jge 0x689be9 */ if ((fS==fO)) goto L_00689be9;
L_00689bcd:; BB(0x00689bcd);
    /* 00689bcd: mov edx, dword ptr [0x1631bc0] */ r_edx = R32((u32)(0x1631bc0u));
    /* 00689bd3: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00689bd6: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00689bd9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689bdc: jne 0x689be7 */ if (!fZ) goto L_00689be7;
L_00689bde:; BB(0x00689bde);
    /* 00689bde: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689be1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00689be4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00689be7:; BB(0x00689be7);
    /* 00689be7: jmp 0x689bb9 */ goto L_00689bb9;
L_00689be9:; BB(0x00689be9);
    /* 00689be9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00689bec: mov esp, ebp */ r_esp = r_ebp;
    /* 00689bee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689bef: ret  */ FN_RET(0x00689ba0); r_esp += 4; return;
}

void f_00689bf0(void) /* Application::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689bf0);
    /* 00689bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00689bf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00689bf5: push 0x6ade92 */ { u32 v = 0x6ade92u; r_esp -= 4; W32(r_esp, v); }
    /* 00689bfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00689c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689c01: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00689c04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00689c09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00689c0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689c0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00689c0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00689c15: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00689c18: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00689c1d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x689c22u); f_00686d82();
    /* 00689c22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689c25: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00689c28: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00689c2f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689c33: je 0x689c42 */ if (fZ) goto L_00689c42;
L_00689c35:; BB(0x00689c35);
    /* 00689c35: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00689c38: call 0x60cf50 */ r_esp -= 4; W32(r_esp, 0x689c3du); f_0060cf50();
    /* 00689c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00689c40: jmp 0x689c49 */ goto L_00689c49;
L_00689c42:; BB(0x00689c42);
    /* 00689c42: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00689c49:; BB(0x00689c49);
    /* 00689c49: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00689c4c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00689c4f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00689c56: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00689c59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00689c5c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00689c63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689c64: mov esp, ebp */ r_esp = r_ebp;
    /* 00689c66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689c67: ret  */ FN_RET(0x00689bf0); r_esp += 4; return;
}

void f_00689c70(void) /* Application::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689c70);
    /* 00689c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00689c73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00689c75: push 0x6adeb8 */ { u32 v = 0x6adeb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00689c7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00689c80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689c81: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00689c84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00689c89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00689c8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689c8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00689c8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00689c95: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00689c98: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00689c9a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x689c9fu); f_00686d82();
    /* 00689c9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689ca2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00689ca5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00689cac: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689cb0: je 0x689cbf */ if (fZ) goto L_00689cbf;
L_00689cb2:; BB(0x00689cb2);
    /* 00689cb2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00689cb5: call 0x68fb30 */ r_esp -= 4; W32(r_esp, 0x689cbau); f_0068fb30();
    /* 00689cba: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00689cbd: jmp 0x689cc6 */ goto L_00689cc6;
L_00689cbf:; BB(0x00689cbf);
    /* 00689cbf: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00689cc6:; BB(0x00689cc6);
    /* 00689cc6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00689cc9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00689ccc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00689cd3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00689cd6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00689cd9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00689ce0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689ce1: mov esp, ebp */ r_esp = r_ebp;
    /* 00689ce3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689ce4: ret  */ FN_RET(0x00689c70); r_esp += 4; return;
}

void f_00689cf0(void) /* Application::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00689cf0);
    /* 00689cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00689cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00689cf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00689cf5: push 0x6adede */ { u32 v = 0x6adedeu; r_esp -= 4; W32(r_esp, v); }
    /* 00689cfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00689d00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689d01: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00689d04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00689d09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00689d0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689d0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00689d0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00689d15: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00689d18: push 0x21c */ { u32 v = 0x21cu; r_esp -= 4; W32(r_esp, v); }
    /* 00689d1d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x689d22u); f_00686d82();
    /* 00689d22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00689d25: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00689d28: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00689d2f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00689d33: je 0x689d4a */ if (fZ) goto L_00689d4a;
L_00689d35:; BB(0x00689d35);
    /* 00689d35: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00689d38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00689d39: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00689d3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00689d3d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00689d40: call 0x689f80 */ r_esp -= 4; W32(r_esp, 0x689d45u); f_00689f80();
    /* 00689d45: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00689d48: jmp 0x689d51 */ goto L_00689d51;
L_00689d4a:; BB(0x00689d4a);
    /* 00689d4a: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00689d51:; BB(0x00689d51);
    /* 00689d51: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00689d54: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00689d57: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00689d5e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00689d61: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00689d64: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00689d6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00689d6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00689d6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00689d6f: ret 8 */ FN_RET(0x00689cf0); r_esp += 12; return;
}

