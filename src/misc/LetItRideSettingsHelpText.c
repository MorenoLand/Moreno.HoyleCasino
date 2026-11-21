#include "protos.h"

void f_0044bc00(void) /* LetItRideSettingsHelpText::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044bc00);
    /* 0044bc00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044bc01: mov ebp, esp */ r_ebp = r_esp;
    /* 0044bc03: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044bc06: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044bc09: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044bc10: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bc17: jne 0x44bc1e */ if (!fZ) goto L_0044bc1e;
L_0044bc19:; BB(0x0044bc19);
    /* 0044bc19: jmp 0x44bd16 */ goto L_0044bd16;
L_0044bc1e:; BB(0x0044bc1e);
    /* 0044bc1e: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bc20: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0044bc26: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x44bc2bu); f_005fb350();
    /* 0044bc2b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044bc2e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0044bc35: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bc37: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0044bc3d: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x44bc42u); f_005fb350();
    /* 0044bc42: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044bc45: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0044bc4c: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0044bc53: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044bc5a: jmp 0x44bc65 */ goto L_0044bc65;
L_0044bc5c:; BB(0x0044bc5c);
    /* 0044bc5c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044bc5f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044bc62: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0044bc65:; BB(0x0044bc65);
    /* 0044bc65: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044bc68: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044bc6b: jge 0x44bca8 */ if ((fS==fO)) goto L_0044bca8;
L_0044bc6d:; BB(0x0044bc6d);
    /* 0044bc6d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044bc70: cmp dword ptr [ebp + edx*8 - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*8+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bc75: je 0x44bca6 */ if (fZ) goto L_0044bca6;
L_0044bc77:; BB(0x0044bc77);
    /* 0044bc77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044bc7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044bc7b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044bc7e: mov edx, dword ptr [ebp + ecx*8 - 0x1c] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffe4u));
    /* 0044bc82: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044bc85: mov ecx, dword ptr [ebp + eax*8 - 0x1c] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffe4u));
    /* 0044bc89: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0044bc8b: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0044bc91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44bc93u); call_ind(t); }
    /* 0044bc93: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0044bc96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bc98: je 0x44bca6 */ if (fZ) goto L_0044bca6;
L_0044bc9a:; BB(0x0044bc9a);
    /* 0044bc9a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044bc9d: mov eax, dword ptr [ebp + edx*8 - 0x18] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffe8u));
    /* 0044bca1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044bca4: jmp 0x44bca8 */ goto L_0044bca8;
L_0044bca6:; BB(0x0044bca6);
    /* 0044bca6: jmp 0x44bc5c */ goto L_0044bc5c;
L_0044bca8:; BB(0x0044bca8);
    /* 0044bca8: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bcac: jne 0x44bcce */ if (!fZ) goto L_0044bcce;
L_0044bcae:; BB(0x0044bcae);
    /* 0044bcae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044bcb1: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bcb5: jne 0x44bccc */ if (!fZ) goto L_0044bccc;
L_0044bcb7:; BB(0x0044bcb7);
    /* 0044bcb7: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044bcbc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044bcbf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044bcc1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044bcc4: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0044bcca: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x44bcccu); call_ind(t); }
L_0044bccc:; BB(0x0044bccc);
    /* 0044bccc: jmp 0x44bd16 */ goto L_0044bd16;
L_0044bcce:; BB(0x0044bcce);
    /* 0044bcce: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bcd2: jne 0x44bcf2 */ if (!fZ) goto L_0044bcf2;
L_0044bcd4:; BB(0x0044bcd4);
    /* 0044bcd4: push 0x6b312c */ { u32 v = 0x6b312cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044bcd9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44bcdeu); f_00630f40();
    /* 0044bcde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044bce1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044bce2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044bce5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044bce7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044bcea: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0044bcf0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44bcf2u); call_ind(t); }
L_0044bcf2:; BB(0x0044bcf2);
    /* 0044bcf2: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044bcf6: jne 0x44bd16 */ if (!fZ) goto L_0044bd16;
L_0044bcf8:; BB(0x0044bcf8);
    /* 0044bcf8: push 0x6b310c */ { u32 v = 0x6b310cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044bcfd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x44bd02u); f_00630f40();
    /* 0044bd02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044bd05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044bd06: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044bd09: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044bd0b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044bd0e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0044bd14: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44bd16u); call_ind(t); }
L_0044bd16:; BB(0x0044bd16);
    /* 0044bd16: mov esp, ebp */ r_esp = r_ebp;
    /* 0044bd18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044bd19: ret 4 */ FN_RET(0x0044bc00); r_esp += 8; return;
}

