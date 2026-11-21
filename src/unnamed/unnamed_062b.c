#include "protos.h"

void f_0062b060(void) /* sub_62B060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b060);
    /* 0062b060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b061: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b063: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b066: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062b069: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062b06c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062b06f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062b072: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b075: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b078: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0062b07b: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b07e: jne 0x62b08e */ if (!fZ) goto L_0062b08e;
L_0062b080:; BB(0x0062b080);
    /* 0062b080: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b083: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b086: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0062b088: sub ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b08a: mov eax, ecx */ r_eax = r_ecx;
    /* 0062b08c: jmp 0x62b09c */ goto L_0062b09c;
L_0062b08e:; BB(0x0062b08e);
    /* 0062b08e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b091: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b094: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0062b097: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b09a: mov eax, ecx */ r_eax = r_ecx;
L_0062b09c:; BB(0x0062b09c);
    /* 0062b09c: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b09e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b09f: ret  */ FN_RET(0x0062b060); r_esp += 4; return;
}

void f_0062b0a0(void) /* sub_62B0A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b0a0);
    /* 0062b0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b0a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b0a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b0a7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062b0aa: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 0062b0ae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b0b1: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b0b5: je 0x62b0d1 */ if (fZ) goto L_0062b0d1;
L_0062b0b7:; BB(0x0062b0b7);
    /* 0062b0b7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b0ba: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062b0bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b0be: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x62b0c4u); call_ind(t); }
    /* 0062b0c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b0c7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b0ca: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
L_0062b0d1:; BB(0x0062b0d1);
    /* 0062b0d1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062b0d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b0d5: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62b0dau); f_00686ecc();
    /* 0062b0da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b0dd: mov esi, eax */ r_esi = r_eax;
    /* 0062b0df: push 0x6d9718 */ { u32 v = 0x6d9718u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b0e4: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62b0e9u); f_00686ecc();
    /* 0062b0e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b0ec: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062b0ee: jbe 0x62b12d */ if ((fC||fZ)) goto L_0062b12d;
L_0062b0f0:; BB(0x0062b0f0);
    /* 0062b0f0: push 0x6d9718 */ { u32 v = 0x6d9718u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b0f5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062b0f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b0f9: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62b0feu); f_00686ecc();
    /* 0062b0fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b101: mov esi, eax */ r_esi = r_eax;
    /* 0062b103: push 0x6d9718 */ { u32 v = 0x6d9718u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b108: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62b10du); f_00686ecc();
    /* 0062b10d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b110: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062b112: add esi, dword ptr [ebp + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062b115: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b116: call dword ptr [0x6b21e4] */ { u32 t = R32((u32)(0x6b21e4u)); r_esp -= 4; W32(r_esp, 0x62b11cu); call_ind(t); }
    /* 0062b11c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b11f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b121: jne 0x62b12d */ if (!fZ) goto L_0062b12d;
L_0062b123:; BB(0x0062b123);
    /* 0062b123: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b126: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
L_0062b12d:; BB(0x0062b12d);
    /* 0062b12d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062b130: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b131: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62b136u); f_00686ecc();
    /* 0062b136: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b139: mov esi, eax */ r_esi = r_eax;
    /* 0062b13b: push 0x6d9710 */ { u32 v = 0x6d9710u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b140: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62b145u); f_00686ecc();
    /* 0062b145: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b148: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062b14a: jbe 0x62b189 */ if ((fC||fZ)) goto L_0062b189;
L_0062b14c:; BB(0x0062b14c);
    /* 0062b14c: push 0x6d9710 */ { u32 v = 0x6d9710u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b151: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062b154: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b155: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62b15au); f_00686ecc();
    /* 0062b15a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b15d: mov esi, eax */ r_esi = r_eax;
    /* 0062b15f: push 0x6d9710 */ { u32 v = 0x6d9710u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b164: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62b169u); f_00686ecc();
    /* 0062b169: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b16c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0062b16e: add esi, dword ptr [ebp + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062b171: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062b172: call dword ptr [0x6b21e4] */ { u32 t = R32((u32)(0x6b21e4u)); r_esp -= 4; W32(r_esp, 0x62b178u); call_ind(t); }
    /* 0062b178: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b17b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b17d: jne 0x62b189 */ if (!fZ) goto L_0062b189;
