#include "protos.h"

void f_005e36b0(void) /* CasinoLoginDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e36b0);
    /* 005e36b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e36b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e36b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e36b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e36b7: mov al, byte ptr [ebp + 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 005e36ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e36bb: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005e36be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e36bf: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e36c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e36c3: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005e36c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e36c7: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005e36ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e36cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e36ce: call 0x65dbd0 */ r_esp -= 4; W32(r_esp, 0x5e36d3u); f_0065dbd0();
    /* 005e36d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e36d6: mov dword ptr [edx], 0x6d50f4 */ W32((u32)(r_edx), 0x6d50f4u);
    /* 005e36dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e36df: mov esp, ebp */ r_esp = r_ebp;
    /* 005e36e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e36e2: ret 0x14 */ FN_RET(0x005e36b0); r_esp += 24; return;
}

void f_005e3710(void) /* CasinoLoginDialog::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3710);
    /* 005e3710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3711: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3714: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3717: mov eax, 0x30d4df */ r_eax = 0x30d4dfu;
    /* 005e371c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e371e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e371f: ret  */ FN_RET(0x005e3710); r_esp += 4; return;
}

void f_005e3720(void) /* CasinoLoginDialog::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3720);
    /* 005e3720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3721: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3727: mov eax, 0x177 */ r_eax = 0x177u;
    /* 005e372c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e372e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e372f: ret  */ FN_RET(0x005e3720); r_esp += 4; return;
}

void f_005e3730(void) /* CasinoLoginDialog::vfunc18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3730);
    /* 005e3730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3731: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3737: mov eax, 0xeb */ r_eax = 0xebu;
    /* 005e373c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e373e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e373f: ret  */ FN_RET(0x005e3730); r_esp += 4; return;
}

void f_005e3740(void) /* CasinoLoginDialog::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3740);
    /* 005e3740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3741: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3747: mov eax, 0x2e */ r_eax = 0x2eu;
    /* 005e374c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e374e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e374f: ret  */ FN_RET(0x005e3740); r_esp += 4; return;
}

void f_005e3850(void) /* CasinoLoginDialog::vfunc42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3850);
    /* 005e3850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3851: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3853: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e3856: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e385b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e385d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e3860: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005e3863: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e3866: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3867: push 0x6d51a0 */ { u32 v = 0x6d51a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e386c: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005e386f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3870: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5e3876u); call_ind(t); }
    /* 005e3876: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3879: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 005e387c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e387d: call dword ptr [0x6b22a0] */ { u32 t = R32((u32)(0x6b22a0u)); r_esp -= 4; W32(r_esp, 0x5e3883u); call_ind(t); }
    /* 005e3883: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3886: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005e3888: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e388b: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e388d: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5e3892u); f_00686d72();
    /* 005e3892: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3894: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3895: ret 8 */ FN_RET(0x005e3850); r_esp += 12; return;
}

void f_005e38a0(void) /* CasinoLoginDialog::vfunc36 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e38a0);
    /* 005e38a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e38a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e38a3: sub esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e38a9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e38ae: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e38b0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e38b3: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 005e38b9: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005e38c0: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 005e38c7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e38c9: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e38cf: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e38d4u); f_005fb2b0();
    /* 005e38d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e38d6: jne 0x5e38fe */ if (!fZ) goto L_005e38fe;
