#include "protos.h"

void f_006388b0(void) /* sub_6388B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006388b0);
    /* 006388b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006388b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006388b3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006388b6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006388b9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006388bc: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x6388c1u); f_005f3bf0();
    /* 006388c1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006388c4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006388c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006388c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006388cb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006388cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006388d0: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 006388d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6388d8u); call_ind(t); }
    /* 006388d8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006388db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006388dd: je 0x63891a */ if (fZ) goto L_0063891a;
L_006388df:; BB(0x006388df);
    /* 006388df: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006388e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006388e3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006388e6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006388e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006388eb: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 006388f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6388f3u); call_ind(t); }
    /* 006388f3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006388f6: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006388fa: je 0x63891a */ if (fZ) goto L_0063891a;
L_006388fc:; BB(0x006388fc);
    /* 006388fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006388ff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00638901: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00638904: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0063890a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63890cu); call_ind(t); }
    /* 0063890c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063890f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638913: je 0x63891a */ if (fZ) goto L_0063891a;
L_00638915:; BB(0x00638915);
    /* 00638915: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00638918: jmp 0x638929 */ goto L_00638929;
L_0063891a:; BB(0x0063891a);
    /* 0063891a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063891d: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x638922u); f_006375b0();
    /* 00638922: mov ecx, eax */ r_ecx = r_eax;
    /* 00638924: call 0x639ff0 */ r_esp -= 4; W32(r_esp, 0x638929u); f_00639ff0();
L_00638929:; BB(0x00638929);
    /* 00638929: mov esp, ebp */ r_esp = r_ebp;
    /* 0063892b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063892c: ret  */ FN_RET(0x006388b0); r_esp += 4; return;
}

