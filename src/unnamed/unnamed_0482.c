#include "protos.h"

void f_00482d80(void) /* sub_482D80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482d80);
    /* 00482d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00482d83: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482d86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00482d87: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00482d8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00482d91: jmp 0x482d9c */ goto L_00482d9c;
L_00482d93:; BB(0x00482d93);
    /* 00482d93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482d96: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00482d99: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00482d9c:; BB(0x00482d9c);
    /* 00482d9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482d9f: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482da2: jge 0x482e06 */ if ((fS==fO)) goto L_00482e06;
L_00482da4:; BB(0x00482da4);
    /* 00482da4: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00482dab: jmp 0x482db6 */ goto L_00482db6;
L_00482dad:; BB(0x00482dad);
    /* 00482dad: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482db0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00482db3: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00482db6:; BB(0x00482db6);
    /* 00482db6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00482db9: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00482dbc: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482dbf: jge 0x482e04 */ if ((fS==fO)) goto L_00482e04;
L_00482dc1:; BB(0x00482dc1);
    /* 00482dc1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482dc4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00482dc7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482dca: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00482dcd: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 00482dd0: cmp ecx, dword ptr [esi + eax*4 + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+r_eax*4+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482dd4: jge 0x482e02 */ if ((fS==fO)) goto L_00482e02;
L_00482dd6:; BB(0x00482dd6);
    /* 00482dd6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482dd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00482ddc: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00482ddf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00482de2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482de5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00482de8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482deb: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00482dee: mov ecx, dword ptr [esi + ecx*4 + 4] */ r_ecx = R32((u32)(r_esi+r_ecx*4+0x4u));
    /* 00482df2: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 00482df5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482df8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00482dfb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00482dfe: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
L_00482e02:; BB(0x00482e02);
    /* 00482e02: jmp 0x482dad */ goto L_00482dad;
L_00482e04:; BB(0x00482e04);
    /* 00482e04: jmp 0x482d93 */ goto L_00482d93;
L_00482e06:; BB(0x00482e06);
    /* 00482e06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00482e07: mov esp, ebp */ r_esp = r_ebp;
    /* 00482e09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482e0a: ret 8 */ FN_RET(0x00482d80); r_esp += 12; return;
}

