#include "protos.h"

void f_00579ae0(void) /* DemoRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579ae0);
    /* 00579ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00579ae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579ae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579ae7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579aea: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x579aefu); f_005d7b60();
    /* 00579aef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579af2: mov dword ptr [eax], 0x6cb6f4 */ W32((u32)(r_eax), 0x6cb6f4u);
    /* 00579af8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579afb: mov dword ptr [0x793468], ecx */ W32((u32)(0x793468u), r_ecx);
    /* 00579b01: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579b04: mov esp, ebp */ r_esp = r_ebp;
    /* 00579b06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579b07: ret  */ FN_RET(0x00579ae0); r_esp += 4; return;
}

void f_00579b10(void) /* DemoRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579b10);
    /* 00579b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00579b13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579b14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00579b17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579b1a: mov dword ptr [eax], 0x6cb6f4 */ W32((u32)(r_eax), 0x6cb6f4u);
    /* 00579b20: mov dword ptr [0x793468], 0 */ W32((u32)(0x793468u), 0x0u);
    /* 00579b2a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579b2d: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x579b32u); f_005d7bd0();
    /* 00579b32: mov esp, ebp */ r_esp = r_ebp;
    /* 00579b34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579b35: ret  */ FN_RET(0x00579b10); r_esp += 4; return;
}

void f_00579b40(void) /* DemoRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579b40);
    /* 00579b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00579b43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00579b45: push 0x6a667b */ { u32 v = 0x6a667bu; r_esp -= 4; W32(r_esp, v); }
    /* 00579b4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00579b50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579b51: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579b54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00579b59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00579b5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579b5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00579b5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00579b65: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00579b68: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00579b6d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00579b6f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00579b75: mov eax, dword ptr [edx + 0x384] */ r_eax = R32((u32)(r_edx+0x384u));
    /* 00579b7b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x579b7du); call_ind(t); }
    /* 00579b7d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00579b80: call 0x579bf0 */ r_esp -= 4; W32(r_esp, 0x579b85u); f_00579bf0();
    /* 00579b85: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00579b87: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x579b8cu); f_00686d82();
    /* 00579b8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579b8f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00579b92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00579b99: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579b9d: je 0x579bba */ if (fZ) goto L_00579bba;
L_00579b9f:; BB(0x00579b9f);
    /* 00579b9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579ba1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00579ba4: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x579ba9u); f_005fc0d0();
    /* 00579ba9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00579bac: mov dword ptr [ecx], 0x6cb9f4 */ W32((u32)(r_ecx), 0x6cb9f4u);
    /* 00579bb2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00579bb5: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00579bb8: jmp 0x579bc1 */ goto L_00579bc1;
L_00579bba:; BB(0x00579bba);
    /* 00579bba: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00579bc1:; BB(0x00579bc1);
    /* 00579bc1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00579bc4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00579bc7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00579bce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00579bd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579bd2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00579bd5: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x579bdau); f_005f1b70();
    /* 00579bda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00579bdd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00579be4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00579be5: mov esp, ebp */ r_esp = r_ebp;
    /* 00579be7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579be8: ret  */ FN_RET(0x00579b40); r_esp += 4; return;
}

void f_00579e80(void) /* demoroom::func_00579e80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579e80);
    /* 00579e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00579e83: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579e86: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00579e8b: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00579e8e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00579e90: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00579e93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00579e96: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x579e9bu); f_0063aac0();
    /* 00579e9b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00579e9d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00579ea0: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579ea4: je 0x579ec2 */ if (fZ) goto L_00579ec2;
L_00579ea6:; BB(0x00579ea6);
    /* 00579ea6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00579ea9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x579eaeu); f_0063aac0();
    /* 00579eae: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00579eb0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00579eb3: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579eb7: je 0x579ec2 */ if (fZ) goto L_00579ec2;
L_00579eb9:; BB(0x00579eb9);
    /* 00579eb9: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00579ec0: jmp 0x579ec9 */ goto L_00579ec9;
