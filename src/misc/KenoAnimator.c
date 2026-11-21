#include "protos.h"

void f_0057d600(void) /* KenoAnimator::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057d600);
    /* 0057d600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057d601: mov ebp, esp */ r_ebp = r_esp;
    /* 0057d603: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d605: push 0x6a68ac */ { u32 v = 0x6a68acu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d60a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057d610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d611: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057d617: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057d61c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057d61e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d61f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057d622: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057d628: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0057d62b: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d62e: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x57d633u); f_005f5bf0();
    /* 0057d633: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057d63a: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d63d: mov dword ptr [eax], 0x6cbf2c */ W32((u32)(r_eax), 0x6cbf2cu);
    /* 0057d643: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d648: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57d64du); f_00686d82();
    /* 0057d64d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057d650: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0057d653: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0057d657: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d65b: je 0x57d66a */ if (fZ) goto L_0057d66a;
L_0057d65d:; BB(0x0057d65d);
    /* 0057d65d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057d660: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x57d665u); f_005ec5a0();
    /* 0057d665: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0057d668: jmp 0x57d671 */ goto L_0057d671;
L_0057d66a:; BB(0x0057d66a);
    /* 0057d66a: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0057d671:; BB(0x0057d671);
    /* 0057d671: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0057d674: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0057d677: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057d67b: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d67e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057d681: mov dword ptr [edx + 0x1e4], eax */ W32((u32)(r_edx+0x1e4u), r_eax);
    /* 0057d687: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d68a: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0057d690: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d693: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0057d699: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d69b: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057d69e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d6a0u); call_ind(t); }
    /* 0057d6a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d6a1: mov ecx, esp */ r_ecx = r_esp;
    /* 0057d6a3: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0057d6aa: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0057d6ad: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0057d6b2: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0057d6b5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d6b7: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d6b9: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d6bc: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 0057d6c2: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x57d6c7u); f_005ecd00();
    /* 0057d6c7: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d6cc: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d6cf: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0057d6d5: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x57d6dau); f_005ecc60();
    /* 0057d6da: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d6dc: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d6df: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0057d6e5: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x57d6eau); f_005eccb0();
    /* 0057d6ea: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d6ef: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d6f4: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d6f7: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0057d6fd: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d700: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0057d706: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d708: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0057d70b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d70du); call_ind(t); }
    /* 0057d70d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d70f: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d712: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 0057d718: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x57d71du); f_005ef310();
    /* 0057d71d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0057d71f: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d722: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0057d728: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d72b: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 0057d731: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057d733: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057d736: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d738u); call_ind(t); }
    /* 0057d738: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d73b: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0057d741: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d744: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0057d74a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d74c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057d74f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d751u); call_ind(t); }
    /* 0057d751: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d754: mov dword ptr [ecx + 0x1e8], 0 */ W32((u32)(r_ecx+0x1e8u), 0x0u);
    /* 0057d75e: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d761: mov dword ptr [edx + 0x1ec], 0 */ W32((u32)(r_edx+0x1ecu), 0x0u);
    /* 0057d76b: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d76e: mov dword ptr [eax + 0x1f0], 0 */ W32((u32)(r_eax+0x1f0u), 0x0u);
    /* 0057d778: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d77b: mov dword ptr [ecx + 0x1f4], 0 */ W32((u32)(r_ecx+0x1f4u), 0x0u);
    /* 0057d785: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d78a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57d78fu); f_00686d82();
    /* 0057d78f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057d792: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0057d795: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0057d799: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d79d: je 0x57d7ac */ if (fZ) goto L_0057d7ac;
L_0057d79f:; BB(0x0057d79f);
    /* 0057d79f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057d7a2: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57d7a7u); f_005eaaf0();
    /* 0057d7a7: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0057d7aa: jmp 0x57d7b3 */ goto L_0057d7b3;
