#include "protos.h"

void f_00601ba0(void) /* sciButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00601ba0);
    /* 00601ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00601ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00601ba3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00601ba5: push 0x6aa8ab */ { u32 v = 0x6aa8abu; r_esp -= 4; W32(r_esp, v); }
    /* 00601baa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00601bb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601bb1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00601bb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00601bb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00601bbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00601bbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00601bbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00601bc5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00601bc8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601bcb: mov dword ptr [eax], 0x6d75fc */ W32((u32)(r_eax), 0x6d75fcu);
    /* 00601bd1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00601bd8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601bdb: cmp dword ptr [ecx + 0x190], 0 */ {  u32 a = R32((u32)(r_ecx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601be2: je 0x601c23 */ if (fZ) goto L_00601c23;
L_00601be4:; BB(0x00601be4);
    /* 00601be4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601be7: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00601bed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00601bf0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00601bf3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00601bf6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00601bfa: je 0x601c0f */ if (fZ) goto L_00601c0f;
L_00601bfc:; BB(0x00601bfc);
    /* 00601bfc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00601bfe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00601c01: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00601c03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00601c06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00601c08: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x601c0au); call_ind(t); }
    /* 00601c0a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00601c0d: jmp 0x601c16 */ goto L_00601c16;
L_00601c0f:; BB(0x00601c0f);
    /* 00601c0f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00601c16:; BB(0x00601c16);
    /* 00601c16: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601c19: mov dword ptr [eax + 0x190], 0 */ W32((u32)(r_eax+0x190u), 0x0u);
L_00601c23:; BB(0x00601c23);
    /* 00601c23: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00601c2a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00601c2d: call 0x5f5fa0 */ r_esp -= 4; W32(r_esp, 0x601c32u); f_005f5fa0();
    /* 00601c32: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00601c35: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00601c3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00601c3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00601c3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00601c40: ret  */ FN_RET(0x00601ba0); r_esp += 4; return;
}

void f_00602330(void) /* sciButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00602330);
    /* 00602330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602331: mov ebp, esp */ r_ebp = r_esp;
    /* 00602333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00602334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00602337: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060233a: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060233e: je 0x60235c */ if (fZ) goto L_0060235c;
L_00602340:; BB(0x00602340);
    /* 00602340: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602343: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x602348u); f_005f5400();
    /* 00602348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602349: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060234c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0060234f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00602352: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00602355: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00602357: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0060235a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60235cu); call_ind(t); }
L_0060235c:; BB(0x0060235c);
    /* 0060235c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060235e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060235f: ret  */ FN_RET(0x00602330); r_esp += 4; return;
}

