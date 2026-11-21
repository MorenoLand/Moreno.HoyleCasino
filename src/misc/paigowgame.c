#include "protos.h"

void f_0045be80(void) /* paigowgame::func_0045be80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045be80);
    /* 0045be80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045be81: mov ebp, esp */ r_ebp = r_esp;
    /* 0045be83: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045be86: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0045be89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045be8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045be8d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x45be92u); f_005dcb00();
    /* 0045be92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045be95: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045be98: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045be9b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45bea0u); f_0063aac0();
    /* 0045bea0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045bea2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045bea5: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bea9: je 0x45bec7 */ if (fZ) goto L_0045bec7;
L_0045beab:; BB(0x0045beab);
    /* 0045beab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045beae: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x45beb3u); f_0063aac0();
    /* 0045beb3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045beb5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0045beb8: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bebc: je 0x45bec7 */ if (fZ) goto L_0045bec7;
L_0045bebe:; BB(0x0045bebe);
    /* 0045bebe: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0045bec5: jmp 0x45bece */ goto L_0045bece;
L_0045bec7:; BB(0x0045bec7);
    /* 0045bec7: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0045bece:; BB(0x0045bece);
    /* 0045bece: movzx eax, byte ptr [ebp - 0x20] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 0045bed2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bed4: je 0x45bf3e */ if (fZ) goto L_0045bf3e;
L_0045bed6:; BB(0x0045bed6);
    /* 0045bed6: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045bedc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045bedf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045bee2: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045bee5: mov byte ptr [edx + 0xe0], 1 */ W8((u32)(r_edx+0xe0u), 0x1u);
    /* 0045beec: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045bef2: call 0x4587e0 */ r_esp -= 4; W32(r_esp, 0x45bef7u); f_004587e0();
    /* 0045bef7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045bef9: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045beff: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x45bf04u); f_005df700();
    /* 0045bf04: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045bf07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bf09: je 0x45bf2e */ if (fZ) goto L_0045bf2e;
L_0045bf0b:; BB(0x0045bf0b);
    /* 0045bf0b: push 0x718cf8 */ { u32 v = 0x718cf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bf10: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0045bf12: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0045bf18: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x45bf1du); f_0057ab80();
    /* 0045bf1d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045bf20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bf21: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045bf27: call 0x461f80 */ r_esp -= 4; W32(r_esp, 0x45bf2cu); f_00461f80();
    /* 0045bf2c: jmp 0x45bf39 */ goto L_0045bf39;
L_0045bf2e:; BB(0x0045bf2e);
    /* 0045bf2e: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0045bf34: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x45bf39u); f_0057ae30();
L_0045bf39:; BB(0x0045bf39);
    /* 0045bf39: jmp 0x45c09a */ goto L_0045c09a;
L_0045bf3e:; BB(0x0045bf3e);
    /* 0045bf3e: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0045bf44: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x45bf49u); f_0057ae30();
    /* 0045bf49: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045bf4c: movzx eax, byte ptr [edx + 5] */ r_eax = (u32)R8((u32)(r_edx+0x5u));
    /* 0045bf50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bf52: jne 0x45bf7f */ if (!fZ) goto L_0045bf7f;
L_0045bf54:; BB(0x0045bf54);
    /* 0045bf54: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bf58: je 0x45bf7f */ if (fZ) goto L_0045bf7f;
L_0045bf5a:; BB(0x0045bf5a);
    /* 0045bf5a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045bf5d: mov byte ptr [ecx + 5], 1 */ W8((u32)(r_ecx+0x5u), 0x1u);
    /* 0045bf61: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bf63: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045bf69: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x45bf6eu); f_00637810();
    /* 0045bf6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bf6f: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045bf75: call 0x5da360 */ r_esp -= 4; W32(r_esp, 0x45bf7au); f_005da360();
    /* 0045bf7a: jmp 0x45c09a */ goto L_0045c09a;
