#include "protos.h"

void f_005bf210(void) /* MLVSlotBonusGame::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf210);
    /* 005bf210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf211: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf214: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005bf217: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf21a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5bf21fu); f_005e9e20();
    /* 005bf21f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf222: mov dword ptr [eax], 0x6d1cf0 */ W32((u32)(r_eax), 0x6d1cf0u);
    /* 005bf228: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf22b: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005bf232: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf235: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 005bf23c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf23f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005bf245: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005bf248: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005bf24b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf24e: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005bf255: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf258: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf25a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf25b: ret  */ FN_RET(0x005bf210); r_esp += 4; return;
}

void f_005bf2d0(void) /* MLVSlotBonusGame::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bf2d0);
    /* 005bf2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bf2d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf2d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005bf2d9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf2dc: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf2e0: je 0x5bf334 */ if (fZ) goto L_005bf334;
L_005bf2e2:; BB(0x005bf2e2);
    /* 005bf2e2: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005bf2e8: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x5bf2edu); f_005f3e50();
    /* 005bf2ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf2f0: cmp eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf2f3: jle 0x5bf334 */ if ((fZ||fS!=fO)) goto L_005bf334;
L_005bf2f5:; BB(0x005bf2f5);
    /* 005bf2f5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf2f8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bf2fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf2fe: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005bf301: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bf303: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005bf306: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bf308u); call_ind(t); }
    /* 005bf308: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bf30b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005bf30e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bf311: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005bf314: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf318: je 0x5bf32d */ if (fZ) goto L_005bf32d;
L_005bf31a:; BB(0x005bf31a);
    /* 005bf31a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bf31c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf31f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bf321: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bf324: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bf326: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bf328u); call_ind(t); }
    /* 005bf328: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005bf32b: jmp 0x5bf334 */ goto L_005bf334;
L_005bf32d:; BB(0x005bf32d);
    /* 005bf32d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005bf334:; BB(0x005bf334);
    /* 005bf334: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf336: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf337: ret  */ FN_RET(0x005bf2d0); r_esp += 4; return;
}

