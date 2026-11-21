#include "protos.h"

void f_0052e2b0(void) /* sub_52E2B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052e2b0);
    /* 0052e2b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052e2b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052e2b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e2b5: push 0x6a452a */ { u32 v = 0x6a452au; r_esp -= 4; W32(r_esp, v); }
    /* 0052e2ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052e2c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e2c1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052e2c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052e2c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052e2cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e2cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052e2cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052e2d5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0052e2d8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052e2df: jmp 0x52e2ea */ goto L_0052e2ea;
L_0052e2e1:; BB(0x0052e2e1);
    /* 0052e2e1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e2e4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052e2e7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0052e2ea:; BB(0x0052e2ea);
    /* 0052e2ea: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052e2ee: jge 0x52e398 */ if ((fS==fO)) goto L_0052e398;
L_0052e2f4:; BB(0x0052e2f4);
    /* 0052e2f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e2f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e2f9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e2fc: mov ecx, dword ptr [edx + ecx*4 + 0xcc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xccu));
    /* 0052e303: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52e308u); f_005f5d50();
    /* 0052e308: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e30b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e30e: mov edx, dword ptr [ecx + eax*4 + 0xcc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xccu));
    /* 0052e315: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e318: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e31b: mov ecx, dword ptr [ecx + eax*4 + 0xcc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xccu));
    /* 0052e322: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052e324: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052e327: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e329u); call_ind(t); }
    /* 0052e329: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e32b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e32e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e331: mov ecx, dword ptr [edx + ecx*4 + 0xe0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xe0u));
    /* 0052e338: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52e33du); f_005f5d50();
    /* 0052e33d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e340: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e343: mov edx, dword ptr [ecx + eax*4 + 0xe0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xe0u));
    /* 0052e34a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e34d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e350: mov ecx, dword ptr [ecx + eax*4 + 0xe0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xe0u));
    /* 0052e357: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052e359: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052e35c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e35eu); call_ind(t); }
    /* 0052e35e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e360: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e363: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e366: mov ecx, dword ptr [edx + ecx*4 + 0xb4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xb4u));
    /* 0052e36d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52e372u); f_005f5d50();
    /* 0052e372: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e375: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e378: mov edx, dword ptr [ecx + eax*4 + 0xb4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 0052e37f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052e382: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e385: mov ecx, dword ptr [ecx + eax*4 + 0xb4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 0052e38c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052e38e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052e391: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e393u); call_ind(t); }
    /* 0052e393: jmp 0x52e2e1 */ goto L_0052e2e1;
L_0052e398:; BB(0x0052e398);
    /* 0052e398: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e39b: call 0x52abe0 */ r_esp -= 4; W32(r_esp, 0x52e3a0u); f_0052abe0();
    /* 0052e3a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e3a2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e3a5: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0052e3a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e3a9: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0052e3ae: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052e3b1: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x52e3b6u); f_00609870();
    /* 0052e3b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e3b8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e3bb: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0052e3be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e3bf: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0052e3c4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052e3c7: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x52e3ccu); f_00609870();
    /* 0052e3cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e3ce: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e3d1: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 0052e3d7: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52e3dcu); f_005f5d50();
    /* 0052e3dc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e3df: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0052e3e5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e3e8: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 0052e3ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052e3f0: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052e3f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e3f5u); call_ind(t); }
    /* 0052e3f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e3f7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e3fa: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 0052e400: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52e405u); f_005f5d50();
    /* 0052e405: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e408: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0052e40e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e411: mov ecx, dword ptr [ecx + 0xc8] */ r_ecx = R32((u32)(r_ecx+0xc8u));
    /* 0052e417: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052e419: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052e41c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e41eu); call_ind(t); }
    /* 0052e41e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e420: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e423: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 0052e429: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e42c: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0052e432: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052e434: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052e43a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e43cu); call_ind(t); }
    /* 0052e43c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0052e442: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0052e448: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0052e44b: cmp dword ptr [ebp - 0x24], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e44f: jne 0x52e4b3 */ if (!fZ) goto L_0052e4b3;
L_0052e451:; BB(0x0052e451);
    /* 0052e451: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e453: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52e458u); f_00686d82();
    /* 0052e458: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052e45b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0052e45e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052e465: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e469: je 0x52e478 */ if (fZ) goto L_0052e478;
L_0052e46b:; BB(0x0052e46b);
    /* 0052e46b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052e46e: call 0x601690 */ r_esp -= 4; W32(r_esp, 0x52e473u); f_00601690();
    /* 0052e473: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0052e476: jmp 0x52e47f */ goto L_0052e47f;
