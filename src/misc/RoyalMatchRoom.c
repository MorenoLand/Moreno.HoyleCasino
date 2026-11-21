#include "protos.h"

void f_005af990(void) /* RoyalMatchRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005af990);
    /* 005af990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005af991: mov ebp, esp */ r_ebp = r_esp;
    /* 005af993: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005af995: push 0x6a7d2b */ { u32 v = 0x6a7d2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005af99a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005af9a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af9a1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005af9a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005af9a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005af9ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005af9ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005af9af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005af9b5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005af9b8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005af9bb: mov dword ptr [eax], 0x6cfeac */ W32((u32)(r_eax), 0x6cfeacu);
    /* 005af9c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005af9c8: mov dword ptr [0x793600], 0 */ W32((u32)(0x793600u), 0x0u);
    /* 005af9d2: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005af9d8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005af9db: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005af9de: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005af9e1: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005af9e5: je 0x5af9fa */ if (fZ) goto L_005af9fa;
L_005af9e7:; BB(0x005af9e7);
    /* 005af9e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005af9e9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af9ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005af9ee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005af9f1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005af9f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5af9f5u); call_ind(t); }
    /* 005af9f5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005af9f8: jmp 0x5afa01 */ goto L_005afa01;
L_005af9fa:; BB(0x005af9fa);
    /* 005af9fa: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005afa01:; BB(0x005afa01);
    /* 005afa01: mov dword ptr [0x793604], 0 */ W32((u32)(0x793604u), 0x0u);
    /* 005afa0b: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005afa11: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005afa14: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005afa17: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005afa1a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afa1e: je 0x5afa33 */ if (fZ) goto L_005afa33;
L_005afa20:; BB(0x005afa20);
    /* 005afa20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005afa22: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005afa25: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005afa27: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005afa2a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005afa2c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5afa2eu); call_ind(t); }
    /* 005afa2e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005afa31: jmp 0x5afa3a */ goto L_005afa3a;
L_005afa33:; BB(0x005afa33);
    /* 005afa33: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005afa3a:; BB(0x005afa3a);
    /* 005afa3a: mov dword ptr [0x7935fc], 0 */ W32((u32)(0x7935fcu), 0x0u);
    /* 005afa44: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005afa4a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005afa4d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005afa50: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005afa53: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afa57: je 0x5afa6c */ if (fZ) goto L_005afa6c;
L_005afa59:; BB(0x005afa59);
    /* 005afa59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005afa5b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005afa5e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005afa60: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005afa63: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005afa65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5afa67u); call_ind(t); }
    /* 005afa67: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005afa6a: jmp 0x5afa73 */ goto L_005afa73;
L_005afa6c:; BB(0x005afa6c);
    /* 005afa6c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005afa73:; BB(0x005afa73);
    /* 005afa73: mov dword ptr [0x7935f8], 0 */ W32((u32)(0x7935f8u), 0x0u);
    /* 005afa7d: mov ecx, dword ptr [0x7935f4] */ r_ecx = R32((u32)(0x7935f4u));
    /* 005afa83: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005afa86: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005afa89: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005afa8c: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afa90: je 0x5afaa5 */ if (fZ) goto L_005afaa5;
L_005afa92:; BB(0x005afa92);
    /* 005afa92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005afa94: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005afa97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005afa99: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005afa9c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005afa9e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5afaa0u); call_ind(t); }
    /* 005afaa0: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005afaa3: jmp 0x5afaac */ goto L_005afaac;
L_005afaa5:; BB(0x005afaa5);
    /* 005afaa5: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005afaac:; BB(0x005afaac);
    /* 005afaac: mov dword ptr [0x7935f4], 0 */ W32((u32)(0x7935f4u), 0x0u);
    /* 005afab6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005afabd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005afac0: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x5afac5u); f_005d7bd0();
    /* 005afac5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005afac8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005afacf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005afad0: mov esp, ebp */ r_esp = r_ebp;
    /* 005afad2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005afad3: ret  */ FN_RET(0x005af990); r_esp += 4; return;
}

void f_005afae0(void) /* RoyalMatchRoom::vfunc161 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005afae0);
    /* 005afae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005afae1: mov ebp, esp */ r_ebp = r_esp;
    /* 005afae3: sub esp, 0x130 */ {  u32 a = r_esp; u32 b = 0x130u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005afae9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005afaee: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005afaf0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005afaf3: mov dword ptr [ebp - 0x130], ecx */ W32((u32)(r_ebp+0xfffffed0u), r_ecx);
    /* 005afaf9: cmp dword ptr [ebp + 0x18], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005afb00: jl 0x5afb0e */ if ((fS!=fO)) goto L_005afb0e;
L_005afb02:; BB(0x005afb02);
    /* 005afb02: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 005afb04: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005afb07: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5afb0cu); f_005ecc60();
    /* 005afb0c: jmp 0x5afb18 */ goto L_005afb18;
L_005afb0e:; BB(0x005afb0e);
    /* 005afb0e: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 005afb10: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005afb13: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5afb18u); f_005ecc60();
L_005afb18:; BB(0x005afb18);
    /* 005afb18: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005afb1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005afb1c: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005afb1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005afb20: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5afb25u); f_0064c8a0();
    /* 005afb25: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005afb28: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 005afb2e: mov dword ptr [ebp - 0x128], edx */ W32((u32)(r_ebp+0xfffffed8u), r_edx);
    /* 005afb34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005afb36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005afb38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005afb3a: lea edx, [ebp - 0x124] */ r_edx = (u32)(r_ebp+0xfffffedcu);
    /* 005afb40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005afb41: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005afb47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005afb48: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 005afb4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005afb4f: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5afb54u); f_0064c8d0();
    /* 005afb54: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005afb57: lea edx, [ebp - 0x124] */ r_edx = (u32)(r_ebp+0xfffffedcu);
    /* 005afb5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005afb5e: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 005afb63: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 005afb69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005afb6a: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5afb70u); call_ind(t); }
    /* 005afb70: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005afb73: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 005afb79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005afb7a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005afb7d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005afb7f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005afb82: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005afb88: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5afb8au); call_ind(t); }
    /* 005afb8a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005afb8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005afb8f: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005afb91: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5afb96u); f_00686d72();
    /* 005afb96: mov esp, ebp */ r_esp = r_ebp;
    /* 005afb98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005afb99: ret 0x1c */ FN_RET(0x005afae0); r_esp += 32; return;
}

void f_005afba0(void) /* RoyalMatchRoom::vfunc185 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005afba0);
    /* 005afba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005afba1: mov ebp, esp */ r_ebp = r_esp;
    /* 005afba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005afba4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005afba7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005afba9: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005afbaf: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x5afbb4u); f_005df700();
    /* 005afbb4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005afbb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afbb9: je 0x5afbca */ if (fZ) goto L_005afbca;
L_005afbbb:; BB(0x005afbbb);
    /* 005afbbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005afbbe: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5afbc3u); f_005da7b0();
    /* 005afbc3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005afbc6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afbc8: je 0x5afbcc */ if (fZ) goto L_005afbcc;
L_005afbca:; BB(0x005afbca);
    /* 005afbca: jmp 0x5afc30 */ goto L_005afc30;
L_005afbcc:; BB(0x005afbcc);
    /* 005afbcc: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005afbd2: cmp dword ptr [edx + 0x34], 0 */ {  u32 a = R32((u32)(r_edx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afbd6: je 0x5afbfd */ if (fZ) goto L_005afbfd;
L_005afbd8:; BB(0x005afbd8);
    /* 005afbd8: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005afbde: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5afbe3u); f_005b4f00();
    /* 005afbe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005afbe4: mov ecx, dword ptr [0x7935f4] */ r_ecx = R32((u32)(0x7935f4u));
    /* 005afbea: call 0x5a4b20 */ r_esp -= 4; W32(r_esp, 0x5afbefu); f_005a4b20();
    /* 005afbef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005afbf0: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005afbf5: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005afbf8: call 0x5a8e90 */ r_esp -= 4; W32(r_esp, 0x5afbfdu); f_005a8e90();
L_005afbfd:; BB(0x005afbfd);
    /* 005afbfd: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005afc03: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afc07: je 0x5afc30 */ if (fZ) goto L_005afc30;
L_005afc09:; BB(0x005afc09);
    /* 005afc09: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005afc0f: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005afc12: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005afc18: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005afc1e: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005afc21: mov edx, dword ptr [eax + 0x1bc] */ r_edx = R32((u32)(r_eax+0x1bcu));
    /* 005afc27: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005afc29: mov ecx, edx */ r_ecx = r_edx;
    /* 005afc2b: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005afc2e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5afc30u); call_ind(t); }
L_005afc30:; BB(0x005afc30);
    /* 005afc30: mov esp, ebp */ r_esp = r_ebp;
    /* 005afc32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005afc33: ret 4 */ FN_RET(0x005afba0); r_esp += 8; return;
}

void f_005afc40(void) /* RoyalMatchRoom::vfunc156 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005afc40);
    /* 005afc40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005afc41: mov ebp, esp */ r_ebp = r_esp;
    /* 005afc43: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005afc46: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005afc49: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005afc4f: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5afc54u); f_005b4f00();
    /* 005afc54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005afc55: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005afc5b: call 0x5b60c0 */ r_esp -= 4; W32(r_esp, 0x5afc60u); f_005b60c0();
    /* 005afc60: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005afc63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afc65: je 0x5afc81 */ if (fZ) goto L_005afc81;
L_005afc67:; BB(0x005afc67);
    /* 005afc67: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005afc6d: call 0x5b4ed0 */ r_esp -= 4; W32(r_esp, 0x5afc72u); f_005b4ed0();
    /* 005afc72: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005afc75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005afc78: mov byte ptr [ecx + 0x4a0], 1 */ W8((u32)(r_ecx+0x4a0u), 0x1u);
    /* 005afc7f: jmp 0x5afc99 */ goto L_005afc99;
L_005afc81:; BB(0x005afc81);
    /* 005afc81: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005afc87: call 0x5b4ed0 */ r_esp -= 4; W32(r_esp, 0x5afc8cu); f_005b4ed0();
    /* 005afc8c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005afc8f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005afc92: mov byte ptr [edx + 0x4a1], 1 */ W8((u32)(r_edx+0x4a1u), 0x1u);
L_005afc99:; BB(0x005afc99);
    /* 005afc99: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005afc9f: call 0x5b4ed0 */ r_esp -= 4; W32(r_esp, 0x5afca4u); f_005b4ed0();
    /* 005afca4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005afca7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005afcaa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005afcac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005afcaf: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005afcb2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5afcb4u); call_ind(t); }
    /* 005afcb4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005afcb7: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x5afcbcu); f_005db890();
    /* 005afcbc: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005afcc2: call 0x5af1b0 */ r_esp -= 4; W32(r_esp, 0x5afcc7u); f_005af1b0();
    /* 005afcc7: mov esp, ebp */ r_esp = r_ebp;
    /* 005afcc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005afcca: ret  */ FN_RET(0x005afc40); r_esp += 4; return;
}

void f_005afcd0(void) /* RoyalMatchRoom::vfunc157 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005afcd0);
    /* 005afcd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005afcd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005afcd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005afcd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005afcd7: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005afcdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afcdd: je 0x5afcec */ if (fZ) goto L_005afcec;
L_005afcdf:; BB(0x005afcdf);
    /* 005afcdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005afce1: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005afce7: call 0x5b7460 */ r_esp -= 4; W32(r_esp, 0x5afcecu); f_005b7460();
L_005afcec:; BB(0x005afcec);
    /* 005afcec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005afcef: call 0x5db9b0 */ r_esp -= 4; W32(r_esp, 0x5afcf4u); f_005db9b0();
    /* 005afcf4: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005afcfa: movzx edx, byte ptr [ecx + 0x678] */ r_edx = (u32)R8((u32)(r_ecx+0x678u));
    /* 005afd01: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afd03: je 0x5afd2b */ if (fZ) goto L_005afd2b;
L_005afd05:; BB(0x005afd05);
    /* 005afd05: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005afd0a: mov byte ptr [eax + 0x678], 0 */ W8((u32)(r_eax+0x678u), 0x0u);
    /* 005afd11: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005afd17: call 0x5b6a60 */ r_esp -= 4; W32(r_esp, 0x5afd1cu); f_005b6a60();
    /* 005afd1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005afd1e: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005afd24: call 0x5aef40 */ r_esp -= 4; W32(r_esp, 0x5afd29u); f_005aef40();
    /* 005afd29: jmp 0x5afd4f */ goto L_005afd4f;
L_005afd2b:; BB(0x005afd2b);
    /* 005afd2b: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005afd31: mov byte ptr [ecx + 0x678], 1 */ W8((u32)(r_ecx+0x678u), 0x1u);
    /* 005afd38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005afd3a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005afd3c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005afd3f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005afd42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005afd45: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005afd48: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005afd4a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005afd4d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5afd4fu); call_ind(t); }
L_005afd4f:; BB(0x005afd4f);
    /* 005afd4f: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005afd53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afd55: je 0x5afd64 */ if (fZ) goto L_005afd64;
L_005afd57:; BB(0x005afd57);
    /* 005afd57: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005afd5d: mov byte ptr [edx + 0x678], 1 */ W8((u32)(r_edx+0x678u), 0x1u);
L_005afd64:; BB(0x005afd64);
    /* 005afd64: mov esp, ebp */ r_esp = r_ebp;
    /* 005afd66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005afd67: ret 4 */ FN_RET(0x005afcd0); r_esp += 8; return;
}

void f_005afd80(void) /* RoyalMatchRoom::vfunc113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005afd80);
    /* 005afd80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005afd81: mov ebp, esp */ r_ebp = r_esp;
    /* 005afd83: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005afd86: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005afd89: mov dword ptr [ebp - 0x10], 0x190 */ W32((u32)(r_ebp+0xfffffff0u), 0x190u);
    /* 005afd90: mov dword ptr [ebp - 0xc], 0x8a */ W32((u32)(r_ebp+0xfffffff4u), 0x8au);
    /* 005afd97: mov dword ptr [ebp - 8], 0x213 */ W32((u32)(r_ebp+0xfffffff8u), 0x213u);
    /* 005afd9e: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005afda5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005afda8: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005afdac: mov esp, ebp */ r_esp = r_ebp;
    /* 005afdae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005afdaf: ret 4 */ FN_RET(0x005afd80); r_esp += 8; return;
}

