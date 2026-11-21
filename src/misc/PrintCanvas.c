#include "protos.h"

void f_005fbec0(void) /* PrintCanvas::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fbec0);
    /* 005fbec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbec1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbec3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fbec5: push 0x6aa54c */ { u32 v = 0x6aa54cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fbeca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fbed0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbed1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fbed4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fbed9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fbedb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbedc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fbedf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fbee5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005fbee8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fbeeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbeec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fbeef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbef0: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005fbef6: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005fbef9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbefa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbefc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fbeff: call 0x5f7670 */ r_esp -= 4; W32(r_esp, 0x5fbf04u); f_005f7670();
    /* 005fbf04: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fbf0b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fbf0e: mov dword ptr [ecx], 0x6d6e54 */ W32((u32)(r_ecx), 0x6d6e54u);
    /* 005fbf14: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fbf19: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fbf1eu); f_00686d82();
    /* 005fbf1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fbf21: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005fbf24: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005fbf28: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fbf2c: je 0x5fbf5f */ if (fZ) goto L_005fbf5f;
L_005fbf2e:; BB(0x005fbf2e);
    /* 005fbf2e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fbf31: call 0x6131b0 */ r_esp -= 4; W32(r_esp, 0x5fbf36u); f_006131b0();
    /* 005fbf36: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005fbf3a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fbf3d: mov dword ptr [edx], 0x6d6e0c */ W32((u32)(r_edx), 0x6d6e0cu);
    /* 005fbf43: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fbf46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbf47: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fbf4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbf4b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fbf4e: call 0x613360 */ r_esp -= 4; W32(r_esp, 0x5fbf53u); f_00613360();
    /* 005fbf53: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005fbf57: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fbf5a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005fbf5d: jmp 0x5fbf66 */ goto L_005fbf66;
L_005fbf5f:; BB(0x005fbf5f);
    /* 005fbf5f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005fbf66:; BB(0x005fbf66);
    /* 005fbf66: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fbf69: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fbf6c: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fbf70: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fbf73: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fbf76: mov dword ptr [ecx + 0x1a8], edx */ W32((u32)(r_ecx+0x1a8u), r_edx);
    /* 005fbf7c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fbf7f: mov byte ptr [eax + 0x168], 1 */ W8((u32)(r_eax+0x168u), 0x1u);
    /* 005fbf86: mov byte ptr [ebp - 0xe], 0xff */ W8((u32)(r_ebp+0xfffffff2u), 0xffu);
    /* 005fbf8a: mov cl, byte ptr [ebp - 0xe] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff2u))) & 0xffu);
    /* 005fbf8d: mov byte ptr [ebp - 0xf], cl */ W8((u32)(r_ebp+0xfffffff1u), (u8)r_ecx);
    /* 005fbf90: mov dl, byte ptr [ebp - 0xf] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff1u))) & 0xffu);
    /* 005fbf93: mov byte ptr [ebp - 0x10], dl */ W8((u32)(r_ebp+0xfffffff0u), (u8)r_edx);
    /* 005fbf96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbf97: mov eax, esp */ r_eax = r_esp;
    /* 005fbf99: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 005fbf9d: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005fbfa0: mov dl, byte ptr [ebp - 0xe] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff2u))) & 0xffu);
    /* 005fbfa3: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 005fbfa6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fbfa9: call 0x5f8a80 */ r_esp -= 4; W32(r_esp, 0x5fbfaeu); f_005f8a80();
    /* 005fbfae: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fbfb1: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5fbfb6u); f_005f85d0();
    /* 005fbfb6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fbfbd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fbfc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fbfc3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fbfca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fbfcb: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbfcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbfce: ret 8 */ FN_RET(0x005fbec0); r_esp += 12; return;
}

void f_005fc060(void) /* PrintCanvas::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc060);
    /* 005fc060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc061: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fc067: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc06a: mov dword ptr [eax], 0x6d6e0c */ W32((u32)(r_eax), 0x6d6e0cu);
    /* 005fc070: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc073: call 0x6132a0 */ r_esp -= 4; W32(r_esp, 0x5fc078u); f_006132a0();
    /* 005fc078: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fc07b: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005fc07e: je 0x5fc08c */ if (fZ) goto L_005fc08c;
L_005fc080:; BB(0x005fc080);
    /* 005fc080: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc083: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc084: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5fc089u); f_00686cae();
    /* 005fc089: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fc08c:; BB(0x005fc08c);
    /* 005fc08c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc08f: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc092: ret 4 */ FN_RET(0x005fc060); r_esp += 8; return;
}

