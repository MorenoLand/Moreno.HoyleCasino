#include "protos.h"

void f_0065d520(void) /* WhichFaceVersionDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d520);
    /* 0065d520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d521: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d525: push 0x6ac816 */ { u32 v = 0x6ac816u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d52a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065d530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d531: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d532: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065d537: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065d539: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d53a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065d53d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065d543: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0065d546: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d548: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d54a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d54d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x65d552u); f_005f71f0();
    /* 0065d552: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065d559: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d55c: mov dword ptr [eax], 0x6de9fc */ W32((u32)(r_eax), 0x6de9fcu);
    /* 0065d562: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d564: push 0x30d4f2 */ { u32 v = 0x30d4f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d569: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d56c: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x65d571u); f_005f83d0();
    /* 0065d571: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d573: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d575: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d578: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x65d57du); f_005f7340();
    /* 0065d57d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d580: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065d583: mov dword ptr [ecx + 0x1bc], edx */ W32((u32)(r_ecx+0x1bcu), r_edx);
    /* 0065d589: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d58c: mov dword ptr [eax + 0x1c0], 0 */ W32((u32)(r_eax+0x1c0u), 0x0u);
    /* 0065d596: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d599: mov dword ptr [ecx + 0x1c4], 0 */ W32((u32)(r_ecx+0x1c4u), 0x0u);
    /* 0065d5a3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d5a6: mov dword ptr [0x16306ac], edx */ W32((u32)(0x16306acu), r_edx);
    /* 0065d5ac: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065d5b3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d5b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d5b9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d5c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065d5c1: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d5c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d5c4: ret 4 */ FN_RET(0x0065d520); r_esp += 8; return;
}

void f_0065d5d0(void) /* WhichFaceVersionDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d5d0);
    /* 0065d5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d5d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d5d5: push 0x6ac839 */ { u32 v = 0x6ac839u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d5da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065d5e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d5e1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065d5e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065d5e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065d5eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d5ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065d5ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065d5f5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065d5f8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d5fb: mov dword ptr [eax], 0x6de9fc */ W32((u32)(r_eax), 0x6de9fcu);
    /* 0065d601: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065d608: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d60b: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0065d611: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0065d614: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d617: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065d61a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d61e: je 0x65d633 */ if (fZ) goto L_0065d633;
L_0065d620:; BB(0x0065d620);
    /* 0065d620: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d622: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d625: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065d627: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d62a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065d62c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65d62eu); call_ind(t); }
    /* 0065d62e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065d631: jmp 0x65d63a */ goto L_0065d63a;
L_0065d633:; BB(0x0065d633);
    /* 0065d633: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065d63a:; BB(0x0065d63a);
    /* 0065d63a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d63d: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0065d643: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0065d646: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065d649: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0065d64c: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d650: je 0x65d665 */ if (fZ) goto L_0065d665;
L_0065d652:; BB(0x0065d652);
    /* 0065d652: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d654: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065d657: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065d659: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065d65c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065d65e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65d660u); call_ind(t); }
    /* 0065d660: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0065d663: jmp 0x65d66c */ goto L_0065d66c;
L_0065d665:; BB(0x0065d665);
    /* 0065d665: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0065d66c:; BB(0x0065d66c);
    /* 0065d66c: mov dword ptr [0x16306ac], 0 */ W32((u32)(0x16306acu), 0x0u);
    /* 0065d676: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065d67d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d680: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x65d685u); f_005f7260();
    /* 0065d685: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d688: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065d68f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065d690: mov esp, ebp */ r_esp = r_ebp;
    /* 0065d692: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065d693: ret  */ FN_RET(0x0065d5d0); r_esp += 4; return;
}

