#include "protos.h"

void f_00573960(void) /* SultanIcon::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00573960);
    /* 00573960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00573961: mov ebp, esp */ r_ebp = r_esp;
    /* 00573963: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00573965: push 0x6a629d */ { u32 v = 0x6a629du; r_esp -= 4; W32(r_esp, v); }
    /* 0057396a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00573970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573971: sub esp, 0xd4 */ {  u32 a = r_esp; u32 b = 0xd4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00573977: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057397c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057397e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057397f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00573982: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00573988: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0057398e: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573994: call 0x574c60 */ r_esp -= 4; W32(r_esp, 0x573999u); f_00574c60();
    /* 00573999: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057399f: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
    /* 005739a6: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005739ac: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
    /* 005739b3: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005739b9: mov dword ptr [edx + 0x7c], 0xffffffff */ W32((u32)(r_edx+0x7cu), 0xffffffffu);
    /* 005739c0: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005739c6: mov byte ptr [eax + 0x68], 1 */ W8((u32)(r_eax+0x68u), 0x1u);
    /* 005739ca: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005739d0: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005739d4: jne 0x573a29 */ if (!fZ) goto L_00573a29;
L_005739d6:; BB(0x005739d6);
    /* 005739d6: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005739db: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5739e0u); f_00686d82();
    /* 005739e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005739e3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005739e6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005739ed: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005739f1: je 0x573a03 */ if (fZ) goto L_00573a03;
L_005739f3:; BB(0x005739f3);
    /* 005739f3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005739f6: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5739fbu); f_005eaaf0();
    /* 005739fb: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00573a01: jmp 0x573a0d */ goto L_00573a0d;
L_00573a03:; BB(0x00573a03);
    /* 00573a03: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_00573a0d:; BB(0x00573a0d);
    /* 00573a0d: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 00573a13: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00573a16: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00573a1d: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573a23: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00573a26: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
L_00573a29:; BB(0x00573a29);
    /* 00573a29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573a2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573a2d: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573a33: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00573a36: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573a3c: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00573a3f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573a41: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00573a44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573a46u); call_ind(t); }
    /* 00573a46: push 0x16021 */ { u32 v = 0x16021u; r_esp -= 4; W32(r_esp, v); }
    /* 00573a4b: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573a51: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00573a54: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x573a59u); f_005eaf00();
    /* 00573a59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573a5b: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573a61: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00573a64: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573a6a: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00573a6d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573a6f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00573a75: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573a77u); call_ind(t); }
    /* 00573a77: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573a7d: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00573a80: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573a86: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00573a89: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00573a8b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00573a8e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573a90u); call_ind(t); }
    /* 00573a90: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00573a92: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573a98: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00573a9b: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573aa1: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00573aa4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00573aa6: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00573aa9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573aabu); call_ind(t); }
    /* 00573aab: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573ab1: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00573ab4: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573aba: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00573abd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00573abf: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00573ac2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573ac4u); call_ind(t); }
    /* 00573ac4: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573aca: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573ace: jne 0x573b23 */ if (!fZ) goto L_00573b23;
L_00573ad0:; BB(0x00573ad0);
    /* 00573ad0: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00573ad5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x573adau); f_00686d82();
    /* 00573ada: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00573add: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00573ae0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00573ae7: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573aeb: je 0x573afd */ if (fZ) goto L_00573afd;
L_00573aed:; BB(0x00573aed);
    /* 00573aed: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00573af0: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x573af5u); f_005f5bf0();
    /* 00573af5: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00573afb: jmp 0x573b07 */ goto L_00573b07;
L_00573afd:; BB(0x00573afd);
    /* 00573afd: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_00573b07:; BB(0x00573b07);
    /* 00573b07: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00573b0d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00573b10: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00573b17: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573b1d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00573b20: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
L_00573b23:; BB(0x00573b23);
    /* 00573b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573b25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573b27: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573b2d: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00573b30: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573b36: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00573b39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573b3b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00573b3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573b40u); call_ind(t); }
    /* 00573b40: push 0x16020 */ { u32 v = 0x16020u; r_esp -= 4; W32(r_esp, v); }
    /* 00573b45: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573b4b: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00573b4e: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x573b53u); f_005eaf00();
    /* 00573b53: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573b59: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00573b5c: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573b62: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00573b65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573b67: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00573b6a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573b6cu); call_ind(t); }
    /* 00573b6c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00573b6e: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573b74: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00573b77: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573b7d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00573b80: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00573b82: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00573b85: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573b87u); call_ind(t); }
    /* 00573b87: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573b8d: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 00573b90: mov dword ptr [edx + 0x178], 6 */ W32((u32)(r_edx+0x178u), 0x6u);
    /* 00573b9a: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00573b9c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x573ba1u); f_00686d82();
    /* 00573ba1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00573ba4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00573ba7: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00573bae: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573bb2: je 0x573bc6 */ if (fZ) goto L_00573bc6;
L_00573bb4:; BB(0x00573bb4);
    /* 00573bb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573bb6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00573bb9: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x573bbeu); f_00600a70();
    /* 00573bbe: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00573bc4: jmp 0x573bd0 */ goto L_00573bd0;
L_00573bc6:; BB(0x00573bc6);
    /* 00573bc6: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_00573bd0:; BB(0x00573bd0);
    /* 00573bd0: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 00573bd6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00573bd9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00573be0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00573be3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00573be4: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573bea: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00573bed: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x573bf2u); f_005f5d50();
    /* 00573bf2: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573bf8: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00573bfb: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573c01: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00573c04: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00573c06: mov ecx, eax */ r_ecx = r_eax;
    /* 00573c08: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00573c0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573c0du); call_ind(t); }
    /* 00573c0d: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573c13: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573c17: jne 0x573c6c */ if (!fZ) goto L_00573c6c;
L_00573c19:; BB(0x00573c19);
    /* 00573c19: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00573c1e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x573c23u); f_00686d82();
    /* 00573c23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00573c26: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00573c29: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00573c30: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573c34: je 0x573c46 */ if (fZ) goto L_00573c46;
L_00573c36:; BB(0x00573c36);
    /* 00573c36: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00573c39: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x573c3eu); f_005eaaf0();
    /* 00573c3e: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00573c44: jmp 0x573c50 */ goto L_00573c50;
L_00573c46:; BB(0x00573c46);
    /* 00573c46: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_00573c50:; BB(0x00573c50);
    /* 00573c50: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 00573c56: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00573c59: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00573c60: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573c66: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00573c69: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
L_00573c6c:; BB(0x00573c6c);
    /* 00573c6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573c6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573c70: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573c76: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00573c79: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573c7f: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00573c82: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573c84: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00573c87: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573c89u); call_ind(t); }
    /* 00573c89: push 0x1602c */ { u32 v = 0x1602cu; r_esp -= 4; W32(r_esp, v); }
    /* 00573c8e: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573c94: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00573c97: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x573c9cu); f_005eaf00();
    /* 00573c9c: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573ca2: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00573ca5: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573cab: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00573cae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573cb0: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00573cb3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573cb5u); call_ind(t); }
    /* 00573cb5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00573cb7: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573cbd: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00573cc0: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573cc6: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00573cc9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00573ccb: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00573cce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573cd0u); call_ind(t); }
    /* 00573cd0: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573cd6: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 00573cd9: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573cdf: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00573ce2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00573ce4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00573ce7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573ce9u); call_ind(t); }
    /* 00573ce9: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00573cef: jmp 0x573cfd */ goto L_00573cfd;
L_00573cf1:; BB(0x00573cf1);
    /* 00573cf1: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00573cf5: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00573cf9: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_00573cfd:; BB(0x00573cfd);
    /* 00573cfd: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573d01: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00573d04: jge 0x573f1c */ if ((fS==fO)) goto L_00573f1c;
L_00573d0a:; BB(0x00573d0a);
    /* 00573d0a: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573d0e: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573d14: cmp dword ptr [ecx + eax*4 + 0x44], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573d19: jne 0x573d73 */ if (!fZ) goto L_00573d73;
L_00573d1b:; BB(0x00573d1b);
    /* 00573d1b: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00573d20: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x573d25u); f_00686d82();
    /* 00573d25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00573d28: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00573d2b: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00573d32: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573d36: je 0x573d48 */ if (fZ) goto L_00573d48;
L_00573d38:; BB(0x00573d38);
    /* 00573d38: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00573d3b: call 0x576e80 */ r_esp -= 4; W32(r_esp, 0x573d40u); f_00576e80();
    /* 00573d40: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00573d46: jmp 0x573d52 */ goto L_00573d52;
L_00573d48:; BB(0x00573d48);
    /* 00573d48: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_00573d52:; BB(0x00573d52);
    /* 00573d52: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00573d58: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00573d5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00573d62: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573d66: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573d6c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00573d6f: mov dword ptr [ecx + eax*4 + 0x44], edx */ W32((u32)(r_ecx+r_eax*4+0x44u), r_edx);
L_00573d73:; BB(0x00573d73);
    /* 00573d73: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573d77: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573d7d: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 00573d81: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573d85: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573d8b: mov ecx, dword ptr [ecx + eax*4 + 0x44] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 00573d8f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00573d91: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00573d94: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573d96u); call_ind(t); }
    /* 00573d96: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573d9a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00573d9c: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00573d9f: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00573da2: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00573da5: and edx, 0xffffffe1 */ {  u32 a = r_edx; u32 b = 0xffffffe1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00573da8: add edx, 0x16041 */ {  u32 a = r_edx; u32 b = 0x16041u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00573dae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00573daf: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573db3: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573db9: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 00573dbd: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573dc1: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573dc7: mov ecx, dword ptr [ecx + eax*4 + 0x44] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 00573dcb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00573dcd: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00573dd3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573dd5u); call_ind(t); }
    /* 00573dd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573dd9: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573ddd: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573de3: mov eax, dword ptr [edx + ecx*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 00573de7: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573deb: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573df1: mov ecx, dword ptr [edx + ecx*4 + 0x44] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 00573df5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00573df7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00573dfa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x573dfcu); call_ind(t); }
    /* 00573dfc: push 0x5dc */ { u32 v = 0x5dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00573e01: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573e05: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573e0b: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 00573e0f: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573e13: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573e19: mov ecx, dword ptr [ecx + eax*4 + 0x44] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 00573e1d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00573e1f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00573e22: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573e24u); call_ind(t); }
    /* 00573e24: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573e28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00573e29: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573e2d: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573e33: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 00573e37: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x573e3cu); f_005f53e0();
    /* 00573e3c: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573e40: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00573e43: jge 0x573e80 */ if ((fS==fO)) goto L_00573e80;
