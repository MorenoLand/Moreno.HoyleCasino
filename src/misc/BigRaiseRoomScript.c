#include "protos.h"

void f_005a11a0(void) /* BigRaiseRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a11a0);
    /* 005a11a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a11a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a11a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a11a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a11a9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a11ac: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005a11af: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a11b2: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a11b6: je 0x5a11c3 */ if (fZ) goto L_005a11c3;
L_005a11b8:; BB(0x005a11b8);
    /* 005a11b8: cmp dword ptr [ebp - 8], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a11bf: je 0x5a11d0 */ if (fZ) goto L_005a11d0;
L_005a11c1:; BB(0x005a11c1);
    /* 005a11c1: jmp 0x5a11fb */ goto L_005a11fb;
L_005a11c3:; BB(0x005a11c3);
    /* 005a11c3: mov ecx, dword ptr [0x7935c8] */ r_ecx = R32((u32)(0x7935c8u));
    /* 005a11c9: call 0x59fa00 */ r_esp -= 4; W32(r_esp, 0x5a11ceu); f_0059fa00();
    /* 005a11ce: jmp 0x5a1216 */ goto L_005a1216;
L_005a11d0:; BB(0x005a11d0);
    /* 005a11d0: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 005a11d6: call 0x5a3880 */ r_esp -= 4; W32(r_esp, 0x5a11dbu); f_005a3880();
    /* 005a11db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a11dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a11e0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a11e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a11e5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005a11e8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a11eau); call_ind(t); }
    /* 005a11ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a11ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a11ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a11f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a11f4: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005a11f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a11f9u); call_ind(t); }
    /* 005a11f9: jmp 0x5a1216 */ goto L_005a1216;
L_005a11fb:; BB(0x005a11fb);
    /* 005a11fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005a11fd: jne 0x5a1216 */ if (!fZ) goto L_005a1216;
L_005a11ff:; BB(0x005a11ff);
    /* 005a11ff: push 0x199 */ { u32 v = 0x199u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1204: push 0x6cf3a8 */ { u32 v = 0x6cf3a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1209: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005a120e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5a1213u); f_005e9f20();
    /* 005a1213: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a1216:; BB(0x005a1216);
    /* 005a1216: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1218: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1219: ret  */ FN_RET(0x005a11a0); r_esp += 4; return;
}