void f_0065d6a0(void) /* WhichFaceVersionDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065d6a0);
    /* 0065d6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065d6a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6a5: push 0x6ac86a */ { u32 v = 0x6ac86au; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065d6b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6b1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065d6b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6b5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6b6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065d6bb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065d6bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6be: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065d6c1: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065d6c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0065d6ca: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6cc: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6d0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6d2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6d4: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6d6: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6db: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6dd: push 0x6deaa4 */ { u32 v = 0x6deaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6e2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65d6e7u); f_00630f40();
    /* 0065d6e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d6ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6ef: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d6f2: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x65d6f7u); f_005fa5b0();
    /* 0065d6f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6f9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d6fd: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d702: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0065d704: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d706: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d70b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d70d: push 0x6dea80 */ { u32 v = 0x6dea80u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d712: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65d717u); f_00630f40();
    /* 0065d717: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d71a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d71b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d71d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d71f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d722: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x65d727u); f_005fa5b0();
    /* 0065d727: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d729: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d72b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d72d: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d732: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d734: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d738: push 0xda */ { u32 v = 0xdau; r_esp -= 4; W32(r_esp, v); }
    /* 0065d73d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d73f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d741: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d746: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d748: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d74a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d74d: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x65d752u); f_005fa880();
    /* 0065d752: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d754: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d756: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d758: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d75d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d762: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d767: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d769: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d76e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d770: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d772: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d777: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d779: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d77b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d77e: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x65d783u); f_005fa880();
    /* 0065d783: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d785: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d787: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0065d789: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d78b: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d78d: push 0x6dbaf4 */ { u32 v = 0x6dbaf4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d792: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65d797u); f_00630f40();
    /* 0065d797: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d79a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d79b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d79d: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7a2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7a4: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7ad: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d7b0: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x65d7b5u); f_005f9de0();
    /* 0065d7b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7b9: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7bb: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7bd: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7bf: push 0x6dea6c */ { u32 v = 0x6dea6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7c4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65d7c9u); f_00630f40();
    /* 0065d7c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d7cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7cf: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7d4: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7d6: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7df: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d7e2: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x65d7e7u); f_005f9de0();
    /* 0065d7e7: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7e9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7eb: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7ed: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7ef: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7f1: push 0x6c2318 */ { u32 v = 0x6c2318u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7f6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65d7fbu); f_00630f40();
    /* 0065d7fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d7fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d7ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d801: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d806: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d80b: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d810: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d812: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d814: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d817: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x65d81cu); f_005f9de0();
    /* 0065d81c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d81e: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d823: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d825: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d827: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d829: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d82b: push 0x30d4e8 */ { u32 v = 0x30d4e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d830: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d832: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d834: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d837: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x65d83cu); f_005f9ce0();
    /* 0065d83c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d83e: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d843: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d845: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d847: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d849: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d84e: push 0x30d4e8 */ { u32 v = 0x30d4e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d853: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d855: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d857: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d85a: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x65d85fu); f_005f9ce0();
    /* 0065d85f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d864: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65d869u); f_00686d82();
    /* 0065d869: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d86c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065d86f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065d876: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d87a: je 0x65d889 */ if (fZ) goto L_0065d889;
L_0065d87c:; BB(0x0065d87c);
    /* 0065d87c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065d87f: call 0x6640c0 */ r_esp -= 4; W32(r_esp, 0x65d884u); f_006640c0();
    /* 0065d884: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065d887: jmp 0x65d890 */ goto L_0065d890;
L_0065d889:; BB(0x0065d889);
    /* 0065d889: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0065d890:; BB(0x0065d890);
    /* 0065d890: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065d893: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065d896: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065d89d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d8a0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065d8a3: mov dword ptr [ecx + 0x1c0], edx */ W32((u32)(r_ecx+0x1c0u), r_edx);
    /* 0065d8a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d8ab: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d8ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d8af: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d8b2: mov ecx, dword ptr [ecx + 0x1c0] */ r_ecx = R32((u32)(r_ecx+0x1c0u));
    /* 0065d8b8: call 0x664200 */ r_esp -= 4; W32(r_esp, 0x65d8bdu); f_00664200();
    /* 0065d8bd: mov esi, dword ptr [0x16306a4] */ r_esi = R32((u32)(0x16306a4u));
    /* 0065d8c3: add esi, 0x1e0 */ {  u32 a = r_esi; u32 b = 0x1e0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065d8c9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d8cc: mov edi, dword ptr [edx + 0x1c0] */ r_edi = R32((u32)(r_edx+0x1c0u));
    /* 0065d8d2: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065d8d5: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 0065d8da: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0065d8dc: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d8de: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d8e0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d8e3: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 0065d8e9: call 0x6643f0 */ r_esp -= 4; W32(r_esp, 0x65d8eeu); f_006643f0();
    /* 0065d8ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d8f1: mov ecx, dword ptr [ecx + 0x1c0] */ r_ecx = R32((u32)(r_ecx+0x1c0u));
    /* 0065d8f7: call 0x664630 */ r_esp -= 4; W32(r_esp, 0x65d8fcu); f_00664630();
    /* 0065d8fc: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d901: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65d906u); f_00686d82();
    /* 0065d906: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d909: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065d90c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065d913: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065d917: je 0x65d926 */ if (fZ) goto L_0065d926;
L_0065d919:; BB(0x0065d919);
    /* 0065d919: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065d91c: call 0x6640c0 */ r_esp -= 4; W32(r_esp, 0x65d921u); f_006640c0();
    /* 0065d921: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0065d924: jmp 0x65d92d */ goto L_0065d92d;
L_0065d926:; BB(0x0065d926);
    /* 0065d926: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0065d92d:; BB(0x0065d92d);
    /* 0065d92d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065d930: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0065d933: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065d93a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d93d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065d940: mov dword ptr [eax + 0x1c4], ecx */ W32((u32)(r_eax+0x1c4u), r_ecx);
    /* 0065d946: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d948: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d94b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065d94c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d94f: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0065d955: call 0x664200 */ r_esp -= 4; W32(r_esp, 0x65d95au); f_00664200();
    /* 0065d95a: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065d960: mov esi, dword ptr [ecx + 0x1dc] */ r_esi = R32((u32)(r_ecx+0x1dcu));
    /* 0065d966: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065d969: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d96c: mov edi, dword ptr [edx + 0x1c4] */ r_edi = R32((u32)(r_edx+0x1c4u));
    /* 0065d972: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0065d975: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 0065d97a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0065d97c: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d97e: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d983: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d986: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0065d98c: call 0x6643f0 */ r_esp -= 4; W32(r_esp, 0x65d991u); f_006643f0();
    /* 0065d991: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d994: mov ecx, dword ptr [ecx + 0x1c4] */ r_ecx = R32((u32)(r_ecx+0x1c4u));
    /* 0065d99a: call 0x664630 */ r_esp -= 4; W32(r_esp, 0x65d99fu); f_00664630();
    /* 0065d99f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9a1: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9a3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9a5: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9a7: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9a9: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9ab: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9b0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9b2: push 0x6dea54 */ { u32 v = 0x6dea54u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9b7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65d9bcu); f_00630f40();
    /* 0065d9bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d9bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d9c7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x65d9ccu); f_005fa5b0();
    /* 0065d9cc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9ce: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9d0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9d2: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9d4: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9d9: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9db: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9e0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9e2: push 0x6dea3c */ { u32 v = 0x6dea3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9e7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65d9ecu); f_00630f40();
    /* 0065d9ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065d9ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065d9f4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065d9f7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x65d9fcu); f_005fa5b0();
    /* 0065d9fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065d9ff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065da06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065da07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0065da08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065da09: mov esp, ebp */ r_esp = r_ebp;
    /* 0065da0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065da0c: ret  */ FN_RET(0x0065d6a0); r_esp += 4; return;
}

void f_0065da10(void) /* WhichFaceVersionDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065da10);
    /* 0065da10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065da11: mov ebp, esp */ r_ebp = r_esp;
    /* 0065da13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065da16: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065da19: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065da1f: call 0x65a6e0 */ r_esp -= 4; W32(r_esp, 0x65da24u); f_0065a6e0();
    /* 0065da24: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065da27: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0065da2a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065da2e: jl 0x65da68 */ if ((fS!=fO)) goto L_0065da68;
L_0065da30:; BB(0x0065da30);
    /* 0065da30: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065da34: jle 0x65da38 */ if ((fZ||fS!=fO)) goto L_0065da38;
L_0065da36:; BB(0x0065da36);
    /* 0065da36: jmp 0x65da68 */ goto L_0065da68;
L_0065da38:; BB(0x0065da38);
    /* 0065da38: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065da3c: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0065da3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065da40: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065da46: call 0x659cc0 */ r_esp -= 4; W32(r_esp, 0x65da4bu); f_00659cc0();
    /* 0065da4b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065da4e: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0065da54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065da55: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065da5b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065da5d: mov ecx, dword ptr [0x16306a4] */ r_ecx = R32((u32)(0x16306a4u));
    /* 0065da63: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0065da66: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65da68u); call_ind(t); }
L_0065da68:; BB(0x0065da68);
    /* 0065da68: mov esp, ebp */ r_esp = r_ebp;
    /* 0065da6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065da6b: ret 4 */ FN_RET(0x0065da10); r_esp += 8; return;
}

