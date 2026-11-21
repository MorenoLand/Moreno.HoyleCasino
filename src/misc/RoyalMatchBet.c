#include "protos.h"

void f_005b85e0(void) /* RoyalMatchBet::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b85e0);
    /* 005b85e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b85e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b85e3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b85e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b85e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005b85ea: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b85f0: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b85f5u); f_005b4f00();
    /* 005b85f5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b85f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b85fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b85fc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8601u); f_005dcb00();
    /* 005b8601: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8604: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8606: jne 0x5b860d */ if (!fZ) goto L_005b860d;
L_005b8608:; BB(0x005b8608);
    /* 005b8608: jmp 0x5b890b */ goto L_005b890b;
L_005b860d:; BB(0x005b860d);
    /* 005b860d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8610: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8611: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 005b8614: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8615: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8618: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b861e: mov ecx, dword ptr [ecx + eax*4 + 0x580] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x580u));
    /* 005b8625: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5b862au); f_005cb880();
    /* 005b862a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b862d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b862e: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005b8631: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8632: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8635: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005b863b: mov ecx, dword ptr [edx + ecx*4 + 0x634] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x634u));
    /* 005b8642: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5b8647u); f_005cb880();
    /* 005b8647: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b864a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b864b: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005b864e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b864f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8652: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5b8657u); f_005cb880();
    /* 005b8657: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b865a: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b865d: jne 0x5b8676 */ if (!fZ) goto L_005b8676;
L_005b865f:; BB(0x005b865f);
    /* 005b865f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8662: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8663: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8666: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8667: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b866cu); f_005dcb00();
    /* 005b866c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b866f: mov ecx, eax */ r_ecx = r_eax;
    /* 005b8671: call 0x5d5de0 */ r_esp -= 4; W32(r_esp, 0x5b8676u); f_005d5de0();
L_005b8676:; BB(0x005b8676);
    /* 005b8676: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8679: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b867c: jne 0x5b86b5 */ if (!fZ) goto L_005b86b5;
L_005b867e:; BB(0x005b867e);
    /* 005b867e: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005b8683: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b8685: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b868b: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005b8691: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b8693u); call_ind(t); }
    /* 005b8693: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8696: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 005b8698: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b869b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005b869e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b869f: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005b86a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b86a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b86a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b86a6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b86abu); f_005dcb00();
    /* 005b86ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b86ae: mov ecx, eax */ r_ecx = r_eax;
    /* 005b86b0: call 0x5d5e10 */ r_esp -= 4; W32(r_esp, 0x5b86b5u); f_005d5e10();
L_005b86b5:; BB(0x005b86b5);
    /* 005b86b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b86b8: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b86bb: jle 0x5b87f8 */ if ((fZ||fS!=fO)) goto L_005b87f8;
L_005b86c1:; BB(0x005b86c1);
    /* 005b86c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b86c4: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005b86ca: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b86cd: cmp eax, dword ptr [edx + ecx*4 + 0x634] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4+0x634u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b86d4: jne 0x5b86e5 */ if (!fZ) goto L_005b86e5;
L_005b86d6:; BB(0x005b86d6);
    /* 005b86d6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005b86db: sub ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b86de: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b86e1: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005b86e3: jmp 0x5b8725 */ goto L_005b8725;
L_005b86e5:; BB(0x005b86e5);
    /* 005b86e5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b86e8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b86eb: add esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b86ed: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b86f3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b86f5: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b86fb: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005b8701: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b8703u); call_ind(t); }
    /* 005b8703: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8705: jge 0x5b8725 */ if ((fS==fO)) goto L_005b8725;
L_005b8707:; BB(0x005b8707);
    /* 005b8707: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b870d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b870f: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b8715: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005b871b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b871du); call_ind(t); }
    /* 005b871d: sub eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b8720: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8723: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_005b8725:; BB(0x005b8725);
    /* 005b8725: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8728: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8729: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b872eu); f_005dcb00();
    /* 005b872e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b8731: mov ecx, eax */ r_ecx = r_eax;
    /* 005b8733: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5b8738u); f_005d5a50();
    /* 005b8738: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b873b: cmp dword ptr [ecx], eax */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b873d: jle 0x5b8757 */ if ((fZ||fS!=fO)) goto L_005b8757;