L_0062b17f:; BB(0x0062b17f);
    /* 0062b17f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b182: mov dword ptr [eax + 8], 1 */ W32((u32)(r_eax+0x8u), 0x1u);
L_0062b189:; BB(0x0062b189);
    /* 0062b189: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062b18c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b18d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b190: add edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062b193: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b194: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x62b199u); f_00686d8e();
    /* 0062b199: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b19c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062b19f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b1a0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062b1a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b1a4: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x62b1a9u); f_005ea9c0();
    /* 0062b1a9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b1ac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b1af: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0062b1b2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b1b5: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b1b9: jne 0x62b1bf */ if (!fZ) goto L_0062b1bf;
L_0062b1bb:; BB(0x0062b1bb);
    /* 0062b1bb: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062b1bd: jmp 0x62b215 */ goto L_0062b215;
L_0062b1bf:; BB(0x0062b1bf);
    /* 0062b1bf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b1c2: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b1c6: jne 0x62b1d3 */ if (!fZ) goto L_0062b1d3;
L_0062b1c8:; BB(0x0062b1c8);
    /* 0062b1c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b1cb: call 0x62ba50 */ r_esp -= 4; W32(r_esp, 0x62b1d0u); f_0062ba50();
    /* 0062b1d0: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
L_0062b1d3:; BB(0x0062b1d3);
    /* 0062b1d3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b1d6: cmp dword ptr [edx + 8], 1 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b1da: jne 0x62b1e7 */ if (!fZ) goto L_0062b1e7;
L_0062b1dc:; BB(0x0062b1dc);
    /* 0062b1dc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b1df: call 0x62b6a0 */ r_esp -= 4; W32(r_esp, 0x62b1e4u); f_0062b6a0();
    /* 0062b1e4: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
L_0062b1e7:; BB(0x0062b1e7);
    /* 0062b1e7: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0062b1eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b1ed: je 0x62b212 */ if (fZ) goto L_0062b212;
L_0062b1ef:; BB(0x0062b1ef);
    /* 0062b1ef: push 0x62b060 */ { u32 v = 0x62b060u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b1f4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b1f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b1f9: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062b1fc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062b1fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b1ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b202: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062b205: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062b208: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b209: call dword ptr [0x6b2248] */ { u32 t = R32((u32)(0x6b2248u)); r_esp -= 4; W32(r_esp, 0x62b20fu); call_ind(t); }
    /* 0062b20f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062b212:; BB(0x0062b212);
    /* 0062b212: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
L_0062b215:; BB(0x0062b215);
    /* 0062b215: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062b216: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b218: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b219: ret 8 */ FN_RET(0x0062b0a0); r_esp += 12; return;
}

void f_0062b430(void) /* sub_62B430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b430);
    /* 0062b430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b431: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b433: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b436: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0062b439: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b43c: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b440: jne 0x62b449 */ if (!fZ) goto L_0062b449;
L_0062b442:; BB(0x0062b442);
    /* 0062b442: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062b444: jmp 0x62b525 */ goto L_0062b525;
L_0062b449:; BB(0x0062b449);
    /* 0062b449: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062b44c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b44d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062b450: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b451: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b454: call 0x62b530 */ r_esp -= 4; W32(r_esp, 0x62b459u); f_0062b530();
    /* 0062b459: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062b45c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b45f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062b462: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b465: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062b467: jae 0x62b523 */ if (!fC) goto L_0062b523;
L_0062b46d:; BB(0x0062b46d);
    /* 0062b46d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b470: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062b473: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b476: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062b479: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062b47c: mov ecx, dword ptr [ecx + edx + 0x10] */ r_ecx = R32((u32)(r_ecx+r_edx+0x10u));
    /* 0062b480: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062b482: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b485: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062b488: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b48b: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062b48e: mov edx, dword ptr [eax + ecx + 0x14] */ r_edx = R32((u32)(r_eax+r_ecx+0x14u));
    /* 0062b492: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0062b495: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062b497: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062b49a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062b49c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b49d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b4a0: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0062b4a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062b4a4: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x62b4aau); call_ind(t); }
    /* 0062b4aa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b4ad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b4b0: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062b4b3: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b4b7: je 0x62b513 */ if (fZ) goto L_0062b513;
