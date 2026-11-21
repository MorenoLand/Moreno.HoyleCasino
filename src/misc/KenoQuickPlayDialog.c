#include "protos.h"

void f_00582780(void) /* KenoQuickPlayDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00582780);
    /* 00582780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582781: mov ebp, esp */ r_ebp = r_esp;
    /* 00582783: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00582785: push 0x6a6aeb */ { u32 v = 0x6a6aebu; r_esp -= 4; W32(r_esp, v); }
    /* 0058278a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00582790: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582791: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582794: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00582799: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058279b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058279c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0058279f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005827a5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005827a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005827aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005827ac: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005827af: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x5827b4u); f_005f71f0();
    /* 005827b4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005827bb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005827be: mov dword ptr [eax], 0x6cc29c */ W32((u32)(r_eax), 0x6cc29cu);
    /* 005827c4: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005827c8: jl 0x5827d0 */ if ((fS!=fO)) goto L_005827d0;
L_005827ca:; BB(0x005827ca);
    /* 005827ca: cmp dword ptr [ebp + 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005827ce: jle 0x5827e7 */ if ((fZ||fS!=fO)) goto L_005827e7;
L_005827d0:; BB(0x005827d0);
    /* 005827d0: push 0x4de */ { u32 v = 0x4deu; r_esp -= 4; W32(r_esp, v); }
    /* 005827d5: push 0x6cc024 */ { u32 v = 0x6cc024u; r_esp -= 4; W32(r_esp, v); }
    /* 005827da: push 0x6cc26c */ { u32 v = 0x6cc26cu; r_esp -= 4; W32(r_esp, v); }
    /* 005827df: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5827e4u); f_005e9f20();
    /* 005827e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005827e7:; BB(0x005827e7);
    /* 005827e7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005827ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005827ed: mov dword ptr [edx + 0x1bc], eax */ W32((u32)(r_edx+0x1bcu), r_eax);
    /* 005827f3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005827f6: mov dword ptr [ecx + 0x1c0], 0 */ W32((u32)(r_ecx+0x1c0u), 0x0u);
    /* 00582800: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582802: push 0x4e5 */ { u32 v = 0x4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00582807: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058280a: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x58280fu); f_005f83d0();
    /* 0058280f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582811: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582813: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582816: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x58281bu); f_005f7340();
    /* 0058281b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058281e: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x582823u); f_005f85d0();
    /* 00582823: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00582825: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582827: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00582829: push 0x6cc258 */ { u32 v = 0x6cc258u; r_esp -= 4; W32(r_esp, v); }
    /* 0058282e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x582833u); f_00630f40();
    /* 00582833: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00582836: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582837: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058283a: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x58283fu); f_005f73e0();
    /* 0058283f: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582844: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x582849u); f_00686d82();
    /* 00582849: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058284c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0058284f: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00582853: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582857: je 0x582866 */ if (fZ) goto L_00582866;
L_00582859:; BB(0x00582859);
    /* 00582859: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058285c: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x582861u); f_005ec5a0();
    /* 00582861: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00582864: jmp 0x58286d */ goto L_0058286d;
L_00582866:; BB(0x00582866);
    /* 00582866: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0058286d:; BB(0x0058286d);
    /* 0058286d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00582870: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00582873: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00582877: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058287a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0058287d: mov dword ptr [eax + 0x1c4], ecx */ W32((u32)(r_eax+0x1c4u), r_ecx);
    /* 00582883: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582886: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0058288c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058288f: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00582892: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582895: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 0058289b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058289e: mov ecx, dword ptr [ecx + 0x1c4] */ r_ecx = R32((u32)(r_ecx+0x1c4u));
    /* 005828a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005828a6: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005828a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5828abu); call_ind(t); }
    /* 005828ab: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005828ad: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005828b0: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 005828b6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005828b9: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 005828bf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005828c1: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005828c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5828c6u); call_ind(t); }
    /* 005828c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005828c7: mov ecx, esp */ r_ecx = r_esp;
    /* 005828c9: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005828d0: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005828d3: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005828d8: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005828db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005828dd: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005828df: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005828e2: mov ecx, dword ptr [ecx + 0x1c4] */ r_ecx = R32((u32)(r_ecx+0x1c4u));
    /* 005828e8: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5828edu); f_005ecd00();
    /* 005828ed: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005828ef: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005828f1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005828f4: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 005828fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005828fd: mov ecx, dword ptr [ecx + 0x1c4] */ r_ecx = R32((u32)(r_ecx+0x1c4u));
    /* 00582903: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00582905: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00582908: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58290au); call_ind(t); }
    /* 0058290a: push 0x6cc244 */ { u32 v = 0x6cc244u; r_esp -= 4; W32(r_esp, v); }
    /* 0058290f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x582914u); f_00630f40();
    /* 00582914: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00582917: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582918: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058291b: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 00582921: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582924: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 0058292a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058292c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00582932: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582934u); call_ind(t); }
    /* 00582934: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582937: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0058293d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582940: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 00582946: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00582948: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058294b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58294du); call_ind(t); }
    /* 0058294d: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582952: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x582957u); f_00686d82();
    /* 00582957: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058295a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0058295d: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00582961: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582965: je 0x582974 */ if (fZ) goto L_00582974;
