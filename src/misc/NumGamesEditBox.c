#include "protos.h"

void f_0058d1a0(void) /* NumGamesEditBox::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058d1a0);
    /* 0058d1a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058d1a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0058d1a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058d1a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0058d1a9: mov ax, word ptr [0x6b2b64] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6b2b64u))) & 0xffffu);
    /* 0058d1af: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0058d1b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058d1b6: mov dl, byte ptr [ecx + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x14u))) & 0xffu);
    /* 0058d1b9: mov byte ptr [ebp - 4], dl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_edx);
    /* 0058d1bc: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 0058d1c0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058d1c3: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0058d1c7: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d1ca: je 0x58d208 */ if (fZ) goto L_0058d208;
L_0058d1cc:; BB(0x0058d1cc);
    /* 0058d1cc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058d1cf: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0058d1d3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d1d6: je 0x58d208 */ if (fZ) goto L_0058d208;
L_0058d1d8:; BB(0x0058d1d8);
    /* 0058d1d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058d1db: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0058d1df: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d1e2: je 0x58d208 */ if (fZ) goto L_0058d208;
L_0058d1e4:; BB(0x0058d1e4);
    /* 0058d1e4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058d1e7: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 0058d1eb: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d1ee: je 0x58d208 */ if (fZ) goto L_0058d208;
L_0058d1f0:; BB(0x0058d1f0);
    /* 0058d1f0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058d1f3: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 0058d1f7: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d1fa: je 0x58d208 */ if (fZ) goto L_0058d208;
L_0058d1fc:; BB(0x0058d1fc);
    /* 0058d1fc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058d1ff: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0058d203: cmp edx, 0x16 */ {  u32 a = r_edx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d206: jne 0x58d20c */ if (!fZ) goto L_0058d20c;
L_0058d208:; BB(0x0058d208);
    /* 0058d208: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_0058d20c:; BB(0x0058d20c);
    /* 0058d20c: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0058d210: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d212: jne 0x58d29d */ if (!fZ) goto L_0058d29d;
L_0058d218:; BB(0x0058d218);
    /* 0058d218: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0058d21b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d21c: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x58d222u); call_ind(t); }
    /* 0058d222: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058d225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d227: jne 0x58d243 */ if (!fZ) goto L_0058d243;
L_0058d229:; BB(0x0058d229);
    /* 0058d229: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d22e: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 0058d231: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d232: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x58d237u); f_00686ec0();
    /* 0058d237: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058d23a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d23c: je 0x58d243 */ if (fZ) goto L_0058d243;
L_0058d23e:; BB(0x0058d23e);
    /* 0058d23e: jmp 0x58d316 */ goto L_0058d316;
L_0058d243:; BB(0x0058d243);
    /* 0058d243: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d246: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058d248: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d24b: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0058d251: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d253u); call_ind(t); }
    /* 0058d253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d254: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x58d25au); call_ind(t); }
    /* 0058d25a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058d25d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058d260: jle 0x58d267 */ if ((fZ||fS!=fO)) goto L_0058d267;
L_0058d262:; BB(0x0058d262);
    /* 0058d262: jmp 0x58d316 */ goto L_0058d316;
L_0058d267:; BB(0x0058d267);
    /* 0058d267: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d26a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058d26c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d26f: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0058d275: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d277u); call_ind(t); }
    /* 0058d277: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d278: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x58d27eu); call_ind(t); }
    /* 0058d27e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058d281: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d284: jne 0x58d29d */ if (!fZ) goto L_0058d29d;
L_0058d286:; BB(0x0058d286);
    /* 0058d286: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d28b: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0058d28e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d28f: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x58d294u); f_00686ec0();
    /* 0058d294: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058d297: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d299: je 0x58d29d */ if (fZ) goto L_0058d29d;
L_0058d29b:; BB(0x0058d29b);
    /* 0058d29b: jmp 0x58d316 */ goto L_0058d316;
L_0058d29d:; BB(0x0058d29d);
    /* 0058d29d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0058d2a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d2a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d2a4: call 0x60b7d0 */ r_esp -= 4; W32(r_esp, 0x58d2a9u); f_0060b7d0();
    /* 0058d2a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0058d2ac: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0058d2b0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d2b2: je 0x58d316 */ if (fZ) goto L_0058d316;
L_0058d2b4:; BB(0x0058d2b4);
    /* 0058d2b4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d2b9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d2bc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058d2be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d2c1: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 0058d2c7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58d2c9u); call_ind(t); }
    /* 0058d2c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d2ca: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x58d2cfu); f_00686ec0();
    /* 0058d2cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058d2d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d2d4: jne 0x58d2ea */ if (!fZ) goto L_0058d2ea;
L_0058d2d6:; BB(0x0058d2d6);
    /* 0058d2d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d2d8: mov eax, dword ptr [0x793584] */ r_eax = R32((u32)(0x793584u));
    /* 0058d2dd: mov ecx, dword ptr [eax + 0x3b68] */ r_ecx = R32((u32)(r_eax+0x3b68u));
    /* 0058d2e3: call 0x585aa0 */ r_esp -= 4; W32(r_esp, 0x58d2e8u); f_00585aa0();
    /* 0058d2e8: jmp 0x58d316 */ goto L_0058d316;
L_0058d2ea:; BB(0x0058d2ea);
    /* 0058d2ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d2ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058d2ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058d2f2: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0058d2f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58d2fau); call_ind(t); }
    /* 0058d2fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d2fb: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x58d301u); call_ind(t); }
    /* 0058d301: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058d304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d305: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 0058d30b: mov ecx, dword ptr [ecx + 0x3b68] */ r_ecx = R32((u32)(r_ecx+0x3b68u));
    /* 0058d311: call 0x585aa0 */ r_esp -= 4; W32(r_esp, 0x58d316u); f_00585aa0();
L_0058d316:; BB(0x0058d316);
    /* 0058d316: mov esp, ebp */ r_esp = r_ebp;
    /* 0058d318: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d319: ret 4 */ FN_RET(0x0058d1a0); r_esp += 8; return;
}