L_0062b4b9:; BB(0x0062b4b9);
    /* 0062b4b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b4bc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062b4bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b4c0: call dword ptr [0x6b2310] */ { u32 t = R32((u32)(0x6b2310u)); r_esp -= 4; W32(r_esp, 0x62b4c6u); call_ind(t); }
    /* 0062b4c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b4c9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0062b4cc:; BB(0x0062b4cc);
    /* 0062b4cc: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b4d0: je 0x62b4fd */ if (fZ) goto L_0062b4fd;
L_0062b4d2:; BB(0x0062b4d2);
    /* 0062b4d2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b4d5: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062b4d8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0062b4db: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062b4de: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062b4e0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b4e3: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0062b4e6: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0062b4e8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b4eb: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062b4ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062b4ef: call dword ptr [0x6b2310] */ { u32 t = R32((u32)(0x6b2310u)); r_esp -= 4; W32(r_esp, 0x62b4f5u); call_ind(t); }
    /* 0062b4f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062b4f8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062b4fb: jmp 0x62b4cc */ goto L_0062b4cc;
L_0062b4fd:; BB(0x0062b4fd);
    /* 0062b4fd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b500: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062b503: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0062b506: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062b509: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0062b50b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b50e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0062b511: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_0062b513:; BB(0x0062b513);
    /* 0062b513: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0062b516: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b519: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062b51b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b51e: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0062b521: jmp 0x62b525 */ goto L_0062b525;
L_0062b523:; BB(0x0062b523);
    /* 0062b523: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062b525:; BB(0x0062b525);
    /* 0062b525: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b527: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b528: ret 0x10 */ FN_RET(0x0062b430); r_esp += 20; return;
}

void f_0062b530(void) /* sub_62B530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062b530);
    /* 0062b530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062b531: mov ebp, esp */ r_ebp = r_esp;
    /* 0062b533: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062b536: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0062b539: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0062b540: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062b543: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062b546: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062b548: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062b54b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0062b54e:; BB(0x0062b54e);
    /* 0062b54e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062b551: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062b554: jg 0x62b5ea */ if ((!fZ&&fS==fO)) goto L_0062b5ea;
L_0062b55a:; BB(0x0062b55a);
    /* 0062b55a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062b55d: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062b560: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0062b561: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062b563: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0062b565: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062b568: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062b56b: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062b56e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b571: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062b574: mov ecx, dword ptr [edx + eax + 0xc] */ r_ecx = R32((u32)(r_edx+r_eax+0xcu));
    /* 0062b578: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0062b57b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062b57e: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062b581: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b584: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062b587: mov edx, dword ptr [eax + ecx + 8] */ r_edx = R32((u32)(r_eax+r_ecx+0x8u));
    /* 0062b58b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0062b58e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b591: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b594: jne 0x62b5a3 */ if (!fZ) goto L_0062b5a3;
L_0062b596:; BB(0x0062b596);
    /* 0062b596: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b599: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062b59c: jne 0x62b5a3 */ if (!fZ) goto L_0062b5a3;
L_0062b59e:; BB(0x0062b59e);
    /* 0062b59e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b5a1: jmp 0x62b5ed */ goto L_0062b5ed;
L_0062b5a3:; BB(0x0062b5a3);
    /* 0062b5a3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b5a6: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062b5a9: jae 0x62b5b6 */ if (!fC) goto L_0062b5b6;
L_0062b5ab:; BB(0x0062b5ab);
    /* 0062b5ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b5ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062b5b1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062b5b4: jmp 0x62b5e5 */ goto L_0062b5e5;
L_0062b5b6:; BB(0x0062b5b6);
    /* 0062b5b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062b5b9: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062b5bc: jbe 0x62b5c9 */ if ((fC||fZ)) goto L_0062b5c9;
