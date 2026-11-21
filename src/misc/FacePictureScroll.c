#include "protos.h"

void f_0065cb60(void) /* FacePictureScroll::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065cb60);
    /* 0065cb60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065cb61: mov ebp, esp */ r_ebp = r_esp;
    /* 0065cb63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065cb65: push 0x6ac7a2 */ { u32 v = 0x6ac7a2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cb6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065cb70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cb71: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065cb74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065cb79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065cb7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cb7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065cb7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065cb85: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0065cb88: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cb8b: call 0x614810 */ r_esp -= 4; W32(r_esp, 0x65cb90u); f_00614810();
    /* 0065cb90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065cb97: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cb9a: mov dword ptr [eax], 0x6de83c */ W32((u32)(r_eax), 0x6de83cu);
    /* 0065cba0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cba3: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065cba6: call 0x663500 */ r_esp -= 4; W32(r_esp, 0x65cbabu); f_00663500();
    /* 0065cbab: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065cbaf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cbb2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065cbb5: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 0065cbbb: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065cbc0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065cbc2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065cbc8: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 0065cbce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65cbd0u); call_ind(t); }
    /* 0065cbd0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cbd3: mov dword ptr [ecx + 0x70], eax */ W32((u32)(r_ecx+0x70u), r_eax);
    /* 0065cbd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cbd8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065cbda: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cbdd: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 0065cbe0: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x65cbe5u); f_0063a3e0();
    /* 0065cbe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cbe7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cbe9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cbeb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065cbee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cbef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065cbf1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cbf4: mov ecx, dword ptr [ecx + 0x70] */ r_ecx = R32((u32)(r_ecx+0x70u));
    /* 0065cbf7: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x65cbfcu); f_0063a8d0();
    /* 0065cbfc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cbff: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065cc02: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065cc05: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065cc08: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65cc0du); f_0063aac0();
    /* 0065cc0d: mov dword ptr [eax], 3 */ W32((u32)(r_eax), 0x3u);
    /* 0065cc13: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cc16: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0065cc1c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cc1f: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0065cc25: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065cc27: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0065cc2a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65cc2cu); call_ind(t); }
    /* 0065cc2c: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065cc2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cc30: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cc33: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0065cc39: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cc3c: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0065cc42: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065cc44: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065cc47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65cc49u); call_ind(t); }
    /* 0065cc49: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065cc4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cc4d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cc50: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 0065cc53: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0065cc56: call 0x646150 */ r_esp -= 4; W32(r_esp, 0x65cc5bu); f_00646150();
    /* 0065cc5b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cc5e: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065cc61: call 0x663a30 */ r_esp -= 4; W32(r_esp, 0x65cc66u); f_00663a30();
    /* 0065cc66: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065cc6d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cc70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065cc73: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065cc7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065cc7b: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cc7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cc7e: ret 4 */ FN_RET(0x0065cb60); r_esp += 8; return;
}

void f_0065cc90(void) /* FacePictureScroll::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065cc90);
    /* 0065cc90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065cc91: mov ebp, esp */ r_ebp = r_esp;
    /* 0065cc93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065cc95: push 0x6ac7d0 */ { u32 v = 0x6ac7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cc9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065cca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cca1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065cca4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065cca9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065ccab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ccac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065ccaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065ccb5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0065ccb8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065ccbb: mov dword ptr [eax], 0x6de83c */ W32((u32)(r_eax), 0x6de83cu);
    /* 0065ccc1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065ccc8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065cccb: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065cccf: je 0x65cd0a */ if (fZ) goto L_0065cd0a;
L_0065ccd1:; BB(0x0065ccd1);
    /* 0065ccd1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065ccd4: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065ccd7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065ccda: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ccdd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0065cce0: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065cce4: je 0x65ccf9 */ if (fZ) goto L_0065ccf9;
L_0065cce6:; BB(0x0065cce6);
    /* 0065cce6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cce8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065cceb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065cced: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065ccf0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065ccf2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65ccf4u); call_ind(t); }
    /* 0065ccf4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065ccf7: jmp 0x65cd00 */ goto L_0065cd00;
L_0065ccf9:; BB(0x0065ccf9);
    /* 0065ccf9: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0065cd00:; BB(0x0065cd00);
    /* 0065cd00: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065cd03: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_0065cd0a:; BB(0x0065cd0a);
    /* 0065cd0a: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065cd0e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065cd11: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065cd14: call 0x663570 */ r_esp -= 4; W32(r_esp, 0x65cd19u); f_00663570();
    /* 0065cd19: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065cd20: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065cd23: call 0x614a10 */ r_esp -= 4; W32(r_esp, 0x65cd28u); f_00614a10();
    /* 0065cd28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065cd2b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065cd32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065cd33: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cd35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cd36: ret  */ FN_RET(0x0065cc90); r_esp += 4; return;
}