L_00579ec2:; BB(0x00579ec2);
    /* 00579ec2: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
L_00579ec9:; BB(0x00579ec9);
    /* 00579ec9: movzx edx, byte ptr [ebp - 0x1c] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe4u));
    /* 00579ecd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579ecf: jne 0x579ee8 */ if (!fZ) goto L_00579ee8;
L_00579ed1:; BB(0x00579ed1);
    /* 00579ed1: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 00579ed6: push 0x6cba34 */ { u32 v = 0x6cba34u; r_esp -= 4; W32(r_esp, v); }
    /* 00579edb: push 0x6cba14 */ { u32 v = 0x6cba14u; r_esp -= 4; W32(r_esp, v); }
    /* 00579ee0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x579ee5u); f_005e9f20();
    /* 00579ee5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00579ee8:; BB(0x00579ee8);
    /* 00579ee8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00579eee: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00579ef1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00579ef3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00579ef6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00579ef9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x579efeu); f_0063aac0();
    /* 00579efe: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00579f00: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00579f03: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00579f05: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579f09: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00579f0c: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00579f0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579f11: jne 0x579f23 */ if (!fZ) goto L_00579f23;
L_00579f13:; BB(0x00579f13);
    /* 00579f13: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00579f19: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00579f1c: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00579f1e: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x579f23u); f_0063b0a0();
L_00579f23:; BB(0x00579f23);
    /* 00579f23: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00579f28: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00579f2b: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00579f2d: call 0x520e60 */ r_esp -= 4; W32(r_esp, 0x579f32u); f_00520e60();
    /* 00579f32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579f33: push 0x793470 */ { u32 v = 0x793470u; r_esp -= 4; W32(r_esp, v); }
    /* 00579f38: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x579f3du); f_00686d8e();
    /* 00579f3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579f40: mov esp, ebp */ r_esp = r_ebp;
    /* 00579f42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579f43: ret  */ FN_RET(0x00579e80); r_esp += 4; return;
}

void f_0057a290(void) /* DemoRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a290);
    /* 0057a290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a291: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a293: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a296: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a299: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0057a29c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0057a29f: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a2a6: je 0x57a2b6 */ if (fZ) goto L_0057a2b6;
L_0057a2a8:; BB(0x0057a2a8);
    /* 0057a2a8: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a2af: je 0x57a309 */ if (fZ) goto L_0057a309;
L_0057a2b1:; BB(0x0057a2b1);
    /* 0057a2b1: jmp 0x57a33e */ goto L_0057a33e;
L_0057a2b6:; BB(0x0057a2b6);
    /* 0057a2b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2b8: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2bd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057a2c0: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x57a2c5u); f_005fe640();
    /* 0057a2c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2c7: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2cc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057a2cf: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x57a2d4u); f_005fe640();
    /* 0057a2d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2d6: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057a2de: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x57a2e3u); f_005fe640();
    /* 0057a2e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2e5: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057a2ed: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x57a2f2u); f_005fe640();
    /* 0057a2f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2f4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2f6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2f8: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a2fd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057a300: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x57a305u); f_005fe240();
    /* 0057a305: jmp 0x57a33e */ goto L_0057a33e;
L_0057a309:; BB(0x0057a309);
    /* 0057a309: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a30b: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 0057a310: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057a313: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x57a318u); f_005fe640();
    /* 0057a318: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a31a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a31c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a31e: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a323: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057a326: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x57a32bu); f_005fe240();
    /* 0057a32b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a32d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a32f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a331: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a336: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057a339: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x57a33eu); f_005fe240();
L_0057a33e:; BB(0x0057a33e);
    /* 0057a33e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0057a341: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a342: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057a345: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a346: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a349: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x57a34eu); f_005d8670();
    /* 0057a34e: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a350: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a351: ret 8 */ FN_RET(0x0057a290); r_esp += 12; return;
}

void f_0057a430(void) /* DemoRoom::vfunc149 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a430);
    /* 0057a430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a431: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a437: mov eax, 0x30d400 */ r_eax = 0x30d400u;
    /* 0057a43c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a43e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a43f: ret  */ FN_RET(0x0057a430); r_esp += 4; return;
}