L_0062b5be:; BB(0x0062b5be);
    /* 0062b5be: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b5c1: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062b5c4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0062b5c7: jmp 0x62b5e5 */ goto L_0062b5e5;
L_0062b5c9:; BB(0x0062b5c9);
    /* 0062b5c9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062b5cc: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062b5cf: jge 0x62b5dc */ if ((fS==fO)) goto L_0062b5dc;
L_0062b5d1:; BB(0x0062b5d1);
    /* 0062b5d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b5d4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062b5d7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0062b5da: jmp 0x62b5e5 */ goto L_0062b5e5;
L_0062b5dc:; BB(0x0062b5dc);
    /* 0062b5dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062b5df: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062b5e2: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0062b5e5:; BB(0x0062b5e5);
    /* 0062b5e5: jmp 0x62b54e */ goto L_0062b54e;
L_0062b5ea:; BB(0x0062b5ea);
    /* 0062b5ea: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0062b5ed:; BB(0x0062b5ed);
    /* 0062b5ed: mov esp, ebp */ r_esp = r_ebp;
    /* 0062b5ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062b5f0: ret 8 */ FN_RET(0x0062b530); r_esp += 12; return;
}

void f_0062ba50(void) /* sub_62BA50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ba50);
    /* 0062ba50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba51: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ba53: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ba56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba57: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0062ba5a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062ba5d: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ba61: jne 0x62ba6a */ if (!fZ) goto L_0062ba6a;
L_0062ba63:; BB(0x0062ba63);
    /* 0062ba63: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062ba65: jmp 0x62bc49 */ goto L_0062bc49;
L_0062ba6a:; BB(0x0062ba6a);
    /* 0062ba6a: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba6c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62ba71u); f_00686d82();
    /* 0062ba71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ba74: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0062ba77: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062ba7a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062ba7d: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0062ba80: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062ba83: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062ba86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba89: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba8b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062ba8e: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062ba91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ba92: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x62ba98u); call_ind(t); }
    /* 0062ba98: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ba9b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062ba9e: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062baa1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062baa3: cmp dword ptr [edx], 1 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062baa6: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0062baa9: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 0062baac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062baaf: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062bab2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0062bab5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062bab8: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0062babc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062babe: je 0x62bacc */ if (fZ) goto L_0062bacc;
L_0062bac0:; BB(0x0062bac0);
    /* 0062bac0: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 0062bac3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bac4: call 0x62ce00 */ r_esp -= 4; W32(r_esp, 0x62bac9u); f_0062ce00();
    /* 0062bac9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062bacc:; BB(0x0062bacc);
    /* 0062bacc: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bad0: jne 0x62bafa */ if (!fZ) goto L_0062bafa;
L_0062bad2:; BB(0x0062bad2);
    /* 0062bad2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bad5: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062bad8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0062badb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062bade: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0062bae1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bae4: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062bae7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062bae9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062baec: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062baef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062baf1: cmp dword ptr [ecx], 1 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062baf4: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0062baf7: mov byte ptr [ebp - 5], dl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_edx);
L_0062bafa:; BB(0x0062bafa);
    /* 0062bafa: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0062bafe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bb00: je 0x62bb0a */ if (fZ) goto L_0062bb0a;
L_0062bb02:; BB(0x0062bb02);
    /* 0062bb02: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bb05: call 0x62bc50 */ r_esp -= 4; W32(r_esp, 0x62bb0au); f_0062bc50();
L_0062bb0a:; BB(0x0062bb0a);
    /* 0062bb0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb0c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bb0f: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062bb12: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062bb15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb16: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bb19: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062bb1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb1d: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x62bb23u); call_ind(t); }
    /* 0062bb23: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bb26: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bb29: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062bb2c: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062bb2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb30: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62bb35u); f_00686d82();
    /* 0062bb35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bb38: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062bb3b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bb3e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062bb41: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 0062bb44: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bb47: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0062bb4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb4d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bb50: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062bb53: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062bb56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb57: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bb5a: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062bb5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bb5e: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x62bb64u); call_ind(t); }
    /* 0062bb64: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bb67: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bb6a: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062bb6d: cmp dword ptr [ecx + 8], 1 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bb71: jne 0x62bc37 */ if (!fZ) goto L_0062bc37;