L_005e38d8:; BB(0x005e38d8);
    /* 005e38d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e38da: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e38df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e38e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e38e3: push 0xd6 */ { u32 v = 0xd6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e38e8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005e38ea: push 0x441 */ { u32 v = 0x441u; r_esp -= 4; W32(r_esp, v); }
    /* 005e38ef: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e38f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e38f3: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e38f9: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5e38feu); f_005f9ce0();
L_005e38fe:; BB(0x005e38fe);
    /* 005e38fe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3900: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e3906: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5e390bu); f_005fb550();
    /* 005e390b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e390d: jne 0x5e3939 */ if (!fZ) goto L_005e3939;
L_005e390f:; BB(0x005e390f);
    /* 005e390f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3911: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3913: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3915: push 0xea */ { u32 v = 0xeau; r_esp -= 4; W32(r_esp, v); }
    /* 005e391a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e391c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005e391e: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3923: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3925: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e392a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e392c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e392e: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e3934: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e3939u); f_005fa5b0();
L_005e3939:; BB(0x005e3939);
    /* 005e3939: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e393b: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e3941: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5e3946u); f_005fb550();
    /* 005e3946: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3948: jne 0x5e3974 */ if (!fZ) goto L_005e3974;
L_005e394a:; BB(0x005e394a);
    /* 005e394a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e394c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e394e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3950: push 0x132 */ { u32 v = 0x132u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3955: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3957: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3959: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e395e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3960: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3965: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3967: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3969: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e396f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e3974u); f_005fa5b0();
L_005e3974:; BB(0x005e3974);
    /* 005e3974: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3976: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e397c: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5e3981u); f_005fb550();
    /* 005e3981: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3983: jne 0x5e39ac */ if (!fZ) goto L_005e39ac;
L_005e3985:; BB(0x005e3985);
    /* 005e3985: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3987: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3989: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e398b: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3990: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3992: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3994: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e3996: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3998: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e399d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e399f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e39a1: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e39a7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5e39acu); f_005fa5b0();
L_005e39ac:; BB(0x005e39ac);
    /* 005e39ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e39ae: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e39b4: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x5e39b9u); f_005fb720();
    /* 005e39b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e39bb: je 0x5e3bb7 */ if (fZ) goto L_005e3bb7;
L_005e39c1:; BB(0x005e39c1);
    /* 005e39c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e39c3: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e39c9: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x5e39ceu); f_005fb720();
    /* 005e39ce: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005e39d4: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005e39da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e39dc: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005e39e2: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005e39e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e39eau); call_ind(t); }
    /* 005e39ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e39ec: je 0x5e3bb7 */ if (fZ) goto L_005e3bb7;
L_005e39f2:; BB(0x005e39f2);
    /* 005e39f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e39f4: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e39fa: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x5e39ffu); f_005fb720();
    /* 005e39ff: mov ecx, eax */ r_ecx = r_eax;
    /* 005e3a01: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x5e3a06u); f_005e4390();
    /* 005e3a06: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005e3a09: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3a0d: je 0x5e3bb5 */ if (fZ) goto L_005e3bb5;
L_005e3a13:; BB(0x005e3a13);
    /* 005e3a13: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005e3a19: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e3a1b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005e3a21: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 005e3a27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e3a29u); call_ind(t); }
    /* 005e3a29: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005e3a2c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e3a2f: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e3a32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3a33: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005e3a36: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x5e3a3bu); f_0063ab10();
    /* 005e3a3b: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 005e3a3e: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 005e3a41: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 005e3a47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3a48: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005e3a4b: call 0x5d5970 */ r_esp -= 4; W32(r_esp, 0x5e3a50u); f_005d5970();
    /* 005e3a50: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005e3a52: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005e3a55: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e3a58: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e3a5b: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3a5f: je 0x5e3a9a */ if (fZ) goto L_005e3a9a;
L_005e3a61:; BB(0x005e3a61);
    /* 005e3a61: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005e3a64: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e3a69u); f_005d52e0();
    /* 005e3a69: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3a6c: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005e3a6e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3a71: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005e3a74: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e3a7b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e3a82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3a85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3a86: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e3a89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3a8a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005e3a8d: call 0x5d59e0 */ r_esp -= 4; W32(r_esp, 0x5e3a92u); f_005d59e0();
    /* 005e3a92: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005e3a95: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5e3a9au); f_0063b0a0();
L_005e3a9a:; BB(0x005e3a9a);
    /* 005e3a9a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3a9c: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e3aa2: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e3aa7u); f_005fb2b0();
    /* 005e3aa7: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005e3aad: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005e3ab0: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e3ab5u); f_005d52e0();
    /* 005e3ab5: mov dl, byte ptr [eax + 0x2a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x2au))) & 0xffu);
    /* 005e3ab8: mov byte ptr [ebp - 0x9d], dl */ W8((u32)(r_ebp+0xffffff63u), (u8)r_edx);
    /* 005e3abe: movsx eax, byte ptr [ebp - 0x9d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff63u));
    /* 005e3ac5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ac6: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005e3acc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e3ace: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005e3ad4: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e3ada: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e3adcu); call_ind(t); }
    /* 005e3adc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ade: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ae0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ae2: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005e3ae5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3ae6: lea edx, [ebp - 0x90] */ r_edx = (u32)(r_ebp+0xffffff70u);
    /* 005e3aec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3aed: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005e3af0: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5e3af5u); f_005d5a90();
    /* 005e3af5: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005e3af8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3af9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3afb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3afc: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5e3b01u); f_0064c8d0();
    /* 005e3b01: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3b04: push 0x6d50d8 */ { u32 v = 0x6d50d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b09: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e3b0eu); f_00630f40();
    /* 005e3b0e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3b11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b12: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005e3b15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b16: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5e3b1bu); f_00686d8e();
    /* 005e3b1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3b1e: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005e3b21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b22: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005e3b25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b26: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5e3b2bu); f_00686ec6();
    /* 005e3b2b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3b2e: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 005e3b31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b32: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b34: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e3b3a: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5e3b3fu); f_005fb5a0();
    /* 005e3b3f: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005e3b42: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e3b47u); f_005d52e0();
    /* 005e3b47: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e3b4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b4b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b4d: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e3b53: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5e3b58u); f_005fb5a0();
    /* 005e3b58: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005e3b5b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e3b60u); f_0063aac0();
    /* 005e3b60: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e3b63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b64: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b66: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e3b6c: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5e3b71u); f_005fb5a0();
    /* 005e3b71: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005e3b74: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 005e3b7a: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005e3b80: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 005e3b86: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3b8d: je 0x5e3bab */ if (fZ) goto L_005e3bab;
L_005e3b8f:; BB(0x005e3b8f);
    /* 005e3b8f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3b91: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005e3b97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e3b99: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005e3b9f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e3ba1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e3ba3u); call_ind(t); }
    /* 005e3ba3: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 005e3ba9: jmp 0x5e3bb5 */ goto L_005e3bb5;
L_005e3bab:; BB(0x005e3bab);
    /* 005e3bab: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_005e3bb5:; BB(0x005e3bb5);
    /* 005e3bb5: jmp 0x5e3c18 */ goto L_005e3c18;
L_005e3bb7:; BB(0x005e3bb7);
    /* 005e3bb7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3bb9: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e3bbf: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e3bc4u); f_005fb2b0();
    /* 005e3bc4: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 005e3bca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3bcc: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005e3bd2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e3bd4: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005e3bda: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005e3be0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e3be2u); call_ind(t); }
    /* 005e3be2: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3be7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3be9: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e3bef: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5e3bf4u); f_005fb5a0();
    /* 005e3bf4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3bf9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3bfb: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e3c01: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5e3c06u); f_005fb5a0();
    /* 005e3c06: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c0b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c0d: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005e3c13: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5e3c18u); f_005fb5a0();
L_005e3c18:; BB(0x005e3c18);
    /* 005e3c18: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005e3c1a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e3c1d: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e3c1f: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5e3c24u); f_00686d72();
    /* 005e3c24: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3c26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3c27: ret  */ FN_RET(0x005e38a0); r_esp += 4; return;
}

