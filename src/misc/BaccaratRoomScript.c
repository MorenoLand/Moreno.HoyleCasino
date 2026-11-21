#include "protos.h"

void f_00406480(void) /* BaccaratRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406480);
    /* 00406480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406481: mov ebp, esp */ r_ebp = r_esp;
    /* 00406483: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406486: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406489: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040648c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0040648f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00406492: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406496: je 0x4064ce */ if (fZ) goto L_004064ce;
L_00406498:; BB(0x00406498);
    /* 00406498: cmp dword ptr [ebp - 8], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040649f: je 0x4064a3 */ if (fZ) goto L_004064a3;
L_004064a1:; BB(0x004064a1);
    /* 004064a1: jmp 0x4064db */ goto L_004064db;
L_004064a3:; BB(0x004064a3);
    /* 004064a3: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004064a9: call 0x4079b0 */ r_esp -= 4; W32(r_esp, 0x4064aeu); f_004079b0();
    /* 004064ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004064b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004064b3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004064b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004064b8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004064bb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4064bdu); call_ind(t); }
    /* 004064bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004064bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004064c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004064c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004064c7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004064ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4064ccu); call_ind(t); }
    /* 004064cc: jmp 0x4064f6 */ goto L_004064f6;
L_004064ce:; BB(0x004064ce);
    /* 004064ce: mov ecx, dword ptr [0x7902f4] */ r_ecx = R32((u32)(0x7902f4u));
    /* 004064d4: call 0x404200 */ r_esp -= 4; W32(r_esp, 0x4064d9u); f_00404200();
    /* 004064d9: jmp 0x4064f6 */ goto L_004064f6;
L_004064db:; BB(0x004064db);
    /* 004064db: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004064dd: jne 0x4064f6 */ if (!fZ) goto L_004064f6;
L_004064df:; BB(0x004064df);
    /* 004064df: push 0x1e3 */ { u32 v = 0x1e3u; r_esp -= 4; W32(r_esp, v); }
    /* 004064e4: push 0x6b30f0 */ { u32 v = 0x6b30f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004064e9: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004064ee: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4064f3u); f_005e9f20();
    /* 004064f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004064f6:; BB(0x004064f6);
    /* 004064f6: mov esp, ebp */ r_esp = r_ebp;
    /* 004064f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004064f9: ret  */ FN_RET(0x00406480); r_esp += 4; return;
}