L_0062bb77:; BB(0x0062bb77);
    /* 0062bb77: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bb7a: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062bb7d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062bb80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bb83: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 0062bb87: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bb8a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062bb8d: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0062bb90: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bb93: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 0062bb96: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bb99: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062bb9c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062bb9e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bba1: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062bba4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062bba6: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062bba9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0062bbac: jmp 0x62bbb7 */ goto L_0062bbb7;
L_0062bbae:; BB(0x0062bbae);
    /* 0062bbae: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062bbb1: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062bbb4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0062bbb7:; BB(0x0062bbb7);
    /* 0062bbb7: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bbbb: je 0x62bc37 */ if (fZ) goto L_0062bc37;
L_0062bbbd:; BB(0x0062bbbd);
    /* 0062bbbd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062bbc0: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062bbc3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bbc6: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062bbc9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062bbcc: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062bbcf: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bbd2: mov ecx, dword ptr [esi + ecx + 0x10] */ r_ecx = R32((u32)(r_esi+r_ecx+0x10u));
    /* 0062bbd6: mov dword ptr [eax + edx + 0x14], ecx */ W32((u32)(r_eax+r_edx+0x14u), r_ecx);
    /* 0062bbda: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062bbdd: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062bbe0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bbe3: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062bbe6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062bbe9: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062bbec: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bbef: mov edx, dword ptr [esi + edx + 0xc] */ r_edx = R32((u32)(r_esi+r_edx+0xcu));
    /* 0062bbf3: mov dword ptr [ecx + eax + 0x10], edx */ W32((u32)(r_ecx+r_eax+0x10u), r_edx);
    /* 0062bbf7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062bbfa: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062bbfd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bc00: movzx edx, word ptr [ecx + eax + 8] */ r_edx = (u32)R16((u32)(r_ecx+r_eax+0x8u));
    /* 0062bc05: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bc08: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062bc0b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062bc0e: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062bc11: mov dword ptr [ecx + eax + 0xc], edx */ W32((u32)(r_ecx+r_eax+0xcu), r_edx);
    /* 0062bc15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062bc18: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062bc1b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bc1e: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062bc21: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062bc24: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062bc27: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bc2a: mov ecx, dword ptr [esi + ecx + 4] */ r_ecx = R32((u32)(r_esi+r_ecx+0x4u));
    /* 0062bc2e: mov dword ptr [eax + edx + 8], ecx */ W32((u32)(r_eax+r_edx+0x8u), r_ecx);
    /* 0062bc32: jmp 0x62bbae */ goto L_0062bbae;
L_0062bc37:; BB(0x0062bc37);
    /* 0062bc37: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0062bc3b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bc3d: je 0x62bc47 */ if (fZ) goto L_0062bc47;
L_0062bc3f:; BB(0x0062bc3f);
    /* 0062bc3f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062bc42: call 0x62bcc0 */ r_esp -= 4; W32(r_esp, 0x62bc47u); f_0062bcc0();
L_0062bc47:; BB(0x0062bc47);
    /* 0062bc47: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0062bc49:; BB(0x0062bc49);
    /* 0062bc49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062bc4a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062bc4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bc4d: ret  */ FN_RET(0x0062ba50); r_esp += 4; return;
}