L_005b873f:; BB(0x005b873f);
    /* 005b873f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8742: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8743: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b8748u); f_005dcb00();
    /* 005b8748: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b874b: mov ecx, eax */ r_ecx = r_eax;
    /* 005b874d: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5b8752u); f_005d5a50();
    /* 005b8752: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8755: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_005b8757:; BB(0x005b8757);
    /* 005b8757: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b875a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b875d: add esi, dword ptr [edx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b875f: mov eax, dword ptr [0x793600] */ r_eax = R32((u32)(0x793600u));
    /* 005b8764: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005b8766: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b876c: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 005b8772: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b8774u); call_ind(t); }
    /* 005b8774: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8776: jle 0x5b8796 */ if ((fZ||fS!=fO)) goto L_005b8796;
L_005b8778:; BB(0x005b8778);
    /* 005b8778: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b877e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b8780: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b8786: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 005b878c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b878eu); call_ind(t); }
    /* 005b878e: sub eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b8791: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b8794: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_005b8796:; BB(0x005b8796);
    /* 005b8796: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8799: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005b879e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b87a1: cmp ecx, dword ptr [eax + edx*4 + 0x634] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_edx*4+0x634u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b87a8: jne 0x5b87b7 */ if (!fZ) goto L_005b87b7;
L_005b87aa:; BB(0x005b87aa);
    /* 005b87aa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b87ad: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b87b0: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b87b2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b87b5: jl 0x5b87ee */ if ((fS!=fO)) goto L_005b87ee;
L_005b87b7:; BB(0x005b87b7);
    /* 005b87b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b87ba: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005b87c0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b87c3: cmp eax, dword ptr [edx + ecx*4 + 0x580] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4+0x580u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b87ca: jne 0x5b87f3 */ if (!fZ) goto L_005b87f3;
L_005b87cc:; BB(0x005b87cc);
    /* 005b87cc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b87cf: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b87d2: add esi, dword ptr [ecx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b87d4: mov edx, dword ptr [0x793600] */ r_edx = R32((u32)(0x793600u));
    /* 005b87da: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b87dc: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b87e2: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 005b87e8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b87eau); call_ind(t); }
    /* 005b87ea: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b87ec: jge 0x5b87f3 */ if ((fS==fO)) goto L_005b87f3;
L_005b87ee:; BB(0x005b87ee);
    /* 005b87ee: jmp 0x5b890b */ goto L_005b890b;
L_005b87f3:; BB(0x005b87f3);
    /* 005b87f3: jmp 0x5b88ef */ goto L_005b88ef;
L_005b87f8:; BB(0x005b87f8);
    /* 005b87f8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b87fb: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b87fe: jge 0x5b88ef */ if ((fS==fO)) goto L_005b88ef;
L_005b8804:; BB(0x005b8804);
    /* 005b8804: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8807: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005b880d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8810: cmp eax, dword ptr [edx + ecx*4 + 0x634] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx*4+0x634u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8817: jne 0x5b8826 */ if (!fZ) goto L_005b8826;
L_005b8819:; BB(0x005b8819);
    /* 005b8819: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b881c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b881f: add edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b8821: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8824: jl 0x5b885d */ if ((fS!=fO)) goto L_005b885d;
L_005b8826:; BB(0x005b8826);
    /* 005b8826: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8829: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b882f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8832: cmp edx, dword ptr [ecx + eax*4 + 0x580] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax*4+0x580u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8839: jne 0x5b8867 */ if (!fZ) goto L_005b8867;
L_005b883b:; BB(0x005b883b);
    /* 005b883b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b883e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b8841: add esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b8843: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b8849: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b884b: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b8851: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005b8857: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b8859u); call_ind(t); }
    /* 005b8859: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b885b: jge 0x5b8867 */ if ((fS==fO)) goto L_005b8867;
L_005b885d:; BB(0x005b885d);
    /* 005b885d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b8860: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b8862: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8865: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_005b8867:; BB(0x005b8867);
    /* 005b8867: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b886a: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b8870: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8873: cmp edx, dword ptr [ecx + eax*4 + 0x580] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax*4+0x580u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b887a: jne 0x5b88ef */ if (!fZ) goto L_005b88ef;