void f_005e3c30(void) /* CasinoLoginDialog::vfunc40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e3c30);
    /* 005e3c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c31: mov ebp, esp */ r_ebp = r_esp;
    /* 005e3c33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e3c37: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005e3c3d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5e3c42u); f_005da830();
    /* 005e3c42: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e3c45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e3c47: je 0x5e3c7b */ if (fZ) goto L_005e3c7b;
L_005e3c49:; BB(0x005e3c49);
    /* 005e3c49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c4b: push 0x6d51c0 */ { u32 v = 0x6d51c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c50: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e3c55u); f_00630f40();
    /* 005e3c55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3c58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c59: push 0x6d51a8 */ { u32 v = 0x6d51a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c5e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e3c63u); f_00630f40();
    /* 005e3c63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3c66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e3c67: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5e3c6cu); f_0062ff10();
    /* 005e3c6c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e3c6f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e3c72: call 0x65fae0 */ r_esp -= 4; W32(r_esp, 0x5e3c77u); f_0065fae0();
    /* 005e3c77: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005e3c79: jmp 0x5e3c7d */ goto L_005e3c7d;
L_005e3c7b:; BB(0x005e3c7b);
    /* 005e3c7b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005e3c7d:; BB(0x005e3c7d);
    /* 005e3c7d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e3c7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e3c80: ret  */ FN_RET(0x005e3c30); r_esp += 4; return;
}

void f_0065c560(void) /* CasinoLoginDialog::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065c560);
    /* 0065c560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c561: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c563: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c566: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065c569: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c56c: movzx ecx, byte ptr [eax + 0x1c0] */ r_ecx = (u32)R8((u32)(r_eax+0x1c0u));
    /* 0065c573: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c575: je 0x65c57c */ if (fZ) goto L_0065c57c;
