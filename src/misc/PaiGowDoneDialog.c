#include "protos.h"

void f_0045ae90(void) /* PaiGowDoneDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ae90);
    /* 0045ae90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae91: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ae93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045ae97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ae9e: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x45aea3u); f_005f71f0();
    /* 0045aea3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045aea6: mov dword ptr [eax], 0x6b99f4 */ W32((u32)(r_eax), 0x6b99f4u);
    /* 0045aeac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045aeaf: mov esp, ebp */ r_esp = r_ebp;
    /* 0045aeb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045aeb2: ret  */ FN_RET(0x0045ae90); r_esp += 4; return;
}

void f_0045aee0(void) /* PaiGowDoneDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045aee0);
    /* 0045aee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045aee1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045aee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045aee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045aee7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aee9: push 0x415 */ { u32 v = 0x415u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aeee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045aef1: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x45aef6u); f_005f83d0();
    /* 0045aef6: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aef8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045aefb: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x45af00u); f_005f89d0();
    /* 0045af00: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045af02: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af06: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af08: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af0a: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af0c: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af11: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0045af13: push 0x6b9a68 */ { u32 v = 0x6b9a68u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af18: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45af1du); f_00630f40();
    /* 0045af1d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045af20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045af21: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045af23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045af28: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x45af2du); f_005fa5b0();
    /* 0045af2d: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0045af2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045af31: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0045af33: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0045af35: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af37: push 0x6b9a50 */ { u32 v = 0x6b9a50u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af3c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45af41u); f_00630f40();
    /* 0045af41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045af44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045af45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af47: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af49: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af4b: push 0x30d4e6 */ { u32 v = 0x30d4e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045af57: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x45af5cu); f_005f9de0();
    /* 0045af5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af5e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af60: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045af62: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af64: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af66: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0045af68: push 0x6b9a34 */ { u32 v = 0x6b9a34u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af6d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45af72u); f_00630f40();
    /* 0045af72: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045af75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045af76: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af78: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af7a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af7c: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045af85: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045af88: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x45af8du); f_005f9ef0();
    /* 0045af8d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045af8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045af90: ret  */ FN_RET(0x0045aee0); r_esp += 4; return;
}

void f_0045afa0(void) /* PaiGowDoneDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045afa0);
    /* 0045afa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045afa1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045afa3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045afa6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045afa9: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045afae: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 0045afb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045afb7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045afbb: jne 0x45b08e */ if (!fZ) goto L_0045b08e;
L_0045afc1:; BB(0x0045afc1);
    /* 0045afc1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045afc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045afc5: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045afcb: call 0x461320 */ r_esp -= 4; W32(r_esp, 0x45afd0u); f_00461320();
    /* 0045afd0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045afd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045afd5: jne 0x45b03b */ if (!fZ) goto L_0045b03b;
L_0045afd7:; BB(0x0045afd7);
    /* 0045afd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045afd9: push 0x6b97a8 */ { u32 v = 0x6b97a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045afde: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45afe3u); f_00630f40();
    /* 0045afe3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045afe6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045afe7: push 0x6b978c */ { u32 v = 0x6b978cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045afec: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45aff1u); f_00630f40();
    /* 0045aff1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045aff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045aff5: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x45affau); f_0062ff10();
    /* 0045affa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045affd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b000: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0045b006: mov word ptr [edx + ecx*2 + 0xa2], 0 */ W16((u32)(r_edx+r_ecx*2+0xa2u), 0x0u);
    /* 0045b010: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b013: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b019: mov word ptr [ecx + eax*2 + 0xac], 0 */ W16((u32)(r_ecx+r_eax*2+0xacu), 0x0u);
    /* 0045b023: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045b029: call 0x459780 */ r_esp -= 4; W32(r_esp, 0x45b02eu); f_00459780();
    /* 0045b02e: mov ecx, dword ptr [0x79073c] */ r_ecx = R32((u32)(0x79073cu));
    /* 0045b034: call 0x45b300 */ r_esp -= 4; W32(r_esp, 0x45b039u); f_0045b300();
    /* 0045b039: jmp 0x45b08e */ goto L_0045b08e;
L_0045b03b:; BB(0x0045b03b);
    /* 0045b03b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045b03e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b03f: mov ecx, dword ptr [0x79073c] */ r_ecx = R32((u32)(0x79073cu));
    /* 0045b045: call 0x45c0a0 */ r_esp -= 4; W32(r_esp, 0x45b04au); f_0045c0a0();
    /* 0045b04a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045b04d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b04f: jne 0x45b053 */ if (!fZ) goto L_0045b053;
L_0045b051:; BB(0x0045b051);
    /* 0045b051: jmp 0x45b08e */ goto L_0045b08e;
L_0045b053:; BB(0x0045b053);
    /* 0045b053: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b055: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045b058: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45b05du); f_005fb350();
    /* 0045b05d: mov ecx, eax */ r_ecx = r_eax;
    /* 0045b05f: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x45b064u); f_00600230();
    /* 0045b064: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045b067: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b069: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0045b06c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b06d: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045b073: call 0x45f920 */ r_esp -= 4; W32(r_esp, 0x45b078u); f_0045f920();
    /* 0045b078: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045b07e: call 0x459780 */ r_esp -= 4; W32(r_esp, 0x45b083u); f_00459780();
    /* 0045b083: mov ecx, dword ptr [0x79073c] */ r_ecx = R32((u32)(0x79073cu));
    /* 0045b089: call 0x45b300 */ r_esp -= 4; W32(r_esp, 0x45b08eu); f_0045b300();
L_0045b08e:; BB(0x0045b08e);
    /* 0045b08e: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b090: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b091: ret 4 */ FN_RET(0x0045afa0); r_esp += 8; return;
}