L_00582967:; BB(0x00582967);
    /* 00582967: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058296a: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x58296fu); f_005ec5a0();
    /* 0058296f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00582972: jmp 0x58297b */ goto L_0058297b;
L_00582974:; BB(0x00582974);
    /* 00582974: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0058297b:; BB(0x0058297b);
    /* 0058297b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0058297e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00582981: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00582985: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582988: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058298b: mov dword ptr [edx + 0x1c8], eax */ W32((u32)(r_edx+0x1c8u), r_eax);
    /* 00582991: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582994: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 0058299a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058299d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005829a0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005829a3: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 005829a9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005829ac: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 005829b2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005829b4: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005829b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5829b9u); call_ind(t); }
    /* 005829b9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005829bb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005829be: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 005829c4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005829c7: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 005829cd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005829cf: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005829d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5829d4u); call_ind(t); }
    /* 005829d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005829d5: mov ecx, esp */ r_ecx = r_esp;
    /* 005829d7: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005829de: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005829e1: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005829e6: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005829e9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005829eb: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 005829ed: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005829f0: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 005829f6: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5829fbu); f_005ecd00();
    /* 005829fb: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005829fd: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582a00: mov ecx, dword ptr [edx + 0x1c8] */ r_ecx = R32((u32)(r_edx+0x1c8u));
    /* 00582a06: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x582a0bu); f_005ecc60();
    /* 00582a0b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00582a0d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582a10: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 00582a16: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x582a1bu); f_005eccb0();
    /* 00582a1b: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00582a1d: push 0x6d */ { u32 v = 0x6du; r_esp -= 4; W32(r_esp, v); }
    /* 00582a1f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582a22: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 00582a28: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582a2b: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 00582a31: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00582a33: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00582a36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582a38u); call_ind(t); }
    /* 00582a38: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00582a3d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582a40: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 00582a46: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582a49: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 00582a4f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00582a51: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00582a57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582a59u); call_ind(t); }
    /* 00582a59: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00582a5b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582a5e: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 00582a64: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x582a69u); f_005ef310();
    /* 00582a69: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582a6c: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00582a72: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582a75: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 00582a7b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00582a7d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00582a80: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582a82u); call_ind(t); }
    /* 00582a82: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00582a84: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x582a89u); f_00686d82();
    /* 00582a89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00582a8c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00582a8f: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00582a93: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582a97: je 0x582aa6 */ if (fZ) goto L_00582aa6;
L_00582a99:; BB(0x00582a99);
    /* 00582a99: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582a9c: call 0x5f6130 */ r_esp -= 4; W32(r_esp, 0x582aa1u); f_005f6130();
    /* 00582aa1: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00582aa4: jmp 0x582aad */ goto L_00582aad;
L_00582aa6:; BB(0x00582aa6);
    /* 00582aa6: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00582aad:; BB(0x00582aad);
    /* 00582aad: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00582ab0: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00582ab3: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00582ab7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582aba: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00582abd: mov dword ptr [edx + 0x1cc], eax */ W32((u32)(r_edx+0x1ccu), r_eax);
    /* 00582ac3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582ac6: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 00582acc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582acf: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00582ad2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582ad5: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 00582adb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582ade: mov ecx, dword ptr [eax + 0x1cc] */ r_ecx = R32((u32)(r_eax+0x1ccu));
    /* 00582ae4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00582ae6: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00582ae9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582aebu); call_ind(t); }
    /* 00582aeb: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00582aed: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582af0: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 00582af6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582af9: mov ecx, dword ptr [eax + 0x1cc] */ r_ecx = R32((u32)(r_eax+0x1ccu));
    /* 00582aff: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00582b01: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00582b04: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582b06u); call_ind(t); }
    /* 00582b06: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00582b08: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00582b0a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582b0d: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 00582b13: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582b16: mov ecx, dword ptr [eax + 0x1cc] */ r_ecx = R32((u32)(r_eax+0x1ccu));
    /* 00582b1c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00582b1e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00582b21: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582b23u); call_ind(t); }
    /* 00582b23: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00582b28: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582b2d: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582b32: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582b35: mov ecx, dword ptr [ecx + 0x1cc] */ r_ecx = R32((u32)(r_ecx+0x1ccu));
    /* 00582b3b: call 0x5f6580 */ r_esp -= 4; W32(r_esp, 0x582b40u); f_005f6580();
    /* 00582b40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582b42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582b44: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582b47: mov eax, dword ptr [edx + 0x1cc] */ r_eax = R32((u32)(r_edx+0x1ccu));
    /* 00582b4d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582b50: mov ecx, dword ptr [ecx + 0x1cc] */ r_ecx = R32((u32)(r_ecx+0x1ccu));
    /* 00582b56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00582b58: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00582b5b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582b5du); call_ind(t); }
    /* 00582b5d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582b60: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 00582b66: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582b69: mov ecx, dword ptr [eax + 0x1cc] */ r_ecx = R32((u32)(r_eax+0x1ccu));
    /* 00582b6f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00582b71: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00582b74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582b76u); call_ind(t); }
    /* 00582b76: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00582b7d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582b80: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00582b83: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00582b8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00582b8b: mov esp, ebp */ r_esp = r_ebp;
    /* 00582b8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582b8e: ret 4 */ FN_RET(0x00582780); r_esp += 8; return;
}

