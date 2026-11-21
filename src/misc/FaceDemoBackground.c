#include "protos.h"

void f_0066cec0(void) /* FaceDemoBackground::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066cec0);
    /* 0066cec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066cec1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066cec3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066cec5: push 0x6acefb */ { u32 v = 0x6acefbu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ceca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066ced0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ced1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066ced4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066ced9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066cedb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cedc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066cedf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066cee5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0066cee8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066ceeb: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x66cef0u); f_005eaaf0();
    /* 0066cef0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066cef7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066cefa: mov dword ptr [eax], 0x6e0c24 */ W32((u32)(r_eax), 0x6e0c24u);
    /* 0066cf00: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cf05: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66cf0au); f_00686d82();
    /* 0066cf0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066cf0d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066cf10: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066cf14: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cf18: je 0x66cf27 */ if (fZ) goto L_0066cf27;
L_0066cf1a:; BB(0x0066cf1a);
    /* 0066cf1a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066cf1d: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x66cf22u); f_005f5bf0();
    /* 0066cf22: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0066cf25: jmp 0x66cf2e */ goto L_0066cf2e;
L_0066cf27:; BB(0x0066cf27);
    /* 0066cf27: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0066cf2e:; BB(0x0066cf2e);
    /* 0066cf2e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0066cf31: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0066cf34: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066cf38: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066cf3b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066cf3e: mov dword ptr [edx + 0x178], eax */ W32((u32)(r_edx+0x178u), r_eax);
    /* 0066cf44: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066cf46: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cf4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cf4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cf4f: push 0x10cccd */ { u32 v = 0x10cccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0066cf54: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066cf57: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 0066cf5d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x66cf62u); f_005eae80();
    /* 0066cf62: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066cf65: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0066cf6b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066cf6e: mov ecx, dword ptr [ecx + 0x178] */ r_ecx = R32((u32)(r_ecx+0x178u));
    /* 0066cf74: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066cf76: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066cf79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66cf7bu); call_ind(t); }
    /* 0066cf7b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066cf7e: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0066cf84: mov dword ptr [edx + 0x178], 0x4b */ W32((u32)(r_edx+0x178u), 0x4bu);
    /* 0066cf8e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cf90: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66cf95u); f_00686d82();
    /* 0066cf95: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066cf98: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0066cf9b: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0066cf9f: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cfa3: je 0x66cfc4 */ if (fZ) goto L_0066cfc4;
L_0066cfa5:; BB(0x0066cfa5);
    /* 0066cfa5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066cfa8: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0066cfae: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x66cfb3u); f_005eb240();
    /* 0066cfb3: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066cfb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cfb7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066cfba: call 0x66d170 */ r_esp -= 4; W32(r_esp, 0x66cfbfu); f_0066d170();
    /* 0066cfbf: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0066cfc2: jmp 0x66cfcb */ goto L_0066cfcb;
L_0066cfc4:; BB(0x0066cfc4);
    /* 0066cfc4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0066cfcb:; BB(0x0066cfcb);
    /* 0066cfcb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0066cfce: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0066cfd1: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066cfd5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066cfd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066cfd9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066cfdc: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 0066cfe2: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x66cfe7u); f_005f5d50();
    /* 0066cfe7: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0066cfec: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66cff1u); f_00686d82();
    /* 0066cff1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066cff4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0066cff7: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0066cffb: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cfff: je 0x66d00e */ if (fZ) goto L_0066d00e;
L_0066d001:; BB(0x0066d001);
    /* 0066d001: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066d004: call 0x66cdf0 */ r_esp -= 4; W32(r_esp, 0x66d009u); f_0066cdf0();
    /* 0066d009: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0066d00c: jmp 0x66d015 */ goto L_0066d015;
L_0066d00e:; BB(0x0066d00e);
    /* 0066d00e: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0066d015:; BB(0x0066d015);
    /* 0066d015: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066d018: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066d01b: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066d01f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066d022: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066d025: mov dword ptr [edx + 0x17c], eax */ W32((u32)(r_edx+0x17cu), r_eax);
    /* 0066d02b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d02d: push 0x1f5 */ { u32 v = 0x1f5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d032: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d034: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d036: push 0x10ccce */ { u32 v = 0x10ccceu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d03b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066d03e: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0066d044: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x66d049u); f_005eae80();
    /* 0066d049: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066d04c: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0066d052: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066d055: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0066d05b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066d05d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066d060: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d062u); call_ind(t); }
    /* 0066d062: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066d069: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066d06c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066d06f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066d076: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066d077: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d079: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d07a: ret  */ FN_RET(0x0066cec0); r_esp += 4; return;
}

void f_0066d080(void) /* FaceDemoBackground::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066d080);
    /* 0066d080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d081: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d083: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d085: push 0x6acf1e */ { u32 v = 0x6acf1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d08a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066d090: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d091: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d094: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066d099: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066d09b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d09c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066d09f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066d0a5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066d0a8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066d0ab: mov dword ptr [eax], 0x6e0c24 */ W32((u32)(r_eax), 0x6e0c24u);
    /* 0066d0b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066d0b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066d0bb: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 0066d0c1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0066d0c4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066d0c7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0066d0ca: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d0ce: je 0x66d0e3 */ if (fZ) goto L_0066d0e3;
L_0066d0d0:; BB(0x0066d0d0);
    /* 0066d0d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d0d2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066d0d5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066d0d7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066d0da: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066d0dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d0deu); call_ind(t); }
    /* 0066d0de: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0066d0e1: jmp 0x66d0ea */ goto L_0066d0ea;
L_0066d0e3:; BB(0x0066d0e3);
    /* 0066d0e3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0066d0ea:; BB(0x0066d0ea);
    /* 0066d0ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066d0ed: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 0066d0f3: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0066d0f6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066d0f9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0066d0fc: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d100: je 0x66d115 */ if (fZ) goto L_0066d115;
L_0066d102:; BB(0x0066d102);
    /* 0066d102: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d104: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066d107: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066d109: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066d10c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066d10e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d110u); call_ind(t); }
    /* 0066d110: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0066d113: jmp 0x66d11c */ goto L_0066d11c;
L_0066d115:; BB(0x0066d115);
    /* 0066d115: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0066d11c:; BB(0x0066d11c);
    /* 0066d11c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066d123: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066d126: call 0x5eac00 */ r_esp -= 4; W32(r_esp, 0x66d12bu); f_005eac00();
    /* 0066d12b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066d12e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066d135: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066d136: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d138: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d139: ret  */ FN_RET(0x0066d080); r_esp += 4; return;
}

void f_0066d140(void) /* FaceDemoBackground::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066d140);
    /* 0066d140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d141: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066d147: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066d14a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d14b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d14e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066d150: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d153: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0066d159: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d15bu); call_ind(t); }
    /* 0066d15b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066d15e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d160: je 0x66d169 */ if (fZ) goto L_0066d169;
L_0066d162:; BB(0x0066d162);
    /* 0066d162: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066d165: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_0066d169:; BB(0x0066d169);
    /* 0066d169: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d16b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d16c: ret 4 */ FN_RET(0x0066d140); r_esp += 8; return;
}