void f_005afdc0(void) /* RoyalMatchRoom::vfunc114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005afdc0);
    /* 005afdc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005afdc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005afdc3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005afdc6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005afdc9: mov dword ptr [ebp - 0x10], 0x135 */ W32((u32)(r_ebp+0xfffffff0u), 0x135u);
    /* 005afdd0: mov dword ptr [ebp - 0xc], 0x135 */ W32((u32)(r_ebp+0xfffffff4u), 0x135u);
    /* 005afdd7: mov dword ptr [ebp - 8], 0xf1 */ W32((u32)(r_ebp+0xfffffff8u), 0xf1u);
    /* 005afdde: mov dword ptr [ebp - 4], 0xf1 */ W32((u32)(r_ebp+0xfffffffcu), 0xf1u);
    /* 005afde5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005afde8: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 005afdec: mov esp, ebp */ r_esp = r_ebp;
    /* 005afdee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005afdef: ret 4 */ FN_RET(0x005afdc0); r_esp += 8; return;
}

void f_005afe00(void) /* RoyalMatchRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005afe00);
    /* 005afe00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005afe01: mov ebp, esp */ r_ebp = r_esp;
    /* 005afe03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005afe04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005afe07: cmp dword ptr [0x793604], 0 */ {  u32 a = R32((u32)(0x793604u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afe0e: je 0x5afe1f */ if (fZ) goto L_005afe1f;
L_005afe10:; BB(0x005afe10);
    /* 005afe10: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005afe16: call 0x5b4ed0 */ r_esp -= 4; W32(r_esp, 0x5afe1bu); f_005b4ed0();
    /* 005afe1b: jmp 0x5afe21 */ goto L_005afe21;
L_005afe1f:; BB(0x005afe1f);
    /* 005afe1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005afe21:; BB(0x005afe21);
    /* 005afe21: mov esp, ebp */ r_esp = r_ebp;
    /* 005afe23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005afe24: ret  */ FN_RET(0x005afe00); r_esp += 4; return;
}

void f_005afe30(void) /* RoyalMatchRoom::vfunc187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005afe30);
    /* 005afe30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005afe31: mov ebp, esp */ r_ebp = r_esp;
    /* 005afe33: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005afe36: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005afe39: mov dword ptr [ebp - 0x28], 0x149 */ W32((u32)(r_ebp+0xffffffd8u), 0x149u);
    /* 005afe40: mov dword ptr [ebp - 0x24], 0xdb */ W32((u32)(r_ebp+0xffffffdcu), 0xdbu);
    /* 005afe47: mov dword ptr [ebp - 0x20], 0x86 */ W32((u32)(r_ebp+0xffffffe0u), 0x86u);
    /* 005afe4e: mov dword ptr [ebp - 0x1c], 0xdb */ W32((u32)(r_ebp+0xffffffe4u), 0xdbu);
    /* 005afe55: mov dword ptr [ebp - 0x18], 0x1ca */ W32((u32)(r_ebp+0xffffffe8u), 0x1cau);
    /* 005afe5c: mov dword ptr [ebp - 0x14], 0x93 */ W32((u32)(r_ebp+0xffffffecu), 0x93u);
    /* 005afe63: mov dword ptr [ebp - 0x10], 5 */ W32((u32)(r_ebp+0xfffffff0u), 0x5u);
    /* 005afe6a: mov dword ptr [ebp - 0xc], 0x93 */ W32((u32)(r_ebp+0xfffffff4u), 0x93u);
    /* 005afe71: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005afe75: jge 0x5afe8f */ if ((fS==fO)) goto L_005afe8f;
L_005afe77:; BB(0x005afe77);
    /* 005afe77: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005afe7a: mov ecx, dword ptr [ebp + eax*8 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 005afe7e: mov edx, dword ptr [ebp + eax*8 - 0x24] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 005afe82: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005afe85: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005afe87: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005afe8a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005afe8d: jmp 0x5afec9 */ goto L_005afec9;
L_005afe8f:; BB(0x005afe8f);
    /* 005afe8f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005afe96: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005afe9d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005afe9f: jne 0x5afeb8 */ if (!fZ) goto L_005afeb8;
L_005afea1:; BB(0x005afea1);
    /* 005afea1: push 0xae */ { u32 v = 0xaeu; r_esp -= 4; W32(r_esp, v); }
    /* 005afea6: push 0x6d01a8 */ { u32 v = 0x6d01a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005afeab: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005afeb0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5afeb5u); f_005e9f20();
    /* 005afeb5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005afeb8:; BB(0x005afeb8);
    /* 005afeb8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005afebb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005afebe: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005afec0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005afec3: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005afec6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_005afec9:; BB(0x005afec9);
    /* 005afec9: mov esp, ebp */ r_esp = r_ebp;
    /* 005afecb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005afecc: ret 8 */ FN_RET(0x005afe30); r_esp += 12; return;
}

void f_005afed0(void) /* RoyalMatchRoom::vfunc101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005afed0);
    /* 005afed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005afed1: mov ebp, esp */ r_ebp = r_esp;
    /* 005afed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005afed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005afed7: mov eax, 0x416 */ r_eax = 0x416u;
    /* 005afedc: mov esp, ebp */ r_esp = r_ebp;
    /* 005afede: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005afedf: ret 4 */ FN_RET(0x005afed0); r_esp += 8; return;
}

void f_005afef0(void) /* RoyalMatchRoom::vfunc115 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005afef0);
    /* 005afef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005afef1: mov ebp, esp */ r_ebp = r_esp;
    /* 005afef3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005afef6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005afef9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005aff00: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005aff03: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005aff06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aff09: sub ecx, 0x7d0 */ {  u32 a = r_ecx; u32 b = 0x7d0u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005aff0f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005aff12: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005aff16: ja 0x5aff7a */ if ((!fC&&!fZ)) goto L_005aff7a;
L_005aff18:; BB(0x005aff18);
    /* 005aff18: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aff1b: jmp dword ptr [edx*4 + 0x5aff84] */ { u32 t = R32((u32)(r_edx*4+0x5aff84u)); switch (t) { case 0x5aff34u: goto L_005aff34; case 0x5aff7au: goto L_005aff7a; case 0x5aff46u: goto L_005aff46; case 0x5aff58u: goto L_005aff58; case 0x5aff22u: goto L_005aff22; case 0x5aff6au: goto L_005aff6a; default: UNSUP(0x005aff1b, "jump table entry is not a known target"); } }
L_005aff22:; BB(0x005aff22);
    /* 005aff22: push 0x6b419c */ { u32 v = 0x6b419cu; r_esp -= 4; W32(r_esp, v); }
    /* 005aff27: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aff2a: call 0x648330 */ r_esp -= 4; W32(r_esp, 0x5aff2fu); f_00648330();
    /* 005aff2f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005aff32: jmp 0x5aff7a */ goto L_005aff7a;
L_005aff34:; BB(0x005aff34);
    /* 005aff34: push 0x6b4194 */ { u32 v = 0x6b4194u; r_esp -= 4; W32(r_esp, v); }
    /* 005aff39: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aff3c: call 0x648330 */ r_esp -= 4; W32(r_esp, 0x5aff41u); f_00648330();
    /* 005aff41: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005aff44: jmp 0x5aff7a */ goto L_005aff7a;
L_005aff46:; BB(0x005aff46);
    /* 005aff46: push 0x6b4188 */ { u32 v = 0x6b4188u; r_esp -= 4; W32(r_esp, v); }
    /* 005aff4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aff4e: call 0x648330 */ r_esp -= 4; W32(r_esp, 0x5aff53u); f_00648330();
    /* 005aff53: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005aff56: jmp 0x5aff7a */ goto L_005aff7a;
L_005aff58:; BB(0x005aff58);
    /* 005aff58: push 0x6b417c */ { u32 v = 0x6b417cu; r_esp -= 4; W32(r_esp, v); }
    /* 005aff5d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aff60: call 0x648330 */ r_esp -= 4; W32(r_esp, 0x5aff65u); f_00648330();
    /* 005aff65: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005aff68: jmp 0x5aff7a */ goto L_005aff7a;
L_005aff6a:; BB(0x005aff6a);
    /* 005aff6a: push 0x6b4174 */ { u32 v = 0x6b4174u; r_esp -= 4; W32(r_esp, v); }
    /* 005aff6f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aff72: call 0x648330 */ r_esp -= 4; W32(r_esp, 0x5aff77u); f_00648330();
    /* 005aff77: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005aff7a:; BB(0x005aff7a);
    /* 005aff7a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aff7d: mov esp, ebp */ r_esp = r_ebp;
    /* 005aff7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aff80: ret 8 */ FN_RET(0x005afef0); r_esp += 12; return;
}

void f_005affb0(void) /* RoyalMatchRoom::vfunc159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005affb0);
    /* 005affb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005affb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005affb3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005affb6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005affb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005affbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005affbd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5affc2u); f_0064c8a0();
    /* 005affc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005affc5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005affc8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005affcb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005affce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005affd1: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005affd3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005affd6: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005affd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005affdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005affdd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5affe2u); f_005dcb00();
    /* 005affe2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005affe5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005affe8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005affeb: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 005afff1: mov byte ptr [ebp - 0x25], dl */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_edx);
    /* 005afff4: movzx eax, byte ptr [ebp - 0x25] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 005afff8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005afffa: je 0x5afffe */ if (fZ) goto L_005afffe;
L_005afffc:; BB(0x005afffc);
    /* 005afffc: jmp 0x5b0057 */ goto L_005b0057;
L_005afffe:; BB(0x005afffe);
    /* 005afffe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0001: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0002: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005b0005: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0006: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b0009: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b000f: mov ecx, dword ptr [ecx + eax*4 + 0x634] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x634u));
    /* 005b0016: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5b001bu); f_005cb880();
    /* 005b001b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005b001e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b001f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b0021: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0022: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 005b0025: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0026: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b0029: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b002a: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005b002d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b002e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0031: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005b0037: mov ecx, dword ptr [edx + ecx*4 + 0x580] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x580u));
    /* 005b003e: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5b0043u); f_005cb880();
    /* 005b0043: mov ecx, eax */ r_ecx = r_eax;
    /* 005b0045: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5b004au); f_0064c5c0();
    /* 005b004a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b004c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005b004f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b0052: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005b0054: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_005b0057:; BB(0x005b0057);
    /* 005b0057: mov esp, ebp */ r_esp = r_ebp;
    /* 005b0059: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b005a: ret 8 */ FN_RET(0x005affb0); r_esp += 12; return;
}

void f_005b0060(void) /* RoyalMatchRoom::vfunc189 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b0060);
    /* 005b0060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b0061: mov ebp, esp */ r_ebp = r_esp;
    /* 005b0063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b0067: mov eax, 0xb */ r_eax = 0xbu;
    /* 005b006c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b006e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b006f: ret  */ FN_RET(0x005b0060); r_esp += 4; return;
}

