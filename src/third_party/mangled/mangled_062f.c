#include "protos.h"

void f_0062f920(void) /* ?$TList@UStringPair@StringManagerBase::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f920);
    /* 0062f920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f921: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f923: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f926: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062f929: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f92c: mov dword ptr [eax], 0x6d9cf4 */ W32((u32)(r_eax), 0x6d9cf4u);
    /* 0062f932: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f935: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f938: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062f93b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f93e: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0062f944: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f947: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 0062f94e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f951: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0062f958: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f95b: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 0062f962: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f965: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0062f96c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f96e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f970: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f973: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f976: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f977: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x62f97cu); f_00686fa2();
    /* 0062f97c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f97f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f982: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f984: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f985: ret  */ FN_RET(0x0062f920); r_esp += 4; return;
}

void f_0062f990(void) /* ?$TList@UStringPair@StringManagerBase::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f990);
    /* 0062f990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f991: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f993: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f996: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062f999: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f99c: mov dword ptr [eax], 0x6d9cf4 */ W32((u32)(r_eax), 0x6d9cf4u);
    /* 0062f9a2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f9a5: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f9a9: jne 0x62f9ad */ if (!fZ) goto L_0062f9ad;
L_0062f9ab:; BB(0x0062f9ab);
    /* 0062f9ab: jmp 0x62f9d2 */ goto L_0062f9d2;
L_0062f9ad:; BB(0x0062f9ad);
    /* 0062f9ad: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f9b0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0062f9b3: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062f9b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f9b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f9b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f9bc: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062f9bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f9c0: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x62f9c5u); f_00686fa2();
    /* 0062f9c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f9c8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f9cb: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
L_0062f9d2:; BB(0x0062f9d2);
    /* 0062f9d2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f9d5: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f9d9: je 0x62f9f0 */ if (fZ) goto L_0062f9f0;
L_0062f9db:; BB(0x0062f9db);
    /* 0062f9db: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f9de: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062f9e1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062f9e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f9e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f9e8: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62f9edu); f_00686cae();
    /* 0062f9ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062f9f0:; BB(0x0062f9f0);
    /* 0062f9f0: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f9f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f9f3: ret  */ FN_RET(0x0062f990); r_esp += 4; return;
}

void f_0062fa70(void) /* ?$TList@UStringPair@StringManagerBase::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062fa70);
    /* 0062fa70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062fa71: mov ebp, esp */ r_ebp = r_esp;
    /* 0062fa73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062fa76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062fa79: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062fa7c: call 0x62f990 */ r_esp -= 4; W32(r_esp, 0x62fa81u); f_0062f990();
    /* 0062fa81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062fa84: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062fa87: je 0x62fa95 */ if (fZ) goto L_0062fa95;
L_0062fa89:; BB(0x0062fa89);
    /* 0062fa89: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062fa8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fa8d: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62fa92u); f_00686cae();
    /* 0062fa92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062fa95:; BB(0x0062fa95);
    /* 0062fa95: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062fa98: mov esp, ebp */ r_esp = r_ebp;
    /* 0062fa9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062fa9b: ret 4 */ FN_RET(0x0062fa70); r_esp += 8; return;
}