void f_0065cd50(void) /* FacePictureScroll::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065cd50);
    /* 0065cd50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065cd51: mov ebp, esp */ r_ebp = r_esp;
    /* 0065cd53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065cd54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065cd55: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065cd58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cd5b: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0065cd61: movzx edx, byte ptr [ecx + 0x1c1] */ r_edx = (u32)R8((u32)(r_ecx+0x1c1u));
    /* 0065cd68: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065cd6a: je 0x65cdc1 */ if (fZ) goto L_0065cdc1;
L_0065cd6c:; BB(0x0065cd6c);
    /* 0065cd6c: movzx eax, byte ptr [0x795fbe] */ r_eax = (u32)R8((u32)(0x795fbeu));
    /* 0065cd73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065cd75: je 0x65cda9 */ if (fZ) goto L_0065cda9;
L_0065cd77:; BB(0x0065cd77);
    /* 0065cd77: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065cd7d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065cd7f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065cd85: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 0065cd8b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65cd8du); call_ind(t); }
    /* 0065cd8d: mov esi, eax */ r_esi = r_eax;
    /* 0065cd8f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065cd95: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065cd97: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065cd9d: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 0065cda3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65cda5u); call_ind(t); }
    /* 0065cda5: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065cda7: jmp 0x65cdcc */ goto L_0065cdcc;
L_0065cda9:; BB(0x0065cda9);
    /* 0065cda9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065cdaf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065cdb1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065cdb7: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 0065cdbd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65cdbfu); call_ind(t); }
    /* 0065cdbf: jmp 0x65cdcc */ goto L_0065cdcc;
L_0065cdc1:; BB(0x0065cdc1);
    /* 0065cdc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cdc4: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065cdc7: call 0x663c50 */ r_esp -= 4; W32(r_esp, 0x65cdccu); f_00663c50();
L_0065cdcc:; BB(0x0065cdcc);
    /* 0065cdcc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065cdcd: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cdcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cdd0: ret  */ FN_RET(0x0065cd50); r_esp += 4; return;
}

void f_0065ce00(void) /* FacePictureScroll::vfunc53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ce00);
    /* 0065ce00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ce01: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ce03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ce04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065ce07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065ce0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ce0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ce0e: call 0x65cde0 */ r_esp -= 4; W32(r_esp, 0x65ce13u); f_0065cde0();
    /* 0065ce13: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ce15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ce16: ret 8 */ FN_RET(0x0065ce00); r_esp += 12; return;
}

void f_0065ce20(void) /* FacePictureScroll::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ce20);
    /* 0065ce20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ce21: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ce23: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ce26: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0065ce29: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ce2c: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0065ce32: cmp dword ptr [ecx + 0x1bc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ce39: je 0x65ce75 */ if (fZ) goto L_0065ce75;
L_0065ce3b:; BB(0x0065ce3b);
    /* 0065ce3b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ce3e: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x65ce43u); f_00615260();
    /* 0065ce43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ce44: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ce47: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065ce4a: call 0x6639a0 */ r_esp -= 4; W32(r_esp, 0x65ce4fu); f_006639a0();
    /* 0065ce4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ce50: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ce53: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x65ce58u); f_00615260();
    /* 0065ce58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065ce59: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ce5c: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0065ce62: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ce65: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0065ce6b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065ce6d: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 0065ce73: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65ce75u); call_ind(t); }
L_0065ce75:; BB(0x0065ce75);
    /* 0065ce75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ce77: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ce7a: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 0065ce7d: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0065ce80: call 0x648270 */ r_esp -= 4; W32(r_esp, 0x65ce85u); f_00648270();
    /* 0065ce85: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ce88: mov ecx, dword ptr [eax + 0x8c] */ r_ecx = R32((u32)(r_eax+0x8cu));
    /* 0065ce8e: movzx edx, byte ptr [ecx + 0x1c1] */ r_edx = (u32)R8((u32)(r_ecx+0x1c1u));
    /* 0065ce95: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065ce97: je 0x65ceeb */ if (fZ) goto L_0065ceeb;