void f_005b0070(void) /* RoyalMatchRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b0070);
    /* 005b0070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b0071: mov ebp, esp */ r_ebp = r_esp;
    /* 005b0073: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b0076: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b0079: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b007c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b007d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b0080: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x5b0085u); f_005d7f40();
    /* 005b0085: cmp dword ptr [0x793604], 0 */ {  u32 a = R32((u32)(0x793604u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b008c: je 0x5b009e */ if (fZ) goto L_005b009e;
L_005b008e:; BB(0x005b008e);
    /* 005b008e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b0094: call 0x5b5380 */ r_esp -= 4; W32(r_esp, 0x5b0099u); f_005b5380();
    /* 005b0099: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b009c: jmp 0x5b00a5 */ goto L_005b00a5;
L_005b009e:; BB(0x005b009e);
    /* 005b009e: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
L_005b00a5:; BB(0x005b00a5);
    /* 005b00a5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b00a8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b00ab: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b00ae: cmp dword ptr [edx + 0x18], 4 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b00b2: jne 0x5b0159 */ if (!fZ) goto L_005b0159;
L_005b00b8:; BB(0x005b00b8);
    /* 005b00b8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b00bb: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005b00bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b00c1: jne 0x5b0159 */ if (!fZ) goto L_005b0159;
L_005b00c7:; BB(0x005b00c7);
    /* 005b00c7: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b00cb: je 0x5b0159 */ if (fZ) goto L_005b0159;
L_005b00d1:; BB(0x005b00d1);
    /* 005b00d1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b00d4: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 005b00d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b00d9: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x5b00dfu); call_ind(t); }
    /* 005b00df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b00e2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b00e5: cmp dword ptr [ebp - 0x1c], 0x74 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b00e9: je 0x5b00ed */ if (fZ) goto L_005b00ed;
L_005b00eb:; BB(0x005b00eb);
    /* 005b00eb: jmp 0x5b0159 */ goto L_005b0159;
L_005b00ed:; BB(0x005b00ed);
    /* 005b00ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b00f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b00f1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b00f6u); f_005dcb00();
    /* 005b00f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b00f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b00fb: je 0x5b0159 */ if (fZ) goto L_005b0159;
L_005b00fd:; BB(0x005b00fd);
    /* 005b00fd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b0100: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0101: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b0106u); f_005dcb00();
    /* 005b0106: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0109: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b010c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b010f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b0114u); f_0063aac0();
    /* 005b0114: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b0116: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b0119: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b011d: je 0x5b013b */ if (fZ) goto L_005b013b;
L_005b011f:; BB(0x005b011f);
    /* 005b011f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b0122: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b0127u); f_0063aac0();
    /* 005b0127: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b0129: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b012c: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0130: je 0x5b013b */ if (fZ) goto L_005b013b;
L_005b0132:; BB(0x005b0132);
    /* 005b0132: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005b0139: jmp 0x5b0142 */ goto L_005b0142;
L_005b013b:; BB(0x005b013b);
    /* 005b013b: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_005b0142:; BB(0x005b0142);
    /* 005b0142: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 005b0146: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0148: je 0x5b0159 */ if (fZ) goto L_005b0159;
L_005b014a:; BB(0x005b014a);
    /* 005b014a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b014d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b014e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b0154: call 0x5b6880 */ r_esp -= 4; W32(r_esp, 0x5b0159u); f_005b6880();
L_005b0159:; BB(0x005b0159);
    /* 005b0159: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b015c: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 005b0160: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0162: jne 0x5b01af */ if (!fZ) goto L_005b01af;
L_005b0164:; BB(0x005b0164);
    /* 005b0164: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b0167: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b016b: jne 0x5b01af */ if (!fZ) goto L_005b01af;
L_005b016d:; BB(0x005b016d);
    /* 005b016d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0170: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 005b0174: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0177: jne 0x5b01af */ if (!fZ) goto L_005b01af;
L_005b0179:; BB(0x005b0179);
    /* 005b0179: cmp dword ptr [0x793604], 0 */ {  u32 a = R32((u32)(0x793604u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0180: je 0x5b01af */ if (fZ) goto L_005b01af;
L_005b0182:; BB(0x005b0182);
    /* 005b0182: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b0188: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b018du); f_005b4f00();
    /* 005b018d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0190: je 0x5b01af */ if (fZ) goto L_005b01af;
L_005b0192:; BB(0x005b0192);
    /* 005b0192: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b0198: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b019du); f_005b4f00();
    /* 005b019d: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b01a3: mov ecx, dword ptr [ecx + eax*4 + 0x580] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x580u));
    /* 005b01aa: call 0x5cb5b0 */ r_esp -= 4; W32(r_esp, 0x5b01afu); f_005cb5b0();
L_005b01af:; BB(0x005b01af);
    /* 005b01af: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b01b2: movzx eax, byte ptr [edx + 4] */ r_eax = (u32)R8((u32)(r_edx+0x4u));
    /* 005b01b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b01b8: jne 0x5b0222 */ if (!fZ) goto L_005b0222;
L_005b01ba:; BB(0x005b01ba);
    /* 005b01ba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b01bd: cmp dword ptr [ecx + 0x18], 1 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b01c1: jne 0x5b0222 */ if (!fZ) goto L_005b0222;
L_005b01c3:; BB(0x005b01c3);
    /* 005b01c3: cmp dword ptr [0x7935f8], 0 */ {  u32 a = R32((u32)(0x7935f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b01ca: je 0x5b0222 */ if (fZ) goto L_005b0222;
L_005b01cc:; BB(0x005b01cc);
    /* 005b01cc: cmp dword ptr [0x793604], 0 */ {  u32 a = R32((u32)(0x793604u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b01d3: je 0x5b0222 */ if (fZ) goto L_005b0222;
L_005b01d5:; BB(0x005b01d5);
    /* 005b01d5: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005b01db: cmp dword ptr [edx + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b01df: je 0x5b0222 */ if (fZ) goto L_005b0222;
L_005b01e1:; BB(0x005b01e1);
    /* 005b01e1: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005b01e6: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b01ea: je 0x5b0222 */ if (fZ) goto L_005b0222;
L_005b01ec:; BB(0x005b01ec);
    /* 005b01ec: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b01f2: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005b01f5: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5b01fau); f_005f54a0();
    /* 005b01fa: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005b01fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b01ff: jne 0x5b0215 */ if (!fZ) goto L_005b0215;
L_005b0201:; BB(0x005b0201);
    /* 005b0201: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005b0206: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005b0209: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5b020eu); f_005f54a0();
    /* 005b020e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b0211: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0213: je 0x5b0222 */ if (fZ) goto L_005b0222;
L_005b0215:; BB(0x005b0215);
    /* 005b0215: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005b021b: mov byte ptr [edx + 0x5c0], 1 */ W8((u32)(r_edx+0x5c0u), 0x1u);
L_005b0222:; BB(0x005b0222);
    /* 005b0222: mov esp, ebp */ r_esp = r_ebp;
    /* 005b0224: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0225: ret 4 */ FN_RET(0x005b0070); r_esp += 8; return;
}

void f_005b0230(void) /* RoyalMatchRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b0230);
    /* 005b0230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b0231: mov ebp, esp */ r_ebp = r_esp;
    /* 005b0233: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b0236: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005b0239: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b023f: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b0244u); f_005b4f00();
    /* 005b0244: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0245: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b024au); f_005dcb00();
    /* 005b024a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b024d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b024f: je 0x5b03df */ if (fZ) goto L_005b03df;
L_005b0255:; BB(0x005b0255);
    /* 005b0255: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b025b: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b0260u); f_005b4f00();
    /* 005b0260: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0261: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b0266u); f_005dcb00();
    /* 005b0266: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0269: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b026c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b026f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b0274u); f_0063aac0();
    /* 005b0274: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b0276: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b0279: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b027d: je 0x5b029b */ if (fZ) goto L_005b029b;
L_005b027f:; BB(0x005b027f);
    /* 005b027f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b0282: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b0287u); f_0063aac0();
    /* 005b0287: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b0289: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b028c: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0290: je 0x5b029b */ if (fZ) goto L_005b029b;
L_005b0292:; BB(0x005b0292);
    /* 005b0292: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005b0299: jmp 0x5b02a2 */ goto L_005b02a2;
L_005b029b:; BB(0x005b029b);
    /* 005b029b: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_005b02a2:; BB(0x005b02a2);
    /* 005b02a2: movzx edx, byte ptr [ebp - 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 005b02a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b02a8: je 0x5b03df */ if (fZ) goto L_005b03df;
L_005b02ae:; BB(0x005b02ae);
    /* 005b02ae: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b02b1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b02b4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b02b7: sub ecx, 0x3154ea */ {  u32 a = r_ecx; u32 b = 0x3154eau; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b02bd: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005b02c0: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b02c4: ja 0x5b03df */ if ((!fC&&!fZ)) goto L_005b03df;
L_005b02ca:; BB(0x005b02ca);
    /* 005b02ca: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b02cd: jmp dword ptr [edx*4 + 0x5b03f8] */ { u32 t = R32((u32)(r_edx*4+0x5b03f8u)); switch (t) { case 0x5b02d4u: goto L_005b02d4; case 0x5b0306u: goto L_005b0306; case 0x5b0338u: goto L_005b0338; case 0x5b036au: goto L_005b036a; case 0x5b0399u: goto L_005b0399; case 0x5b03c8u: goto L_005b03c8; default: UNSUP(0x005b02cd, "jump table entry is not a known target"); } }
L_005b02d4:; BB(0x005b02d4);
    /* 005b02d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b02d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b02d8: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b02de: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b02e3u); f_005b4f00();
    /* 005b02e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b02e4: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005b02ea: call 0x5ad1f0 */ r_esp -= 4; W32(r_esp, 0x5b02efu); f_005ad1f0();
    /* 005b02ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b02f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b02f4: je 0x5b0301 */ if (fZ) goto L_005b0301;
L_005b02f6:; BB(0x005b02f6);
    /* 005b02f6: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b02fc: call 0x5a7080 */ r_esp -= 4; W32(r_esp, 0x5b0301u); f_005a7080();
L_005b0301:; BB(0x005b0301);
    /* 005b0301: jmp 0x5b03ef */ goto L_005b03ef;
L_005b0306:; BB(0x005b0306);
    /* 005b0306: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0308: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b030a: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b0310: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b0315u); f_005b4f00();
    /* 005b0315: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0316: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005b031c: call 0x5ad1f0 */ r_esp -= 4; W32(r_esp, 0x5b0321u); f_005ad1f0();
    /* 005b0321: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b0324: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0326: je 0x5b0333 */ if (fZ) goto L_005b0333;
L_005b0328:; BB(0x005b0328);
    /* 005b0328: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b032e: call 0x5a7080 */ r_esp -= 4; W32(r_esp, 0x5b0333u); f_005a7080();
L_005b0333:; BB(0x005b0333);
    /* 005b0333: jmp 0x5b03ef */ goto L_005b03ef;
L_005b0338:; BB(0x005b0338);
    /* 005b0338: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b033a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b033c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b0342: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b0347u); f_005b4f00();
    /* 005b0347: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0348: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005b034e: call 0x5ad1f0 */ r_esp -= 4; W32(r_esp, 0x5b0353u); f_005ad1f0();
    /* 005b0353: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005b0356: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0358: je 0x5b0365 */ if (fZ) goto L_005b0365;
L_005b035a:; BB(0x005b035a);
    /* 005b035a: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b0360: call 0x5a7080 */ r_esp -= 4; W32(r_esp, 0x5b0365u); f_005a7080();
L_005b0365:; BB(0x005b0365);
    /* 005b0365: jmp 0x5b03ef */ goto L_005b03ef;
L_005b036a:; BB(0x005b036a);
    /* 005b036a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b036c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b036e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b0374: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b0379u); f_005b4f00();
    /* 005b0379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b037a: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005b0380: call 0x5ad1f0 */ r_esp -= 4; W32(r_esp, 0x5b0385u); f_005ad1f0();
    /* 005b0385: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b0388: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b038a: je 0x5b0397 */ if (fZ) goto L_005b0397;
L_005b038c:; BB(0x005b038c);
    /* 005b038c: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b0392: call 0x5a7080 */ r_esp -= 4; W32(r_esp, 0x5b0397u); f_005a7080();
L_005b0397:; BB(0x005b0397);
    /* 005b0397: jmp 0x5b03ef */ goto L_005b03ef;
L_005b0399:; BB(0x005b0399);
    /* 005b0399: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b039b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b039d: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b03a3: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b03a8u); f_005b4f00();
    /* 005b03a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b03a9: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005b03af: call 0x5ad1f0 */ r_esp -= 4; W32(r_esp, 0x5b03b4u); f_005ad1f0();
    /* 005b03b4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b03b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b03b9: je 0x5b03c6 */ if (fZ) goto L_005b03c6;
L_005b03bb:; BB(0x005b03bb);
    /* 005b03bb: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b03c1: call 0x5a7080 */ r_esp -= 4; W32(r_esp, 0x5b03c6u); f_005a7080();
L_005b03c6:; BB(0x005b03c6);
    /* 005b03c6: jmp 0x5b03ef */ goto L_005b03ef;
L_005b03c8:; BB(0x005b03c8);
    /* 005b03c8: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b03ce: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b03d3u); f_005b4f00();
    /* 005b03d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b03d4: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b03da: call 0x5b6880 */ r_esp -= 4; W32(r_esp, 0x5b03dfu); f_005b6880();
L_005b03df:; BB(0x005b03df);
    /* 005b03df: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b03e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b03e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b03e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b03e7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b03ea: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x5b03efu); f_005dc7d0();
L_005b03ef:; BB(0x005b03ef);
    /* 005b03ef: mov esp, ebp */ r_esp = r_ebp;
    /* 005b03f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b03f2: ret 8 */ FN_RET(0x005b0230); r_esp += 12; return;
}

void f_005b0410(void) /* RoyalMatchRoom::vfunc81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b0410);
    /* 005b0410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b0411: mov ebp, esp */ r_ebp = r_esp;
    /* 005b0413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0414: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b0417: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005b041d: call 0x636e70 */ r_esp -= 4; W32(r_esp, 0x5b0422u); f_00636e70();
    /* 005b0422: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0424: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b0427: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005b042a: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5b042fu); f_005fc420();
    /* 005b042f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b0432: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x5b0437u); f_005db890();
    /* 005b0437: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b043d: call 0x5a7ea0 */ r_esp -= 4; W32(r_esp, 0x5b0442u); f_005a7ea0();
    /* 005b0442: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b0448: call 0x5b6a60 */ r_esp -= 4; W32(r_esp, 0x5b044du); f_005b6a60();
    /* 005b044d: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005b0453: call 0x5af1b0 */ r_esp -= 4; W32(r_esp, 0x5b0458u); f_005af1b0();
    /* 005b0458: mov esp, ebp */ r_esp = r_ebp;
    /* 005b045a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b045b: ret 8 */ FN_RET(0x005b0410); r_esp += 12; return;
}

void f_005b0460(void) /* RoyalMatchRoom::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b0460);
    /* 005b0460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b0461: mov ebp, esp */ r_ebp = r_esp;
    /* 005b0463: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b0466: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b0469: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b046b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005b0471: call 0x6375d0 */ r_esp -= 4; W32(r_esp, 0x5b0476u); f_006375d0();
    /* 005b0476: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b0479: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 005b047b: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b0481: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b0486u); f_005fb350();
    /* 005b0486: mov ecx, eax */ r_ecx = r_eax;
    /* 005b0488: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5b048du); f_00600230();
    /* 005b048d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b0490: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 005b0493: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0495: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b049b: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b04a0u); f_005fb350();
    /* 005b04a0: mov ecx, eax */ r_ecx = r_eax;
    /* 005b04a2: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5b04a7u); f_00600230();
    /* 005b04a7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b04aa: mov byte ptr [edx + 5], al */ W8((u32)(r_edx+0x5u), (u8)r_eax);
    /* 005b04ad: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 005b04af: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b04b5: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b04bau); f_005fb350();
    /* 005b04ba: mov ecx, eax */ r_ecx = r_eax;
    /* 005b04bc: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5b04c1u); f_00600230();
    /* 005b04c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b04c4: mov byte ptr [ecx + 6], al */ W8((u32)(r_ecx+0x6u), (u8)r_eax);
    /* 005b04c7: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 005b04c9: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b04cf: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b04d4u); f_005fb350();
    /* 005b04d4: mov ecx, eax */ r_ecx = r_eax;
    /* 005b04d6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5b04dbu); f_00600230();
    /* 005b04db: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b04de: mov byte ptr [edx + 7], al */ W8((u32)(r_edx+0x7u), (u8)r_eax);
    /* 005b04e1: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b04e8: je 0x5b050f */ if (fZ) goto L_005b050f;
L_005b04ea:; BB(0x005b04ea);
    /* 005b04ea: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 005b04ec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b04ef: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b04f4u); f_005fb350();
    /* 005b04f4: mov ecx, eax */ r_ecx = r_eax;
    /* 005b04f6: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5b04fbu); f_00600230();
    /* 005b04fb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b04fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0500: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005b0503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0504: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 005b050a: call 0x5cdd10 */ r_esp -= 4; W32(r_esp, 0x5b050fu); f_005cdd10();
L_005b050f:; BB(0x005b050f);
    /* 005b050f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b0512: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5b0517u); f_005da7b0();
    /* 005b0517: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005b051a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b051c: je 0x5b052e */ if (fZ) goto L_005b052e;
L_005b051e:; BB(0x005b051e);
    /* 005b051e: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b0524: call 0x5a7ea0 */ r_esp -= 4; W32(r_esp, 0x5b0529u); f_005a7ea0();
    /* 005b0529: jmp 0x5b0691 */ goto L_005b0691;
L_005b052e:; BB(0x005b052e);
    /* 005b052e: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0530: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b0536: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b053bu); f_005fb5e0();
    /* 005b053b: mov ecx, eax */ r_ecx = r_eax;
    /* 005b053d: call 0x605f40 */ r_esp -= 4; W32(r_esp, 0x5b0542u); f_00605f40();
    /* 005b0542: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b0545: mov byte ptr [ecx + 0xd], al */ W8((u32)(r_ecx+0xdu), (u8)r_eax);
    /* 005b0548: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005b054a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b0550: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b0555u); f_005fb5e0();
    /* 005b0555: mov ecx, eax */ r_ecx = r_eax;
    /* 005b0557: call 0x605f40 */ r_esp -= 4; W32(r_esp, 0x5b055cu); f_00605f40();
    /* 005b055c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b055f: mov byte ptr [edx + 9], al */ W8((u32)(r_edx+0x9u), (u8)r_eax);
    /* 005b0562: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0564: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b056a: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b056fu); f_005fb5e0();
    /* 005b056f: mov ecx, eax */ r_ecx = r_eax;
    /* 005b0571: call 0x605f40 */ r_esp -= 4; W32(r_esp, 0x5b0576u); f_00605f40();
    /* 005b0576: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b0579: mov byte ptr [ecx + 8], al */ W8((u32)(r_ecx+0x8u), (u8)r_eax);
    /* 005b057c: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005b057e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b0584: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b0589u); f_005fb5e0();
    /* 005b0589: mov ecx, eax */ r_ecx = r_eax;
    /* 005b058b: call 0x605f40 */ r_esp -= 4; W32(r_esp, 0x5b0590u); f_00605f40();
    /* 005b0590: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b0593: mov byte ptr [edx + 0xb], al */ W8((u32)(r_edx+0xbu), (u8)r_eax);
    /* 005b0596: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0598: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b059e: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b05a3u); f_005fb5e0();
    /* 005b05a3: mov ecx, eax */ r_ecx = r_eax;
    /* 005b05a5: call 0x605f40 */ r_esp -= 4; W32(r_esp, 0x5b05aau); f_00605f40();
    /* 005b05aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b05ad: mov byte ptr [ecx + 0xa], al */ W8((u32)(r_ecx+0xau), (u8)r_eax);
    /* 005b05b0: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 005b05b2: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b05b8: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b05bdu); f_005fb350();
    /* 005b05bd: mov ecx, eax */ r_ecx = r_eax;
    /* 005b05bf: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5b05c4u); f_00600230();
    /* 005b05c4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b05c7: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 005b05c9: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b05cb: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b05d1: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b05d6u); f_005fb350();
    /* 005b05d6: mov ecx, eax */ r_ecx = r_eax;
    /* 005b05d8: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5b05ddu); f_00600230();
    /* 005b05dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b05e0: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 005b05e3: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 005b05e5: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b05eb: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b05f0u); f_005fb350();
    /* 005b05f0: mov ecx, eax */ r_ecx = r_eax;
    /* 005b05f2: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5b05f7u); f_00600230();
    /* 005b05f7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b05fa: mov byte ptr [edx + 2], al */ W8((u32)(r_edx+0x2u), (u8)r_eax);
    /* 005b05fd: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005b05ff: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b0605: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b060au); f_005fb350();
    /* 005b060a: mov ecx, eax */ r_ecx = r_eax;
    /* 005b060c: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5b0611u); f_00600230();
    /* 005b0611: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b0614: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 005b0617: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0619: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b061f: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x5b0624u); f_005fb860();
    /* 005b0624: mov ecx, eax */ r_ecx = r_eax;
    /* 005b0626: call 0x6051d0 */ r_esp -= 4; W32(r_esp, 0x5b062bu); f_006051d0();
    /* 005b062b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b062e: mov byte ptr [edx + 0xc], al */ W8((u32)(r_edx+0xcu), (u8)r_eax);
    /* 005b0631: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005b0637: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x5b063cu); f_00637610();
    /* 005b063c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b063f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b0641: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b0644: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005b064a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b064cu); call_ind(t); }
    /* 005b064c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b064f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0651: je 0x5b065e */ if (fZ) goto L_005b065e;
L_005b0653:; BB(0x005b0653);
    /* 005b0653: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b0659: call 0x5b8430 */ r_esp -= 4; W32(r_esp, 0x5b065eu); f_005b8430();
L_005b065e:; BB(0x005b065e);
    /* 005b065e: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b0664: call 0x5a7ea0 */ r_esp -= 4; W32(r_esp, 0x5b0669u); f_005a7ea0();
    /* 005b0669: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b066c: movzx eax, byte ptr [edx + 0x7c] */ r_eax = (u32)R8((u32)(r_edx+0x7cu));
    /* 005b0670: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0672: je 0x5b0691 */ if (fZ) goto L_005b0691;
L_005b0674:; BB(0x005b0674);
    /* 005b0674: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b0677: mov byte ptr [ecx + 0x7c], 0 */ W8((u32)(r_ecx+0x7cu), 0x0u);
    /* 005b067b: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b0681: call 0x5b6a60 */ r_esp -= 4; W32(r_esp, 0x5b0686u); f_005b6a60();
    /* 005b0686: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005b068c: call 0x5af1b0 */ r_esp -= 4; W32(r_esp, 0x5b0691u); f_005af1b0();
L_005b0691:; BB(0x005b0691);
    /* 005b0691: mov esp, ebp */ r_esp = r_ebp;
    /* 005b0693: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0694: ret 8 */ FN_RET(0x005b0460); r_esp += 12; return;
}

void f_005b06a0(void) /* RoyalMatchRoom::vfunc160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b06a0);
    /* 005b06a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b06a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b06a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b06a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b06a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b06b0: jmp 0x5b06bb */ goto L_005b06bb;
L_005b06b2:; BB(0x005b06b2);
    /* 005b06b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b06b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b06b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005b06bb:; BB(0x005b06bb);
    /* 005b06bb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b06bf: jge 0x5b070b */ if ((fS==fO)) goto L_005b070b;
L_005b06c1:; BB(0x005b06c1);
    /* 005b06c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b06c4: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005b06ca: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005b06ce: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b06d1: je 0x5b06e5 */ if (fZ) goto L_005b06e5;
L_005b06d3:; BB(0x005b06d3);
    /* 005b06d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b06d6: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005b06dc: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005b06e0: call 0x5cd330 */ r_esp -= 4; W32(r_esp, 0x5b06e5u); f_005cd330();
L_005b06e5:; BB(0x005b06e5);
    /* 005b06e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b06e8: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b06ee: mov edx, dword ptr [ecx + eax*4 + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 005b06f2: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b06f5: je 0x5b0709 */ if (fZ) goto L_005b0709;
L_005b06f7:; BB(0x005b06f7);
    /* 005b06f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b06fa: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b0700: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 005b0704: call 0x5cd330 */ r_esp -= 4; W32(r_esp, 0x5b0709u); f_005cd330();
L_005b0709:; BB(0x005b0709);
    /* 005b0709: jmp 0x5b06b2 */ goto L_005b06b2;
L_005b070b:; BB(0x005b070b);
    /* 005b070b: mov esp, ebp */ r_esp = r_ebp;
    /* 005b070d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b070e: ret 4 */ FN_RET(0x005b06a0); r_esp += 8; return;
}

void f_005b0720(void) /* RoyalMatchRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b0720);
    /* 005b0720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b0721: mov ebp, esp */ r_ebp = r_esp;
    /* 005b0723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b0727: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0729: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b072b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b072e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005b0731: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b0734: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005b0737: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b0739: mov ecx, eax */ r_ecx = r_eax;
    /* 005b073b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005b073e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b0740u); call_ind(t); }
    /* 005b0740: mov esp, ebp */ r_esp = r_ebp;
    /* 005b0742: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0743: ret  */ FN_RET(0x005b0720); r_esp += 4; return;
}

void f_005b0750(void) /* RoyalMatchRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b0750);
    /* 005b0750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b0751: mov ebp, esp */ r_ebp = r_esp;
    /* 005b0753: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0755: push 0x6a7d7d */ { u32 v = 0x6a7d7du; r_esp -= 4; W32(r_esp, v); }
    /* 005b075a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b0760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0761: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b0764: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005b0769: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b076b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b076c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005b076f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005b0775: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005b0778: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b077b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x5b0780u); f_005d8230();
    /* 005b0780: push 0x67c */ { u32 v = 0x67cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0785: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5b078au); f_00686d82();
    /* 005b078a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b078d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b0790: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b0797: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b079b: je 0x5b07aa */ if (fZ) goto L_005b07aa;
L_005b079d:; BB(0x005b079d);
    /* 005b079d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b07a0: call 0x5b2ff0 */ r_esp -= 4; W32(r_esp, 0x5b07a5u); f_005b2ff0();
    /* 005b07a5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005b07a8: jmp 0x5b07b1 */ goto L_005b07b1;
L_005b07aa:; BB(0x005b07aa);
    /* 005b07aa: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005b07b1:; BB(0x005b07b1);
    /* 005b07b1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b07b4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b07b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b07be: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b07c1: mov dword ptr [0x793604], ecx */ W32((u32)(0x793604u), r_ecx);
    /* 005b07c7: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b07cd: call 0x5b6190 */ r_esp -= 4; W32(r_esp, 0x5b07d2u); f_005b6190();
    /* 005b07d2: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b07d4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5b07d9u); f_00686d82();
    /* 005b07d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b07dc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b07df: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005b07e6: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b07ea: je 0x5b07f9 */ if (fZ) goto L_005b07f9;
L_005b07ec:; BB(0x005b07ec);
    /* 005b07ec: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b07ef: call 0x5acf50 */ r_esp -= 4; W32(r_esp, 0x5b07f4u); f_005acf50();
    /* 005b07f4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005b07f7: jmp 0x5b0800 */ goto L_005b0800;
L_005b07f9:; BB(0x005b07f9);
    /* 005b07f9: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005b0800:; BB(0x005b0800);
    /* 005b0800: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b0803: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005b0806: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b080d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b0810: mov dword ptr [0x7935fc], eax */ W32((u32)(0x7935fcu), r_eax);
    /* 005b0815: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005b081b: call 0x5aeb20 */ r_esp -= 4; W32(r_esp, 0x5b0820u); f_005aeb20();
    /* 005b0820: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0822: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5b0827u); f_00686d82();
    /* 005b0827: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b082a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005b082d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005b0834: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0838: je 0x5b0847 */ if (fZ) goto L_005b0847;
L_005b083a:; BB(0x005b083a);
    /* 005b083a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b083d: call 0x5a6c80 */ r_esp -= 4; W32(r_esp, 0x5b0842u); f_005a6c80();
    /* 005b0842: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005b0845: jmp 0x5b084e */ goto L_005b084e;
L_005b0847:; BB(0x005b0847);
    /* 005b0847: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005b084e:; BB(0x005b084e);
    /* 005b084e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005b0851: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b0854: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b085b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b085e: mov dword ptr [0x7935f8], edx */ W32((u32)(0x7935f8u), r_edx);
    /* 005b0864: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b086a: call 0x5a7650 */ r_esp -= 4; W32(r_esp, 0x5b086fu); f_005a7650();
    /* 005b086f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0871: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5b0876u); f_00686d82();
    /* 005b0876: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0879: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005b087c: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005b0883: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0887: je 0x5b0896 */ if (fZ) goto L_005b0896;
L_005b0889:; BB(0x005b0889);
    /* 005b0889: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b088c: call 0x5a4920 */ r_esp -= 4; W32(r_esp, 0x5b0891u); f_005a4920();
    /* 005b0891: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005b0894: jmp 0x5b089d */ goto L_005b089d;
L_005b0896:; BB(0x005b0896);
    /* 005b0896: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005b089d:; BB(0x005b089d);
    /* 005b089d: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b08a0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b08a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b08aa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b08ad: mov dword ptr [0x7935f4], ecx */ W32((u32)(0x7935f4u), r_ecx);
    /* 005b08b3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005b08b5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5b08bau); f_00686d82();
    /* 005b08ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b08bd: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005b08c0: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005b08c7: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b08cb: je 0x5b08e8 */ if (fZ) goto L_005b08e8;
L_005b08cd:; BB(0x005b08cd);
    /* 005b08cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b08cf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b08d2: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5b08d7u); f_005fc0d0();
    /* 005b08d7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b08da: mov dword ptr [edx], 0x6d01cc */ W32((u32)(r_edx), 0x6d01ccu);
    /* 005b08e0: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005b08e3: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005b08e6: jmp 0x5b08ef */ goto L_005b08ef;
L_005b08e8:; BB(0x005b08e8);
    /* 005b08e8: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005b08ef:; BB(0x005b08ef);
    /* 005b08ef: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005b08f2: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005b08f5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b08fc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b08ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0900: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b0903: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x5b0908u); f_005f1b70();
    /* 005b0908: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b090b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005b090e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b0911: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005b0914: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b0916: mov ecx, eax */ r_ecx = r_eax;
    /* 005b0918: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005b091b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b091du); call_ind(t); }
    /* 005b091d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b0920: call 0x5d85e0 */ r_esp -= 4; W32(r_esp, 0x5b0925u); f_005d85e0();
    /* 005b0925: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0927: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005b092d: call 0x5aef40 */ r_esp -= 4; W32(r_esp, 0x5b0932u); f_005aef40();
    /* 005b0932: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b0935: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b093c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b093d: mov esp, ebp */ r_esp = r_ebp;
    /* 005b093f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b0940: ret  */ FN_RET(0x005b0750); r_esp += 4; return;
}

void f_005b0950(void) /* RoyalMatchRoom::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b0950);
    /* 005b0950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b0951: mov ebp, esp */ r_ebp = r_esp;
    /* 005b0953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0955: push 0x6a7da6 */ { u32 v = 0x6a7da6u; r_esp -= 4; W32(r_esp, v); }
    /* 005b095a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b0960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0961: sub esp, 0x114 */ {  u32 a = r_esp; u32 b = 0x114u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b0967: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005b096c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b096e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b096f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005b0972: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005b0978: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 005b097e: mov dword ptr [ebp - 0x60], 0x6d0474 */ W32((u32)(r_ebp+0xffffffa0u), 0x6d0474u);
    /* 005b0985: mov dword ptr [ebp - 0x5c], 0x6d0450 */ W32((u32)(r_ebp+0xffffffa4u), 0x6d0450u);
    /* 005b098c: mov dword ptr [ebp - 0x58], 0x6d042c */ W32((u32)(r_ebp+0xffffffa8u), 0x6d042cu);
    /* 005b0993: mov dword ptr [ebp - 0x54], 0x6d0404 */ W32((u32)(r_ebp+0xffffffacu), 0x6d0404u);
    /* 005b099a: mov dword ptr [ebp - 0x50], 0x6d03e0 */ W32((u32)(r_ebp+0xffffffb0u), 0x6d03e0u);
    /* 005b09a1: mov dword ptr [ebp - 0x4c], 0x6d03b8 */ W32((u32)(r_ebp+0xffffffb4u), 0x6d03b8u);
    /* 005b09a8: mov dword ptr [ebp - 0x48], 0x6d0394 */ W32((u32)(r_ebp+0xffffffb8u), 0x6d0394u);
    /* 005b09af: mov dword ptr [ebp - 0x44], 0x6d0370 */ W32((u32)(r_ebp+0xffffffbcu), 0x6d0370u);
    /* 005b09b6: mov dword ptr [ebp - 0xb4], 0x10e */ W32((u32)(r_ebp+0xffffff4cu), 0x10eu);
    /* 005b09c0: mov dword ptr [ebp - 0xb0], 0xcc */ W32((u32)(r_ebp+0xffffff50u), 0xccu);
    /* 005b09ca: mov dword ptr [ebp - 0xac], 0x10e */ W32((u32)(r_ebp+0xffffff54u), 0x10eu);
    /* 005b09d4: mov dword ptr [ebp - 0xa8], 0xdf */ W32((u32)(r_ebp+0xffffff58u), 0xdfu);
    /* 005b09de: mov dword ptr [ebp - 0xa4], 0x10e */ W32((u32)(r_ebp+0xffffff5cu), 0x10eu);
    /* 005b09e8: mov dword ptr [ebp - 0xa0], 0xf2 */ W32((u32)(r_ebp+0xffffff60u), 0xf2u);
    /* 005b09f2: mov dword ptr [ebp - 0x9c], 0x10e */ W32((u32)(r_ebp+0xffffff64u), 0x10eu);
    /* 005b09fc: mov dword ptr [ebp - 0x98], 0x105 */ W32((u32)(r_ebp+0xffffff68u), 0x105u);
    /* 005b0a06: mov dword ptr [ebp - 0x94], 0x10e */ W32((u32)(r_ebp+0xffffff6cu), 0x10eu);
    /* 005b0a10: mov dword ptr [ebp - 0x90], 0xcc */ W32((u32)(r_ebp+0xffffff70u), 0xccu);
    /* 005b0a1a: mov dword ptr [ebp - 0x8c], 0x10e */ W32((u32)(r_ebp+0xffffff74u), 0x10eu);
    /* 005b0a24: mov dword ptr [ebp - 0x88], 0xdf */ W32((u32)(r_ebp+0xffffff78u), 0xdfu);
    /* 005b0a2e: mov dword ptr [ebp - 0x84], 0x10e */ W32((u32)(r_ebp+0xffffff7cu), 0x10eu);
    /* 005b0a38: mov dword ptr [ebp - 0x80], 0xf2 */ W32((u32)(r_ebp+0xffffff80u), 0xf2u);
    /* 005b0a3f: mov dword ptr [ebp - 0x7c], 0x10e */ W32((u32)(r_ebp+0xffffff84u), 0x10eu);
    /* 005b0a46: mov dword ptr [ebp - 0x78], 0xcc */ W32((u32)(r_ebp+0xffffff88u), 0xccu);
    /* 005b0a4d: mov dword ptr [ebp - 0x74], 0x10e */ W32((u32)(r_ebp+0xffffff8cu), 0x10eu);
    /* 005b0a54: mov dword ptr [ebp - 0x70], 0xdf */ W32((u32)(r_ebp+0xffffff90u), 0xdfu);
    /* 005b0a5b: mov dword ptr [ebp - 0x6c], 0x10e */ W32((u32)(r_ebp+0xffffff94u), 0x10eu);
    /* 005b0a62: mov dword ptr [ebp - 0x68], 0xf2 */ W32((u32)(r_ebp+0xffffff98u), 0xf2u);
    /* 005b0a69: mov dword ptr [ebp - 0x3c], 0x14 */ W32((u32)(r_ebp+0xffffffc4u), 0x14u);
    /* 005b0a70: mov dword ptr [ebp - 0x38], 0x50 */ W32((u32)(r_ebp+0xffffffc8u), 0x50u);
    /* 005b0a77: mov dword ptr [ebp - 0x34], 0x14 */ W32((u32)(r_ebp+0xffffffccu), 0x14u);
    /* 005b0a7e: mov dword ptr [ebp - 0x30], 0x7d */ W32((u32)(r_ebp+0xffffffd0u), 0x7du);
    /* 005b0a85: mov dword ptr [ebp - 0x2c], 0x14 */ W32((u32)(r_ebp+0xffffffd4u), 0x14u);
    /* 005b0a8c: mov dword ptr [ebp - 0x28], 0xaa */ W32((u32)(r_ebp+0xffffffd8u), 0xaau);
    /* 005b0a93: mov dword ptr [ebp - 0x24], 0x14 */ W32((u32)(r_ebp+0xffffffdcu), 0x14u);
    /* 005b0a9a: mov dword ptr [ebp - 0x20], 0xd7 */ W32((u32)(r_ebp+0xffffffe0u), 0xd7u);
    /* 005b0aa1: mov dword ptr [ebp - 0x1c], 0x14 */ W32((u32)(r_ebp+0xffffffe4u), 0x14u);
    /* 005b0aa8: mov dword ptr [ebp - 0x18], 0x104 */ W32((u32)(r_ebp+0xffffffe8u), 0x104u);
    /* 005b0aaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b0ab1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b0ab4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b0ab7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ab9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0abb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0abd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b0ac0: sub ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b0ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ac4: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b0ac7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ac8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0aca: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0acc: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ace: push 0x6d0354 */ { u32 v = 0x6d0354u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ad3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b0ad8u); f_00630f40();
    /* 005b0ad8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0adb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0adc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ade: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ae0: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0ae3: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5b0ae8u); f_005fa5b0();
    /* 005b0ae8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ae9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0aec: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0af1u); f_005ff5a0();
    /* 005b0af1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0af3: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0af5: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0af7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0af9: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0afe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b00: push 0x3154f0 */ { u32 v = 0x3154f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b05: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b07: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b0b0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b0b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b0b0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b0f: push 0x30d4d1 */ { u32 v = 0x30d4d1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b14: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b18: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0b1b: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x5b0b20u); f_005faee0();
    /* 005b0b20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b21: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0b24: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0b29u); f_005ff5a0();
    /* 005b0b29: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b2b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b2d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b2f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b0b32: sub edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b0b35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b36: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005b0b39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b3a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b3c: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b41: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b43: push 0x6d0330 */ { u32 v = 0x6d0330u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b48: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b0b4du); f_00630f40();
    /* 005b0b4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0b50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b51: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b55: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0b58: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5b0b5du); f_005fa5b0();
    /* 005b0b5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b5e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0b61: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0b66u); f_005ff5a0();
    /* 005b0b66: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b68: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b6a: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b6c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b6e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b73: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b75: push 0x3154f1 */ { u32 v = 0x3154f1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b7c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b0b7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b80: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b0b83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b84: push 0x30d4d1 */ { u32 v = 0x30d4d1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b89: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b8d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0b90: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x5b0b95u); f_005faee0();
    /* 005b0b95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0b96: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0b99: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0b9eu); f_005ff5a0();
    /* 005b0b9e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ba0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ba2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ba4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b0ba7: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b0baa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bab: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b0bae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0baf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bb1: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bb3: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bb5: push 0x6d0310 */ { u32 v = 0x6d0310u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bba: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b0bbfu); f_00630f40();
    /* 005b0bbf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0bc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bc7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0bca: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5b0bcfu); f_005fa5b0();
    /* 005b0bcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bd0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0bd3: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0bd8u); f_005ff5a0();
    /* 005b0bd8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bda: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bdc: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bde: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0be0: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0be5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0be7: push 0x3154f2 */ { u32 v = 0x3154f2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bee: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b0bf1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bf2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b0bf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bf6: push 0x30d4d1 */ { u32 v = 0x30d4d1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bfb: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bfd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0bff: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0c02: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x5b0c07u); f_005faee0();
    /* 005b0c07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c08: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0c0b: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0c10u); f_005ff5a0();
    /* 005b0c10: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c12: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c16: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b0c19: sub ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b0c1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c1d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b0c20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c21: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c23: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c25: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c27: push 0x6d02f0 */ { u32 v = 0x6d02f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c2c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b0c31u); f_00630f40();
    /* 005b0c31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0c34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c35: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c39: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0c3c: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5b0c41u); f_005fa5b0();
    /* 005b0c41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c42: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0c45: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0c4au); f_005ff5a0();
    /* 005b0c4a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c4c: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c4e: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c50: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c52: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c57: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c59: push 0x3154f3 */ { u32 v = 0x3154f3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c60: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b0c63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c64: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b0c67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c68: push 0x30d4d1 */ { u32 v = 0x30d4d1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c6d: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c71: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0c74: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x5b0c79u); f_005faee0();
    /* 005b0c79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c7a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0c7d: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0c82u); f_005ff5a0();
    /* 005b0c82: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c84: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c88: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b0c8b: sub edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b0c8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c8f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b0c92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c93: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c95: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c97: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c99: push 0x6d02d0 */ { u32 v = 0x6d02d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0c9e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b0ca3u); f_00630f40();
    /* 005b0ca3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0ca6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ca7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ca9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0cab: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0cae: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5b0cb3u); f_005fa5b0();
    /* 005b0cb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0cb4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0cb7: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0cbcu); f_005ff5a0();
    /* 005b0cbc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0cbe: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0cc0: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0cc2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0cc4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0cc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ccb: push 0x3154f4 */ { u32 v = 0x3154f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0cd0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0cd2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b0cd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0cd6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b0cd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0cda: push 0x30d4d1 */ { u32 v = 0x30d4d1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0cdf: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ce1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ce3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0ce6: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x5b0cebu); f_005faee0();
    /* 005b0ceb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0cec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0cef: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0cf4u); f_005ff5a0();
    /* 005b0cf4: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
    /* 005b0cfe: jmp 0x5b0d0f */ goto L_005b0d0f;
L_005b0d00:; BB(0x005b0d00);
    /* 005b0d00: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005b0d06: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b0d09: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
L_005b0d0f:; BB(0x005b0d0f);
    /* 005b0d0f: cmp dword ptr [ebp - 0xb8], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b0d16: jge 0x5b0d79 */ if ((fS==fO)) goto L_005b0d79;
L_005b0d18:; BB(0x005b0d18);
    /* 005b0d18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d1a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d1c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d1e: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d20: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d22: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d24: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005b0d2a: mov edx, dword ptr [ebp + ecx*4 - 0x60] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffa0u));
    /* 005b0d2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d2f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b0d34u); f_00630f40();
    /* 005b0d34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0d37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d3a: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005b0d40: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b0d43: add eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b0d46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d47: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005b0d4d: mov edx, dword ptr [ebp + ecx*8 - 0xb4] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffff4cu));
    /* 005b0d54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d55: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d5a: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005b0d60: add eax, 0x37 */ {  u32 a = r_eax; u32 b = 0x37u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b0d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d66: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0d69: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x5b0d6eu); f_005f9ef0();
    /* 005b0d6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d6f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0d72: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0d77u); f_005ff5a0();
    /* 005b0d77: jmp 0x5b0d00 */ goto L_005b0d00;
L_005b0d79:; BB(0x005b0d79);
    /* 005b0d79: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d7b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d7d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d7f: push 0x12e */ { u32 v = 0x12eu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d84: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d86: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d88: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d8d: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d8f: push 0x6d02b8 */ { u32 v = 0x6d02b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d94: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b0d99u); f_00630f40();
    /* 005b0d99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0d9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d9d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0d9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0da1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0da4: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5b0da9u); f_005fa5b0();
    /* 005b0da9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0daa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0dad: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0db2u); f_005ff5a0();
    /* 005b0db2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0db4: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0db6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0db8: push 0x157 */ { u32 v = 0x157u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dbd: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dbf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dc1: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dc3: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dc5: push 0x6b4274 */ { u32 v = 0x6b4274u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dca: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dce: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0dd1: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5b0dd6u); f_005fa5b0();
    /* 005b0dd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dd7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0dda: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0ddfu); f_005ff5a0();
    /* 005b0ddf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0de1: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0de3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0de5: push 0x157 */ { u32 v = 0x157u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dea: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dec: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dee: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0df0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0df2: push 0x6b4270 */ { u32 v = 0x6b4270u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0df7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0df9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0dfb: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0dfe: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5b0e03u); f_005fa5b0();
    /* 005b0e03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e04: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0e07: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0e0cu); f_005ff5a0();
    /* 005b0e0c: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e0e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e10: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e12: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e17: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e19: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e1b: push 0x30d4d4 */ { u32 v = 0x30d4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e22: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e27: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e29: push 0x30d4d3 */ { u32 v = 0x30d4d3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e32: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0e35: call 0x5faa90 */ r_esp -= 4; W32(r_esp, 0x5b0e3au); f_005faa90();
    /* 005b0e3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e3b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0e3e: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0e43u); f_005ff5a0();
    /* 005b0e43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e45: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e4a: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e4f: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e54: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e59: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e5b: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e5d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e5f: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e64: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e69: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e6b: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e70: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e72: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e77: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5b0e7cu); f_00630f40();
    /* 005b0e7c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0e7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e80: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e84: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0e87: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x5b0e8cu); f_005fa790();
    /* 005b0e8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e8d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0e90: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0e95u); f_005ff5a0();
    /* 005b0e95: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0e9a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5b0e9fu); f_00686d82();
    /* 005b0e9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b0ea2: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005b0ea8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b0eaf: cmp dword ptr [ebp - 0xc0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0eb6: je 0x5b0edd */ if (fZ) goto L_005b0edd;
L_005b0eb8:; BB(0x005b0eb8);
    /* 005b0eb8: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005b0ebe: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5b0ec3u); f_005ec5a0();
    /* 005b0ec3: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005b0ec9: mov dword ptr [ecx], 0x6d01f4 */ W32((u32)(r_ecx), 0x6d01f4u);
    /* 005b0ecf: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005b0ed5: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 005b0edb: jmp 0x5b0ee7 */ goto L_005b0ee7;
L_005b0edd:; BB(0x005b0edd);
    /* 005b0edd: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_005b0ee7:; BB(0x005b0ee7);
    /* 005b0ee7: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 005b0eed: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005b0ef3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b0efa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0efc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0efe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f00: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f05: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f0a: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f0c: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f11: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f13: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f18: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f1a: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005b0f20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f21: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b0f24: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5b0f29u); f_005fa5b0();
    /* 005b0f29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f2a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b0f2d: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x5b0f32u); f_005ff5a0();
    /* 005b0f32: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f34: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005b0f3a: call 0x6375d0 */ r_esp -= 4; W32(r_esp, 0x5b0f3fu); f_006375d0();
    /* 005b0f3f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005b0f42: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f44: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b0f4a: call 0x5b4ea0 */ r_esp -= 4; W32(r_esp, 0x5b0f4fu); f_005b4ea0();
    /* 005b0f4f: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 005b0f52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f53: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f55: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b0f5b: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b0f60u); f_005fb5e0();
    /* 005b0f60: mov ecx, eax */ r_ecx = r_eax;
    /* 005b0f62: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b0f67u); f_00605ef0();
    /* 005b0f67: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005b0f6d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b0f72u); f_005da830();
    /* 005b0f72: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b0f75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b0f77: je 0x5b0f90 */ if (fZ) goto L_005b0f90;
L_005b0f79:; BB(0x005b0f79);
    /* 005b0f79: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b0f7f: mov edx, dword ptr [ecx + 0x4ef4] */ r_edx = R32((u32)(r_ecx+0x4ef4u));
    /* 005b0f85: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b0f88: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 005b0f8e: jmp 0x5b0f9d */ goto L_005b0f9d;
L_005b0f90:; BB(0x005b0f90);
    /* 005b0f90: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b0f93: movsx ecx, byte ptr [eax + 9] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x9u));
    /* 005b0f97: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
L_005b0f9d:; BB(0x005b0f9d);
    /* 005b0f9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0f9f: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005b0fa5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0fa6: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0fa8: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b0fae: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b0fb3u); f_005fb5e0();
    /* 005b0fb3: mov ecx, eax */ r_ecx = r_eax;
    /* 005b0fb5: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b0fbau); f_00605ef0();
    /* 005b0fba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0fbc: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b0fc2: call 0x5b4f20 */ r_esp -= 4; W32(r_esp, 0x5b0fc7u); f_005b4f20();
    /* 005b0fc7: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 005b0fca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b0fcb: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0fcd: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b0fd3: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b0fd8u); f_005fb5e0();
    /* 005b0fd8: mov ecx, eax */ r_ecx = r_eax;
    /* 005b0fda: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b0fdfu); f_00605ef0();
    /* 005b0fdf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0fe1: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b0fe7: call 0x5b6680 */ r_esp -= 4; W32(r_esp, 0x5b0fecu); f_005b6680();
    /* 005b0fec: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b0fef: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005b0ff1: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005b0ff3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b0ff6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ff7: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005b0ff9: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b0fff: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1004u); f_005fb5e0();
    /* 005b1004: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1006: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b100bu); f_00605ef0();
    /* 005b100b: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005b1011: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b1016u); f_005da830();
    /* 005b1016: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005b1019: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b101b: je 0x5b1029 */ if (fZ) goto L_005b1029;
L_005b101d:; BB(0x005b101d);
    /* 005b101d: mov dword ptr [ebp - 0xd0], 1 */ W32((u32)(r_ebp+0xffffff30u), 0x1u);
    /* 005b1027: jmp 0x5b1036 */ goto L_005b1036;
L_005b1029:; BB(0x005b1029);
    /* 005b1029: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b102c: movsx ecx, byte ptr [eax + 0xa] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xau));
    /* 005b1030: mov dword ptr [ebp - 0xd0], ecx */ W32((u32)(r_ebp+0xffffff30u), r_ecx);
L_005b1036:; BB(0x005b1036);
    /* 005b1036: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1038: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 005b103e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b103f: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1041: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1047: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b104cu); f_005fb5e0();
    /* 005b104c: mov ecx, eax */ r_ecx = r_eax;
    /* 005b104e: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b1053u); f_00605ef0();
    /* 005b1053: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b1059: call 0x5b8540 */ r_esp -= 4; W32(r_esp, 0x5b105eu); f_005b8540();
    /* 005b105e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b1061: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1063: je 0x5b108e */ if (fZ) goto L_005b108e;
L_005b1065:; BB(0x005b1065);
    /* 005b1065: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1067: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b106d: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1072u); f_005fb350();
    /* 005b1072: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 005b1078: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 005b107e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1080: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 005b1086: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005b108c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b108eu); call_ind(t); }
L_005b108e:; BB(0x005b108e);
    /* 005b108e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b1094: call 0x5b8570 */ r_esp -= 4; W32(r_esp, 0x5b1099u); f_005b8570();
    /* 005b1099: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b109c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b109e: je 0x5b10c9 */ if (fZ) goto L_005b10c9;
L_005b10a0:; BB(0x005b10a0);
    /* 005b10a0: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b10a2: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b10a8: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b10adu); f_005fb350();
    /* 005b10ad: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 005b10b3: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005b10b9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b10bb: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005b10c1: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005b10c7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b10c9u); call_ind(t); }
L_005b10c9:; BB(0x005b10c9);
    /* 005b10c9: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b10cf: call 0x5b6630 */ r_esp -= 4; W32(r_esp, 0x5b10d4u); f_005b6630();
    /* 005b10d4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b10d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b10d9: je 0x5b1104 */ if (fZ) goto L_005b1104;
L_005b10db:; BB(0x005b10db);
    /* 005b10db: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 005b10dd: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b10e3: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b10e8u); f_005fb350();
    /* 005b10e8: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 005b10ee: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 005b10f4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b10f6: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 005b10fc: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005b1102: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1104u); call_ind(t); }
L_005b1104:; BB(0x005b1104);
    /* 005b1104: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b110a: call 0x5b3dc0 */ r_esp -= 4; W32(r_esp, 0x5b110fu); f_005b3dc0();
    /* 005b110f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b1112: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1114: je 0x5b113f */ if (fZ) goto L_005b113f;
L_005b1116:; BB(0x005b1116);
    /* 005b1116: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005b1118: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b111e: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1123u); f_005fb350();
    /* 005b1123: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 005b1129: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 005b112f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b1131: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 005b1137: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005b113d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b113fu); call_ind(t); }
L_005b113f:; BB(0x005b113f);
    /* 005b113f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b1142: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005b1146: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1148: je 0x5b1173 */ if (fZ) goto L_005b1173;
L_005b114a:; BB(0x005b114a);
    /* 005b114a: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 005b114c: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1152: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1157u); f_005fb350();
    /* 005b1157: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 005b115d: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005b1163: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b1165: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005b116b: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005b1171: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b1173u); call_ind(t); }
L_005b1173:; BB(0x005b1173);
    /* 005b1173: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b1176: movzx ecx, byte ptr [eax + 5] */ r_ecx = (u32)R8((u32)(r_eax+0x5u));
    /* 005b117a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b117c: je 0x5b11a7 */ if (fZ) goto L_005b11a7;
L_005b117e:; BB(0x005b117e);
    /* 005b117e: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1180: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1186: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b118bu); f_005fb350();
    /* 005b118b: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 005b1191: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 005b1197: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b1199: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005b119f: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005b11a5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b11a7u); call_ind(t); }
L_005b11a7:; BB(0x005b11a7);
    /* 005b11a7: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b11aa: movzx ecx, byte ptr [eax + 6] */ r_ecx = (u32)R8((u32)(r_eax+0x6u));
    /* 005b11ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b11b0: je 0x5b11db */ if (fZ) goto L_005b11db;
L_005b11b2:; BB(0x005b11b2);
    /* 005b11b2: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 005b11b4: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b11ba: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b11bfu); f_005fb350();
    /* 005b11bf: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 005b11c5: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005b11cb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b11cd: mov ecx, dword ptr [ebp - 0xec] */ r_ecx = R32((u32)(r_ebp+0xffffff14u));
    /* 005b11d3: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005b11d9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b11dbu); call_ind(t); }
L_005b11db:; BB(0x005b11db);
    /* 005b11db: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b11de: movzx ecx, byte ptr [eax + 7] */ r_ecx = (u32)R8((u32)(r_eax+0x7u));
    /* 005b11e2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b11e4: je 0x5b120f */ if (fZ) goto L_005b120f;
L_005b11e6:; BB(0x005b11e6);
    /* 005b11e6: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 005b11e8: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b11ee: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b11f3u); f_005fb350();
    /* 005b11f3: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 005b11f9: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 005b11ff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b1201: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005b1207: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005b120d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b120fu); call_ind(t); }
L_005b120f:; BB(0x005b120f);
    /* 005b120f: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1216: je 0x5b1278 */ if (fZ) goto L_005b1278;
L_005b1218:; BB(0x005b1218);
    /* 005b1218: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 005b121e: call 0x5cdd60 */ r_esp -= 4; W32(r_esp, 0x5b1223u); f_005cdd60();
    /* 005b1223: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b1226: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1228: je 0x5b1252 */ if (fZ) goto L_005b1252;
L_005b122a:; BB(0x005b122a);
    /* 005b122a: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 005b122c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b122f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1234u); f_005fb350();
    /* 005b1234: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 005b123a: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 005b1240: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1242: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 005b1248: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 005b124e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1250u); call_ind(t); }
    /* 005b1250: jmp 0x5b1278 */ goto L_005b1278;
L_005b1252:; BB(0x005b1252);
    /* 005b1252: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1254: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b1257: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b125cu); f_005fb350();
    /* 005b125c: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 005b1262: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 005b1268: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b126a: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 005b1270: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005b1276: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1278u); call_ind(t); }
L_005b1278:; BB(0x005b1278);
    /* 005b1278: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b127a: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b1280: call 0x5b5c30 */ r_esp -= 4; W32(r_esp, 0x5b1285u); f_005b5c30();
    /* 005b1285: movsx ecx, al */ r_ecx = (u32)(i32)(i8)(u8)r_eax;
    /* 005b1288: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1289: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b128b: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1291: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x5b1296u); f_005fb860();
    /* 005b1296: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1298: call 0x605110 */ r_esp -= 4; W32(r_esp, 0x5b129du); f_00605110();
    /* 005b129d: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005b12a3: mov byte ptr [edx + 0x7c], 0 */ W8((u32)(r_edx+0x7cu), 0x0u);
    /* 005b12a7: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005b12ad: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b12b2u); f_005da830();
    /* 005b12b2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b12b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b12b7: je 0x5b1457 */ if (fZ) goto L_005b1457;
L_005b12bd:; BB(0x005b12bd);
    /* 005b12bd: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005b12bf: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b12c5: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b12cau); f_005fb5e0();
    /* 005b12ca: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 005b12d0: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 005b12d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b12d8: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 005b12de: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005b12e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b12e6u); call_ind(t); }
    /* 005b12e6: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005b12e8: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b12ee: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b12f3u); f_005fb5e0();
    /* 005b12f3: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 005b12f9: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 005b12ff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1301: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 005b1307: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005b130d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b130fu); call_ind(t); }
    /* 005b130f: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1311: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1317: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b131cu); f_005fb5e0();
    /* 005b131c: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 005b1322: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005b1328: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b132a: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005b1330: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005b1336: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1338u); call_ind(t); }
    /* 005b1338: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005b133a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1340: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1345u); f_005fb5e0();
    /* 005b1345: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 005b134b: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005b1351: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1353: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005b1359: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005b135f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1361u); call_ind(t); }
    /* 005b1361: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1363: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1369: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b136eu); f_005fb5e0();
    /* 005b136e: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 005b1374: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005b137a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b137c: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005b1382: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005b1388: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b138au); call_ind(t); }
    /* 005b138a: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 005b138c: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1392: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1397u); f_005fb350();
    /* 005b1397: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 005b139d: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005b13a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b13a5: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005b13ab: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005b13b1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b13b3u); call_ind(t); }
    /* 005b13b3: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b13b5: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b13bb: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b13c0u); f_005fb350();
    /* 005b13c0: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 005b13c6: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005b13cc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b13ce: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005b13d4: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005b13da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b13dcu); call_ind(t); }
    /* 005b13dc: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 005b13de: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b13e4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b13e9u); f_005fb350();
    /* 005b13e9: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 005b13ef: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005b13f5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b13f7: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005b13fd: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005b1403: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1405u); call_ind(t); }
    /* 005b1405: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005b1407: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b140d: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1412u); f_005fb350();
    /* 005b1412: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 005b1418: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005b141e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1420: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005b1426: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005b142c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b142eu); call_ind(t); }
    /* 005b142e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1430: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1436: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x5b143bu); f_005fb860();
    /* 005b143b: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 005b1441: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 005b1447: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1449: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 005b144f: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005b1455: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1457u); call_ind(t); }
L_005b1457:; BB(0x005b1457);
    /* 005b1457: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b145a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b1461: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b1462: mov esp, ebp */ r_esp = r_ebp;
    /* 005b1464: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1465: ret 0x10 */ FN_RET(0x005b0950); r_esp += 20; return;
}

void f_005b1470(void) /* RoyalMatchRoom::vfunc165 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b1470);
    /* 005b1470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1471: mov ebp, esp */ r_ebp = r_esp;
    /* 005b1473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b1477: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b147d: call 0x5b65f0 */ r_esp -= 4; W32(r_esp, 0x5b1482u); f_005b65f0();
    /* 005b1482: mov esp, ebp */ r_esp = r_ebp;
    /* 005b1484: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1485: ret  */ FN_RET(0x005b1470); r_esp += 4; return;
}

void f_005b1490(void) /* RoyalMatchRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b1490);
    /* 005b1490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1491: mov ebp, esp */ r_ebp = r_esp;
    /* 005b1493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b1497: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b149c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005b14a2: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x5b14a7u); f_005df2e0();
    /* 005b14a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b14a8: push 0x3154e9 */ { u32 v = 0x3154e9u; r_esp -= 4; W32(r_esp, v); }
    /* 005b14ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b14b0: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x5b14b5u); f_005f1e60();
    /* 005b14b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b14b8: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x5b14bdu); f_0064e430();
    /* 005b14bd: mov esp, ebp */ r_esp = r_ebp;
    /* 005b14bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b14c0: ret  */ FN_RET(0x005b1490); r_esp += 4; return;
}

void f_005b14d0(void) /* RoyalMatchRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b14d0);
    /* 005b14d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b14d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b14d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b14d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b14d9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b14dc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b14df: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b14e6: je 0x5b14f6 */ if (fZ) goto L_005b14f6;
L_005b14e8:; BB(0x005b14e8);
    /* 005b14e8: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b14ef: je 0x5b1562 */ if (fZ) goto L_005b1562;
L_005b14f1:; BB(0x005b14f1);
    /* 005b14f1: jmp 0x5b1597 */ goto L_005b1597;
L_005b14f6:; BB(0x005b14f6);
    /* 005b14f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b14f8: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 005b14fd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b1500: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5b1505u); f_005fe640();
    /* 005b1505: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1507: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 005b150c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b150f: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5b1514u); f_005fe640();
    /* 005b1514: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1516: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b151b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b151e: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5b1523u); f_005fe640();
    /* 005b1523: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1525: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b152a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b152d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5b1532u); f_005fe640();
    /* 005b1532: movzx ecx, byte ptr [0x795f95] */ r_ecx = (u32)R8((u32)(0x795f95u));
    /* 005b1539: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b153b: jne 0x5b1552 */ if (!fZ) goto L_005b1552;
L_005b153d:; BB(0x005b153d);
    /* 005b153d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b153f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1541: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1543: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1548: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b154b: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5b1550u); f_005fe240();
    /* 005b1550: jmp 0x5b155e */ goto L_005b155e;
L_005b1552:; BB(0x005b1552);
    /* 005b1552: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1554: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1556: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b1559: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5b155eu); f_005fe640();
L_005b155e:; BB(0x005b155e);
    /* 005b155e: jmp 0x5b1597 */ goto L_005b1597;
L_005b1562:; BB(0x005b1562);
    /* 005b1562: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1564: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 005b1569: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b156c: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5b1571u); f_005fe640();
    /* 005b1571: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1573: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1575: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1577: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 005b157c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b157f: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5b1584u); f_005fe240();
    /* 005b1584: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1586: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1588: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b158a: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 005b158f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b1592: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x5b1597u); f_005fe240();
L_005b1597:; BB(0x005b1597);
    /* 005b1597: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b159a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b159b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b159e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b159f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b15a2: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x5b15a7u); f_005d8670();
    /* 005b15a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005b15a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b15aa: ret 8 */ FN_RET(0x005b14d0); r_esp += 12; return;
}

void f_005b15b0(void) /* RoyalMatchRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b15b0);
    /* 005b15b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b15b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b15b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b15b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b15b7: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b15bd: call 0x5b69b0 */ r_esp -= 4; W32(r_esp, 0x5b15c2u); f_005b69b0();
    /* 005b15c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005b15c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b15c5: ret  */ FN_RET(0x005b15b0); r_esp += 4; return;
}

void f_005b15d0(void) /* RoyalMatchRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b15d0);
    /* 005b15d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b15d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b15d3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b15d6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005b15d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b15dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b15dd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b15e2u); f_005dcb00();
    /* 005b15e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b15e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b15e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b15eb: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 005b15f1: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 005b15f4: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 005b15f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b15fa: je 0x5b169a */ if (fZ) goto L_005b169a;
L_005b1600:; BB(0x005b1600);
    /* 005b1600: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b1603: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005b1609: mov eax, dword ptr [edx + ecx*4 + 0x580] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x580u));
    /* 005b1610: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b1613: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b1616: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b1619: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b161c: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 005b1620: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b1622: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b1625: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 005b1628: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 005b162c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005b162f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b1632: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b1635: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1636: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b1639: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b163a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b163d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b163e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b1643u); f_005dcb00();
    /* 005b1643: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b1646: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1648: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5b164du); f_005d5cf0();
    /* 005b164d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b1650: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005b1656: mov eax, dword ptr [edx + ecx*4 + 0x634] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x634u));
    /* 005b165d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b1660: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b1663: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b1666: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b1669: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 005b166d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b166f: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b1672: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 005b1675: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 005b1679: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005b167c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b167f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b1682: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1683: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b1686: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1687: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b168a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b168b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b1690u); f_005dcb00();
    /* 005b1690: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b1693: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1695: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5b169au); f_005d5cf0();
L_005b169a:; BB(0x005b169a);
    /* 005b169a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b169d: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005b16a3: mov ecx, dword ptr [edx + ecx*4 + 0x580] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x580u));
    /* 005b16aa: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x5b16afu); f_005cb9b0();
    /* 005b16af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b16b2: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b16b8: mov ecx, dword ptr [ecx + eax*4 + 0x634] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x634u));
    /* 005b16bf: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x5b16c4u); f_005cb9b0();
    /* 005b16c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005b16c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b16c7: ret 4 */ FN_RET(0x005b15d0); r_esp += 8; return;
}

void f_005b16d0(void) /* RoyalMatchRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b16d0);
    /* 005b16d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b16d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b16d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b16d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b16d7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b16d8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b16db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b16de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b16df: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b16e4u); f_005dcb00();
    /* 005b16e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b16e7: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 005b16ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b16ee: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 005b16f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b16f5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005b16f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b16f9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b16fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b16fd: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b1703: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b1708u); f_005b5fb0();
    /* 005b1708: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b170b: mov ecx, eax */ r_ecx = r_eax;
    /* 005b170d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5b1712u); f_0064c5c0();
    /* 005b1712: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 005b1714: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 005b1717: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b171a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b171b: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b1721: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b1726u); f_005b5fb0();
    /* 005b1726: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 005b1729: mov dword ptr [eax + 0x14], edi */ W32((u32)(r_eax+0x14u), r_edi);
    /* 005b172c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b172f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1730: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b1735u); f_005dcb00();
    /* 005b1735: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b1738: mov ecx, eax */ r_ecx = r_eax;
    /* 005b173a: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5b173fu); f_0063b0a0();
    /* 005b173f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b1740: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b1741: mov esp, ebp */ r_esp = r_ebp;
    /* 005b1743: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1744: ret 4 */ FN_RET(0x005b16d0); r_esp += 8; return;
}

void f_005b1750(void) /* RoyalMatchRoom::vfunc168 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b1750);
    /* 005b1750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1751: mov ebp, esp */ r_ebp = r_esp;
    /* 005b1753: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b1756: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b1757: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b1758: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005b175b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b175e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b1763u); f_0063aac0();
    /* 005b1763: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b1765: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b1768: cmp dword ptr [ebp - 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b176c: je 0x5b178a */ if (fZ) goto L_005b178a;
L_005b176e:; BB(0x005b176e);
    /* 005b176e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b1771: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b1776u); f_0063aac0();
    /* 005b1776: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b1778: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b177b: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b177f: je 0x5b178a */ if (fZ) goto L_005b178a;
L_005b1781:; BB(0x005b1781);
    /* 005b1781: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005b1788: jmp 0x5b1791 */ goto L_005b1791;
L_005b178a:; BB(0x005b178a);
    /* 005b178a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_005b1791:; BB(0x005b1791);
    /* 005b1791: movzx edx, byte ptr [ebp - 0x28] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 005b1795: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1797: je 0x5b17b9 */ if (fZ) goto L_005b17b9;
L_005b1799:; BB(0x005b1799);
    /* 005b1799: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005b179f: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b17a4u); f_005da830();
    /* 005b17a4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b17a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b17a9: jne 0x5b17b9 */ if (!fZ) goto L_005b17b9;
L_005b17ab:; BB(0x005b17ab);
    /* 005b17ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b17ae: movzx edx, byte ptr [ecx + 0x4b1] */ r_edx = (u32)R8((u32)(r_ecx+0x4b1u));
    /* 005b17b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b17b7: je 0x5b17be */ if (fZ) goto L_005b17be;
L_005b17b9:; BB(0x005b17b9);
    /* 005b17b9: jmp 0x5b18a5 */ goto L_005b18a5;
L_005b17be:; BB(0x005b17be);
    /* 005b17be: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005b17c3: cmp dword ptr [eax + 0x5c8], 0 */ {  u32 a = R32((u32)(r_eax+0x5c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b17ca: jge 0x5b180b */ if ((fS==fO)) goto L_005b180b;
L_005b17cc:; BB(0x005b17cc);
    /* 005b17cc: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005b17cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b17d0: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b17d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b17d4: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005b17d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b17d8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b17db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b17dc: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b17e2: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b17e7u); f_005b5fb0();
    /* 005b17e7: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b17ea: mov ecx, eax */ r_ecx = r_eax;
    /* 005b17ec: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5b17f1u); f_0064c5c0();
    /* 005b17f1: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 005b17f3: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 005b17f6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b17f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b17fa: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b1800: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b1805u); f_005b5fb0();
    /* 005b1805: mov dword ptr [eax + 0x20], esi */ W32((u32)(r_eax+0x20u), r_esi);
    /* 005b1808: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
L_005b180b:; BB(0x005b180b);
    /* 005b180b: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005b1810: cmp dword ptr [eax + 0x5c8], 0 */ {  u32 a = R32((u32)(r_eax+0x5c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1817: jne 0x5b1858 */ if (!fZ) goto L_005b1858;
L_005b1819:; BB(0x005b1819);
    /* 005b1819: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005b181c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b181d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b1820: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1821: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005b1824: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1825: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b1828: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1829: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b182f: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b1834u); f_005b5fb0();
    /* 005b1834: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b1837: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1839: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5b183eu); f_0064c5c0();
    /* 005b183e: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 005b1840: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 005b1843: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b1846: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1847: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b184d: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b1852u); f_005b5fb0();
    /* 005b1852: mov dword ptr [eax + 0x30], esi */ W32((u32)(r_eax+0x30u), r_esi);
    /* 005b1855: mov dword ptr [eax + 0x34], edi */ W32((u32)(r_eax+0x34u), r_edi);
L_005b1858:; BB(0x005b1858);
    /* 005b1858: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005b185d: cmp dword ptr [eax + 0x5c8], 0 */ {  u32 a = R32((u32)(r_eax+0x5c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b1864: jle 0x5b18a5 */ if ((fZ||fS!=fO)) goto L_005b18a5;
L_005b1866:; BB(0x005b1866);
    /* 005b1866: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005b1869: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b186a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005b186d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b186e: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 005b1871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1872: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b1875: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1876: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b187c: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b1881u); f_005b5fb0();
    /* 005b1881: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b1884: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1886: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5b188bu); f_0064c5c0();
    /* 005b188b: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 005b188d: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 005b1890: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005b1893: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1894: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b189a: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b189fu); f_005b5fb0();
    /* 005b189f: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 005b18a2: mov dword ptr [eax + 0x2c], edi */ W32((u32)(r_eax+0x2cu), r_edi);
L_005b18a5:; BB(0x005b18a5);
    /* 005b18a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b18a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b18a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005b18a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b18aa: ret 0x10 */ FN_RET(0x005b1750); r_esp += 20; return;
}

void f_005b18b0(void) /* RoyalMatchRoom::vfunc166 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b18b0);
    /* 005b18b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b18b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b18b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b18b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b18b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b18b8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b18bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b18be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b18bf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b18c4u); f_005dcb00();
    /* 005b18c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b18c7: mov ecx, dword ptr [eax + 0x4d8] */ r_ecx = R32((u32)(r_eax+0x4d8u));
    /* 005b18cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b18ce: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 005b18d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b18d5: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005b18d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b18d9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b18dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b18dd: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b18e3: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b18e8u); f_005b5fb0();
    /* 005b18e8: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b18eb: mov ecx, eax */ r_ecx = r_eax;
    /* 005b18ed: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5b18f2u); f_0064c5c0();
    /* 005b18f2: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 005b18f4: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 005b18f7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b18fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b18fb: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b1901: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b1906u); f_005b5fb0();
    /* 005b1906: mov dword ptr [eax + 0x18], esi */ W32((u32)(r_eax+0x18u), r_esi);
    /* 005b1909: mov dword ptr [eax + 0x1c], edi */ W32((u32)(r_eax+0x1cu), r_edi);
    /* 005b190c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b190f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1910: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b1915u); f_005dcb00();
    /* 005b1915: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b1918: mov ecx, eax */ r_ecx = r_eax;
    /* 005b191a: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5b191fu); f_0063b0a0();
    /* 005b191f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b1920: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b1921: mov esp, ebp */ r_esp = r_ebp;
    /* 005b1923: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1924: ret 4 */ FN_RET(0x005b18b0); r_esp += 8; return;
}

void f_005b1930(void) /* royalmatchroom::func_005b1930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b1930);
    /* 005b1930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1931: mov ebp, esp */ r_ebp = r_esp;
    /* 005b1933: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b1936: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b1939: movsx eax, byte ptr [ebp + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 005b193d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b1940: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b1944: ja 0x5b1d81 */ if ((!fC&&!fZ)) goto L_005b1d81;
L_005b194a:; BB(0x005b194a);
    /* 005b194a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b194d: jmp dword ptr [ecx*4 + 0x5b1da4] */ { u32 t = R32((u32)(r_ecx*4+0x5b1da4u)); switch (t) { case 0x5b1954u: goto L_005b1954; case 0x5b1a60u: goto L_005b1a60; case 0x5b1b6cu: goto L_005b1b6c; case 0x5b1c78u: goto L_005b1c78; case 0x5b1d7fu: goto L_005b1d7f; default: UNSUP(0x005b194d, "jump table entry is not a known target"); } }
L_005b1954:; BB(0x005b1954);
    /* 005b1954: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1956: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1958: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005b195a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1960: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1965u); f_005fb5e0();
    /* 005b1965: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1967: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b196cu); f_00605ef0();
    /* 005b196c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b196e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1970: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1972: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1978: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b197du); f_005fb5e0();
    /* 005b197d: mov ecx, eax */ r_ecx = r_eax;
    /* 005b197f: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b1984u); f_00605ef0();
    /* 005b1984: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1986: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1988: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005b198a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1990: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1995u); f_005fb5e0();
    /* 005b1995: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1997: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b199cu); f_00605ef0();
    /* 005b199c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b199e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b19a0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 005b19a2: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b19a8: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b19adu); f_005fb5e0();
    /* 005b19ad: mov ecx, eax */ r_ecx = r_eax;
    /* 005b19af: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b19b4u); f_00605ef0();
    /* 005b19b4: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 005b19b6: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b19bc: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b19c1u); f_005fb350();
    /* 005b19c1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b19c4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b19c7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b19c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b19cc: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005b19d2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b19d4u); call_ind(t); }
    /* 005b19d4: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b19d6: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b19dc: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b19e1u); f_005fb350();
    /* 005b19e1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b19e4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b19e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b19e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b19ec: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 005b19f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b19f4u); call_ind(t); }
    /* 005b19f4: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 005b19f6: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b19fc: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1a01u); f_005fb350();
    /* 005b1a01: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b1a04: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b1a07: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1a09: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b1a0c: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005b1a12: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1a14u); call_ind(t); }
    /* 005b1a14: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a16: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1a1c: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1a21u); f_005fb350();
    /* 005b1a21: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b1a24: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b1a27: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1a29: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b1a2c: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 005b1a32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1a34u); call_ind(t); }
    /* 005b1a34: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a36: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1a3c: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1a41u); f_005fb5e0();
    /* 005b1a41: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b1a44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a46: push 0x3154f5 */ { u32 v = 0x3154f5u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a4b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b1a4e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1a50: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b1a53: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005b1a59: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1a5bu); call_ind(t); }
    /* 005b1a5b: jmp 0x5b1d9c */ goto L_005b1d9c;
L_005b1a60:; BB(0x005b1a60);
    /* 005b1a60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a62: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a64: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a66: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1a6c: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1a71u); f_005fb5e0();
    /* 005b1a71: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1a73: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b1a78u); f_00605ef0();
    /* 005b1a78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a7a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a7c: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a7e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1a84: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1a89u); f_005fb5e0();
    /* 005b1a89: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1a8b: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b1a90u); f_00605ef0();
    /* 005b1a90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a94: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a96: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1a9c: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1aa1u); f_005fb5e0();
    /* 005b1aa1: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1aa3: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b1aa8u); f_00605ef0();
    /* 005b1aa8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1aaa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1aac: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1aae: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1ab4: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1ab9u); f_005fb5e0();
    /* 005b1ab9: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1abb: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b1ac0u); f_00605ef0();
    /* 005b1ac0: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ac2: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1ac8: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1acdu); f_005fb350();
    /* 005b1acd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b1ad0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b1ad3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1ad5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b1ad8: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 005b1ade: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1ae0u); call_ind(t); }
    /* 005b1ae0: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ae2: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1ae8: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1aedu); f_005fb350();
    /* 005b1aed: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005b1af0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b1af3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1af5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b1af8: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 005b1afe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1b00u); call_ind(t); }
    /* 005b1b00: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1b02: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1b08: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1b0du); f_005fb350();
    /* 005b1b0d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b1b10: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b1b13: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1b15: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b1b18: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005b1b1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1b20u); call_ind(t); }
    /* 005b1b20: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005b1b22: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1b28: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1b2du); f_005fb350();
    /* 005b1b2d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005b1b30: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b1b33: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1b35: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b1b38: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005b1b3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1b40u); call_ind(t); }
    /* 005b1b40: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1b42: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1b48: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1b4du); f_005fb5e0();
    /* 005b1b4d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005b1b50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1b52: push 0x3154f6 */ { u32 v = 0x3154f6u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1b57: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b1b5a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1b5c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b1b5f: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005b1b65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1b67u); call_ind(t); }
    /* 005b1b67: jmp 0x5b1d9c */ goto L_005b1d9c;
L_005b1b6c:; BB(0x005b1b6c);
    /* 005b1b6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1b6e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1b70: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1b72: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1b78: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1b7du); f_005fb5e0();
    /* 005b1b7d: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1b7f: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b1b84u); f_00605ef0();
    /* 005b1b84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1b86: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1b88: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1b8a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1b90: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1b95u); f_005fb5e0();
    /* 005b1b95: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1b97: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b1b9cu); f_00605ef0();
    /* 005b1b9c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1b9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ba0: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ba2: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1ba8: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1badu); f_005fb5e0();
    /* 005b1bad: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1baf: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b1bb4u); f_00605ef0();
    /* 005b1bb4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1bb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1bb8: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1bba: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1bc0: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1bc5u); f_005fb5e0();
    /* 005b1bc5: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1bc7: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b1bccu); f_00605ef0();
    /* 005b1bcc: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1bce: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1bd4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1bd9u); f_005fb350();
    /* 005b1bd9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005b1bdc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b1bdf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1be1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b1be4: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005b1bea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1becu); call_ind(t); }
    /* 005b1bec: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1bee: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1bf4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1bf9u); f_005fb350();
    /* 005b1bf9: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005b1bfc: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b1bff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1c01: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b1c04: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 005b1c0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1c0cu); call_ind(t); }
    /* 005b1c0c: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c0e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1c14: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1c19u); f_005fb350();
    /* 005b1c19: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005b1c1c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b1c1f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1c21: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b1c24: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005b1c2a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1c2cu); call_ind(t); }
    /* 005b1c2c: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c2e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1c34: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1c39u); f_005fb350();
    /* 005b1c39: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005b1c3c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b1c3f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1c41: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b1c44: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 005b1c4a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1c4cu); call_ind(t); }
    /* 005b1c4c: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c4e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1c54: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1c59u); f_005fb5e0();
    /* 005b1c59: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005b1c5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c5e: push 0x3154f7 */ { u32 v = 0x3154f7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c63: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005b1c66: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1c68: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005b1c6b: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005b1c71: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1c73u); call_ind(t); }
    /* 005b1c73: jmp 0x5b1d9c */ goto L_005b1d9c;
L_005b1c78:; BB(0x005b1c78);
    /* 005b1c78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c7a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c7c: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c7e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1c84: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1c89u); f_005fb5e0();
    /* 005b1c89: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1c8b: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b1c90u); f_00605ef0();
    /* 005b1c90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c94: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c96: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1c9c: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1ca1u); f_005fb5e0();
    /* 005b1ca1: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1ca3: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b1ca8u); f_00605ef0();
    /* 005b1ca8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1caa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1cac: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1cae: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1cb4: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1cb9u); f_005fb5e0();
    /* 005b1cb9: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1cbb: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b1cc0u); f_00605ef0();
    /* 005b1cc0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1cc2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1cc4: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1cc6: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1ccc: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1cd1u); f_005fb5e0();
    /* 005b1cd1: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1cd3: call 0x605ef0 */ r_esp -= 4; W32(r_esp, 0x5b1cd8u); f_00605ef0();
    /* 005b1cd8: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1cda: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1ce0: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1ce5u); f_005fb350();
    /* 005b1ce5: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005b1ce8: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b1ceb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1ced: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b1cf0: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 005b1cf6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1cf8u); call_ind(t); }
    /* 005b1cf8: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1cfa: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1d00: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1d05u); f_005fb350();
    /* 005b1d05: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005b1d08: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005b1d0b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1d0d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005b1d10: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 005b1d16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1d18u); call_ind(t); }
    /* 005b1d18: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1d1a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1d20: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1d25u); f_005fb350();
    /* 005b1d25: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005b1d28: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005b1d2b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1d2d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005b1d30: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005b1d36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1d38u); call_ind(t); }
    /* 005b1d38: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005b1d3a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1d40: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5b1d45u); f_005fb350();
    /* 005b1d45: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005b1d48: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005b1d4b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1d4d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005b1d50: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005b1d56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1d58u); call_ind(t); }
    /* 005b1d58: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1d5a: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1d60: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1d65u); f_005fb5e0();
    /* 005b1d65: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005b1d68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1d6a: push 0x3154f8 */ { u32 v = 0x3154f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1d6f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005b1d72: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b1d74: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005b1d77: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005b1d7d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1d7fu); call_ind(t); }
L_005b1d7f:; BB(0x005b1d7f);
    /* 005b1d7f: jmp 0x5b1d9c */ goto L_005b1d9c;
L_005b1d81:; BB(0x005b1d81);
    /* 005b1d81: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005b1d83: jne 0x5b1d9c */ if (!fZ) goto L_005b1d9c;
L_005b1d85:; BB(0x005b1d85);
    /* 005b1d85: push 0x2aa */ { u32 v = 0x2aau; r_esp -= 4; W32(r_esp, v); }
    /* 005b1d8a: push 0x6d01a8 */ { u32 v = 0x6d01a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1d8f: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1d94: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b1d99u); f_005e9f20();
    /* 005b1d99: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b1d9c:; BB(0x005b1d9c);
    /* 005b1d9c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b1d9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1d9f: ret 4 */ FN_RET(0x005b1930); r_esp += 8; return;
}

void f_005b1dc0(void) /* RoyalMatchRoom::vfunc55 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b1dc0);
    /* 005b1dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b1dc3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b1dc6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b1dc9: cmp dword ptr [ebp + 0x14], 0x33 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1dcd: je 0x5b1de1 */ if (fZ) goto L_005b1de1;
L_005b1dcf:; BB(0x005b1dcf);
    /* 005b1dcf: cmp dword ptr [ebp + 0x14], 0x34 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1dd3: je 0x5b1de1 */ if (fZ) goto L_005b1de1;
L_005b1dd5:; BB(0x005b1dd5);
    /* 005b1dd5: cmp dword ptr [ebp + 0x14], 0x35 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x35u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1dd9: je 0x5b1de1 */ if (fZ) goto L_005b1de1;
L_005b1ddb:; BB(0x005b1ddb);
    /* 005b1ddb: cmp dword ptr [ebp + 0x14], 0x36 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1ddf: jne 0x5b1e0a */ if (!fZ) goto L_005b1e0a;
L_005b1de1:; BB(0x005b1de1);
    /* 005b1de1: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1de3: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1de9: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1deeu); f_005fb5e0();
    /* 005b1dee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b1df1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1df3: push 0x3154f9 */ { u32 v = 0x3154f9u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1df8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b1dfb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b1dfd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b1e00: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005b1e06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1e08u); call_ind(t); }
    /* 005b1e08: jmp 0x5b1e7d */ goto L_005b1e7d;
L_005b1e0a:; BB(0x005b1e0a);
    /* 005b1e0a: cmp dword ptr [ebp + 0x14], 0x32 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1e0e: jne 0x5b1e7d */ if (!fZ) goto L_005b1e7d;
L_005b1e10:; BB(0x005b1e10);
    /* 005b1e10: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005b1e13: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b1e16: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b1e19: sub edx, 0x3154f5 */ {  u32 a = r_edx; u32 b = 0x3154f5u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b1e1f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005b1e22: cmp dword ptr [ebp - 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b1e26: ja 0x5b1e62 */ if ((!fC&&!fZ)) goto L_005b1e62;
L_005b1e28:; BB(0x005b1e28);
    /* 005b1e28: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b1e2b: jmp dword ptr [eax*4 + 0x5b1e84] */ { u32 t = R32((u32)(r_eax*4+0x5b1e84u)); switch (t) { case 0x5b1e32u: goto L_005b1e32; case 0x5b1e3eu: goto L_005b1e3e; case 0x5b1e4au: goto L_005b1e4a; case 0x5b1e56u: goto L_005b1e56; case 0x5b1e60u: goto L_005b1e60; default: UNSUP(0x005b1e2b, "jump table entry is not a known target"); } }
L_005b1e32:; BB(0x005b1e32);
    /* 005b1e32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1e34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b1e37: call 0x5b1930 */ r_esp -= 4; W32(r_esp, 0x5b1e3cu); f_005b1930();
    /* 005b1e3c: jmp 0x5b1e7d */ goto L_005b1e7d;
L_005b1e3e:; BB(0x005b1e3e);
    /* 005b1e3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1e40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b1e43: call 0x5b1930 */ r_esp -= 4; W32(r_esp, 0x5b1e48u); f_005b1930();
    /* 005b1e48: jmp 0x5b1e7d */ goto L_005b1e7d;
L_005b1e4a:; BB(0x005b1e4a);
    /* 005b1e4a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1e4c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b1e4f: call 0x5b1930 */ r_esp -= 4; W32(r_esp, 0x5b1e54u); f_005b1930();
    /* 005b1e54: jmp 0x5b1e7d */ goto L_005b1e7d;
L_005b1e56:; BB(0x005b1e56);
    /* 005b1e56: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1e58: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b1e5b: call 0x5b1930 */ r_esp -= 4; W32(r_esp, 0x5b1e60u); f_005b1930();
L_005b1e60:; BB(0x005b1e60);
    /* 005b1e60: jmp 0x5b1e7d */ goto L_005b1e7d;
L_005b1e62:; BB(0x005b1e62);
    /* 005b1e62: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005b1e64: jne 0x5b1e7d */ if (!fZ) goto L_005b1e7d;
L_005b1e66:; BB(0x005b1e66);
    /* 005b1e66: push 0x2cb */ { u32 v = 0x2cbu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1e6b: push 0x6d01a8 */ { u32 v = 0x6d01a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1e70: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1e75: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5b1e7au); f_005e9f20();
    /* 005b1e7a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b1e7d:; BB(0x005b1e7d);
    /* 005b1e7d: mov esp, ebp */ r_esp = r_ebp;
    /* 005b1e7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1e80: ret 0x10 */ FN_RET(0x005b1dc0); r_esp += 20; return;
}

void f_005b1ea0(void) /* RoyalMatchRoom::vfunc52 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b1ea0);
    /* 005b1ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b1ea3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b1ea6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b1ea9: cmp dword ptr [ebp + 0x10], 0x37 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1ead: je 0x5b1ec1 */ if (fZ) goto L_005b1ec1;
L_005b1eaf:; BB(0x005b1eaf);
    /* 005b1eaf: cmp dword ptr [ebp + 0x10], 0x38 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1eb3: je 0x5b1ec1 */ if (fZ) goto L_005b1ec1;
L_005b1eb5:; BB(0x005b1eb5);
    /* 005b1eb5: cmp dword ptr [ebp + 0x10], 0x39 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1eb9: je 0x5b1ec1 */ if (fZ) goto L_005b1ec1;
L_005b1ebb:; BB(0x005b1ebb);
    /* 005b1ebb: cmp dword ptr [ebp + 0x10], 0x3a */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x3au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1ebf: jne 0x5b1ee8 */ if (!fZ) goto L_005b1ee8;
L_005b1ec1:; BB(0x005b1ec1);
    /* 005b1ec1: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ec3: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005b1ec9: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x5b1eceu); f_005fb5e0();
    /* 005b1ece: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b1ed1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ed3: push 0x3154f9 */ { u32 v = 0x3154f9u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ed8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b1edb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b1edd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b1ee0: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005b1ee6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b1ee8u); call_ind(t); }
L_005b1ee8:; BB(0x005b1ee8);
    /* 005b1ee8: mov esp, ebp */ r_esp = r_ebp;
    /* 005b1eea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1eeb: ret 0xc */ FN_RET(0x005b1ea0); r_esp += 16; return;
}

