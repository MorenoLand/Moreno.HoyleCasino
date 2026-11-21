#include "protos.h"

void f_0045aa80(void) /* PaiGowDealToScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045aa80);
    /* 0045aa80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa81: mov ebp, esp */ r_ebp = r_esp;
    /* 0045aa83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa85: push 0x69f1eb */ { u32 v = 0x69f1ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045aa90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa92: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045aa97: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045aa99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa9a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045aa9d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0045aaa3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045aaa6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045aaa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045aaaa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045aaad: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x45aab2u); f_005fc0d0();
    /* 0045aab2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045aab9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045aabc: mov dword ptr [ecx], 0x6b99d0 */ W32((u32)(r_ecx), 0x6b99d0u);
    /* 0045aac2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045aac5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045aac8: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0045aacb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045aace: mov edx, dword ptr [ecx*4 + 0x71748c] */ r_edx = R32((u32)(r_ecx*4+0x71748cu));
    /* 0045aad5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aad6: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045aadb: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0045aade: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x45aae3u); f_005eaf00();
    /* 0045aae3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045aae6: mov edx, dword ptr [ecx*4 + 0x717478] */ r_edx = R32((u32)(r_ecx*4+0x717478u));
    /* 0045aaed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aaee: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045aaf3: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0045aaf6: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x45aafbu); f_005eaf00();
    /* 0045aafb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aafd: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045ab03: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0045ab06: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045ab0b: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0045ab0e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045ab10: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0045ab16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ab18u); call_ind(t); }
    /* 0045ab18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ab1a: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045ab20: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0045ab23: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045ab28: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0045ab2b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045ab2d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0045ab33: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ab35u); call_ind(t); }
    /* 0045ab35: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045ab3c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045ab3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ab42: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045ab49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045ab4a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ab4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ab4d: ret 8 */ FN_RET(0x0045aa80); r_esp += 12; return;
}