void f_00582ba0(void) /* KenoQuickPlayDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00582ba0);
    /* 00582ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00582ba3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00582ba5: push 0x6a6b0e */ { u32 v = 0x6a6b0eu; r_esp -= 4; W32(r_esp, v); }
    /* 00582baa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00582bb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582bb1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582bb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00582bb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00582bbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582bbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00582bbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00582bc5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00582bc8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582bcb: mov dword ptr [eax], 0x6cc29c */ W32((u32)(r_eax), 0x6cc29cu);
    /* 00582bd1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00582bd8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582bdb: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 00582be1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00582be4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00582be7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00582bea: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582bee: je 0x582c03 */ if (fZ) goto L_00582c03;
L_00582bf0:; BB(0x00582bf0);
    /* 00582bf0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00582bf2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00582bf5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00582bf7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00582bfa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00582bfc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582bfeu); call_ind(t); }
    /* 00582bfe: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00582c01: jmp 0x582c0a */ goto L_00582c0a;
L_00582c03:; BB(0x00582c03);
    /* 00582c03: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00582c0a:; BB(0x00582c0a);
    /* 00582c0a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582c0d: mov dword ptr [ecx + 0x1c4], 0 */ W32((u32)(r_ecx+0x1c4u), 0x0u);
    /* 00582c17: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582c1a: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00582c20: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00582c23: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00582c26: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00582c29: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582c2d: je 0x582c42 */ if (fZ) goto L_00582c42;
L_00582c2f:; BB(0x00582c2f);
    /* 00582c2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00582c31: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00582c34: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00582c36: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00582c39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00582c3b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x582c3du); call_ind(t); }
    /* 00582c3d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00582c40: jmp 0x582c49 */ goto L_00582c49;
L_00582c42:; BB(0x00582c42);
    /* 00582c42: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00582c49:; BB(0x00582c49);
    /* 00582c49: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582c4c: mov dword ptr [eax + 0x1c8], 0 */ W32((u32)(r_eax+0x1c8u), 0x0u);
    /* 00582c56: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582c59: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 00582c5f: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00582c62: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582c65: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00582c68: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582c6c: je 0x582c81 */ if (fZ) goto L_00582c81;
L_00582c6e:; BB(0x00582c6e);
    /* 00582c6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00582c70: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00582c73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00582c75: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00582c78: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00582c7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582c7cu); call_ind(t); }
    /* 00582c7c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00582c7f: jmp 0x582c88 */ goto L_00582c88;
