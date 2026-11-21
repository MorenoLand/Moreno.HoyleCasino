#include "protos.h"

void f_006058b0(void) /* sciSliderRuler::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006058b0);
    /* 006058b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006058b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006058b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006058b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006058b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006058ba: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x6058bfu); f_005eaaf0();
    /* 006058bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006058c2: mov dword ptr [eax], 0x6d7a2c */ W32((u32)(r_eax), 0x6d7a2cu);
    /* 006058c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006058cb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006058ce: mov dword ptr [ecx + 0x178], edx */ W32((u32)(r_ecx+0x178u), r_edx);
    /* 006058d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006058d7: mov esp, ebp */ r_esp = r_ebp;
    /* 006058d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006058da: ret 4 */ FN_RET(0x006058b0); r_esp += 8; return;
}

void f_00605900(void) /* sciSliderRuler::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605900);
    /* 00605900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605901: mov ebp, esp */ r_ebp = r_esp;
    /* 00605903: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00605906: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00605909: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060590c: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00605912: call 0x6050d0 */ r_esp -= 4; W32(r_esp, 0x605917u); f_006050d0();
    /* 00605917: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060591a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060591c: je 0x605967 */ if (fZ) goto L_00605967;
L_0060591e:; BB(0x0060591e);
    /* 0060591e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00605921: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605922: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605925: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0060592b: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 0060592e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605931: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00605937: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0060593a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0060593c: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00605942: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605944u); call_ind(t); }
    /* 00605944: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00605947: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605949: jne 0x605967 */ if (!fZ) goto L_00605967;
L_0060594b:; BB(0x0060594b);
    /* 0060594b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060594e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060594f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605952: call 0x5f4b60 */ r_esp -= 4; W32(r_esp, 0x605957u); f_005f4b60();
    /* 00605957: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0060595a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060595c: je 0x605967 */ if (fZ) goto L_00605967;
L_0060595e:; BB(0x0060595e);
    /* 0060595e: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00605965: jmp 0x60596e */ goto L_0060596e;
L_00605967:; BB(0x00605967);
    /* 00605967: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0060596e:; BB(0x0060596e);
    /* 0060596e: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00605971: mov esp, ebp */ r_esp = r_ebp;
    /* 00605973: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605974: ret 4 */ FN_RET(0x00605900); r_esp += 8; return;
}

void f_00605980(void) /* sciSliderRuler::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00605980);
    /* 00605980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00605981: mov ebp, esp */ r_ebp = r_esp;
    /* 00605983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00605984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00605987: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060598a: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00605990: call 0x6050f0 */ r_esp -= 4; W32(r_esp, 0x605995u); f_006050f0();
    /* 00605995: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00605998: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060599a: je 0x605a25 */ if (fZ) goto L_00605a25;
L_006059a0:; BB(0x006059a0);
    /* 006059a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006059a3: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 006059a9: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006059ac: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x6059b1u); f_005f5550();
    /* 006059b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006059b4: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006059b7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006059b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006059ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006059bd: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 006059c3: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 006059c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006059c9: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 006059cf: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 006059d2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006059d4: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 006059d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6059d9u); call_ind(t); }
    /* 006059d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006059dc: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 006059e2: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 006059e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006059e8: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 006059ee: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 006059f1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006059f3: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 006059f6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6059f8u); call_ind(t); }
    /* 006059f8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006059fb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006059fe: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00605a00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605a01: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605a04: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00605a0a: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00605a0d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605a10: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00605a16: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00605a19: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00605a1b: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00605a1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605a20u); call_ind(t); }
    /* 00605a20: jmp 0x605aa5 */ goto L_00605aa5;
L_00605a25:; BB(0x00605a25);
    /* 00605a25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605a28: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 00605a2e: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00605a31: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x605a36u); f_005f5590();
    /* 00605a36: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00605a39: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00605a3c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00605a3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605a3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605a42: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00605a48: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00605a4b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605a4e: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00605a54: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00605a57: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00605a59: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00605a5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605a5eu); call_ind(t); }
    /* 00605a5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605a61: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 00605a67: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00605a6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605a6d: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 00605a73: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00605a76: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00605a78: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00605a7b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x605a7du); call_ind(t); }
    /* 00605a7d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00605a80: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00605a83: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00605a85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00605a86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605a89: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00605a8f: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00605a92: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605a95: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00605a9b: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 00605a9e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00605aa0: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 00605aa3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605aa5u); call_ind(t); }
L_00605aa5:; BB(0x00605aa5);
    /* 00605aa5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605aa8: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 00605aae: call 0x6052f0 */ r_esp -= 4; W32(r_esp, 0x605ab3u); f_006052f0();
    /* 00605ab3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605ab6: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00605aba: je 0x605ade */ if (fZ) goto L_00605ade;
L_00605abc:; BB(0x00605abc);
    /* 00605abc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605abf: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 00605ac5: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x605acau); f_005f5400();
    /* 00605aca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00605acb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605ace: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00605ad1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605ad4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00605ad7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00605ad9: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00605adc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x605adeu); call_ind(t); }
L_00605ade:; BB(0x00605ade);
    /* 00605ade: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00605ae1: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 00605ae7: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00605aea: mov byte ptr [eax + 8], 1 */ W8((u32)(r_eax+0x8u), 0x1u);
    /* 00605aee: mov esp, ebp */ r_esp = r_ebp;
    /* 00605af0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00605af1: ret 4 */ FN_RET(0x00605980); r_esp += 8; return;
}

