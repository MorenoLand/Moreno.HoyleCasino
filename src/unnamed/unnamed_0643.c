#include "protos.h"

void f_006436a0(void) /* sub_6436A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006436a0);
    /* 006436a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006436a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006436a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006436a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006436a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006436aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006436ad: mov dword ptr [eax + 0x808], ecx */ W32((u32)(r_eax+0x808u), r_ecx);
    /* 006436b3: mov esp, ebp */ r_esp = r_ebp;
    /* 006436b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006436b6: ret 4 */ FN_RET(0x006436a0); r_esp += 8; return;
}

void f_006437d0(void) /* sub_6437D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006437d0);
    /* 006437d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006437d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006437d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006437d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006437d7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006437da: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006437dd: mov ecx, dword ptr [eax + 0x80c] */ r_ecx = R32((u32)(r_eax+0x80cu));
    /* 006437e3: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006437e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006437e9: jmp 0x6437f4 */ goto L_006437f4;
L_006437eb:; BB(0x006437eb);
    /* 006437eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006437ee: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006437f1: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_006437f4:; BB(0x006437f4);
    /* 006437f4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006437f8: jle 0x64385c */ if ((fZ||fS!=fO)) goto L_0064385c;
L_006437fa:; BB(0x006437fa);
    /* 006437fa: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006437fe: je 0x643814 */ if (fZ) goto L_00643814;
L_00643800:; BB(0x00643800);
    /* 00643800: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643803: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00643806: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00643807: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064380a: call 0x6146a0 */ r_esp -= 4; W32(r_esp, 0x64380fu); f_006146a0();
    /* 0064380f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00643812: jmp 0x643826 */ goto L_00643826;
L_00643814:; BB(0x00643814);
    /* 00643814: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00643817: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064381a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064381b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x643820u); f_0062fbf0();
    /* 00643820: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00643823: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00643826:; BB(0x00643826);
    /* 00643826: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643829: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064382c: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00643831: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 00643835: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00643838: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064383b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064383e: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643841: mov cx, word ptr [esi + ecx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+r_ecx*2+0x4u))) & 0xffffu);
    /* 00643846: mov word ptr [eax + edx*2 + 4], cx */ W16((u32)(r_eax+r_edx*2+0x4u), (u16)r_ecx);
    /* 0064384b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064384e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643851: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00643855: mov word ptr [eax + edx*2 + 4], cx */ W16((u32)(r_eax+r_edx*2+0x4u), (u16)r_ecx);
    /* 0064385a: jmp 0x6437eb */ goto L_006437eb;
L_0064385c:; BB(0x0064385c);
    /* 0064385c: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00643860: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00643862: je 0x643879 */ if (fZ) goto L_00643879;
L_00643864:; BB(0x00643864);
    /* 00643864: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643867: mov ecx, dword ptr [eax + 0x80c] */ r_ecx = R32((u32)(r_eax+0x80cu));
    /* 0064386d: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00643870: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00643871: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00643874: call 0x6436a0 */ r_esp -= 4; W32(r_esp, 0x643879u); f_006436a0();
L_00643879:; BB(0x00643879);
    /* 00643879: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064387a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064387c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064387d: ret 8 */ FN_RET(0x006437d0); r_esp += 12; return;
}