L_0065c577:; BB(0x0065c577);
    /* 0065c577: jmp 0x65c650 */ goto L_0065c650;
L_0065c57c:; BB(0x0065c57c);
    /* 0065c57c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065c57f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0065c582: cmp dword ptr [ebp - 8], 0x5f */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065c586: jl 0x65c650 */ if ((fS!=fO)) goto L_0065c650;
L_0065c58c:; BB(0x0065c58c);
    /* 0065c58c: cmp dword ptr [ebp - 8], 0x60 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065c590: jle 0x65c597 */ if ((fZ||fS!=fO)) goto L_0065c597;
L_0065c592:; BB(0x0065c592);
    /* 0065c592: jmp 0x65c650 */ goto L_0065c650;
L_0065c597:; BB(0x0065c597);
    /* 0065c597: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c599: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c59c: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x65c5a1u); f_005fb3a0();
    /* 0065c5a1: mov ecx, eax */ r_ecx = r_eax;
    /* 0065c5a3: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x65c5a8u); f_00606570();
    /* 0065c5a8: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c5ab: je 0x65c5b2 */ if (fZ) goto L_0065c5b2;
L_0065c5ad:; BB(0x0065c5ad);
    /* 0065c5ad: jmp 0x65c650 */ goto L_0065c650;
L_0065c5b2:; BB(0x0065c5b2);
    /* 0065c5b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c5b5: call 0x65c300 */ r_esp -= 4; W32(r_esp, 0x65c5bau); f_0065c300();
    /* 0065c5ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c5bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c5bf: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0065c5c5: call 0x65cde0 */ r_esp -= 4; W32(r_esp, 0x65c5cau); f_0065cde0();
    /* 0065c5ca: cmp dword ptr [ebp + 8], 0x5f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c5ce: jne 0x65c5ed */ if (!fZ) goto L_0065c5ed;
L_0065c5d0:; BB(0x0065c5d0);
    /* 0065c5d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c5d2: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c5d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c5da: mov dl, byte ptr [ecx + 0x1c3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x1c3u))) & 0xffu);
    /* 0065c5e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c5e1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c5e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c5e6: call 0x65c820 */ r_esp -= 4; W32(r_esp, 0x65c5ebu); f_0065c820();
    /* 0065c5eb: jmp 0x65c650 */ goto L_0065c650;
