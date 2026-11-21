#include "protos.h"

void f_00629000(void) /* sub_629000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629000);
    /* 00629000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629001: mov ebp, esp */ r_ebp = r_esp;
    /* 00629003: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629006: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00629009: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062900c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062900e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00629011: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00629017: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x629019u); call_ind(t); }
    /* 00629019: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062901c: jge 0x62903c */ if ((fS==fO)) goto L_0062903c;
L_0062901e:; BB(0x0062901e);
    /* 0062901e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00629021: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629022: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00629025: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00629028: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x62902du); f_0060ca40();
    /* 0062902d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00629030: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629033: call 0x629cc0 */ r_esp -= 4; W32(r_esp, 0x629038u); f_00629cc0();
    /* 00629038: jmp 0x62903e */ goto L_0062903e;
L_0062903c:; BB(0x0062903c);
    /* 0062903c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0062903e:; BB(0x0062903e);
    /* 0062903e: mov esp, ebp */ r_esp = r_ebp;
    /* 00629040: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629041: ret 4 */ FN_RET(0x00629000); r_esp += 8; return;
}

void f_00629080(void) /* sub_629080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629080);
    /* 00629080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629081: mov ebp, esp */ r_ebp = r_esp;
    /* 00629083: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629086: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00629089: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062908d: jl 0x6290c2 */ if ((fS!=fO)) goto L_006290c2;
L_0062908f:; BB(0x0062908f);
    /* 0062908f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00629092: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00629094: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00629097: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0062909d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62909fu); call_ind(t); }
    /* 0062909f: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006290a2: jge 0x6290c2 */ if ((fS==fO)) goto L_006290c2;
L_006290a4:; BB(0x006290a4);
    /* 006290a4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006290a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006290a8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006290ab: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006290ae: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x6290b3u); f_0060ca40();
    /* 006290b3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006290b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006290b9: call 0x629d00 */ r_esp -= 4; W32(r_esp, 0x6290beu); f_00629d00();
    /* 006290be: jmp 0x6290c4 */ goto L_006290c4;
L_006290c2:; BB(0x006290c2);
    /* 006290c2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_006290c4:; BB(0x006290c4);
    /* 006290c4: mov esp, ebp */ r_esp = r_ebp;
    /* 006290c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006290c7: ret 4 */ FN_RET(0x00629080); r_esp += 8; return;
}

void f_00629220(void) /* sub_629220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629220);
    /* 00629220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629221: mov ebp, esp */ r_ebp = r_esp;
    /* 00629223: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629224: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00629227: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062922a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062922d: mov dword ptr [eax + 0x90], ecx */ W32((u32)(r_eax+0x90u), r_ecx);
    /* 00629233: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00629236: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629237: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062923a: call 0x629250 */ r_esp -= 4; W32(r_esp, 0x62923fu); f_00629250();
    /* 0062923f: mov esp, ebp */ r_esp = r_ebp;
    /* 00629241: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629242: ret 8 */ FN_RET(0x00629220); r_esp += 12; return;
}

void f_00629250(void) /* sub_629250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629250);
    /* 00629250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629251: mov ebp, esp */ r_ebp = r_esp;
    /* 00629253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00629257: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062925a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062925d: mov dword ptr [eax + 0x94], ecx */ W32((u32)(r_eax+0x94u), r_ecx);
    /* 00629263: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629266: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00629268: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062926b: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00629271: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x629273u); call_ind(t); }
    /* 00629273: mov esp, ebp */ r_esp = r_ebp;
    /* 00629275: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629276: ret 4 */ FN_RET(0x00629250); r_esp += 8; return;
}

void f_00629d20(void) /* sub_629D20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629d20);
    /* 00629d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00629d23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629d26: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629d29: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00629d2c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00629d2f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00629d32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629d35: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x629d3au); f_00629c70();
    /* 00629d3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629d3b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00629d3e: call 0x629c70 */ r_esp -= 4; W32(r_esp, 0x629d43u); f_00629c70();
    /* 00629d43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629d44: call dword ptr [0x6b21e4] */ { u32 t = R32((u32)(0x6b21e4u)); r_esp -= 4; W32(r_esp, 0x629d4au); call_ind(t); }
    /* 00629d4a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629d4d: mov esp, ebp */ r_esp = r_ebp;
    /* 00629d4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629d50: ret  */ FN_RET(0x00629d20); r_esp += 4; return;
}

