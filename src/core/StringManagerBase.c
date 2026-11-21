#include "protos.h"

void f_0062ec40(void) /* StringManagerBase::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ec40);
    /* 0062ec40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ec41: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ec43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ec45: push 0x6ab7cb */ { u32 v = 0x6ab7cbu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ec4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062ec50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ec51: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ec54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0062ec59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ec5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ec5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062ec5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0062ec65: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0062ec68: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062ec6b: mov dword ptr [eax], 0x6d9ba4 */ W32((u32)(r_eax), 0x6d9ba4u);
    /* 0062ec71: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062ec74: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ec77: call 0x62f920 */ r_esp -= 4; W32(r_esp, 0x62ec7cu); f_0062f920();
    /* 0062ec7c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062ec83: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062ec86: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 0062ec8d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062ec90: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 0062ec97: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ec9c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62eca1u); f_00686d82();
    /* 0062eca1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062eca4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062eca7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062ecaa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062ecad: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 0062ecb0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062ecb3: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 0062ecba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062ecbd: mov byte ptr [eax + 0x3c], 0x2c */ W8((u32)(r_eax+0x3cu), 0x2cu);
    /* 0062ecc1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062ecc4: mov byte ptr [ecx + 0x3d], 0xa */ W8((u32)(r_ecx+0x3du), 0xau);
    /* 0062ecc8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062eccb: mov byte ptr [edx + 0x3e], 0 */ W8((u32)(r_edx+0x3eu), 0x0u);
    /* 0062eccf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062ecd2: mov byte ptr [eax + 0x3f], 1 */ W8((u32)(r_eax+0x3fu), 0x1u);
    /* 0062ecd6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062ecdd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062ece0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ece3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062ecea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062eceb: mov esp, ebp */ r_esp = r_ebp;
    /* 0062eced: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ecee: ret  */ FN_RET(0x0062ec40); r_esp += 4; return;
}

void f_0062ecf0(void) /* StringManagerBase::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ecf0);
    /* 0062ecf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ecf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ecf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ecf5: push 0x6ab7f1 */ { u32 v = 0x6ab7f1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ecfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062ed00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ed01: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ed04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0062ed09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ed0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ed0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062ed0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0062ed15: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0062ed18: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062ed1b: mov dword ptr [eax], 0x6d9ba4 */ W32((u32)(r_eax), 0x6d9ba4u);
    /* 0062ed21: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062ed28: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062ed2b: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ed2f: je 0x62ed45 */ if (fZ) goto L_0062ed45;
L_0062ed31:; BB(0x0062ed31);
    /* 0062ed31: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ed33: push 0x6d9c18 */ { u32 v = 0x6d9c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ed38: push 0x6d9c0c */ { u32 v = 0x6d9c0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ed3d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62ed42u); f_005e9f20();
    /* 0062ed42: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062ed45:; BB(0x0062ed45);
    /* 0062ed45: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062ed48: cmp dword ptr [eax + 0x24], 0 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ed4c: je 0x62ed62 */ if (fZ) goto L_0062ed62;
L_0062ed4e:; BB(0x0062ed4e);
    /* 0062ed4e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ed50: push 0x6d9c18 */ { u32 v = 0x6d9c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ed55: push 0x6d9c04 */ { u32 v = 0x6d9c04u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ed5a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62ed5fu); f_005e9f20();
    /* 0062ed5f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062ed62:; BB(0x0062ed62);
    /* 0062ed62: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062ed65: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0062ed68: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062ed6b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062ed6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ed6f: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62ed74u); f_00686cae();
    /* 0062ed74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ed77: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062ed7a: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 0062ed81: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062ed84: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062ed87: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0062ed8a: jmp 0x62ed95 */ goto L_0062ed95;
L_0062ed8c:; BB(0x0062ed8c);
    /* 0062ed8c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062ed8f: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062ed92: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0062ed95:; BB(0x0062ed95);
    /* 0062ed95: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062ed98: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062ed9b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062ed9e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062eda1: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0062eda4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062eda7: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062edaa: lea edx, [ecx + edx*8] */ r_edx = (u32)(r_ecx+r_edx*8);
    /* 0062edad: cmp dword ptr [ebp - 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062edb0: je 0x62eddd */ if (fZ) goto L_0062eddd;
L_0062edb2:; BB(0x0062edb2);
    /* 0062edb2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062edb5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062edb7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0062edba: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062edbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062edbe: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62edc3u); f_00686cae();
    /* 0062edc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062edc6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062edc9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0062edcc: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0062edcf: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062edd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062edd3: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62edd8u); f_00686cae();
    /* 0062edd8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062eddb: jmp 0x62ed8c */ goto L_0062ed8c;
L_0062eddd:; BB(0x0062eddd);
    /* 0062eddd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062ede4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062ede7: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062edea: call 0x62f990 */ r_esp -= 4; W32(r_esp, 0x62edefu); f_0062f990();
    /* 0062edef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062edf2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062edf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062edfa: mov esp, ebp */ r_esp = r_ebp;
    /* 0062edfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062edfd: ret  */ FN_RET(0x0062ecf0); r_esp += 4; return;
}

void f_0062eef0(void) /* StringManagerBase::func_0062eef0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062eef0);
    /* 0062eef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062eef1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062eef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062eef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062eef7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062eefa: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0062eefd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062eefe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ef01: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0062ef04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ef05: call dword ptr [0x6b218c] */ { u32 t = R32((u32)(0x6b218cu)); r_esp -= 4; W32(r_esp, 0x62ef0bu); call_ind(t); }
    /* 0062ef0b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ef0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ef11: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0062ef14: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ef17: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0062ef1a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062ef1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ef20: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0062ef23: cmp dword ptr [ebp + 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ef27: jne 0x62ef42 */ if (!fZ) goto L_0062ef42;
L_0062ef29:; BB(0x0062ef29);
    /* 0062ef29: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ef2c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 0062ef33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ef36: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0062ef39: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ef3c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ef3f: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
L_0062ef42:; BB(0x0062ef42);
    /* 0062ef42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ef45: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0062ef48: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0062ef4b: cmp dword ptr [ebp + 8], edx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ef4e: je 0x62ef64 */ if (fZ) goto L_0062ef64;
L_0062ef50:; BB(0x0062ef50);
    /* 0062ef50: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ef52: push 0x6d9c18 */ { u32 v = 0x6d9c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ef57: push 0x6d9c44 */ { u32 v = 0x6d9c44u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ef5c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62ef61u); f_005e9f20();
    /* 0062ef61: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062ef64:; BB(0x0062ef64);
    /* 0062ef64: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062ef67: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ef69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ef6a: ret 4 */ FN_RET(0x0062eef0); r_esp += 8; return;
}