L_0065c5ed:; BB(0x0065c5ed);
    /* 0065c5ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c5f0: cmp dword ptr [eax + 0x1bc], 0 */ {  u32 a = R32((u32)(r_eax+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c5f7: je 0x65c625 */ if (fZ) goto L_0065c625;
L_0065c5f9:; BB(0x0065c5f9);
    /* 0065c5f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c5fc: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c602: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c605: call 0x663c50 */ r_esp -= 4; W32(r_esp, 0x65c60au); f_00663c50();
    /* 0065c60a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c60c: jne 0x65c625 */ if (!fZ) goto L_0065c625;
L_0065c60e:; BB(0x0065c60e);
    /* 0065c60e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c611: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x65c616u); f_005f87d0();
    /* 0065c616: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c618: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0065c61e: call 0x64f470 */ r_esp -= 4; W32(r_esp, 0x65c623u); f_0064f470();
    /* 0065c623: jmp 0x65c650 */ goto L_0065c650;
L_0065c625:; BB(0x0065c625);
    /* 0065c625: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c627: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c62a: movsx eax, byte ptr [edx + 0x1c2] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1c2u));
    /* 0065c631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c632: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c635: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c63b: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c63e: call 0x6639a0 */ r_esp -= 4; W32(r_esp, 0x65c643u); f_006639a0();
    /* 0065c643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c644: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c646: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c648: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065c64b: call 0x65c820 */ r_esp -= 4; W32(r_esp, 0x65c650u); f_0065c820();
L_0065c650:; BB(0x0065c650);
    /* 0065c650: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c652: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c653: ret 4 */ FN_RET(0x0065c560); r_esp += 8; return;
}

void f_0065c750(void) /* CasinoLoginDialog::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065c750);
    /* 0065c750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c751: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c753: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c756: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0065c759: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c75b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c75e: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x65c763u); f_005fb3a0();
    /* 0065c763: mov ecx, eax */ r_ecx = r_eax;
    /* 0065c765: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x65c76au); f_00606570();
    /* 0065c76a: cmp eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c76d: jne 0x65c78d */ if (!fZ) goto L_0065c78d;
L_0065c76f:; BB(0x0065c76f);
    /* 0065c76f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c772: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0065c778: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c77b: call 0x663c50 */ r_esp -= 4; W32(r_esp, 0x65c780u); f_00663c50();
    /* 0065c780: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c782: je 0x65c78d */ if (fZ) goto L_0065c78d;
L_0065c784:; BB(0x0065c784);
    /* 0065c784: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0065c78b: jmp 0x65c794 */ goto L_0065c794;
L_0065c78d:; BB(0x0065c78d);
    /* 0065c78d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0065c794:; BB(0x0065c794);
    /* 0065c794: mov cl, byte ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 0065c797: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 0065c79a: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0065c79e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c7a0: jne 0x65c7a4 */ if (!fZ) goto L_0065c7a4;
L_0065c7a2:; BB(0x0065c7a2);
    /* 0065c7a2: jmp 0x65c7dc */ goto L_0065c7dc;
L_0065c7a4:; BB(0x0065c7a4);
    /* 0065c7a4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065c7a7: sub eax, 0x186bf */ {  u32 a = r_eax; u32 b = 0x186bfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0065c7ac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0065c7af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c7b2: cmp dword ptr [ecx + 0x1bc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c7b9: je 0x65c7dc */ if (fZ) goto L_0065c7dc;
L_0065c7bb:; BB(0x0065c7bb);
    /* 0065c7bb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c7be: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0065c7c4: cmp dword ptr [eax + 0x70], 0 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c7c8: je 0x65c7dc */ if (fZ) goto L_0065c7dc;
L_0065c7ca:; BB(0x0065c7ca);
    /* 0065c7ca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065c7cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c7ce: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c7d1: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 0065c7d7: call 0x65d190 */ r_esp -= 4; W32(r_esp, 0x65c7dcu); f_0065d190();
L_0065c7dc:; BB(0x0065c7dc);
    /* 0065c7dc: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c7de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c7df: ret 8 */ FN_RET(0x0065c750); r_esp += 12; return;
}

void f_0065dec0(void) /* CasinoLoginDialog::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065dec0);
    /* 0065dec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065dec1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065dec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065dec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065dec7: mov eax, 0xfb */ r_eax = 0xfbu;
    /* 0065decc: mov esp, ebp */ r_esp = r_ebp;
    /* 0065dece: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065decf: ret  */ FN_RET(0x0065dec0); r_esp += 4; return;
}

void f_0065ded0(void) /* CasinoLoginDialog::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ded0);
    /* 0065ded0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ded1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ded3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ded4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065ded7: mov eax, 0xb6 */ r_eax = 0xb6u;
    /* 0065dedc: mov esp, ebp */ r_esp = r_ebp;
    /* 0065dede: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065dedf: ret  */ FN_RET(0x0065ded0); r_esp += 4; return;
}

void f_0065e560(void) /* CasinoLoginDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065e560);
    /* 0065e560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065e561: mov ebp, esp */ r_ebp = r_esp;
    /* 0065e563: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065e566: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065e569: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065e56c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e56d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e570: call 0x65c660 */ r_esp -= 4; W32(r_esp, 0x65e575u); f_0065c660();
    /* 0065e575: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065e578: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0065e57b: cmp dword ptr [ebp - 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065e582: jg 0x65e5a1 */ if ((!fZ&&fS==fO)) goto L_0065e5a1;
L_0065e584:; BB(0x0065e584);
    /* 0065e584: cmp dword ptr [ebp - 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e58b: je 0x65e5f8 */ if (fZ) goto L_0065e5f8;
L_0065e58d:; BB(0x0065e58d);
    /* 0065e58d: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0065e591: ja 0x65e618 */ if ((!fC&&!fZ)) goto L_0065e618;
L_0065e597:; BB(0x0065e597);
    /* 0065e597: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065e59a: jmp dword ptr [edx*4 + 0x65e620] */ { u32 t = R32((u32)(r_edx*4+0x65e620u)); switch (t) { case 0x65e5a3u: goto L_0065e5a3; case 0x65e5adu: goto L_0065e5ad; case 0x65e5b7u: goto L_0065e5b7; case 0x65e5c1u: goto L_0065e5c1; case 0x65e618u: goto L_0065e618; case 0x65e5cbu: goto L_0065e5cb; case 0x65e5ecu: goto L_0065e5ec; default: UNSUP(0x0065e59a, "jump table entry is not a known target"); } }
L_0065e5a1:; BB(0x0065e5a1);
    /* 0065e5a1: jmp 0x65e618 */ goto L_0065e618;
L_0065e5a3:; BB(0x0065e5a3);
    /* 0065e5a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e5a6: call 0x65f940 */ r_esp -= 4; W32(r_esp, 0x65e5abu); f_0065f940();
    /* 0065e5ab: jmp 0x65e618 */ goto L_0065e618;
L_0065e5ad:; BB(0x0065e5ad);
    /* 0065e5ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e5b0: call 0x65fae0 */ r_esp -= 4; W32(r_esp, 0x65e5b5u); f_0065fae0();
    /* 0065e5b5: jmp 0x65e618 */ goto L_0065e618;
L_0065e5b7:; BB(0x0065e5b7);
    /* 0065e5b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e5ba: call 0x65e670 */ r_esp -= 4; W32(r_esp, 0x65e5bfu); f_0065e670();
    /* 0065e5bf: jmp 0x65e618 */ goto L_0065e618;
L_0065e5c1:; BB(0x0065e5c1);
    /* 0065e5c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e5c4: call 0x65ed10 */ r_esp -= 4; W32(r_esp, 0x65e5c9u); f_0065ed10();
    /* 0065e5c9: jmp 0x65e618 */ goto L_0065e618;
L_0065e5cb:; BB(0x0065e5cb);
    /* 0065e5cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e5ce: call 0x65f940 */ r_esp -= 4; W32(r_esp, 0x65e5d3u); f_0065f940();
    /* 0065e5d3: push 0x3ea */ { u32 v = 0x3eau; r_esp -= 4; W32(r_esp, v); }
    /* 0065e5d8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065e5dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065e5df: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065e5e5: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0065e5e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e5eau); call_ind(t); }
    /* 0065e5ea: jmp 0x65e618 */ goto L_0065e618;
L_0065e5ec:; BB(0x0065e5ec);
    /* 0065e5ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e5ee: call 0x60cce0 */ r_esp -= 4; W32(r_esp, 0x65e5f3u); f_0060cce0();
    /* 0065e5f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e5f6: jmp 0x65e618 */ goto L_0065e618;
L_0065e5f8:; BB(0x0065e5f8);
    /* 0065e5f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065e5fb: call 0x65f940 */ r_esp -= 4; W32(r_esp, 0x65e600u); f_0065f940();
    /* 0065e600: push 0x3eb */ { u32 v = 0x3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e605: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065e60b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065e60d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065e613: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0065e616: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e618u); call_ind(t); }
