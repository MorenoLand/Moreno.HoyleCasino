#include "protos.h"

void f_0066d170(void) /* FaceDemoCycler::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066d170);
    /* 0066d170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d171: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066d177: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d179: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066d17c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d17d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d180: call 0x600f30 */ r_esp -= 4; W32(r_esp, 0x66d185u); f_00600f30();
    /* 0066d185: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d188: mov dword ptr [ecx], 0x6e0ce0 */ W32((u32)(r_ecx), 0x6e0ce0u);
    /* 0066d18e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d191: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d193: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d194: ret 4 */ FN_RET(0x0066d170); r_esp += 8; return;
}

void f_0066d1c0(void) /* FaceDemoCycler::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066d1c0);
    /* 0066d1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d1c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d1c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0066d1c9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d1cc: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 0066d1d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d1d2: jne 0x66d1d6 */ if (!fZ) goto L_0066d1d6;
L_0066d1d4:; BB(0x0066d1d4);
    /* 0066d1d4: jmp 0x66d23e */ goto L_0066d23e;
L_0066d1d6:; BB(0x0066d1d6);
    /* 0066d1d6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d1d9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066d1db: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d1de: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0066d1e1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66d1e3u); call_ind(t); }
    /* 0066d1e3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0066d1e6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d1e9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0066d1ec: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x66d1f1u); f_005eb220();
    /* 0066d1f1: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d1f4: je 0x66d23e */ if (fZ) goto L_0066d23e;
L_0066d1f6:; BB(0x0066d1f6);
    /* 0066d1f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d1f9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d1fc: cmp edx, dword ptr [ecx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d1ff: jne 0x66d224 */ if (!fZ) goto L_0066d224;
L_0066d201:; BB(0x0066d201);
    /* 0066d201: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066d208: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d20b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d20c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d20f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0066d212: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d215: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0066d218: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066d21a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0066d220: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d222u); call_ind(t); }
    /* 0066d222: jmp 0x66d23e */ goto L_0066d23e;
L_0066d224:; BB(0x0066d224);
    /* 0066d224: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d227: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d228: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d22b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0066d22e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d231: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0066d234: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066d236: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0066d23c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d23eu); call_ind(t); }
L_0066d23e:; BB(0x0066d23e);
    /* 0066d23e: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d240: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d241: ret  */ FN_RET(0x0066d1c0); r_esp += 4; return;
}