L_0065ce99:; BB(0x0065ce99);
    /* 0065ce99: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ce9c: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x65cea1u); f_00615260();
    /* 0065cea1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cea4: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 0065ceaa: mov byte ptr [edx + 0x1c3], al */ W8((u32)(r_edx+0x1c3u), (u8)r_eax);
    /* 0065ceb0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ceb3: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0065ceb6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065ceb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cebc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65cec1u); f_0063aac0();
    /* 0065cec1: mov dword ptr [eax], 2 */ W32((u32)(r_eax), 0x2u);
    /* 0065cec7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ceca: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x65cecfu); f_00615260();
    /* 0065cecf: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0065ced2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ced5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065ced8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0065cedb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065cede: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65cee3u); f_0063aac0();
    /* 0065cee3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065cee6: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 0065cee9: jmp 0x65cf3d */ goto L_0065cf3d;
L_0065ceeb:; BB(0x0065ceeb);
    /* 0065ceeb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065ceee: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x65cef3u); f_00615260();
    /* 0065cef3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cef6: mov ecx, dword ptr [edx + 0x8c] */ r_ecx = R32((u32)(r_edx+0x8cu));
    /* 0065cefc: mov byte ptr [ecx + 0x1c2], al */ W8((u32)(r_ecx+0x1c2u), (u8)r_eax);
    /* 0065cf02: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cf05: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065cf08: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065cf0b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065cf0e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65cf13u); f_0063aac0();
    /* 0065cf13: mov dword ptr [eax], 3 */ W32((u32)(r_eax), 0x3u);
    /* 0065cf19: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cf1c: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 0065cf1f: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0065cf22: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0065cf25: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065cf28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065cf29: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cf2c: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x65cf31u); f_00615260();
    /* 0065cf31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cf32: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cf35: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065cf38: call 0x663c70 */ r_esp -= 4; W32(r_esp, 0x65cf3du); f_00663c70();
L_0065cf3d:; BB(0x0065cf3d);
    /* 0065cf3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cf3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cf41: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cf44: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065cf47: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0065cf4a: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x65cf4fu); f_006464d0();
    /* 0065cf4f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cf52: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0065cf58: call 0x65c300 */ r_esp -= 4; W32(r_esp, 0x65cf5du); f_0065c300();
    /* 0065cf5d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cf60: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0065cf66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065cf69: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0065cf6f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065cf71: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0065cf77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65cf79u); call_ind(t); }
    /* 0065cf79: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cf7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cf7c: ret  */ FN_RET(0x0065ce20); r_esp += 4; return;
}

void f_0065cf80(void) /* FacePictureScroll::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065cf80);
    /* 0065cf80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065cf81: mov ebp, esp */ r_ebp = r_esp;
    /* 0065cf83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065cf84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065cf87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cf8a: call 0x614f40 */ r_esp -= 4; W32(r_esp, 0x65cf8fu); f_00614f40();
    /* 0065cf8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cf91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cf93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cf96: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0065cf99: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0065cf9c: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x65cfa1u); f_006464d0();
    /* 0065cfa1: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cfa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cfa4: ret  */ FN_RET(0x0065cf80); r_esp += 4; return;
}

void f_0065cfb0(void) /* FacePictureScroll::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065cfb0);
    /* 0065cfb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065cfb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065cfb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065cfb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065cfb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cfba: call 0x614fd0 */ r_esp -= 4; W32(r_esp, 0x65cfbfu); f_00614fd0();
    /* 0065cfbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cfc1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cfc4: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0065cfc7: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0065cfca: call 0x646c20 */ r_esp -= 4; W32(r_esp, 0x65cfcfu); f_00646c20();
    /* 0065cfcf: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cfd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cfd2: ret  */ FN_RET(0x0065cfb0); r_esp += 4; return;
}