L_0065e618:; BB(0x0065e618);
    /* 0065e618: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e61a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e61b: ret 4 */ FN_RET(0x0065e560); r_esp += 8; return;
}

void f_0065ee20(void) /* CasinoLoginDialog::vfunc33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ee20);
    /* 0065ee20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ee21: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ee23: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ee26: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0065ee29: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065ee30: jmp 0x65ee3b */ goto L_0065ee3b;
L_0065ee32:; BB(0x0065ee32);
    /* 0065ee32: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ee35: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065ee38: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0065ee3b:; BB(0x0065ee3b);
    /* 0065ee3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ee3d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065ee40: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65ee45u); f_005fb720();
    /* 0065ee45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065ee48: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ee4b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065ee4d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ee50: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0065ee56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65ee58u); call_ind(t); }
    /* 0065ee58: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065ee5b: jge 0x65eec0 */ if ((fS==fO)) goto L_0065eec0;
L_0065ee5d:; BB(0x0065ee5d);
    /* 0065ee5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ee5f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065ee62: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65ee67u); f_005fb720();
    /* 0065ee67: mov ecx, eax */ r_ecx = r_eax;
    /* 0065ee69: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x65ee6eu); f_00615260();
    /* 0065ee6e: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ee71: jne 0x65ee75 */ if (!fZ) goto L_0065ee75;
L_0065ee73:; BB(0x0065ee73);
    /* 0065ee73: jmp 0x65ee32 */ goto L_0065ee32;