L_0052e478:; BB(0x0052e478);
    /* 0052e478: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0052e47f:; BB(0x0052e47f);
    /* 0052e47f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052e482: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052e485: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052e48c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052e48f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e490: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e493: mov ecx, dword ptr [edx + 0xc4] */ r_ecx = R32((u32)(r_edx+0xc4u));
    /* 0052e499: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52e49eu); f_005f5d50();
    /* 0052e49e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e4a1: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0052e4a7: mov dword ptr [ecx + 0x178], 4 */ W32((u32)(r_ecx+0x178u), 0x4u);
    /* 0052e4b1: jmp 0x52e502 */ goto L_0052e502;
L_0052e4b3:; BB(0x0052e4b3);
    /* 0052e4b3: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e4b5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52e4bau); f_00686d82();
    /* 0052e4ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052e4bd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052e4c0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0052e4c7: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e4cb: je 0x52e4dc */ if (fZ) goto L_0052e4dc;
L_0052e4cd:; BB(0x0052e4cd);
    /* 0052e4cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e4cf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052e4d2: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x52e4d7u); f_00600a70();
    /* 0052e4d7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0052e4da: jmp 0x52e4e3 */ goto L_0052e4e3;
L_0052e4dc:; BB(0x0052e4dc);
    /* 0052e4dc: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0052e4e3:; BB(0x0052e4e3);
    /* 0052e4e3: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0052e4e6: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0052e4e9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052e4f0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e4f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e4f4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e4f7: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 0052e4fd: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52e502u); f_005f5d50();
L_0052e502:; BB(0x0052e502);
    /* 0052e502: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e505: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0052e50b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052e50e: mov ecx, dword ptr [ecx + 0xc4] */ r_ecx = R32((u32)(r_ecx+0xc4u));
    /* 0052e514: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052e516: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052e519: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e51bu); call_ind(t); }
    /* 0052e51b: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052e521: mov byte ptr [ecx + 0x7d], 1 */ W8((u32)(r_ecx+0x7du), 0x1u);
    /* 0052e525: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052e528: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052e52f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052e530: mov esp, ebp */ r_esp = r_ebp;
    /* 0052e532: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052e533: ret  */ FN_RET(0x0052e2b0); r_esp += 4; return;
}

void f_0052e540(void) /* sub_52E540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052e540);
    /* 0052e540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052e541: mov ebp, esp */ r_ebp = r_esp;
    /* 0052e543: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052e545: push 0x6a4550 */ { u32 v = 0x6a4550u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e54a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052e550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e551: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052e554: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052e559: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052e55b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e55c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052e55f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052e565: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0052e568: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052e56d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052e56f: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052e575: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0052e578: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e57au); call_ind(t); }
    /* 0052e57a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052e57d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0052e57f: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0052e581: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052e584: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 0052e587: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e589: mov ecx, dword ptr [0x793388] */ r_ecx = R32((u32)(0x793388u));
    /* 0052e58f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0052e592: mov eax, dword ptr [0x793388] */ r_eax = R32((u32)(0x793388u));
    /* 0052e597: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052e59a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052e59c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0052e59f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e5a1u); call_ind(t); }
    /* 0052e5a1: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e5a5: jne 0x52e64b */ if (!fZ) goto L_0052e64b;
L_0052e5ab:; BB(0x0052e5ab);
    /* 0052e5ab: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e5af: je 0x52e64b */ if (fZ) goto L_0052e64b;
L_0052e5b5:; BB(0x0052e5b5);
    /* 0052e5b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e5b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e5b8: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0052e5be: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052e5c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e5c2: fld1  */ FPUSH(1.0);
    /* 0052e5c4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052e5c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e5c9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e5cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e5cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e5cf: push 0x18ab0 */ { u32 v = 0x18ab0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e5d4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052e5da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052e5dc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052e5e2: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0052e5e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e5eau); call_ind(t); }
    /* 0052e5ea: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e5ed: mov edx, dword ptr [ecx + 0x114] */ r_edx = R32((u32)(r_ecx+0x114u));
    /* 0052e5f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e5f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e5f7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052e5fa: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x52e5ffu); f_005eaf00();
    /* 0052e5ff: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 0052e603: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e605: je 0x52e628 */ if (fZ) goto L_0052e628;
L_0052e607:; BB(0x0052e607);
    /* 0052e607: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e60a: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 0052e610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052e611: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e613: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e616: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0052e619: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e61c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052e61f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052e621: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0052e624: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e626u); call_ind(t); }
    /* 0052e626: jmp 0x52e649 */ goto L_0052e649;