L_005b887c:; BB(0x005b887c);
    /* 005b887c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b887f: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b8882: add esi, dword ptr [eax] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005b8884: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b888a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005b888c: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b8892: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005b8898: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5b889au); call_ind(t); }
    /* 005b889a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b889c: jge 0x5b88ef */ if ((fS==fO)) goto L_005b88ef;
L_005b889e:; BB(0x005b889e);
    /* 005b889e: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b88a2: jle 0x5b88ef */ if ((fZ||fS!=fO)) goto L_005b88ef;
L_005b88a4:; BB(0x005b88a4);
    /* 005b88a4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b88a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b88a8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b88ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b88ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b88af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b88b0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b88b5u); f_005dcb00();
    /* 005b88b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b88b8: mov ecx, eax */ r_ecx = r_eax;
    /* 005b88ba: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5b88bfu); f_005d5cf0();
    /* 005b88bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b88c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b88c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b88c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b88c8: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005b88cd: mov ecx, dword ptr [eax + edx*4 + 0x634] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x634u));
    /* 005b88d4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b88d7: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005b88dc: mov edx, dword ptr [eax + edx*4 + 0x634] */ r_edx = R32((u32)(r_eax+r_edx*4+0x634u));
    /* 005b88e3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005b88e5: mov ecx, edx */ r_ecx = r_edx;
    /* 005b88e7: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 005b88ed: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5b88efu); call_ind(t); }
L_005b88ef:; BB(0x005b88ef);
    /* 005b88ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b88f2: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b88f5: jne 0x5b88f9 */ if (!fZ) goto L_005b88f9;
L_005b88f7:; BB(0x005b88f7);
    /* 005b88f7: jmp 0x5b890b */ goto L_005b890b;
L_005b88f9:; BB(0x005b88f9);
    /* 005b88f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b88fb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b88fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b88ff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8902: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8903: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b8906: call 0x5cba10 */ r_esp -= 4; W32(r_esp, 0x5b890bu); f_005cba10();
L_005b890b:; BB(0x005b890b);
    /* 005b890b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b890c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b890e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b890f: ret 0xc */ FN_RET(0x005b85e0); r_esp += 16; return;
}

void f_005b8920(void) /* RoyalMatchBet::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8920);
    /* 005b8920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8921: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8923: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b8926: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005b8929: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b892f: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b8934u); f_005b4f00();
    /* 005b8934: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8937: je 0x5b89a7 */ if (fZ) goto L_005b89a7;
L_005b8939:; BB(0x005b8939);
    /* 005b8939: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b893f: call 0x5b4ed0 */ r_esp -= 4; W32(r_esp, 0x5b8944u); f_005b4ed0();
    /* 005b8944: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b8947: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b894a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b894fu); f_0063aac0();
    /* 005b894f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005b8951: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005b8954: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8958: je 0x5b8976 */ if (fZ) goto L_005b8976;
L_005b895a:; BB(0x005b895a);
    /* 005b895a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b895d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5b8962u); f_0063aac0();
    /* 005b8962: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005b8964: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b8967: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b896b: je 0x5b8976 */ if (fZ) goto L_005b8976;
L_005b896d:; BB(0x005b896d);
    /* 005b896d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005b8974: jmp 0x5b897d */ goto L_005b897d;
L_005b8976:; BB(0x005b8976);
    /* 005b8976: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_005b897d:; BB(0x005b897d);
    /* 005b897d: movzx edx, byte ptr [ebp - 0x28] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 005b8981: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8983: je 0x5b89a7 */ if (fZ) goto L_005b89a7;
L_005b8985:; BB(0x005b8985);
    /* 005b8985: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b898b: call 0x5b4ed0 */ r_esp -= 4; W32(r_esp, 0x5b8990u); f_005b4ed0();
    /* 005b8990: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b8993: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b8996: mov cl, byte ptr [eax + 0x4a0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a0u))) & 0xffu);
    /* 005b899c: mov byte ptr [ebp - 0x1d], cl */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_ecx);
    /* 005b899f: movzx edx, byte ptr [ebp - 0x1d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe3u));
    /* 005b89a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b89a5: je 0x5b89ab */ if (fZ) goto L_005b89ab;
L_005b89a7:; BB(0x005b89a7);
    /* 005b89a7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b89a9: jmp 0x5b8a24 */ goto L_005b8a24;