L_00573e45:; BB(0x00573e45);
    /* 00573e45: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573e49: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00573e4c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00573e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00573e50: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573e54: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00573e57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573e58: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573e5c: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00573e5f: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00573e62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00573e63: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573e67: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00573e6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00573e6b: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573e6f: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573e75: mov ecx, dword ptr [ecx + eax*4 + 0x44] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 00573e79: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x573e7eu); f_006023d0();
    /* 00573e7e: jmp 0x573e9b */ goto L_00573e9b;
L_00573e80:; BB(0x00573e80);
    /* 00573e80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00573e82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573e84: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00573e86: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00573e88: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573e8c: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573e92: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 00573e96: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x573e9bu); f_006023d0();
L_00573e9b:; BB(0x00573e9b);
    /* 00573e9b: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573e9f: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00573ea2: jge 0x573ece */ if ((fS==fO)) goto L_00573ece;
L_00573ea4:; BB(0x00573ea4);
    /* 00573ea4: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573ea8: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573eae: mov ecx, dword ptr [eax + edx*4 + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 00573eb2: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573eb6: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573ebc: mov edx, dword ptr [eax + edx*4 + 0x44] */ r_edx = R32((u32)(r_eax+r_edx*4+0x44u));
    /* 00573ec0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00573ec2: mov ecx, edx */ r_ecx = r_edx;
    /* 00573ec4: mov edx, dword ptr [eax + 0xcc] */ r_edx = R32((u32)(r_eax+0xccu));
    /* 00573eca: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x573eccu); call_ind(t); }
    /* 00573ecc: jmp 0x573ef4 */ goto L_00573ef4;