void f_0062bc50(void) /* sub_62BC50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062bc50);
    /* 0062bc50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062bc51: mov ebp, esp */ r_ebp = r_esp;
    /* 0062bc53: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062bc56: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0062bc59: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062bc5c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062bc5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bc60: call 0x62ce00 */ r_esp -= 4; W32(r_esp, 0x62bc65u); f_0062ce00();
    /* 0062bc65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bc68: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062bc6b: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062bc6e: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062bc71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bc72: call 0x62ce00 */ r_esp -= 4; W32(r_esp, 0x62bc77u); f_0062ce00();
    /* 0062bc77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bc7a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062bc7d: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062bc80: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062bc83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bc84: call 0x62ce00 */ r_esp -= 4; W32(r_esp, 0x62bc89u); f_0062ce00();
    /* 0062bc89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bc8c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062bc8f: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062bc92: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062bc95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bc96: call 0x62ce00 */ r_esp -= 4; W32(r_esp, 0x62bc9bu); f_0062ce00();
    /* 0062bc9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bc9e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062bca1: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062bca4: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062bca7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bca8: call 0x62ce00 */ r_esp -= 4; W32(r_esp, 0x62bcadu); f_0062ce00();
    /* 0062bcad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bcb0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0062bcb2: mov esp, ebp */ r_esp = r_ebp;
    /* 0062bcb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bcb5: ret  */ FN_RET(0x0062bc50); r_esp += 4; return;
}

void f_0062bcc0(void) /* sub_62BCC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062bcc0);
    /* 0062bcc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062bcc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062bcc3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062bcc6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0062bcc9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062bccc: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062bccf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bcd0: call 0x62ce00 */ r_esp -= 4; W32(r_esp, 0x62bcd5u); f_0062ce00();
    /* 0062bcd5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bcd8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062bcdb: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062bcde: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062bce1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bce2: call 0x62ce00 */ r_esp -= 4; W32(r_esp, 0x62bce7u); f_0062ce00();
    /* 0062bce7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bcea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062bcf1: jmp 0x62bcfc */ goto L_0062bcfc;
L_0062bcf3:; BB(0x0062bcf3);
    /* 0062bcf3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bcf6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062bcf9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0062bcfc:; BB(0x0062bcfc);
    /* 0062bcfc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062bcff: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062bd02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bd05: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062bd07: jae 0x62bd56 */ if (!fC) goto L_0062bd56;
L_0062bd09:; BB(0x0062bd09);
    /* 0062bd09: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062bd0c: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062bd0f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bd12: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0062bd15: lea edx, [eax + ecx + 0xc] */ r_edx = (u32)(r_eax+r_ecx+0xcu);
    /* 0062bd19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bd1a: call 0x62ce00 */ r_esp -= 4; W32(r_esp, 0x62bd1fu); f_0062ce00();
    /* 0062bd1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bd22: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062bd25: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062bd28: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bd2b: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0062bd2e: lea eax, [ecx + edx + 0x10] */ r_eax = (u32)(r_ecx+r_edx+0x10u);
    /* 0062bd32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bd33: call 0x62ce00 */ r_esp -= 4; W32(r_esp, 0x62bd38u); f_0062ce00();
    /* 0062bd38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bd3b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062bd3e: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0062bd41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bd44: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0062bd47: lea ecx, [edx + eax + 0x14] */ r_ecx = (u32)(r_edx+r_eax+0x14u);
    /* 0062bd4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bd4c: call 0x62ce00 */ r_esp -= 4; W32(r_esp, 0x62bd51u); f_0062ce00();
    /* 0062bd51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bd54: jmp 0x62bcf3 */ goto L_0062bcf3;
L_0062bd56:; BB(0x0062bd56);
    /* 0062bd56: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0062bd58: mov esp, ebp */ r_esp = r_ebp;
    /* 0062bd5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bd5b: ret  */ FN_RET(0x0062bcc0); r_esp += 4; return;
}

void f_0062bd60(void) /* sub_62BD60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062bd60);
    /* 0062bd60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062bd61: mov ebp, esp */ r_ebp = r_esp;
    /* 0062bd63: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062bd66: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062bd69: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062bd6c: mov dword ptr [ebp - 8], 0x4000 */ W32((u32)(r_ebp+0xfffffff8u), 0x4000u);
    /* 0062bd73: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062bd78: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62bd7du); f_00686d82();
    /* 0062bd7d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bd80: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062bd83: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062bd86: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0062bd89:; BB(0x0062bd89);
    /* 0062bd89: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bd8d: je 0x62be14 */ if (fZ) goto L_0062be14;
