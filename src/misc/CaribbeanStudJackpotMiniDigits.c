#include "protos.h"

void f_004212a0(void) /* CaribbeanStudJackpotMiniDigits::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004212a0);
    /* 004212a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004212a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004212a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004212a5: push 0x69e170 */ { u32 v = 0x69e170u; r_esp -= 4; W32(r_esp, v); }
    /* 004212aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004212b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004212b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004212b2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004212b7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004212b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004212ba: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004212bd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004212c3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004212c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004212c9: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x4212ceu); f_005f5bf0();
    /* 004212ce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004212d5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004212d8: mov dword ptr [eax], 0x6b5edc */ W32((u32)(r_eax), 0x6b5edcu);
    /* 004212de: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004212e0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4212e5u); f_0062fbf0();
    /* 004212e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004212e8: add eax, 0x3106e1 */ {  u32 a = r_eax; u32 b = 0x3106e1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004212ed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004212f0: mov dword ptr [ecx + 0x184], eax */ W32((u32)(r_ecx+0x184u), r_eax);
    /* 004212f6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004212fd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00421300: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00421303: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042130a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042130b: mov esp, ebp */ r_esp = r_ebp;
    /* 0042130d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042130e: ret  */ FN_RET(0x004212a0); r_esp += 4; return;
}

void f_00421310(void) /* CaribbeanStudJackpotMiniDigits::vfunc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00421310);
    /* 00421310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00421311: mov ebp, esp */ r_ebp = r_esp;
    /* 00421313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00421317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042131a: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x42131fu); f_005eb220();
    /* 0042131f: and eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00421324: jns 0x42132b */ if (!fS) goto L_0042132b;
L_00421326:; BB(0x00421326);
    /* 00421326: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00421327: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042132a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0042132b:; BB(0x0042132b);
    /* 0042132b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042132d: je 0x421372 */ if (fZ) goto L_00421372;
L_0042132f:; BB(0x0042132f);
    /* 0042132f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421332: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 00421338: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00421339: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042133c: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x421341u); f_005eaf00();
    /* 00421341: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421344: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 0042134a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042134d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421350: mov dword ptr [ecx + 0x184], eax */ W32((u32)(r_ecx+0x184u), r_eax);
    /* 00421356: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421359: cmp dword ptr [edx + 0x184], 0x3106e3 */ {  u32 a = R32((u32)(r_edx+0x184u)); u32 b = 0x3106e3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00421363: jle 0x421372 */ if ((fZ||fS!=fO)) goto L_00421372;
L_00421365:; BB(0x00421365);
    /* 00421365: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421368: mov dword ptr [eax + 0x184], 0x3106e1 */ W32((u32)(r_eax+0x184u), 0x3106e1u);
L_00421372:; BB(0x00421372);
    /* 00421372: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00421375: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x42137au); f_005eb220();
    /* 0042137a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042137c: jne 0x42138c */ if (!fZ) goto L_0042138c;
L_0042137e:; BB(0x0042137e);
    /* 0042137e: mov ecx, dword ptr [0x790360] */ r_ecx = R32((u32)(0x790360u));
    /* 00421384: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 00421387: call 0x421070 */ r_esp -= 4; W32(r_esp, 0x42138cu); f_00421070();
L_0042138c:; BB(0x0042138c);
    /* 0042138c: mov esp, ebp */ r_esp = r_ebp;
    /* 0042138e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042138f: ret  */ FN_RET(0x00421310); r_esp += 4; return;
}

