#include "protos.h"

void f_0064afa0(void) /* sub_64AFA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064afa0);
    /* 0064afa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064afa1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064afa3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064afa6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064afa7: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0064afaa: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064afad: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0064afb3: mov byte ptr [ecx + 0x5c], 1 */ W8((u32)(r_ecx+0x5cu), 0x1u);
    /* 0064afb7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064afba: mov al, byte ptr [edx + 0x188] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x188u))) & 0xffu);
    /* 0064afc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064afc1: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064afc7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064afc9: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064afcf: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0064afd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64afd7u); call_ind(t); }
    /* 0064afd7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0064afda: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064afde: je 0x64afe6 */ if (fZ) goto L_0064afe6;
L_0064afe0:; BB(0x0064afe0);
    /* 0064afe0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064afe3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0064afe6:; BB(0x0064afe6);
    /* 0064afe6: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064afea: jne 0x64affe */ if (!fZ) goto L_0064affe;
L_0064afec:; BB(0x0064afec);
    /* 0064afec: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064afef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064aff1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064aff4: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0064aff7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64aff9u); call_ind(t); }
    /* 0064aff9: jmp 0x64b33e */ goto L_0064b33e;
L_0064affe:; BB(0x0064affe);
    /* 0064affe: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b002: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b005: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x64b00au); f_005eaf00();
    /* 0064b00a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b00d: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x64b012u); f_005eb570();
    /* 0064b012: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b015: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0064b01b: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x64b020u); f_005f5550();
    /* 0064b020: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064b022: jg 0x64b052 */ if ((!fZ&&fS==fO)) goto L_0064b052;
L_0064b024:; BB(0x0064b024);
    /* 0064b024: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b027: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x64b02cu); f_005f5550();
    /* 0064b02c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b02d: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0064b033: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064b035: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064b03b: mov edx, dword ptr [eax + 0x1a4] */ r_edx = R32((u32)(r_eax+0x1a4u));
    /* 0064b041: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64b043u); call_ind(t); }
    /* 0064b043: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b044: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b047: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0064b04d: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x64b052u); f_005ecc60();
L_0064b052:; BB(0x0064b052);
    /* 0064b052: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b055: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0064b05b: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x64b060u); f_005f5550();
    /* 0064b060: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064b062: jg 0x64b092 */ if ((!fZ&&fS==fO)) goto L_0064b092;
L_0064b064:; BB(0x0064b064);
    /* 0064b064: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b067: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x64b06cu); f_005f5550();
    /* 0064b06c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b06d: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0064b073: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064b075: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064b07b: mov edx, dword ptr [eax + 0x1a8] */ r_edx = R32((u32)(r_eax+0x1a8u));
    /* 0064b081: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64b083u); call_ind(t); }
    /* 0064b083: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b084: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b087: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0064b08d: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x64b092u); f_005ecc60();
L_0064b092:; BB(0x0064b092);
    /* 0064b092: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b095: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0064b09b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064b09e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064b0a1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064b0a4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64b0a9u); f_0063aac0();
    /* 0064b0a9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064b0ac: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064b0af: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b0b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b0b3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b0b6: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 0064b0bc: call 0x5ee710 */ r_esp -= 4; W32(r_esp, 0x64b0c1u); f_005ee710();
    /* 0064b0c1: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b0c6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b0c9: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0064b0cf: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b0d2: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0064b0d8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064b0da: mov ecx, eax */ r_ecx = r_eax;
    /* 0064b0dc: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0064b0e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b0e4u); call_ind(t); }
    /* 0064b0e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b0e5: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x64b0eau); f_00686ec0();
    /* 0064b0ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064b0ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b0ef: jne 0x64b10d */ if (!fZ) goto L_0064b10d;
L_0064b0f1:; BB(0x0064b0f1);
    /* 0064b0f1: push 0x6d4c20 */ { u32 v = 0x6d4c20u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b0f6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64b0fbu); f_00630f40();
    /* 0064b0fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064b0fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b0ff: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b102: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0064b108: call 0x5ee710 */ r_esp -= 4; W32(r_esp, 0x64b10du); f_005ee710();
L_0064b10d:; BB(0x0064b10d);
    /* 0064b10d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b10f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b112: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 0064b118: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x64b11du); f_005ef310();
    /* 0064b11d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b11f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b122: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0064b128: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x64b12du); f_005ef310();
    /* 0064b12d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b130: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0064b136: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b139: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0064b13f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064b141: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0064b144: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b146u); call_ind(t); }
    /* 0064b146: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b149: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0064b14f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b152: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0064b158: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064b15a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0064b15d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b15fu); call_ind(t); }
    /* 0064b15f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b162: call 0x64b3c0 */ r_esp -= 4; W32(r_esp, 0x64b167u); f_0064b3c0();
    /* 0064b167: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b169: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064b16f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064b171: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064b177: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0064b17d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b17fu); call_ind(t); }
    /* 0064b17f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064b182: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b184: je 0x64b325 */ if (fZ) goto L_0064b325;