L_0065ee75:; BB(0x0065ee75);
    /* 0065ee75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ee77: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065ee7a: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65ee7fu); f_005fb720();
    /* 0065ee7f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0065ee82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ee85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ee86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ee89: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ee8c: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x65ee91u); f_0060ca40();
    /* 0065ee91: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0065ee94: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065ee97: movsx eax, byte ptr [edx + 0x3a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x3au));
    /* 0065ee9b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ee9e: jne 0x65eebb */ if (!fZ) goto L_0065eebb;
L_0065eea0:; BB(0x0065eea0);
    /* 0065eea0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0065eea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065eea4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065eea7: add edx, 0x21 */ {  u32 a = r_edx; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065eeaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065eeab: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x65eeb0u); f_00686ec0();
    /* 0065eeb0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065eeb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065eeb5: jne 0x65eebb */ if (!fZ) goto L_0065eebb;
L_0065eeb7:; BB(0x0065eeb7);
    /* 0065eeb7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0065eeb9: jmp 0x65eec2 */ goto L_0065eec2;
L_0065eebb:; BB(0x0065eebb);
    /* 0065eebb: jmp 0x65ee32 */ goto L_0065ee32;
L_0065eec0:; BB(0x0065eec0);
    /* 0065eec0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0065eec2:; BB(0x0065eec2);
    /* 0065eec2: mov esp, ebp */ r_esp = r_ebp;
    /* 0065eec4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065eec5: ret 4 */ FN_RET(0x0065ee20); r_esp += 8; return;
}

void f_0065eed0(void) /* CasinoLoginDialog::vfunc34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065eed0);
    /* 0065eed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065eed1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065eed3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065eed6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0065eed9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065eedb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065eede: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65eee3u); f_005fb720();
    /* 0065eee3: mov ecx, eax */ r_ecx = r_eax;
    /* 0065eee5: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x65eeeau); f_005e4390();
    /* 0065eeea: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065eeed: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065eef1: je 0x65ef1d */ if (fZ) goto L_0065ef1d;
L_0065eef3:; BB(0x0065eef3);
    /* 0065eef3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065eef6: movsx ecx, byte ptr [eax + 0x3a] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x3au));
    /* 0065eefa: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065eefd: jne 0x65ef0a */ if (!fZ) goto L_0065ef0a;
L_0065eeff:; BB(0x0065eeff);
    /* 0065eeff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ef02: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0065ef05: mov byte ptr [edx + 0x3b], al */ W8((u32)(r_edx+0x3bu), (u8)r_eax);
    /* 0065ef08: jmp 0x65ef1d */ goto L_0065ef1d;
L_0065ef0a:; BB(0x0065ef0a);
    /* 0065ef0a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0065ef0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ef0e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ef11: add edx, 0x21 */ {  u32 a = r_edx; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065ef14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ef15: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65ef1au); f_00686d8e();
    /* 0065ef1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065ef1d:; BB(0x0065ef1d);
    /* 0065ef1d: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ef1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ef20: ret 8 */ FN_RET(0x0065eed0); r_esp += 12; return;
}

void f_0065ef30(void) /* CasinoLoginDialog::vfunc35 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ef30);
    /* 0065ef30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ef31: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ef33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ef36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0065ef39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ef3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ef3e: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x65ef43u); f_005fb720();
    /* 0065ef43: mov ecx, eax */ r_ecx = r_eax;
    /* 0065ef45: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x65ef4au); f_005e4390();
    /* 0065ef4a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065ef4d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ef51: je 0x65ef83 */ if (fZ) goto L_0065ef83;
L_0065ef53:; BB(0x0065ef53);
    /* 0065ef53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ef56: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0065ef59: mov byte ptr [eax + 0x3a], cl */ W8((u32)(r_eax+0x3au), (u8)r_ecx);
    /* 0065ef5c: movsx edx, byte ptr [ebp + 8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 0065ef60: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ef63: jne 0x65ef70 */ if (!fZ) goto L_0065ef70;
L_0065ef65:; BB(0x0065ef65);
    /* 0065ef65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ef68: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0065ef6b: mov byte ptr [eax + 0x3b], cl */ W8((u32)(r_eax+0x3bu), (u8)r_ecx);
    /* 0065ef6e: jmp 0x65ef83 */ goto L_0065ef83;