L_00582c81:; BB(0x00582c81);
    /* 00582c81: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00582c88:; BB(0x00582c88);
    /* 00582c88: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582c8b: mov dword ptr [ecx + 0x1cc], 0 */ W32((u32)(r_ecx+0x1ccu), 0x0u);
    /* 00582c95: cmp dword ptr [0x793584], 0 */ {  u32 a = R32((u32)(0x793584u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582c9c: je 0x582ca9 */ if (fZ) goto L_00582ca9;
L_00582c9e:; BB(0x00582c9e);
    /* 00582c9e: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 00582ca4: call 0x58af00 */ r_esp -= 4; W32(r_esp, 0x582ca9u); f_0058af00();
L_00582ca9:; BB(0x00582ca9);
    /* 00582ca9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00582cb0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00582cb3: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x582cb8u); f_005f7260();
    /* 00582cb8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00582cbb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00582cc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00582cc3: mov esp, ebp */ r_esp = r_ebp;
    /* 00582cc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582cc6: ret  */ FN_RET(0x00582ba0); r_esp += 4; return;
}

void f_00582cd0(void) /* KenoQuickPlayDialog::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00582cd0);
    /* 00582cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00582cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00582cd3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00582cd6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00582cdb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00582cdd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00582ce0: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00582ce3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582ce6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582ce9: mov edx, dword ptr [eax + 0x1c0] */ r_edx = R32((u32)(r_eax+0x1c0u));
    /* 00582cef: cmp edx, dword ptr [ecx + 0x1bc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1bcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582cf5: je 0x582df0 */ if (fZ) goto L_00582df0;
L_00582cfb:; BB(0x00582cfb);
    /* 00582cfb: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00582d01: call 0x5e0ea0 */ r_esp -= 4; W32(r_esp, 0x582d06u); f_005e0ea0();
    /* 00582d06: cmp dword ptr [0x793584], 0 */ {  u32 a = R32((u32)(0x793584u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582d0d: je 0x582d33 */ if (fZ) goto L_00582d33;
L_00582d0f:; BB(0x00582d0f);
    /* 00582d0f: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00582d14: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00582d1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00582d1b: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 00582d21: call 0x589050 */ r_esp -= 4; W32(r_esp, 0x582d26u); f_00589050();
    /* 00582d26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582d28: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 00582d2e: call 0x5890f0 */ r_esp -= 4; W32(r_esp, 0x582d33u); f_005890f0();
L_00582d33:; BB(0x00582d33);
    /* 00582d33: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582d36: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 00582d3c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00582d3f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582d42: mov dword ptr [ecx + 0x1c0], eax */ W32((u32)(r_ecx+0x1c0u), r_eax);
    /* 00582d48: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582d4b: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00582d51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582d52: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582d55: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 00582d5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00582d5c: push 0x6b38f0 */ { u32 v = 0x6b38f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00582d61: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00582d64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582d65: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x582d6bu); call_ind(t); }
    /* 00582d6b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00582d6e: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00582d71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00582d72: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582d75: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00582d7b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582d7e: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 00582d84: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00582d86: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00582d8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582d8eu); call_ind(t); }
    /* 00582d8e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582d91: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582d94: mov eax, dword ptr [ecx + 0x1c0] */ r_eax = R32((u32)(r_ecx+0x1c0u));
    /* 00582d9a: cmp eax, dword ptr [edx + 0x1bc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1bcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582da0: jne 0x582dad */ if (!fZ) goto L_00582dad;
L_00582da2:; BB(0x00582da2);
    /* 00582da2: fld dword ptr [0x6cc2e8] */ FPUSH(R_F32((u32)(0x6cc2e8u)));
    /* 00582da8: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00582dab: jmp 0x582dc8 */ goto L_00582dc8;
L_00582dad:; BB(0x00582dad);
    /* 00582dad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582db0: fild dword ptr [ecx + 0x1bc] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x1bcu)));
    /* 00582db6: fdivr qword ptr [0x6cc2e0] */ ST(0) = R_F64((u32)(0x6cc2e0u)) / ST(0);
    /* 00582dbc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582dbf: fimul dword ptr [edx + 0x1c0] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_edx+0x1c0u));
    /* 00582dc5: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
L_00582dc8:; BB(0x00582dc8);
    /* 00582dc8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00582dca: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00582dcd: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x582dd2u); f_00686cc0();
    /* 00582dd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00582dd3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582dd6: mov ecx, dword ptr [eax + 0x1cc] */ r_ecx = R32((u32)(r_eax+0x1ccu));
    /* 00582ddc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582ddf: mov eax, dword ptr [edx + 0x1cc] */ r_eax = R32((u32)(r_edx+0x1ccu));
    /* 00582de5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00582de7: mov ecx, eax */ r_ecx = r_eax;
    /* 00582de9: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00582dec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582deeu); call_ind(t); }
    /* 00582dee: jmp 0x582e34 */ goto L_00582e34;
L_00582df0:; BB(0x00582df0);
    /* 00582df0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582df3: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x582df8u); f_005f87d0();
    /* 00582df8: mov ecx, dword ptr [0x793584] */ r_ecx = R32((u32)(0x793584u));
    /* 00582dfe: mov dword ptr [ecx + 0x3c0c], 0 */ W32((u32)(r_ecx+0x3c0cu), 0x0u);
    /* 00582e08: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00582e0b: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00582e0e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00582e11: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00582e14: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00582e18: je 0x582e2d */ if (fZ) goto L_00582e2d;
L_00582e1a:; BB(0x00582e1a);
    /* 00582e1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00582e1c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00582e1f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00582e21: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00582e24: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00582e26: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x582e28u); call_ind(t); }
    /* 00582e28: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00582e2b: jmp 0x582e34 */ goto L_00582e34;
L_00582e2d:; BB(0x00582e2d);
    /* 00582e2d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00582e34:; BB(0x00582e34);
    /* 00582e34: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00582e37: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00582e39: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x582e3eu); f_00686d72();
    /* 00582e3e: mov esp, ebp */ r_esp = r_ebp;
    /* 00582e40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00582e41: ret  */ FN_RET(0x00582cd0); r_esp += 4; return;
}