L_00573ece:; BB(0x00573ece);
    /* 00573ece: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573ed2: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573ed8: mov edx, dword ptr [ecx + eax*4 + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 00573edc: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573ee0: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573ee6: mov ecx, dword ptr [ecx + eax*4 + 0x44] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x44u));
    /* 00573eea: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00573eec: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00573ef2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573ef4u); call_ind(t); }
L_00573ef4:; BB(0x00573ef4);
    /* 00573ef4: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573ef8: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573efe: mov eax, dword ptr [edx + ecx*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 00573f02: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573f06: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573f0c: mov ecx, dword ptr [edx + ecx*4 + 0x44] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 00573f10: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00573f12: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00573f15: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x573f17u); call_ind(t); }
    /* 00573f17: jmp 0x573cf1 */ goto L_00573cf1;
L_00573f1c:; BB(0x00573f1c);
    /* 00573f1c: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573f22: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573f26: jne 0x574012 */ if (!fZ) goto L_00574012;
L_00573f2c:; BB(0x00573f2c);
    /* 00573f2c: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00573f31: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x573f36u); f_00686d82();
    /* 00573f36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00573f39: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00573f3c: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00573f43: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573f47: je 0x573f59 */ if (fZ) goto L_00573f59;
L_00573f49:; BB(0x00573f49);
    /* 00573f49: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00573f4c: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x573f51u); f_005f5bf0();
    /* 00573f51: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00573f57: jmp 0x573f63 */ goto L_00573f63;
L_00573f59:; BB(0x00573f59);
    /* 00573f59: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_00573f63:; BB(0x00573f63);
    /* 00573f63: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00573f69: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00573f6c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00573f73: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573f79: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00573f7c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00573f7f: push 0x15f97 */ { u32 v = 0x15f97u; r_esp -= 4; W32(r_esp, v); }
    /* 00573f84: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573f8a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00573f8d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x573f92u); f_005eaf00();
    /* 00573f92: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 00573f94: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573f9a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00573f9d: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573fa3: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00573fa6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573fa8: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00573fab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573fadu); call_ind(t); }
    /* 00573fad: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00573fb2: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00573fb4: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573fba: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00573fbd: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573fc3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00573fc6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00573fc8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00573fcb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573fcdu); call_ind(t); }
    /* 00573fcd: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573fd3: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00573fd6: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573fdc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00573fdf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00573fe1: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00573fe4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573fe6u); call_ind(t); }
    /* 00573fe6: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573fec: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00573fef: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573ff5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00573ff8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00573ffa: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00573ffd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573fffu); call_ind(t); }
    /* 00573fff: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574005: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00574008: mov dword ptr [edx + 0x178], 4 */ W32((u32)(r_edx+0x178u), 0x4u);