L_0065ef70:; BB(0x0065ef70);
    /* 0065ef70: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0065ef73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ef74: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ef77: add eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065ef7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ef7b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65ef80u); f_00686d8e();
    /* 0065ef80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065ef83:; BB(0x0065ef83);
    /* 0065ef83: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ef85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ef86: ret 0xc */ FN_RET(0x0065ef30); r_esp += 16; return;
}

void f_0065fca0(void) /* CasinoLoginDialog::vfunc39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065fca0);
    /* 0065fca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065fca1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065fca3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065fca6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0065fca9: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 0065fcad: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fcb0: cmp dword ptr [eax + 0x1cc], 0 */ {  u32 a = R32((u32)(r_eax+0x1ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fcb7: je 0x65fceb */ if (fZ) goto L_0065fceb;
L_0065fcb9:; BB(0x0065fcb9);
    /* 0065fcb9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fcbc: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 0065fcc2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0065fcc5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065fcc8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0065fccb: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fccf: je 0x65fce4 */ if (fZ) goto L_0065fce4;
L_0065fcd1:; BB(0x0065fcd1);
    /* 0065fcd1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065fcd3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065fcd6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065fcd8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065fcdb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065fcdd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65fcdfu); call_ind(t); }
    /* 0065fcdf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065fce2: jmp 0x65fceb */ goto L_0065fceb;
L_0065fce4:; BB(0x0065fce4);
    /* 0065fce4: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0065fceb:; BB(0x0065fceb);
    /* 0065fceb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fcf1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065fcf3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fcf9: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 0065fcff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65fd01u); call_ind(t); }
    /* 0065fd01: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fd04: mov dword ptr [ecx + 0x1cc], eax */ W32((u32)(r_ecx+0x1ccu), r_eax);
    /* 0065fd0a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065fd0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065fd0e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fd11: mov ecx, dword ptr [edx + 0x1cc] */ r_ecx = R32((u32)(r_edx+0x1ccu));
    /* 0065fd17: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x65fd1cu); f_0063a3e0();
    /* 0065fd1c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fd1f: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 0065fd25: call 0x660f70 */ r_esp -= 4; W32(r_esp, 0x65fd2au); f_00660f70();
    /* 0065fd2a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065fd2d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fd30: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 0065fd36: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0065fd39: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065fd3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065fd3d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065fd40: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65fd45u); f_0063aac0();
    /* 0065fd45: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065fd48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065fd49: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65fd4eu); f_00686d8e();
    /* 0065fd4e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065fd51: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fd54: call 0x65fde0 */ r_esp -= 4; W32(r_esp, 0x65fd59u); f_0065fde0();
    /* 0065fd59: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fd5c: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 0065fd62: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0065fd65: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fd68: add eax, 0x1d7 */ {  u32 a = r_eax; u32 b = 0x1d7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065fd6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065fd6e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065fd71: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065fd74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fd75: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x65fd7au); f_00686d8e();
    /* 0065fd7a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065fd7d: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065fd83: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065fd85: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065fd8b: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 0065fd91: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65fd93u); call_ind(t); }
    /* 0065fd93: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065fd96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065fd98: je 0x65fdc6 */ if (fZ) goto L_0065fdc6;
L_0065fd9a:; BB(0x0065fd9a);
    /* 0065fd9a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fd9d: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 0065fda3: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 0065fda6: call 0x66fdf0 */ r_esp -= 4; W32(r_esp, 0x65fdabu); f_0066fdf0();
    /* 0065fdab: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fdae: mov ecx, dword ptr [eax + 0x1cc] */ r_ecx = R32((u32)(r_eax+0x1ccu));
    /* 0065fdb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065fdb5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fdb8: mov eax, dword ptr [edx + 0x1cc] */ r_eax = R32((u32)(r_edx+0x1ccu));
    /* 0065fdbe: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0065fdc1: call 0x66f960 */ r_esp -= 4; W32(r_esp, 0x65fdc6u); f_0066f960();
L_0065fdc6:; BB(0x0065fdc6);
    /* 0065fdc6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065fdc9: mov ecx, dword ptr [ecx + 0x1cc] */ r_ecx = R32((u32)(r_ecx+0x1ccu));
    /* 0065fdcf: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x65fdd4u); f_0063b0a0();
    /* 0065fdd4: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0065fdd7: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 0065fdda: mov esp, ebp */ r_esp = r_ebp;
    /* 0065fddc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065fddd: ret  */ FN_RET(0x0065fca0); r_esp += 4; return;
}