L_005b89ab:; BB(0x005b89ab);
    /* 005b89ab: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b89b1: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5b89b6u); f_005b4f00();
    /* 005b89b6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b89b9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b89bc: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5b89c1u); f_005f5400();
    /* 005b89c1: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b89c4: jne 0x5b8a1a */ if (!fZ) goto L_005b8a1a;
L_005b89c6:; BB(0x005b89c6);
    /* 005b89c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b89c9: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b89cf: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b89d2: cmp edx, dword ptr [ecx + eax*4 + 0x580] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax*4+0x580u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b89d9: je 0x5b8a11 */ if (fZ) goto L_005b8a11;
L_005b89db:; BB(0x005b89db);
    /* 005b89db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b89de: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b89e4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b89e7: cmp edx, dword ptr [ecx + eax*4 + 0x634] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax*4+0x634u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b89ee: jne 0x5b8a1a */ if (!fZ) goto L_005b8a1a;
L_005b89f0:; BB(0x005b89f0);
    /* 005b89f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b89f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b89f4: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005b89f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b89f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b89fb: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005b8a00: mov ecx, dword ptr [eax + edx*4 + 0x580] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x580u));
    /* 005b8a07: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x5b8a0cu); f_005cb880();
    /* 005b8a0c: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b8a0f: jle 0x5b8a1a */ if ((fZ||fS!=fO)) goto L_005b8a1a;
L_005b8a11:; BB(0x005b8a11);
    /* 005b8a11: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005b8a18: jmp 0x5b8a21 */ goto L_005b8a21;
L_005b8a1a:; BB(0x005b8a1a);
    /* 005b8a1a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005b8a21:; BB(0x005b8a21);
    /* 005b8a21: mov al, byte ptr [ebp - 0x2c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd4u))) & 0xffu);
L_005b8a24:; BB(0x005b8a24);
    /* 005b8a24: mov esp, ebp */ r_esp = r_ebp;
    /* 005b8a26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8a27: ret  */ FN_RET(0x005b8920); r_esp += 4; return;
}

void f_005b8a30(void) /* RoyalMatchBet::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b8a30);
    /* 005b8a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a31: mov ebp, esp */ r_ebp = r_esp;
    /* 005b8a33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b8a37: cmp dword ptr [0x7935f8], 0 */ {  u32 a = R32((u32)(0x7935f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8a3e: je 0x5b8aa7 */ if (fZ) goto L_005b8aa7;
L_005b8a40:; BB(0x005b8a40);
    /* 005b8a40: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8a43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a44: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b8a4a: call 0x5b6660 */ r_esp -= 4; W32(r_esp, 0x5b8a4fu); f_005b6660();
    /* 005b8a4f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b8a52: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8a54: je 0x5b8a6c */ if (fZ) goto L_005b8a6c;
L_005b8a56:; BB(0x005b8a56);
    /* 005b8a56: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a58: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8a5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a5c: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b8a62: call 0x5b5010 */ r_esp -= 4; W32(r_esp, 0x5b8a67u); f_005b5010();
    /* 005b8a67: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8a6a: je 0x5b8aa7 */ if (fZ) goto L_005b8aa7;
L_005b8a6c:; BB(0x005b8a6c);
    /* 005b8a6c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8a6f: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005b8a75: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b8a78: cmp edx, dword ptr [ecx + eax*4 + 0x634] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax*4+0x634u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b8a7f: jne 0x5b8a94 */ if (!fZ) goto L_005b8a94;
L_005b8a81:; BB(0x005b8a81);
    /* 005b8a81: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b8a86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a87: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b8a8d: call 0x5a8210 */ r_esp -= 4; W32(r_esp, 0x5b8a92u); f_005a8210();
    /* 005b8a92: jmp 0x5b8aa7 */ goto L_005b8aa7;
L_005b8a94:; BB(0x005b8a94);
    /* 005b8a94: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b8a97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a98: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b8a9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b8a9c: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005b8aa2: call 0x5a8210 */ r_esp -= 4; W32(r_esp, 0x5b8aa7u); f_005a8210();
L_005b8aa7:; BB(0x005b8aa7);
    /* 005b8aa7: mov esp, ebp */ r_esp = r_ebp;
    /* 005b8aa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b8aaa: ret 8 */ FN_RET(0x005b8a30); r_esp += 12; return;
}