L_00574012:; BB(0x00574012);
    /* 00574012: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574018: cmp dword ptr [eax + 0x58], 0 */ {  u32 a = R32((u32)(r_eax+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057401c: jne 0x574071 */ if (!fZ) goto L_00574071;
L_0057401e:; BB(0x0057401e);
    /* 0057401e: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00574023: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x574028u); f_00686d82();
    /* 00574028: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057402b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0057402e: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00574035: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574039: je 0x57404b */ if (fZ) goto L_0057404b;
L_0057403b:; BB(0x0057403b);
    /* 0057403b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057403e: call 0x5770e0 */ r_esp -= 4; W32(r_esp, 0x574043u); f_005770e0();
    /* 00574043: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00574049: jmp 0x574055 */ goto L_00574055;
L_0057404b:; BB(0x0057404b);
    /* 0057404b: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_00574055:; BB(0x00574055);
    /* 00574055: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0057405b: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0057405e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00574065: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057406b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0057406e: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
L_00574071:; BB(0x00574071);
    /* 00574071: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574077: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0057407a: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574080: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00574083: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574085: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00574088: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57408au); call_ind(t); }
    /* 0057408a: push 0x16042 */ { u32 v = 0x16042u; r_esp -= 4; W32(r_esp, v); }
    /* 0057408f: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574095: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00574098: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057409e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005740a1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005740a3: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005740a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5740abu); call_ind(t); }
    /* 005740ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005740ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005740af: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005740b5: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005740b8: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005740be: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005740c1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005740c3: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005740c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5740c8u); call_ind(t); }
    /* 005740c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005740ca: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005740d0: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005740d3: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005740d9: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005740dc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005740de: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005740e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5740e3u); call_ind(t); }
    /* 005740e3: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005740e9: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005740ec: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005740f2: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005740f5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005740f7: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005740fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5740ffu); call_ind(t); }
    /* 005740ff: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574105: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00574108: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057410e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00574111: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574113: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00574116: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574118u); call_ind(t); }
    /* 00574118: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057411e: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574122: jne 0x574179 */ if (!fZ) goto L_00574179;
L_00574124:; BB(0x00574124);
    /* 00574124: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 00574129: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57412eu); f_00686d82();
    /* 0057412e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00574131: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00574134: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0057413b: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057413f: je 0x574153 */ if (fZ) goto L_00574153;
L_00574141:; BB(0x00574141);
    /* 00574141: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00574143: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00574146: call 0x577150 */ r_esp -= 4; W32(r_esp, 0x57414bu); f_00577150();
    /* 0057414b: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00574151: jmp 0x57415d */ goto L_0057415d;
L_00574153:; BB(0x00574153);
    /* 00574153: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_0057415d:; BB(0x0057415d);
    /* 0057415d: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 00574163: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00574166: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057416d: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574173: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00574176: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
L_00574179:; BB(0x00574179);
    /* 00574179: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057417f: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00574182: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574188: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 0057418b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057418d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00574190: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574192u); call_ind(t); }
    /* 00574192: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574194: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057419a: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 0057419d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5741a2u); f_005eaf00();
    /* 005741a2: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 005741a4: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005741a6: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005741ac: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005741af: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005741b5: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 005741b8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005741ba: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005741bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5741bfu); call_ind(t); }
    /* 005741bf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005741c1: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005741c7: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005741ca: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005741d0: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005741d3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005741d5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005741d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5741dau); call_ind(t); }
    /* 005741da: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005741e0: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005741e3: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005741e9: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005741ec: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005741ee: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005741f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5741f3u); call_ind(t); }
    /* 005741f3: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005741f9: cmp dword ptr [ecx + 0x60], 0 */ {  u32 a = R32((u32)(r_ecx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005741fd: jne 0x574254 */ if (!fZ) goto L_00574254;
L_005741ff:; BB(0x005741ff);
    /* 005741ff: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 00574204: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x574209u); f_00686d82();
    /* 00574209: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057420c: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0057420f: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00574216: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057421a: je 0x57422e */ if (fZ) goto L_0057422e;
L_0057421c:; BB(0x0057421c);
    /* 0057421c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057421e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00574221: call 0x577150 */ r_esp -= 4; W32(r_esp, 0x574226u); f_00577150();
    /* 00574226: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0057422c: jmp 0x574238 */ goto L_00574238;
L_0057422e:; BB(0x0057422e);
    /* 0057422e: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_00574238:; BB(0x00574238);
    /* 00574238: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 0057423e: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00574241: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00574248: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057424e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00574251: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
L_00574254:; BB(0x00574254);
    /* 00574254: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057425a: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0057425d: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574263: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00574266: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00574268: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057426b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57426du); call_ind(t); }
    /* 0057426d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057426f: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574275: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00574278: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57427du); f_005eaf00();
    /* 0057427d: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 00574282: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00574284: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057428a: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0057428d: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574293: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00574296: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00574298: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0057429b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57429du); call_ind(t); }
    /* 0057429d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0057429f: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005742a5: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 005742a8: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005742ae: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005742b1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005742b3: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005742b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5742b8u); call_ind(t); }
    /* 005742b8: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005742be: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 005742c1: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005742c7: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005742ca: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005742cc: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005742cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5742d1u); call_ind(t); }
    /* 005742d1: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005742d7: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005742db: jne 0x574332 */ if (!fZ) goto L_00574332;
L_005742dd:; BB(0x005742dd);
    /* 005742dd: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 005742e2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5742e7u); f_00686d82();
    /* 005742e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005742ea: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005742ed: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 005742f4: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005742f8: je 0x57430c */ if (fZ) goto L_0057430c;
L_005742fa:; BB(0x005742fa);
    /* 005742fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005742fc: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005742ff: call 0x577150 */ r_esp -= 4; W32(r_esp, 0x574304u); f_00577150();
    /* 00574304: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0057430a: jmp 0x574316 */ goto L_00574316;
L_0057430c:; BB(0x0057430c);
    /* 0057430c: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_00574316:; BB(0x00574316);
    /* 00574316: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 0057431c: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0057431f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00574326: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057432c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0057432f: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
L_00574332:; BB(0x00574332);
    /* 00574332: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574338: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0057433b: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574341: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00574344: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00574346: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00574349: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57434bu); call_ind(t); }
    /* 0057434b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057434d: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574353: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00574356: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57435bu); f_005eaf00();
    /* 0057435b: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 00574360: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00574362: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574368: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0057436b: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574371: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00574374: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00574376: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00574379: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57437bu); call_ind(t); }
    /* 0057437b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0057437d: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574383: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00574386: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057438c: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0057438f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574391: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00574394: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574396u); call_ind(t); }
    /* 00574396: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057439c: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0057439f: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005743a5: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005743a8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005743aa: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005743ad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5743afu); call_ind(t); }
    /* 005743af: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005743b5: jmp 0x5743c3 */ goto L_005743c3;
L_005743b7:; BB(0x005743b7);
    /* 005743b7: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 005743bb: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005743bf: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_005743c3:; BB(0x005743c3);
    /* 005743c3: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005743c7: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005743ca: jge 0x57455d */ if ((fS==fO)) goto L_0057455d;
L_005743d0:; BB(0x005743d0);
    /* 005743d0: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005743d4: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005743da: cmp dword ptr [ecx + eax*4 + 0x38], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005743df: jne 0x574445 */ if (!fZ) goto L_00574445;
L_005743e1:; BB(0x005743e1);
    /* 005743e1: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005743e6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5743ebu); f_00686d82();
    /* 005743eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005743ee: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005743f1: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 005743f8: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005743fc: je 0x57441a */ if (fZ) goto L_0057441a;
L_005743fe:; BB(0x005743fe);
    /* 005743fe: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00574401: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x574406u); f_005f5bf0();
    /* 00574406: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00574409: mov dword ptr [edx], 0x6cacb4 */ W32((u32)(r_edx), 0x6cacb4u);
    /* 0057440f: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00574412: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00574418: jmp 0x574424 */ goto L_00574424;
L_0057441a:; BB(0x0057441a);
    /* 0057441a: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_00574424:; BB(0x00574424);
    /* 00574424: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0057442a: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0057442d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00574434: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574438: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057443e: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00574441: mov dword ptr [eax + edx*4 + 0x38], ecx */ W32((u32)(r_eax+r_edx*4+0x38u), r_ecx);
L_00574445:; BB(0x00574445);
    /* 00574445: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574449: mov eax, dword ptr [edx*8 + 0x7493c4] */ r_eax = R32((u32)(r_edx*8+0x7493c4u));
    /* 00574450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00574451: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574455: mov edx, dword ptr [ecx*8 + 0x7493c0] */ r_edx = R32((u32)(r_ecx*8+0x7493c0u));
    /* 0057445c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057445d: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574461: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574467: mov edx, dword ptr [ecx + eax*4 + 0x38] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 0057446b: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057446f: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574475: mov ecx, dword ptr [ecx + eax*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 00574479: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057447b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0057447e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574480u); call_ind(t); }
    /* 00574480: push 0x16024 */ { u32 v = 0x16024u; r_esp -= 4; W32(r_esp, v); }
    /* 00574485: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574489: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057448f: mov ecx, dword ptr [edx + ecx*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 00574493: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x574498u); f_005eaf00();
    /* 00574498: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057449a: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057449e: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005744a4: mov edx, dword ptr [ecx + eax*4 + 0x38] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 005744a8: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005744ac: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005744b2: mov ecx, dword ptr [ecx + eax*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 005744b6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005744b8: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005744be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5744c0u); call_ind(t); }
    /* 005744c0: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005744c4: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005744ca: mov eax, dword ptr [edx + ecx*4 + 0x38] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 005744ce: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005744d2: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005744d8: mov ecx, dword ptr [edx + ecx*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 005744dc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005744de: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005744e1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5744e3u); call_ind(t); }
    /* 005744e3: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005744e5: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005744e9: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005744ef: mov edx, dword ptr [ecx + eax*4 + 0x38] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 005744f3: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005744f7: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005744fd: mov ecx, dword ptr [ecx + eax*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 00574501: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574503: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00574506: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574508u); call_ind(t); }
    /* 00574508: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057450c: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574512: mov eax, dword ptr [edx + ecx*4 + 0x38] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 00574516: mov dword ptr [eax + 0x178], 2 */ W32((u32)(r_eax+0x178u), 0x2u);
    /* 00574520: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574522: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574526: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057452c: mov ecx, dword ptr [edx + ecx*4 + 0x38] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x38u));
    /* 00574530: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x574535u); f_005eb5d0();
    /* 00574535: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574539: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057453f: mov edx, dword ptr [ecx + eax*4 + 0x38] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 00574543: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574547: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057454d: mov ecx, dword ptr [ecx + eax*4 + 0x38] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 00574551: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574553: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00574556: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574558u); call_ind(t); }
    /* 00574558: jmp 0x5743b7 */ goto L_005743b7;
L_0057455d:; BB(0x0057455d);
    /* 0057455d: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574563: cmp dword ptr [ecx + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574567: jne 0x5745bc */ if (!fZ) goto L_005745bc;
L_00574569:; BB(0x00574569);
    /* 00574569: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0057456e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x574573u); f_00686d82();
    /* 00574573: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00574576: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00574579: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 00574580: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574584: je 0x574596 */ if (fZ) goto L_00574596;
L_00574586:; BB(0x00574586);
    /* 00574586: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00574589: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x57458eu); f_005f5bf0();
    /* 0057458e: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00574594: jmp 0x5745a0 */ goto L_005745a0;
L_00574596:; BB(0x00574596);
    /* 00574596: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_005745a0:; BB(0x005745a0);
    /* 005745a0: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005745a6: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 005745a9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005745b0: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005745b6: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005745b9: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
L_005745bc:; BB(0x005745bc);
    /* 005745bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005745be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005745c0: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005745c6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005745c9: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005745cf: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 005745d2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005745d4: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005745d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5745d9u); call_ind(t); }
    /* 005745d9: push 0x16025 */ { u32 v = 0x16025u; r_esp -= 4; W32(r_esp, v); }
    /* 005745de: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005745e4: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 005745e7: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5745ecu); f_005eaf00();
    /* 005745ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005745ee: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005745f4: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005745f7: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005745fd: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00574600: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00574602: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00574608: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57460au); call_ind(t); }
    /* 0057460a: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574610: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00574613: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574619: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0057461c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057461e: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00574621: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574623u); call_ind(t); }
    /* 00574623: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00574625: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057462b: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0057462e: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574634: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00574637: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574639: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057463c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57463eu); call_ind(t); }
    /* 0057463e: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574644: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00574647: mov dword ptr [edx + 0x178], 4 */ W32((u32)(r_edx+0x178u), 0x4u);
    /* 00574651: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574657: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0057465a: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574660: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00574663: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00574665: mov ecx, eax */ r_ecx = r_eax;
    /* 00574667: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057466a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57466cu); call_ind(t); }
    /* 0057466c: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574672: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574676: jne 0x5746cb */ if (!fZ) goto L_005746cb;
L_00574678:; BB(0x00574678);
    /* 00574678: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0057467d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x574682u); f_00686d82();
    /* 00574682: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00574685: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00574688: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 0057468f: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574693: je 0x5746a5 */ if (fZ) goto L_005746a5;
L_00574695:; BB(0x00574695);
    /* 00574695: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00574698: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x57469du); f_005f5bf0();
    /* 0057469d: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005746a3: jmp 0x5746af */ goto L_005746af;
L_005746a5:; BB(0x005746a5);
    /* 005746a5: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_005746af:; BB(0x005746af);
    /* 005746af: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 005746b5: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 005746b8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005746bf: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005746c5: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005746c8: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
L_005746cb:; BB(0x005746cb);
    /* 005746cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005746cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005746cf: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005746d5: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005746d8: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005746de: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 005746e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005746e3: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005746e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5746e8u); call_ind(t); }
    /* 005746e8: push 0x16027 */ { u32 v = 0x16027u; r_esp -= 4; W32(r_esp, v); }
    /* 005746ed: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005746f3: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 005746f6: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5746fbu); f_005eaf00();
    /* 005746fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005746fd: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574703: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00574706: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057470c: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0057470f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00574711: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00574717: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574719u); call_ind(t); }
    /* 00574719: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057471f: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00574722: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574728: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0057472b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057472d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00574730: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574732u); call_ind(t); }
    /* 00574732: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00574734: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057473a: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0057473d: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574743: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00574746: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574748: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057474b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57474du); call_ind(t); }
    /* 0057474d: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574753: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00574756: mov dword ptr [edx + 0x178], 4 */ W32((u32)(r_edx+0x178u), 0x4u);
    /* 00574760: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574766: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00574769: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057476f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00574772: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00574774: mov ecx, eax */ r_ecx = r_eax;
    /* 00574776: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00574779: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57477bu); call_ind(t); }
    /* 0057477b: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574781: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574785: jne 0x5747da */ if (!fZ) goto L_005747da;
L_00574787:; BB(0x00574787);
    /* 00574787: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057478c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x574791u); f_00686d82();
    /* 00574791: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00574794: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00574797: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 0057479e: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005747a2: je 0x5747b4 */ if (fZ) goto L_005747b4;
L_005747a4:; BB(0x005747a4);
    /* 005747a4: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005747a7: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5747acu); f_005eaaf0();
    /* 005747ac: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 005747b2: jmp 0x5747be */ goto L_005747be;
L_005747b4:; BB(0x005747b4);
    /* 005747b4: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_005747be:; BB(0x005747be);
    /* 005747be: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 005747c4: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 005747c7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005747ce: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005747d4: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005747d7: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
L_005747da:; BB(0x005747da);
    /* 005747da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005747dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005747de: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005747e4: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005747e7: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005747ed: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005747f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005747f2: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005747f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5747f7u); call_ind(t); }
    /* 005747f7: push 0x16028 */ { u32 v = 0x16028u; r_esp -= 4; W32(r_esp, v); }
    /* 005747fc: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574802: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00574805: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57480au); f_005eaf00();
    /* 0057480a: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574810: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00574813: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574819: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0057481c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057481e: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00574821: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574823u); call_ind(t); }
    /* 00574823: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00574825: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057482b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057482e: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574834: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00574837: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574839: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057483c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57483eu); call_ind(t); }
    /* 0057483e: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574844: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00574847: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057484d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00574850: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574852: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00574855: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574857u); call_ind(t); }
    /* 00574857: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057485d: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574861: jne 0x5748c5 */ if (!fZ) goto L_005748c5;
L_00574863:; BB(0x00574863);
    /* 00574863: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00574868: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57486du); f_00686d82();
    /* 0057486d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00574870: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00574876: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 0057487d: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574884: je 0x574899 */ if (fZ) goto L_00574899;
L_00574886:; BB(0x00574886);
    /* 00574886: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0057488c: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x574891u); f_005eaaf0();
    /* 00574891: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00574897: jmp 0x5748a3 */ goto L_005748a3;
L_00574899:; BB(0x00574899);
    /* 00574899: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_005748a3:; BB(0x005748a3);
    /* 005748a3: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005748a9: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 005748af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005748b6: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005748bc: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005748c2: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
L_005748c5:; BB(0x005748c5);
    /* 005748c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005748c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005748c9: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005748cf: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005748d2: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005748d8: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 005748db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005748dd: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005748e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5748e2u); call_ind(t); }
    /* 005748e2: push 0x16029 */ { u32 v = 0x16029u; r_esp -= 4; W32(r_esp, v); }
    /* 005748e7: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005748ed: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 005748f0: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5748f5u); f_005eaf00();
    /* 005748f5: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005748fb: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005748fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005748ff: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574905: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00574908: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057490e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00574911: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574913: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00574919: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57491bu); call_ind(t); }
    /* 0057491b: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574921: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00574924: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057492a: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0057492d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057492f: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00574932: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574934u); call_ind(t); }
    /* 00574934: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00574936: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057493c: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0057493f: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574945: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00574948: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057494a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057494d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57494fu); call_ind(t); }
    /* 0057494f: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574955: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00574958: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057495e: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00574961: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574963: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00574966: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574968u); call_ind(t); }
    /* 00574968: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057496e: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574972: jne 0x5749d6 */ if (!fZ) goto L_005749d6;
L_00574974:; BB(0x00574974);
    /* 00574974: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00574979: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57497eu); f_00686d82();
    /* 0057497e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00574981: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00574987: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 0057498e: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574995: je 0x5749aa */ if (fZ) goto L_005749aa;
L_00574997:; BB(0x00574997);
    /* 00574997: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0057499d: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5749a2u); f_005f5bf0();
    /* 005749a2: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 005749a8: jmp 0x5749b4 */ goto L_005749b4;
L_005749aa:; BB(0x005749aa);
    /* 005749aa: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_005749b4:; BB(0x005749b4);
    /* 005749b4: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 005749ba: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 005749c0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005749c7: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005749cd: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005749d3: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
L_005749d6:; BB(0x005749d6);
    /* 005749d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005749d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005749da: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005749e0: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005749e3: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005749e9: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005749ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005749ee: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005749f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5749f3u); call_ind(t); }
    /* 005749f3: push 0x1602b */ { u32 v = 0x1602bu; r_esp -= 4; W32(r_esp, v); }
    /* 005749f8: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005749fe: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00574a01: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x574a06u); f_005eaf00();
    /* 00574a06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574a08: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574a0e: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00574a11: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574a17: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00574a1a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00574a1c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00574a22: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574a24u); call_ind(t); }
    /* 00574a24: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574a2a: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 00574a2d: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574a33: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00574a36: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574a38: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00574a3b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574a3du); call_ind(t); }
    /* 00574a3d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00574a3f: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574a45: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 00574a48: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574a4e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00574a51: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574a53: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00574a56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574a58u); call_ind(t); }
    /* 00574a58: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574a5e: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 00574a61: mov dword ptr [edx + 0x178], 6 */ W32((u32)(r_edx+0x178u), 0x6u);
    /* 00574a6b: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574a71: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00574a74: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574a7a: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00574a7d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00574a7f: mov ecx, eax */ r_ecx = r_eax;
    /* 00574a81: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00574a84: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574a86u); call_ind(t); }
    /* 00574a86: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00574a8c: jmp 0x574a9a */ goto L_00574a9a;
L_00574a8e:; BB(0x00574a8e);
    /* 00574a8e: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00574a92: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00574a96: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_00574a9a:; BB(0x00574a9a);
    /* 00574a9a: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574a9e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574aa1: jge 0x574bf8 */ if ((fS==fO)) goto L_00574bf8;
L_00574aa7:; BB(0x00574aa7);
    /* 00574aa7: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574aab: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574ab1: cmp dword ptr [ecx + eax*4 + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574ab6: jne 0x574b1f */ if (!fZ) goto L_00574b1f;
L_00574ab8:; BB(0x00574ab8);
    /* 00574ab8: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00574abd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x574ac2u); f_00686d82();
    /* 00574ac2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00574ac5: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00574acb: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 00574ad2: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574ad9: je 0x574aee */ if (fZ) goto L_00574aee;
L_00574adb:; BB(0x00574adb);
    /* 00574adb: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00574ae1: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x574ae6u); f_005f5bf0();
    /* 00574ae6: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00574aec: jmp 0x574af8 */ goto L_00574af8;
L_00574aee:; BB(0x00574aee);
    /* 00574aee: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_00574af8:; BB(0x00574af8);
    /* 00574af8: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 00574afe: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00574b04: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00574b0b: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574b0f: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574b15: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00574b1b: mov dword ptr [ecx + eax*4 + 0x28], edx */ W32((u32)(r_ecx+r_eax*4+0x28u), r_edx);
L_00574b1f:; BB(0x00574b1f);
    /* 00574b1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574b21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574b23: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574b27: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574b2d: mov edx, dword ptr [ecx + eax*4 + 0x28] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x28u));
    /* 00574b31: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574b35: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574b3b: mov ecx, dword ptr [ecx + eax*4 + 0x28] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x28u));
    /* 00574b3f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574b41: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00574b44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574b46u); call_ind(t); }
    /* 00574b46: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574b4a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00574b4c: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00574b4e: and ecx, 0xfffffffd */ {  u32 a = r_ecx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00574b51: add ecx, 0x1602d */ {  u32 a = r_ecx; u32 b = 0x1602du; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00574b57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00574b58: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574b5c: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00574b62: mov ecx, dword ptr [eax + edx*4 + 0x28] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x28u));
    /* 00574b66: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x574b6bu); f_005eaf00();
    /* 00574b6b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574b6d: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574b71: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574b77: mov eax, dword ptr [edx + ecx*4 + 0x28] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x28u));
    /* 00574b7b: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574b7f: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574b85: mov ecx, dword ptr [edx + ecx*4 + 0x28] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x28u));
    /* 00574b89: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00574b8b: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00574b91: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x574b93u); call_ind(t); }
    /* 00574b93: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574b97: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574b9d: mov edx, dword ptr [ecx + eax*4 + 0x28] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x28u));
    /* 00574ba1: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574ba5: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574bab: mov ecx, dword ptr [ecx + eax*4 + 0x28] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x28u));
    /* 00574baf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574bb1: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00574bb4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574bb6u); call_ind(t); }
    /* 00574bb6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00574bb8: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574bbc: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574bc2: mov eax, dword ptr [edx + ecx*4 + 0x28] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x28u));
    /* 00574bc6: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574bca: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574bd0: mov ecx, dword ptr [edx + ecx*4 + 0x28] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x28u));
    /* 00574bd4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00574bd6: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00574bd9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x574bdbu); call_ind(t); }
    /* 00574bdb: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00574bdf: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574be5: mov edx, dword ptr [ecx + eax*4 + 0x28] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x28u));
    /* 00574be9: mov dword ptr [edx + 0x178], 0xa */ W32((u32)(r_edx+0x178u), 0xau);
    /* 00574bf3: jmp 0x574a8e */ goto L_00574a8e;
L_00574bf8:; BB(0x00574bf8);
    /* 00574bf8: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00574bfe: call 0x576160 */ r_esp -= 4; W32(r_esp, 0x574c03u); f_00576160();
    /* 00574c03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00574c05: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00574c0a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00574c0d: mov edx, dword ptr [0x793458] */ r_edx = R32((u32)(0x793458u));
    /* 00574c13: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00574c16: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00574c18: mov ecx, eax */ r_ecx = r_eax;
    /* 00574c1a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00574c1d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574c1fu); call_ind(t); }
    /* 00574c1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574c21: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00574c27: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00574c2a: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00574c2f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00574c32: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00574c34: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00574c37: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x574c39u); call_ind(t); }
    /* 00574c39: push 0x749848 */ { u32 v = 0x749848u; r_esp -= 4; W32(r_esp, v); }
    /* 00574c3e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00574c40: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00574c46: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x574c4bu); f_0057ab80();
    /* 00574c4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00574c4e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00574c55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00574c56: mov esp, ebp */ r_esp = r_ebp;
    /* 00574c58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00574c59: ret  */ FN_RET(0x00573960); r_esp += 4; return;
}

void f_00578750(void) /* SultanIcon::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578750);
    /* 00578750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578751: mov ebp, esp */ r_ebp = r_esp;
    /* 00578753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00578757: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057875a: mov dword ptr [eax], 0x6cacb4 */ W32((u32)(r_eax), 0x6cacb4u);
    /* 00578760: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578763: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x578768u); f_005f5c40();
    /* 00578768: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057876b: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0057876e: je 0x57877c */ if (fZ) goto L_0057877c;
L_00578770:; BB(0x00578770);
    /* 00578770: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578773: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578774: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x578779u); f_00686cae();
    /* 00578779: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057877c:; BB(0x0057877c);
    /* 0057877c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057877f: mov esp, ebp */ r_esp = r_ebp;
    /* 00578781: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578782: ret 4 */ FN_RET(0x00578750); r_esp += 8; return;
}