L_0052e628:; BB(0x0052e628);
    /* 0052e628: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e62b: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 0052e631: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e632: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e634: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e637: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052e63a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e63d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052e640: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052e642: mov ecx, eax */ r_ecx = r_eax;
    /* 0052e644: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0052e647: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e649u); call_ind(t); }
L_0052e649:; BB(0x0052e649);
    /* 0052e649: jmp 0x52e6b6 */ goto L_0052e6b6;
L_0052e64b:; BB(0x0052e64b);
    /* 0052e64b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e64d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e64e: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0052e654: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052e657: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e658: fld1  */ FPUSH(1.0);
    /* 0052e65a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052e65d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e65f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e661: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e663: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e665: push 0x18a96 */ { u32 v = 0x18a96u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e66a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052e670: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052e672: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052e678: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0052e67e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e680u); call_ind(t); }
    /* 0052e680: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e683: mov edx, dword ptr [ecx + 0x118] */ r_edx = R32((u32)(r_ecx+0x118u));
    /* 0052e689: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e68a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e68d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052e690: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x52e695u); f_005eaf00();
    /* 0052e695: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e698: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 0052e69e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e69f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e6a1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e6a4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052e6a7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e6aa: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052e6ad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052e6af: mov ecx, eax */ r_ecx = r_eax;
    /* 0052e6b1: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0052e6b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e6b6u); call_ind(t); }
L_0052e6b6:; BB(0x0052e6b6);
    /* 0052e6b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e6b8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e6bb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0052e6be: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e6c1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052e6c4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052e6c6: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052e6cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e6ceu); call_ind(t); }
    /* 0052e6ce: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e6d1: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0052e6d4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e6d7: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052e6da: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052e6dc: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052e6df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52e6e1u); call_ind(t); }
    /* 0052e6e1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0052e6e3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52e6e8u); f_00686d82();
    /* 0052e6e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052e6eb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0052e6ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052e6f5: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052e6f9: je 0x52e712 */ if (fZ) goto L_0052e712;
L_0052e6fb:; BB(0x0052e6fb);
    /* 0052e6fb: mov ecx, dword ptr [0x793388] */ r_ecx = R32((u32)(0x793388u));
    /* 0052e701: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0052e704: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e705: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052e708: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x52e70du); f_006010a0();
    /* 0052e70d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052e710: jmp 0x52e719 */ goto L_0052e719;
L_0052e712:; BB(0x0052e712);
    /* 0052e712: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0052e719:; BB(0x0052e719);
    /* 0052e719: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052e71c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052e71f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052e726: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052e729: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052e72a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052e72d: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0052e730: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52e735u); f_005f5d50();
    /* 0052e735: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052e738: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052e73f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052e740: mov esp, ebp */ r_esp = r_ebp;
    /* 0052e742: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052e743: ret 8 */ FN_RET(0x0052e540); r_esp += 12; return;
}

void f_0052edc0(void) /* sub_52EDC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052edc0);
    /* 0052edc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052edc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052edc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052edc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052edc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052edca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052edcb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052edce: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 0052edd4: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x52edd9u); f_005eaf00();
    /* 0052edd9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052eddc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052eddd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ede0: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0052ede6: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x52edebu); f_005eaf00();
    /* 0052edeb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052edee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052edef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052edf2: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 0052edf8: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x52edfdu); f_005eaf00();
    /* 0052edfd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052ee00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ee01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ee04: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0052ee0a: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x52ee0fu); f_005eaf00();
    /* 0052ee0f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052ee12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ee13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ee16: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0052ee1c: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x52ee21u); f_005eaf00();
    /* 0052ee21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ee23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ee26: call 0x52f3f0 */ r_esp -= 4; W32(r_esp, 0x52ee2bu); f_0052f3f0();
    /* 0052ee2b: mov esp, ebp */ r_esp = r_ebp;
    /* 0052ee2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052ee2e: ret 4 */ FN_RET(0x0052edc0); r_esp += 8; return;
}

void f_0052ee40(void) /* sub_52EE40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052ee40);
    /* 0052ee40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ee41: mov ebp, esp */ r_ebp = r_esp;
    /* 0052ee43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ee44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052ee47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ee4a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0052ee4d: mov dword ptr [eax + 0x1a0], ecx */ W32((u32)(r_eax+0x1a0u), r_ecx);
    /* 0052ee53: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0052ee56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ee57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052ee5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ee5b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ee5e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052ee60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ee63: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0052ee66: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ee68u); call_ind(t); }
    /* 0052ee68: mov esp, ebp */ r_esp = r_ebp;
    /* 0052ee6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052ee6b: ret 0xc */ FN_RET(0x0052ee40); r_esp += 16; return;
}