L_0057d7ac:; BB(0x0057d7ac);
    /* 0057d7ac: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0057d7b3:; BB(0x0057d7b3);
    /* 0057d7b3: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0057d7b6: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0057d7b9: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057d7bd: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d7c0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057d7c3: mov dword ptr [eax + 0x1f8], ecx */ W32((u32)(r_eax+0x1f8u), r_ecx);
    /* 0057d7c9: push 0x30dfe4 */ { u32 v = 0x30dfe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d7ce: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d7d1: mov ecx, dword ptr [edx + 0x1f8] */ r_ecx = R32((u32)(r_edx+0x1f8u));
    /* 0057d7d7: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57d7dcu); f_005eaf00();
    /* 0057d7dc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d7de: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d7e1: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0057d7e7: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d7ea: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 0057d7f0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057d7f2: mov ecx, eax */ r_ecx = r_eax;
    /* 0057d7f4: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057d7f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d7f9u); call_ind(t); }
    /* 0057d7f9: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d7fc: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 0057d802: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d805: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0057d80b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d80d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057d810: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d812u); call_ind(t); }
    /* 0057d812: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d815: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 0057d81b: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d81e: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0057d824: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d826: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057d829: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d82bu); call_ind(t); }
    /* 0057d82b: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d830: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57d835u); f_00686d82();
    /* 0057d835: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057d838: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0057d83b: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0057d83f: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d843: je 0x57d852 */ if (fZ) goto L_0057d852;
L_0057d845:; BB(0x0057d845);
    /* 0057d845: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057d848: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57d84du); f_005eaaf0();
    /* 0057d84d: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0057d850: jmp 0x57d859 */ goto L_0057d859;
L_0057d852:; BB(0x0057d852);
    /* 0057d852: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0057d859:; BB(0x0057d859);
    /* 0057d859: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0057d85c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0057d85f: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057d863: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d866: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057d869: mov dword ptr [edx + 0x1fc], eax */ W32((u32)(r_edx+0x1fcu), r_eax);
    /* 0057d86f: push 0x30dfe3 */ { u32 v = 0x30dfe3u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d874: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d877: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 0057d87d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57d882u); f_005eaf00();
    /* 0057d882: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d884: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d887: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 0057d88d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d890: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 0057d896: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057d898: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057d89b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d89du); call_ind(t); }
    /* 0057d89d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d8a0: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 0057d8a6: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d8a9: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 0057d8af: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d8b1: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057d8b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d8b6u); call_ind(t); }
    /* 0057d8b6: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d8b9: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 0057d8bf: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d8c2: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 0057d8c8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d8ca: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057d8cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d8cfu); call_ind(t); }
    /* 0057d8cf: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d8d1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57d8d6u); f_00686d82();
    /* 0057d8d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057d8d9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0057d8dc: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0057d8e0: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d8e4: je 0x57d8f6 */ if (fZ) goto L_0057d8f6;
L_0057d8e6:; BB(0x0057d8e6);
    /* 0057d8e6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057d8e9: call 0x57f0f0 */ r_esp -= 4; W32(r_esp, 0x57d8eeu); f_0057f0f0();
    /* 0057d8ee: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0057d8f4: jmp 0x57d900 */ goto L_0057d900;
L_0057d8f6:; BB(0x0057d8f6);
    /* 0057d8f6: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0057d900:; BB(0x0057d900);
    /* 0057d900: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0057d906: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0057d909: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057d90d: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d910: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057d913: mov dword ptr [edx + 0x200], eax */ W32((u32)(r_edx+0x200u), r_eax);
    /* 0057d919: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057d920: jmp 0x57d92b */ goto L_0057d92b;
L_0057d922:; BB(0x0057d922);
    /* 0057d922: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057d925: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057d928: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0057d92b:; BB(0x0057d92b);
    /* 0057d92b: cmp dword ptr [ebp - 0x10], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057d92f: jge 0x57da09 */ if ((fS==fO)) goto L_0057da09;
L_0057d935:; BB(0x0057d935);
    /* 0057d935: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d93a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57d93fu); f_00686d82();
    /* 0057d93f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057d942: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0057d945: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0057d949: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d94d: je 0x57d95f */ if (fZ) goto L_0057d95f;
L_0057d94f:; BB(0x0057d94f);
    /* 0057d94f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057d952: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57d957u); f_005eaaf0();
    /* 0057d957: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0057d95d: jmp 0x57d969 */ goto L_0057d969;
L_0057d95f:; BB(0x0057d95f);
    /* 0057d95f: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0057d969:; BB(0x0057d969);
    /* 0057d969: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0057d96f: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0057d972: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057d976: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057d979: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d97c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057d97f: mov dword ptr [ecx + eax*4 + 0x194], edx */ W32((u32)(r_ecx+r_eax*4+0x194u), r_edx);
    /* 0057d986: push 0x30dfc6 */ { u32 v = 0x30dfc6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d98b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057d98e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d991: mov ecx, dword ptr [ecx + eax*4 + 0x194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 0057d998: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57d99du); f_005eaf00();
    /* 0057d99d: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d99f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057d9a2: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d9a5: mov ecx, dword ptr [eax + edx*4 + 0x194] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 0057d9ac: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057d9af: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d9b2: mov edx, dword ptr [eax + edx*4 + 0x194] */ r_edx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 0057d9b9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057d9bb: mov ecx, edx */ r_ecx = r_edx;
    /* 0057d9bd: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0057d9c0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57d9c2u); call_ind(t); }
    /* 0057d9c2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057d9c5: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d9c8: mov edx, dword ptr [ecx + eax*4 + 0x194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 0057d9cf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057d9d2: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d9d5: mov ecx, dword ptr [ecx + eax*4 + 0x194] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 0057d9dc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057d9de: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057d9e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57d9e3u); call_ind(t); }
    /* 0057d9e3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057d9e6: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d9e9: mov eax, dword ptr [edx + ecx*4 + 0x194] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 0057d9f0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057d9f3: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057d9f6: mov ecx, dword ptr [edx + ecx*4 + 0x194] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x194u));
    /* 0057d9fd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057d9ff: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0057da02: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57da04u); call_ind(t); }
    /* 0057da04: jmp 0x57d922 */ goto L_0057d922;
L_0057da09:; BB(0x0057da09);
    /* 0057da09: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0057da0e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57da13u); f_00686d82();
    /* 0057da13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057da16: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0057da19: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0057da1d: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057da21: je 0x57da33 */ if (fZ) goto L_0057da33;
L_0057da23:; BB(0x0057da23);
    /* 0057da23: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0057da26: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x57da2bu); f_005f5bf0();
    /* 0057da2b: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0057da31: jmp 0x57da3d */ goto L_0057da3d;
L_0057da33:; BB(0x0057da33);
    /* 0057da33: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0057da3d:; BB(0x0057da3d);
    /* 0057da3d: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0057da43: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0057da46: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057da4a: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057da4d: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057da50: mov dword ptr [ecx + 0x184], edx */ W32((u32)(r_ecx+0x184u), r_edx);
    /* 0057da56: push 0x30dfc4 */ { u32 v = 0x30dfc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057da5b: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057da5e: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0057da64: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57da69u); f_005eaf00();
    /* 0057da69: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057da6b: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057da6e: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0057da74: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057da77: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0057da7d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057da7f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057da82: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57da84u); call_ind(t); }
    /* 0057da84: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057da87: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0057da8d: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057da90: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0057da96: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057da98: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057da9b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57da9du); call_ind(t); }
    /* 0057da9d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057daa0: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0057daa6: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057daa9: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0057daaf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057dab1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057dab4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57dab6u); call_ind(t); }
    /* 0057dab6: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dab9: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0057dabf: mov dword ptr [edx + 0x178], 6 */ W32((u32)(r_edx+0x178u), 0x6u);
    /* 0057dac9: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057dacb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57dad0u); f_00686d82();
    /* 0057dad0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057dad3: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0057dad6: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0057dada: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057dade: je 0x57daf2 */ if (fZ) goto L_0057daf2;
L_0057dae0:; BB(0x0057dae0);
    /* 0057dae0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dae2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057dae5: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x57daeau); f_00600a70();
    /* 0057daea: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0057daf0: jmp 0x57dafc */ goto L_0057dafc;
L_0057daf2:; BB(0x0057daf2);
    /* 0057daf2: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0057dafc:; BB(0x0057dafc);
    /* 0057dafc: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0057db02: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0057db05: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057db09: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0057db0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057db0d: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057db10: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 0057db16: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x57db1bu); f_005f5d50();
    /* 0057db1b: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0057db20: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57db25u); f_00686d82();
    /* 0057db25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057db28: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0057db2b: mov byte ptr [ebp - 4], 8 */ W8((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0057db2f: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057db33: je 0x57db45 */ if (fZ) goto L_0057db45;
L_0057db35:; BB(0x0057db35);
    /* 0057db35: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0057db38: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x57db3du); f_005f5bf0();
    /* 0057db3d: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0057db43: jmp 0x57db4f */ goto L_0057db4f;
L_0057db45:; BB(0x0057db45);
    /* 0057db45: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0057db4f:; BB(0x0057db4f);
    /* 0057db4f: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 0057db55: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0057db58: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057db5c: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057db5f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057db62: mov dword ptr [ecx + 0x188], edx */ W32((u32)(r_ecx+0x188u), r_edx);
    /* 0057db68: push 0x30dfc5 */ { u32 v = 0x30dfc5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057db6d: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057db70: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0057db76: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57db7bu); f_005eaf00();
    /* 0057db7b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057db7d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057db80: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 0057db86: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057db89: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0057db8f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057db91: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057db94: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57db96u); call_ind(t); }
    /* 0057db96: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057db99: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 0057db9f: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dba2: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0057dba8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057dbaa: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057dbad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57dbafu); call_ind(t); }
    /* 0057dbaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dbb1: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dbb4: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 0057dbba: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dbbd: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0057dbc3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057dbc5: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057dbcb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57dbcdu); call_ind(t); }
    /* 0057dbcd: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dbd0: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 0057dbd6: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dbd9: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0057dbdf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057dbe1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057dbe4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57dbe6u); call_ind(t); }
    /* 0057dbe6: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dbeb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57dbf0u); f_00686d82();
    /* 0057dbf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057dbf3: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0057dbf6: mov byte ptr [ebp - 4], 9 */ W8((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0057dbfa: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057dbfe: je 0x57dc10 */ if (fZ) goto L_0057dc10;
L_0057dc00:; BB(0x0057dc00);
    /* 0057dc00: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0057dc03: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57dc08u); f_005eaaf0();
    /* 0057dc08: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0057dc0e: jmp 0x57dc1a */ goto L_0057dc1a;
L_0057dc10:; BB(0x0057dc10);
    /* 0057dc10: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0057dc1a:; BB(0x0057dc1a);
    /* 0057dc1a: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0057dc20: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0057dc23: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057dc27: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dc2a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0057dc2d: mov dword ptr [edx + 0x18c], eax */ W32((u32)(r_edx+0x18cu), r_eax);
    /* 0057dc33: push 0x30dfe5 */ { u32 v = 0x30dfe5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dc38: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dc3b: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0057dc41: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57dc46u); f_005eaf00();
    /* 0057dc46: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dc48: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dc4b: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0057dc51: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dc54: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0057dc5a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057dc5c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057dc5f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57dc61u); call_ind(t); }
    /* 0057dc61: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dc64: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0057dc6a: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dc6d: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0057dc73: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057dc75: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057dc78: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57dc7au); call_ind(t); }
    /* 0057dc7a: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dc7d: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0057dc83: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dc86: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0057dc8c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057dc8e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057dc91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57dc93u); call_ind(t); }
    /* 0057dc93: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dc95: push 0x30dfe6 */ { u32 v = 0x30dfe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dc9a: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dc9f: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0057dca5: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0057dca8: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x57dcadu); f_006044b0();
    /* 0057dcad: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057dcb4: jmp 0x57dcbf */ goto L_0057dcbf;
L_0057dcb6:; BB(0x0057dcb6);
    /* 0057dcb6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057dcb9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057dcbc: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0057dcbf:; BB(0x0057dcbf);
    /* 0057dcbf: cmp dword ptr [ebp - 0x10], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057dcc3: jge 0x57dce5 */ if ((fS==fO)) goto L_0057dce5;
L_0057dcc5:; BB(0x0057dcc5);
    /* 0057dcc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dcc7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057dcca: add eax, 0x30dfcc */ {  u32 a = r_eax; u32 b = 0x30dfccu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057dccf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057dcd0: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dcd5: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0057dcdb: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0057dcde: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x57dce3u); f_006044b0();
    /* 0057dce3: jmp 0x57dcb6 */ goto L_0057dcb6;
L_0057dce5:; BB(0x0057dce5);
    /* 0057dce5: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dcea: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57dcefu); f_00686d82();
    /* 0057dcef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057dcf2: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0057dcf5: mov byte ptr [ebp - 4], 0xa */ W8((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0057dcf9: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057dcfd: je 0x57dd0f */ if (fZ) goto L_0057dd0f;
L_0057dcff:; BB(0x0057dcff);
    /* 0057dcff: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0057dd02: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x57dd07u); f_005f5bf0();
    /* 0057dd07: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0057dd0d: jmp 0x57dd19 */ goto L_0057dd19;
L_0057dd0f:; BB(0x0057dd0f);
    /* 0057dd0f: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_0057dd19:; BB(0x0057dd19);
    /* 0057dd19: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057dd1f: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0057dd22: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057dd26: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dd29: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0057dd2c: mov dword ptr [eax + 0x190], ecx */ W32((u32)(r_eax+0x190u), r_ecx);
    /* 0057dd32: push 0x30dfcc */ { u32 v = 0x30dfccu; r_esp -= 4; W32(r_esp, v); }
    /* 0057dd37: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dd3a: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 0057dd40: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57dd45u); f_005eaf00();
    /* 0057dd45: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dd47: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dd4a: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0057dd50: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dd53: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 0057dd59: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057dd5b: mov ecx, eax */ r_ecx = r_eax;
    /* 0057dd5d: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057dd60: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57dd62u); call_ind(t); }
    /* 0057dd62: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dd65: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0057dd6b: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dd6e: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0057dd74: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057dd76: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057dd79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57dd7bu); call_ind(t); }
    /* 0057dd7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dd7d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dd80: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0057dd86: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dd89: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0057dd8f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057dd91: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057dd97: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57dd99u); call_ind(t); }
    /* 0057dd99: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dd9c: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0057dda2: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dda5: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0057ddab: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057ddad: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057ddb0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ddb2u); call_ind(t); }
    /* 0057ddb2: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ddb7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57ddbcu); f_00686d82();
    /* 0057ddbc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ddbf: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0057ddc2: mov byte ptr [ebp - 4], 0xb */ W8((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 0057ddc6: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ddca: je 0x57dddc */ if (fZ) goto L_0057dddc;
L_0057ddcc:; BB(0x0057ddcc);
    /* 0057ddcc: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0057ddcf: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57ddd4u); f_005eaaf0();
    /* 0057ddd4: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0057ddda: jmp 0x57dde6 */ goto L_0057dde6;
L_0057dddc:; BB(0x0057dddc);
    /* 0057dddc: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_0057dde6:; BB(0x0057dde6);
    /* 0057dde6: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0057ddec: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0057ddef: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057ddf3: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057ddf6: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0057ddf9: mov dword ptr [edx + 0x204], eax */ W32((u32)(r_edx+0x204u), r_eax);
    /* 0057ddff: push 0x30dfe7 */ { u32 v = 0x30dfe7u; r_esp -= 4; W32(r_esp, v); }
    /* 0057de04: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057de07: mov ecx, dword ptr [ecx + 0x204] */ r_ecx = R32((u32)(r_ecx+0x204u));
    /* 0057de0d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57de12u); f_005eaf00();
    /* 0057de12: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057de14: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057de17: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 0057de1d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057de20: mov ecx, dword ptr [ecx + 0x204] */ r_ecx = R32((u32)(r_ecx+0x204u));
    /* 0057de26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057de28: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0057de2b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57de2du); call_ind(t); }
    /* 0057de2d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057de30: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 0057de36: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057de39: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0057de3f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057de41: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057de44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57de46u); call_ind(t); }
    /* 0057de46: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057de49: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 0057de4f: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057de52: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0057de58: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057de5a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057de5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57de5fu); call_ind(t); }
    /* 0057de5f: push 0x4330 */ { u32 v = 0x4330u; r_esp -= 4; W32(r_esp, v); }
    /* 0057de64: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57de69u); f_00686d82();
    /* 0057de69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057de6c: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0057de6f: mov byte ptr [ebp - 4], 0xc */ W8((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 0057de73: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057de77: je 0x57de89 */ if (fZ) goto L_0057de89;
L_0057de79:; BB(0x0057de79);
    /* 0057de79: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0057de7c: call 0x57f820 */ r_esp -= 4; W32(r_esp, 0x57de81u); f_0057f820();
    /* 0057de81: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0057de87: jmp 0x57de93 */ goto L_0057de93;
L_0057de89:; BB(0x0057de89);
    /* 0057de89: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_0057de93:; BB(0x0057de93);
    /* 0057de93: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0057de99: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0057de9c: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057dea0: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057dea3: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0057dea6: mov dword ptr [edx + 0x208], eax */ W32((u32)(r_edx+0x208u), r_eax);
    /* 0057deac: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057deaf: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x57deb4u); f_005f5cc0();
    /* 0057deb4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057debb: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0057debe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057dec1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057dec8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057dec9: mov esp, ebp */ r_esp = r_ebp;
    /* 0057decb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057decc: ret  */ FN_RET(0x0057d600); r_esp += 4; return;
}

void f_0057ded0(void) /* KenoAnimator::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057ded0);
    /* 0057ded0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057ded1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057ded3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ded5: push 0x6a68d2 */ { u32 v = 0x6a68d2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057deda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057dee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057dee1: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057dee7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057deec: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057deee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057deef: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057def2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057def8: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0057defb: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0057defe: mov dword ptr [eax], 0x6cbf2c */ W32((u32)(r_eax), 0x6cbf2cu);
    /* 0057df04: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057df0b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057df0e: cmp dword ptr [ecx + 0x1e4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057df15: je 0x57df6f */ if (fZ) goto L_0057df6f;
L_0057df17:; BB(0x0057df17);
    /* 0057df17: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057df1a: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0057df20: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057df23: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 0057df29: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057df2b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057df2e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57df30u); call_ind(t); }
    /* 0057df30: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057df33: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0057df39: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0057df3c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057df3f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057df42: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057df46: je 0x57df5b */ if (fZ) goto L_0057df5b;
L_0057df48:; BB(0x0057df48);
    /* 0057df48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057df4a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057df4d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057df4f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057df52: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057df54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57df56u); call_ind(t); }
    /* 0057df56: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0057df59: jmp 0x57df62 */ goto L_0057df62;
L_0057df5b:; BB(0x0057df5b);
    /* 0057df5b: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0057df62:; BB(0x0057df62);
    /* 0057df62: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057df65: mov dword ptr [ecx + 0x1e4], 0 */ W32((u32)(r_ecx+0x1e4u), 0x0u);
L_0057df6f:; BB(0x0057df6f);
    /* 0057df6f: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057df72: cmp dword ptr [edx + 0x1f8], 0 */ {  u32 a = R32((u32)(r_edx+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057df79: je 0x57dfd5 */ if (fZ) goto L_0057dfd5;
L_0057df7b:; BB(0x0057df7b);
    /* 0057df7b: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0057df7e: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0057df84: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057df87: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 0057df8d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057df8f: mov ecx, eax */ r_ecx = r_eax;
    /* 0057df91: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057df94: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57df96u); call_ind(t); }
    /* 0057df96: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057df99: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 0057df9f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0057dfa2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057dfa5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057dfa8: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057dfac: je 0x57dfc1 */ if (fZ) goto L_0057dfc1;
L_0057dfae:; BB(0x0057dfae);
    /* 0057dfae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dfb0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057dfb3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057dfb5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057dfb8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057dfba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57dfbcu); call_ind(t); }
    /* 0057dfbc: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0057dfbf: jmp 0x57dfc8 */ goto L_0057dfc8;
L_0057dfc1:; BB(0x0057dfc1);
    /* 0057dfc1: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0057dfc8:; BB(0x0057dfc8);
    /* 0057dfc8: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057dfcb: mov dword ptr [ecx + 0x1f8], 0 */ W32((u32)(r_ecx+0x1f8u), 0x0u);
L_0057dfd5:; BB(0x0057dfd5);
    /* 0057dfd5: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057dfd8: cmp dword ptr [edx + 0x1fc], 0 */ {  u32 a = R32((u32)(r_edx+0x1fcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057dfdf: je 0x57e03b */ if (fZ) goto L_0057e03b;
L_0057dfe1:; BB(0x0057dfe1);
    /* 0057dfe1: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0057dfe4: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 0057dfea: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057dfed: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 0057dff3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057dff5: mov ecx, eax */ r_ecx = r_eax;
    /* 0057dff7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057dffa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57dffcu); call_ind(t); }
    /* 0057dffc: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057dfff: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 0057e005: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0057e008: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057e00b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0057e00e: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e012: je 0x57e027 */ if (fZ) goto L_0057e027;
L_0057e014:; BB(0x0057e014);
    /* 0057e014: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e016: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e019: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057e01b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e01e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057e020: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e022u); call_ind(t); }
    /* 0057e022: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0057e025: jmp 0x57e02e */ goto L_0057e02e;
L_0057e027:; BB(0x0057e027);
    /* 0057e027: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0057e02e:; BB(0x0057e02e);
    /* 0057e02e: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e031: mov dword ptr [ecx + 0x1fc], 0 */ W32((u32)(r_ecx+0x1fcu), 0x0u);
L_0057e03b:; BB(0x0057e03b);
    /* 0057e03b: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e03e: cmp dword ptr [edx + 0x200], 0 */ {  u32 a = R32((u32)(r_edx+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e045: je 0x57e0a7 */ if (fZ) goto L_0057e0a7;
L_0057e047:; BB(0x0057e047);
    /* 0057e047: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e04a: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 0057e050: call 0x57f660 */ r_esp -= 4; W32(r_esp, 0x57e055u); f_0057f660();
    /* 0057e055: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e058: mov edx, dword ptr [ecx + 0x200] */ r_edx = R32((u32)(r_ecx+0x200u));
    /* 0057e05e: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0057e061: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057e064: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0057e067: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e06b: je 0x57e093 */ if (fZ) goto L_0057e093;
L_0057e06d:; BB(0x0057e06d);
    /* 0057e06d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057e070: call 0x57f460 */ r_esp -= 4; W32(r_esp, 0x57e075u); f_0057f460();
    /* 0057e075: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0057e07a: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0057e07d: je 0x57e08b */ if (fZ) goto L_0057e08b;
L_0057e07f:; BB(0x0057e07f);
    /* 0057e07f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057e082: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e083: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x57e088u); f_00686cae();
    /* 0057e088: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057e08b:; BB(0x0057e08b);
    /* 0057e08b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057e08e: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0057e091: jmp 0x57e09a */ goto L_0057e09a;
L_0057e093:; BB(0x0057e093);
    /* 0057e093: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0057e09a:; BB(0x0057e09a);
    /* 0057e09a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e09d: mov dword ptr [ecx + 0x200], 0 */ W32((u32)(r_ecx+0x200u), 0x0u);
L_0057e0a7:; BB(0x0057e0a7);
    /* 0057e0a7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057e0ae: jmp 0x57e0b9 */ goto L_0057e0b9;
L_0057e0b0:; BB(0x0057e0b0);
    /* 0057e0b0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057e0b3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057e0b6: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0057e0b9:; BB(0x0057e0b9);
    /* 0057e0b9: cmp dword ptr [ebp - 0x10], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057e0bd: jge 0x57e13e */ if ((fS==fO)) goto L_0057e13e;
L_0057e0bf:; BB(0x0057e0bf);
    /* 0057e0bf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057e0c2: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e0c5: cmp dword ptr [ecx + eax*4 + 0x194], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e0cd: je 0x57e139 */ if (fZ) goto L_0057e139;
L_0057e0cf:; BB(0x0057e0cf);
    /* 0057e0cf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057e0d2: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e0d5: mov ecx, dword ptr [eax + edx*4 + 0x194] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 0057e0dc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057e0df: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e0e2: mov edx, dword ptr [eax + edx*4 + 0x194] */ r_edx = R32((u32)(r_eax+r_edx*4+0x194u));
    /* 0057e0e9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057e0eb: mov ecx, edx */ r_ecx = r_edx;
    /* 0057e0ed: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0057e0f0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57e0f2u); call_ind(t); }
    /* 0057e0f2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057e0f5: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e0f8: mov edx, dword ptr [ecx + eax*4 + 0x194] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x194u));
    /* 0057e0ff: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0057e102: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057e105: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0057e108: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e10c: je 0x57e121 */ if (fZ) goto L_0057e121;
L_0057e10e:; BB(0x0057e10e);
    /* 0057e10e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e110: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057e113: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057e115: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057e118: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057e11a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e11cu); call_ind(t); }
    /* 0057e11c: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0057e11f: jmp 0x57e128 */ goto L_0057e128;
L_0057e121:; BB(0x0057e121);
    /* 0057e121: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0057e128:; BB(0x0057e128);
    /* 0057e128: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057e12b: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e12e: mov dword ptr [edx + ecx*4 + 0x194], 0 */ W32((u32)(r_edx+r_ecx*4+0x194u), 0x0u);
L_0057e139:; BB(0x0057e139);
    /* 0057e139: jmp 0x57e0b0 */ goto L_0057e0b0;
L_0057e13e:; BB(0x0057e13e);
    /* 0057e13e: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e141: cmp dword ptr [eax + 0x184], 0 */ {  u32 a = R32((u32)(r_eax+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e148: je 0x57e1a8 */ if (fZ) goto L_0057e1a8;
L_0057e14a:; BB(0x0057e14a);
    /* 0057e14a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e14d: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0057e153: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e156: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0057e15c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057e15e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e161: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e163u); call_ind(t); }
    /* 0057e163: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e166: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0057e16c: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0057e16f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0057e172: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0057e175: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e179: je 0x57e191 */ if (fZ) goto L_0057e191;
L_0057e17b:; BB(0x0057e17b);
    /* 0057e17b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e17d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057e180: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057e182: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057e185: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057e187: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e189u); call_ind(t); }
    /* 0057e189: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0057e18f: jmp 0x57e19b */ goto L_0057e19b;
L_0057e191:; BB(0x0057e191);
    /* 0057e191: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0057e19b:; BB(0x0057e19b);
    /* 0057e19b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e19e: mov dword ptr [ecx + 0x184], 0 */ W32((u32)(r_ecx+0x184u), 0x0u);
L_0057e1a8:; BB(0x0057e1a8);
    /* 0057e1a8: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e1ab: cmp dword ptr [edx + 0x188], 0 */ {  u32 a = R32((u32)(r_edx+0x188u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e1b2: je 0x57e214 */ if (fZ) goto L_0057e214;
L_0057e1b4:; BB(0x0057e1b4);
    /* 0057e1b4: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e1b7: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0057e1bd: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e1c0: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0057e1c6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057e1c8: mov ecx, eax */ r_ecx = r_eax;
    /* 0057e1ca: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e1cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e1cfu); call_ind(t); }
    /* 0057e1cf: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e1d2: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 0057e1d8: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0057e1db: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0057e1de: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0057e1e1: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e1e5: je 0x57e1fd */ if (fZ) goto L_0057e1fd;
L_0057e1e7:; BB(0x0057e1e7);
    /* 0057e1e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e1e9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0057e1ec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057e1ee: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0057e1f1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057e1f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e1f5u); call_ind(t); }
    /* 0057e1f5: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0057e1fb: jmp 0x57e207 */ goto L_0057e207;
L_0057e1fd:; BB(0x0057e1fd);
    /* 0057e1fd: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0057e207:; BB(0x0057e207);
    /* 0057e207: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e20a: mov dword ptr [ecx + 0x188], 0 */ W32((u32)(r_ecx+0x188u), 0x0u);
L_0057e214:; BB(0x0057e214);
    /* 0057e214: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e217: cmp dword ptr [edx + 0x18c], 0 */ {  u32 a = R32((u32)(r_edx+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e21e: je 0x57e280 */ if (fZ) goto L_0057e280;
L_0057e220:; BB(0x0057e220);
    /* 0057e220: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e223: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0057e229: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e22c: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0057e232: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057e234: mov ecx, eax */ r_ecx = r_eax;
    /* 0057e236: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e239: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e23bu); call_ind(t); }
    /* 0057e23b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e23e: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0057e244: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0057e247: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0057e24a: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0057e24d: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e251: je 0x57e269 */ if (fZ) goto L_0057e269;
L_0057e253:; BB(0x0057e253);
    /* 0057e253: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e255: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057e258: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057e25a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057e25d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057e25f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e261u); call_ind(t); }
    /* 0057e261: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0057e267: jmp 0x57e273 */ goto L_0057e273;
L_0057e269:; BB(0x0057e269);
    /* 0057e269: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0057e273:; BB(0x0057e273);
    /* 0057e273: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e276: mov dword ptr [ecx + 0x18c], 0 */ W32((u32)(r_ecx+0x18cu), 0x0u);
L_0057e280:; BB(0x0057e280);
    /* 0057e280: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e283: cmp dword ptr [edx + 0x190], 0 */ {  u32 a = R32((u32)(r_edx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e28a: je 0x57e2ec */ if (fZ) goto L_0057e2ec;
L_0057e28c:; BB(0x0057e28c);
    /* 0057e28c: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e28f: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0057e295: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e298: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 0057e29e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057e2a0: mov ecx, eax */ r_ecx = r_eax;
    /* 0057e2a2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e2a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e2a7u); call_ind(t); }
    /* 0057e2a7: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e2aa: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0057e2b0: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0057e2b3: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0057e2b6: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0057e2b9: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e2bd: je 0x57e2d5 */ if (fZ) goto L_0057e2d5;
L_0057e2bf:; BB(0x0057e2bf);
    /* 0057e2bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e2c1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0057e2c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057e2c6: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0057e2c9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057e2cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e2cdu); call_ind(t); }
    /* 0057e2cd: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0057e2d3: jmp 0x57e2df */ goto L_0057e2df;
L_0057e2d5:; BB(0x0057e2d5);
    /* 0057e2d5: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0057e2df:; BB(0x0057e2df);
    /* 0057e2df: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e2e2: mov dword ptr [ecx + 0x190], 0 */ W32((u32)(r_ecx+0x190u), 0x0u);
L_0057e2ec:; BB(0x0057e2ec);
    /* 0057e2ec: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e2ef: cmp dword ptr [edx + 0x204], 0 */ {  u32 a = R32((u32)(r_edx+0x204u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e2f6: je 0x57e358 */ if (fZ) goto L_0057e358;
L_0057e2f8:; BB(0x0057e2f8);
    /* 0057e2f8: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e2fb: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0057e301: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e304: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 0057e30a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057e30c: mov ecx, eax */ r_ecx = r_eax;
    /* 0057e30e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057e311: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e313u); call_ind(t); }
    /* 0057e313: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e316: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 0057e31c: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0057e31f: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0057e322: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0057e325: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e329: je 0x57e341 */ if (fZ) goto L_0057e341;
L_0057e32b:; BB(0x0057e32b);
    /* 0057e32b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e32d: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0057e330: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057e332: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0057e335: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057e337: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e339u); call_ind(t); }
    /* 0057e339: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0057e33f: jmp 0x57e34b */ goto L_0057e34b;
L_0057e341:; BB(0x0057e341);
    /* 0057e341: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0057e34b:; BB(0x0057e34b);
    /* 0057e34b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e34e: mov dword ptr [ecx + 0x204], 0 */ W32((u32)(r_ecx+0x204u), 0x0u);
L_0057e358:; BB(0x0057e358);
    /* 0057e358: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e35b: cmp dword ptr [edx + 0x208], 0 */ {  u32 a = R32((u32)(r_edx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e362: je 0x57e3a9 */ if (fZ) goto L_0057e3a9;
L_0057e364:; BB(0x0057e364);
    /* 0057e364: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e367: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0057e36d: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0057e370: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0057e373: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0057e376: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e37a: je 0x57e392 */ if (fZ) goto L_0057e392;
L_0057e37c:; BB(0x0057e37c);
    /* 0057e37c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e37e: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0057e381: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057e383: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0057e386: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057e388: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57e38au); call_ind(t); }
    /* 0057e38a: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0057e390: jmp 0x57e39c */ goto L_0057e39c;
L_0057e392:; BB(0x0057e392);
    /* 0057e392: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0057e39c:; BB(0x0057e39c);
    /* 0057e39c: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e39f: mov dword ptr [ecx + 0x208], 0 */ W32((u32)(r_ecx+0x208u), 0x0u);
L_0057e3a9:; BB(0x0057e3a9);
    /* 0057e3a9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057e3b0: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057e3b3: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x57e3b8u); f_005f5c40();
    /* 0057e3b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057e3bb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057e3c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057e3c3: mov esp, ebp */ r_esp = r_ebp;
    /* 0057e3c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057e3c6: ret  */ FN_RET(0x0057ded0); r_esp += 4; return;
}