void f_0045ab50(void) /* PaiGowDealToScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ab50);
    /* 0045ab50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ab51: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ab53: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ab56: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045ab5b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045ab5d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045ab60: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045ab63: mov word ptr [ebp - 0x1c], 0x24 */ W16((u32)(r_ebp+0xffffffe4u), 0x24u);
    /* 0045ab69: mov word ptr [ebp - 0x1a], 0x15 */ W16((u32)(r_ebp+0xffffffe6u), 0x15u);
    /* 0045ab6f: mov word ptr [ebp - 0x18], 0x18 */ W16((u32)(r_ebp+0xffffffe8u), 0x18u);
    /* 0045ab75: mov word ptr [ebp - 0x16], 0x13 */ W16((u32)(r_ebp+0xffffffeau), 0x13u);
    /* 0045ab7b: mov word ptr [ebp - 0x14], 0x12 */ W16((u32)(r_ebp+0xffffffecu), 0x12u);
    /* 0045ab81: mov word ptr [ebp - 4], 3 */ W16((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0045ab87: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045ab8c: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0045ab8f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045ab92: mov edx, dword ptr [0x790740] */ r_edx = R32((u32)(0x790740u));
    /* 0045ab98: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0045ab9b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045ab9e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045aba1: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x45aba6u); f_005fc360();
    /* 0045aba6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045aba9: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045abad: je 0x45abc8 */ if (fZ) goto L_0045abc8;
L_0045abaf:; BB(0x0045abaf);
    /* 0045abaf: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045abb3: je 0x45ac51 */ if (fZ) goto L_0045ac51;
L_0045abb9:; BB(0x0045abb9);
    /* 0045abb9: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045abbd: je 0x45ae52 */ if (fZ) goto L_0045ae52;
L_0045abc3:; BB(0x0045abc3);
    /* 0045abc3: jmp 0x45ae7d */ goto L_0045ae7d;
L_0045abc8:; BB(0x0045abc8);
    /* 0045abc8: mov word ptr [0x790730], 0 */ W16((u32)(0x790730u), 0x0u);
    /* 0045abd1: mov word ptr [0x79072c], 0 */ W16((u32)(0x79072cu), 0x0u);
    /* 0045abda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045abdd: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x45abe2u); f_005eb240();
    /* 0045abe2: mov word ptr [0x790728], ax */ W16((u32)(0x790728u), (u16)r_eax);
    /* 0045abe8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045abeb: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x45abf0u); f_005eb240();
    /* 0045abf0: mov word ptr [0x790724], ax */ W16((u32)(0x790724u), (u16)r_eax);
    /* 0045abf6: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0045abf8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045abfb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045abfd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ac00: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0045ac03: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ac05u); call_ind(t); }
    /* 0045ac05: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac07: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ac0a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045ac0c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ac0f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0045ac12: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ac14u); call_ind(t); }
    /* 0045ac14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ac19: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045ac1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ac1e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0045ac24: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ac26u); call_ind(t); }
    /* 0045ac26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac28: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ac2b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045ac2d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ac30: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0045ac36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ac38u); call_ind(t); }
    /* 0045ac38: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0045ac3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac3d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac3f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ac42: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045ac44: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ac47: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0045ac4a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45ac4cu); call_ind(t); }
    /* 0045ac4c: jmp 0x45ae7d */ goto L_0045ae7d;
L_0045ac51:; BB(0x0045ac51);
    /* 0045ac51: mov ax, word ptr [0x790730] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x790730u))) & 0xffffu);
    /* 0045ac57: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0045ac5b: mov word ptr [0x790730], ax */ W16((u32)(0x790730u), (u16)r_eax);
    /* 0045ac61: movsx ecx, word ptr [0x790730] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790730u));
    /* 0045ac68: movsx edx, word ptr [0x790728] */ r_edx = (u32)(i32)(i16)R16((u32)(0x790728u));
    /* 0045ac6f: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ac71: jg 0x45ac8b */ if ((!fZ&&fS==fO)) goto L_0045ac8b;
L_0045ac73:; BB(0x0045ac73);
    /* 0045ac73: movsx eax, word ptr [0x790730] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790730u));
    /* 0045ac7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac7b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ac7e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045ac80: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ac83: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0045ac89: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ac8bu); call_ind(t); }
L_0045ac8b:; BB(0x0045ac8b);
    /* 0045ac8b: movsx ecx, word ptr [0x790730] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790730u));
    /* 0045ac92: movsx edx, word ptr [0x790724] */ r_edx = (u32)(i32)(i16)R16((u32)(0x790724u));
    /* 0045ac99: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ac9b: jg 0x45acb5 */ if ((!fZ&&fS==fO)) goto L_0045acb5;
L_0045ac9d:; BB(0x0045ac9d);
    /* 0045ac9d: movsx eax, word ptr [0x790730] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790730u));
    /* 0045aca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045aca5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045aca8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045acaa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045acad: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0045acb3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45acb5u); call_ind(t); }
L_0045acb5:; BB(0x0045acb5);
    /* 0045acb5: movsx ecx, word ptr [0x790730] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790730u));
    /* 0045acbc: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045acbf: jne 0x45acfc */ if (!fZ) goto L_0045acfc;
L_0045acc1:; BB(0x0045acc1);
    /* 0045acc1: mov edx, dword ptr [0x790740] */ r_edx = R32((u32)(0x790740u));
    /* 0045acc7: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0045acca: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045acd0: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0045acd3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045acd5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0045acd8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45acdau); call_ind(t); }
    /* 0045acda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045acdc: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045ace2: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 0045ace5: mov eax, dword ptr [0x790740] */ r_eax = R32((u32)(0x790740u));
    /* 0045acea: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0045aced: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045acef: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0045acf5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45acf7u); call_ind(t); }
    /* 0045acf7: jmp 0x45adfa */ goto L_0045adfa;
L_0045acfc:; BB(0x0045acfc);
    /* 0045acfc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045acff: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ad03: je 0x45ad0e */ if (fZ) goto L_0045ad0e;
L_0045ad05:; BB(0x0045ad05);
    /* 0045ad05: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ad08: cmp dword ptr [edx + 0x20], 2 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ad0c: jne 0x45ad3d */ if (!fZ) goto L_0045ad3d;
L_0045ad0e:; BB(0x0045ad0e);
    /* 0045ad0e: movsx eax, word ptr [0x790730] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790730u));
    /* 0045ad15: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ad18: jne 0x45ad3d */ if (!fZ) goto L_0045ad3d;
L_0045ad1a:; BB(0x0045ad1a);
    /* 0045ad1a: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad1c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ad1f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045ad21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ad24: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0045ad27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ad29u); call_ind(t); }
    /* 0045ad29: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad2b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ad2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045ad30: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ad33: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0045ad36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ad38u); call_ind(t); }
    /* 0045ad38: jmp 0x45adfa */ goto L_0045adfa;
L_0045ad3d:; BB(0x0045ad3d);
    /* 0045ad3d: movsx ecx, word ptr [0x790730] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790730u));
    /* 0045ad44: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ad47: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0045ad4a: movsx edx, word ptr [ebp + eax*2 - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xffffffe4u));
    /* 0045ad4f: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ad51: jle 0x45adfa */ if ((fZ||fS!=fO)) goto L_0045adfa;
L_0045ad57:; BB(0x0045ad57);
    /* 0045ad57: movsx eax, word ptr [0x79072c] */ r_eax = (u32)(i32)(i16)R16((u32)(0x79072cu));
    /* 0045ad5e: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ad61: jge 0x45adfa */ if ((fS==fO)) goto L_0045adfa;
L_0045ad67:; BB(0x0045ad67);
    /* 0045ad67: movsx ecx, word ptr [0x79072c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x79072cu));
    /* 0045ad6e: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ad71: jne 0x45ad96 */ if (!fZ) goto L_0045ad96;
L_0045ad73:; BB(0x0045ad73);
    /* 0045ad73: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045ad79: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 0045ad7c: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x45ad81u); f_006436c0();
    /* 0045ad81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad82: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ad85: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0045ad88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad89: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045ad8f: call 0x460500 */ r_esp -= 4; W32(r_esp, 0x45ad94u); f_00460500();
    /* 0045ad94: jmp 0x45add8 */ goto L_0045add8;
L_0045ad96:; BB(0x0045ad96);
    /* 0045ad96: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045ad9c: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 0045ad9f: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x45ada4u); f_006436c0();
    /* 0045ada4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ada5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ada8: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0045adab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045adac: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045adb2: call 0x460500 */ r_esp -= 4; W32(r_esp, 0x45adb7u); f_00460500();
    /* 0045adb7: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045adbd: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 0045adc0: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x45adc5u); f_006436c0();
    /* 0045adc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045adc6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045adc9: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0045adcc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045adcd: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045add3: call 0x460500 */ r_esp -= 4; W32(r_esp, 0x45add8u); f_00460500();
L_0045add8:; BB(0x0045add8);
    /* 0045add8: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045adde: call 0x4587e0 */ r_esp -= 4; W32(r_esp, 0x45ade3u); f_004587e0();
    /* 0045ade3: movsx edx, word ptr [0x79072c] */ r_edx = (u32)(i32)(i16)R16((u32)(0x79072cu));
    /* 0045adea: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045aded: mov word ptr [0x79072c], dx */ W16((u32)(0x79072cu), (u16)r_edx);
    /* 0045adf4: mov word ptr [ebp - 4], 2 */ W16((u32)(r_ebp+0xfffffffcu), 0x2u);
L_0045adfa:; BB(0x0045adfa);
    /* 0045adfa: movsx eax, word ptr [0x790730] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790730u));
    /* 0045ae01: movsx ecx, word ptr [0x790728] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x790728u));
    /* 0045ae08: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ae0a: jl 0x45ae1e */ if ((fS!=fO)) goto L_0045ae1e;
L_0045ae0c:; BB(0x0045ae0c);
    /* 0045ae0c: movsx edx, word ptr [0x790730] */ r_edx = (u32)(i32)(i16)R16((u32)(0x790730u));
    /* 0045ae13: movsx eax, word ptr [0x790724] */ r_eax = (u32)(i32)(i16)R16((u32)(0x790724u));
    /* 0045ae1a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ae1c: jge 0x45ae2f */ if ((fS==fO)) goto L_0045ae2f;
L_0045ae1e:; BB(0x0045ae1e);
    /* 0045ae1e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae20: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ae23: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045ae25: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ae28: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045ae2b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ae2du); call_ind(t); }
    /* 0045ae2d: jmp 0x45ae3e */ goto L_0045ae3e;
L_0045ae2f:; BB(0x0045ae2f);
    /* 0045ae2f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae31: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ae34: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045ae36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ae39: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045ae3c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ae3eu); call_ind(t); }
L_0045ae3e:; BB(0x0045ae3e);
    /* 0045ae3e: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0045ae42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae43: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ae46: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045ae48: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ae4b: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0045ae4e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45ae50u); call_ind(t); }
    /* 0045ae50: jmp 0x45ae7d */ goto L_0045ae7d;
L_0045ae52:; BB(0x0045ae52);
    /* 0045ae52: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ae55: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ae59: je 0x45ae70 */ if (fZ) goto L_0045ae70;
L_0045ae5b:; BB(0x0045ae5b);
    /* 0045ae5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae5d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ae60: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0045ae63: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ae66: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0045ae69: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045ae6b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0045ae6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ae70u); call_ind(t); }
L_0045ae70:; BB(0x0045ae70);
    /* 0045ae70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae72: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ae75: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0045ae78: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x45ae7du); f_005fc420();
L_0045ae7d:; BB(0x0045ae7d);
    /* 0045ae7d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045ae80: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045ae82: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x45ae87u); f_00686d72();
    /* 0045ae87: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ae89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ae8a: ret  */ FN_RET(0x0045ab50); r_esp += 4; return;
}