L_0064b18a:; BB(0x0064b18a);
    /* 0064b18a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b18e: jne 0x64b325 */ if (!fZ) goto L_0064b325;
L_0064b194:; BB(0x0064b194);
    /* 0064b194: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0064b197: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b198: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0064b19b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b19c: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0064b19f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b1a0: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 0064b1a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b1a4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b1a7: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0064b1ad: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064b1b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b1b1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064b1b7: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x64b1bcu); f_005f3bf0();
    /* 0064b1bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b1bd: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0064b1c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064b1c4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064b1ca: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 0064b1d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b1d2u); call_ind(t); }
    /* 0064b1d2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0064b1d5: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b1d9: jne 0x64b1f9 */ if (!fZ) goto L_0064b1f9;
L_0064b1db:; BB(0x0064b1db);
    /* 0064b1db: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b1de: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 0064b1e4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b1e7: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0064b1ed: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064b1ef: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0064b1f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b1f4u); call_ind(t); }
    /* 0064b1f4: jmp 0x64b323 */ goto L_0064b323;
L_0064b1f9:; BB(0x0064b1f9);
    /* 0064b1f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b1fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b1fd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b200: mov ecx, dword ptr [edx + 0x194] */ r_ecx = R32((u32)(r_edx+0x194u));
    /* 0064b206: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x64b20bu); f_005eaf00();
    /* 0064b20b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064b20e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b20f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b212: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 0064b218: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b21b: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0064b221: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064b223: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0064b229: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b22bu); call_ind(t); }
    /* 0064b22b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b22e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064b230: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b233: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0064b236: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b238u); call_ind(t); }
    /* 0064b238: mov esi, eax */ r_esi = r_eax;
    /* 0064b23a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b23d: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x64b242u); f_005f5550();
    /* 0064b242: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064b243: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064b245: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0064b247: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064b249: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b24c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0064b24f: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x64b254u); f_005f8550();
    /* 0064b254: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064b255: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064b257: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0064b259: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064b25b: jl 0x64b272 */ if ((fS!=fO)) goto L_0064b272;
L_0064b25d:; BB(0x0064b25d);
    /* 0064b25d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b260: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064b262: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b265: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0064b268: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64b26au); call_ind(t); }
    /* 0064b26a: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064b26d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064b270: jmp 0x64b2a1 */ goto L_0064b2a1;
L_0064b272:; BB(0x0064b272);
    /* 0064b272: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b275: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064b277: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b27a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0064b27d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b27fu); call_ind(t); }
    /* 0064b27f: mov esi, eax */ r_esi = r_eax;
    /* 0064b281: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b284: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x64b289u); f_005f5550();
    /* 0064b289: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064b28b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b28e: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 0064b294: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x64b299u); f_005f5550();
    /* 0064b299: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064b29c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0064b29e: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
L_0064b2a1:; BB(0x0064b2a1);
    /* 0064b2a1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b2a4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064b2a6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b2a9: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0064b2ac: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64b2aeu); call_ind(t); }
    /* 0064b2ae: mov esi, eax */ r_esi = r_eax;
    /* 0064b2b0: add esi, dword ptr [ebp - 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064b2b3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b2b6: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0064b2bc: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x64b2c1u); f_005f5590();
    /* 0064b2c1: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0064b2c3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064b2c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064b2c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b2c8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b2cb: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0064b2d1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b2d4: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 0064b2da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064b2dc: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0064b2df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b2e1u); call_ind(t); }
    /* 0064b2e1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b2e4: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 0064b2ea: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b2ed: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0064b2f3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064b2f5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0064b2f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b2fau); call_ind(t); }
    /* 0064b2fa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b2fd: movzx edx, byte ptr [ecx + 0x188] */ r_edx = (u32)R8((u32)(r_ecx+0x188u));
    /* 0064b304: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0064b306: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0064b308: and edx, 0xffffff41 */ {  u32 a = r_edx; u32 b = 0xffffff41u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0064b30e: add edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064b314: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b315: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b318: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0064b31e: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x64b323u); f_005eb5d0();
L_0064b323:; BB(0x0064b323);
    /* 0064b323: jmp 0x64b33e */ goto L_0064b33e;
L_0064b325:; BB(0x0064b325);
    /* 0064b325: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b328: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 0064b32e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064b331: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0064b337: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064b339: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0064b33c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b33eu); call_ind(t); }
L_0064b33e:; BB(0x0064b33e);
    /* 0064b33e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064b33f: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b341: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b342: ret 4 */ FN_RET(0x0064afa0); r_esp += 8; return;
}