L_0045bf7f:; BB(0x0045bf7f);
    /* 0045bf7f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045bf82: mov byte ptr [edx + 5], 0 */ W8((u32)(r_edx+0x5u), 0x0u);
    /* 0045bf86: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bf8a: jne 0x45bfac */ if (!fZ) goto L_0045bfac;
L_0045bf8c:; BB(0x0045bf8c);
    /* 0045bf8c: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045bf91: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045bf94: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045bf97: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045bf9a: mov byte ptr [ecx + 0xe0], 1 */ W8((u32)(r_ecx+0xe0u), 0x1u);
    /* 0045bfa1: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 0045bfa7: call 0x4587e0 */ r_esp -= 4; W32(r_esp, 0x45bfacu); f_004587e0();
L_0045bfac:; BB(0x0045bfac);
    /* 0045bfac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045bfaf: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045bfb4: lea ecx, [eax + edx*2 + 0xac] */ r_ecx = (u32)(r_eax+r_edx*2+0xacu);
    /* 0045bfbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bfbc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045bfbf: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045bfc4: lea ecx, [eax + edx*2 + 0xa2] */ r_ecx = (u32)(r_eax+r_edx*2+0xa2u);
    /* 0045bfcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bfcc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045bfcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bfd0: mov ecx, dword ptr [0x790744] */ r_ecx = R32((u32)(0x790744u));
    /* 0045bfd6: call 0x452a40 */ r_esp -= 4; W32(r_esp, 0x45bfdbu); f_00452a40();
    /* 0045bfdb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045bfde: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045bfe4: movzx edx, word ptr [ecx + eax*2 + 0xa2] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0xa2u));
    /* 0045bfec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045bfef: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045bff5: movzx eax, word ptr [ecx + eax*2 + 0xac] */ r_eax = (u32)R16((u32)(r_ecx+r_eax*2+0xacu));
    /* 0045bffd: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bfff: jne 0x45c018 */ if (!fZ) goto L_0045c018;
L_0045c001:; BB(0x0045c001);
    /* 0045c001: push 0x1a0 */ { u32 v = 0x1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c006: push 0x6b9b28 */ { u32 v = 0x6b9b28u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c00b: push 0x6b9af8 */ { u32 v = 0x6b9af8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c010: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x45c015u); f_005e9f20();
    /* 0045c015: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045c018:; BB(0x0045c018);
    /* 0045c018: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c01b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c01c: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045c022: call 0x461320 */ r_esp -= 4; W32(r_esp, 0x45c027u); f_00461320();
    /* 0045c027: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045c02a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c02c: jne 0x45c045 */ if (!fZ) goto L_0045c045;
L_0045c02e:; BB(0x0045c02e);
    /* 0045c02e: push 0x1a1 */ { u32 v = 0x1a1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c033: push 0x6b9b28 */ { u32 v = 0x6b9b28u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c038: push 0x6b9ad8 */ { u32 v = 0x6b9ad8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c03d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x45c042u); f_005e9f20();
    /* 0045c042: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045c045:; BB(0x0045c045);
    /* 0045c045: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045c048: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045c049: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045c04c: call 0x45c0a0 */ r_esp -= 4; W32(r_esp, 0x45c051u); f_0045c0a0();
    /* 0045c051: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045c056: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045c059: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c05b: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c05f: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0045c062: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c065: and ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045c068: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045c06b: mov dword ptr [edx + 0x124], ecx */ W32((u32)(r_edx+0x124u), r_ecx);
    /* 0045c071: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045c074: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045c077: mov dword ptr [eax + 0x128], ecx */ W32((u32)(r_eax+0x128u), r_ecx);
    /* 0045c07d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c07f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045c081: mov edx, dword ptr [0x790734] */ r_edx = R32((u32)(0x790734u));
    /* 0045c087: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045c08a: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045c090: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0045c093: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045c095: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045c098: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45c09au); call_ind(t); }
L_0045c09a:; BB(0x0045c09a);
    /* 0045c09a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045c09c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045c09d: ret 4 */ FN_RET(0x0045be80); r_esp += 8; return;
}