L_0062bd93:; BB(0x0062bd93);
    /* 0062bd93: cmp dword ptr [ebp - 4], 0x4000 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062bd9a: jbe 0x62bda5 */ if ((fC||fZ)) goto L_0062bda5;
L_0062bd9c:; BB(0x0062bd9c);
    /* 0062bd9c: mov dword ptr [ebp - 0x18], 0x4000 */ W32((u32)(r_ebp+0xffffffe8u), 0x4000u);
    /* 0062bda3: jmp 0x62bdab */ goto L_0062bdab;
L_0062bda5:; BB(0x0062bda5);
    /* 0062bda5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bda8: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0062bdab:; BB(0x0062bdab);
    /* 0062bdab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062bdae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bdaf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062bdb1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062bdb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bdb5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062bdb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bdb9: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x62bdbfu); call_ind(t); }
    /* 0062bdbf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bdc2: cmp dword ptr [ebp - 4], 0x4000 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062bdc9: jbe 0x62bdd4 */ if ((fC||fZ)) goto L_0062bdd4;
L_0062bdcb:; BB(0x0062bdcb);
    /* 0062bdcb: mov dword ptr [ebp - 0x1c], 0x4000 */ W32((u32)(r_ebp+0xffffffe4u), 0x4000u);
    /* 0062bdd2: jmp 0x62bdda */ goto L_0062bdda;
L_0062bdd4:; BB(0x0062bdd4);
    /* 0062bdd4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bdd7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0062bdda:; BB(0x0062bdda);
    /* 0062bdda: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062bddd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bdde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062bde0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062bde3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bde4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062bde7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bde8: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x62bdeeu); call_ind(t); }
    /* 0062bdee: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bdf1: cmp dword ptr [ebp - 4], 0x4000 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062bdf8: jbe 0x62be08 */ if ((fC||fZ)) goto L_0062be08;
L_0062bdfa:; BB(0x0062bdfa);
    /* 0062bdfa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bdfd: sub ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062be03: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062be06: jmp 0x62be0f */ goto L_0062be0f;
L_0062be08:; BB(0x0062be08);
    /* 0062be08: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0062be0f:; BB(0x0062be0f);
    /* 0062be0f: jmp 0x62bd89 */ goto L_0062bd89;
L_0062be14:; BB(0x0062be14);
    /* 0062be14: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062be17: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0062be1a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062be1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062be1e: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62be23u); f_00686cae();
    /* 0062be23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062be26: mov esp, ebp */ r_esp = r_ebp;
    /* 0062be28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062be29: ret  */ FN_RET(0x0062bd60); r_esp += 4; return;
}

void f_0062bf70(void) /* sub_62BF70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062bf70);
    /* 0062bf70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf71: mov ebp, esp */ r_ebp = r_esp;
    /* 0062bf73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062bf77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bf7a: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062bf7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf7e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf80: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf82: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bf85: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0062bf88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062bf89: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x62bf8fu); call_ind(t); }
    /* 0062bf8f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bf92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bf94: jne 0x62bf9a */ if (!fZ) goto L_0062bf9a;
L_0062bf96:; BB(0x0062bf96);
    /* 0062bf96: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062bf98: jmp 0x62bfc7 */ goto L_0062bfc7;
L_0062bf9a:; BB(0x0062bf9a);
    /* 0062bf9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bf9d: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062bfa0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bfa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062bfa3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bfa6: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0062bfa9: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0062bfac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bfad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062bfb0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062bfb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062bfb4: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x62bfbau); call_ind(t); }
    /* 0062bfba: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062bfbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062bfbf: jne 0x62bfc5 */ if (!fZ) goto L_0062bfc5;
L_0062bfc1:; BB(0x0062bfc1);
    /* 0062bfc1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062bfc3: jmp 0x62bfc7 */ goto L_0062bfc7;
L_0062bfc5:; BB(0x0062bfc5);
    /* 0062bfc5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0062bfc7:; BB(0x0062bfc7);
    /* 0062bfc7: mov esp, ebp */ r_esp = r_ebp;
    /* 0062bfc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062bfca: ret  */ FN_RET(0x0062bf70); r_esp += 4; return;
}

