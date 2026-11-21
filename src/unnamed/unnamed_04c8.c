#include "protos.h"

void f_004c80b0(void) /* sub_4C80B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c80b0);
    /* 004c80b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c80b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c80b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c80b5: push 0x6a2376 */ { u32 v = 0x6a2376u; r_esp -= 4; W32(r_esp, v); }
    /* 004c80ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004c80c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c80c1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c80c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004c80c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c80cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c80cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004c80cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004c80d5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004c80d8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004c80df: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004c80e2: call 0x484300 */ r_esp -= 4; W32(r_esp, 0x4c80e7u); f_00484300();
    /* 004c80e7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004c80ee: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c80f1: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c80f5: je 0x4c8160 */ if (fZ) goto L_004c8160;
L_004c80f7:; BB(0x004c80f7);
    /* 004c80f7: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004c80fe: jmp 0x4c8109 */ goto L_004c8109;
L_004c8100:; BB(0x004c8100);
    /* 004c8100: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8103: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c8106: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_004c8109:; BB(0x004c8109);
    /* 004c8109: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c810c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004c810f: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c8114u); f_0060c9a0();
    /* 004c8114: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8117: jge 0x4c8160 */ if ((fS==fO)) goto L_004c8160;
L_004c8119:; BB(0x004c8119);
    /* 004c8119: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c811c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c811d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c8120: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004c8123: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c8124: call 0x4c7310 */ r_esp -= 4; W32(r_esp, 0x4c8129u); f_004c7310();
    /* 004c8129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c812c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c812d: lea eax, [ebp - 0x1d] */ r_eax = (u32)(r_ebp+0xffffffe3u);
    /* 004c8130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c8131: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c8134: call 0x4dd940 */ r_esp -= 4; W32(r_esp, 0x4c8139u); f_004dd940();
    /* 004c8139: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004c813c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004c813f: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004c8142: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004c8146: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004c8149: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c814a: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004c814d: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x4c8152u); f_00484830();
    /* 004c8152: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004c8156: lea ecx, [ebp - 0x1d] */ r_ecx = (u32)(r_ebp+0xffffffe3u);
    /* 004c8159: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4c815eu); f_00464210();
    /* 004c815e: jmp 0x4c8100 */ goto L_004c8100;
L_004c8160:; BB(0x004c8160);
    /* 004c8160: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c8163: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8167: je 0x4c81d2 */ if (fZ) goto L_004c81d2;
L_004c8169:; BB(0x004c8169);
    /* 004c8169: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004c8170: jmp 0x4c817b */ goto L_004c817b;
L_004c8172:; BB(0x004c8172);
    /* 004c8172: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8175: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c8178: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_004c817b:; BB(0x004c817b);
    /* 004c817b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c817e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004c8181: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c8186u); f_0060c9a0();
    /* 004c8186: cmp dword ptr [ebp - 0x1c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8189: jge 0x4c81d2 */ if ((fS==fO)) goto L_004c81d2;
L_004c818b:; BB(0x004c818b);
    /* 004c818b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c818e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c818f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c8192: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 004c8195: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c8196: call 0x4c7310 */ r_esp -= 4; W32(r_esp, 0x4c819bu); f_004c7310();
    /* 004c819b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c819e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c819f: lea eax, [ebp - 0x1e] */ r_eax = (u32)(r_ebp+0xffffffe2u);
    /* 004c81a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c81a3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c81a6: call 0x4dd940 */ r_esp -= 4; W32(r_esp, 0x4c81abu); f_004dd940();
    /* 004c81ab: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004c81ae: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004c81b1: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004c81b4: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004c81b8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004c81bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c81bc: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004c81bf: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x4c81c4u); f_00484830();
    /* 004c81c4: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004c81c8: lea ecx, [ebp - 0x1e] */ r_ecx = (u32)(r_ebp+0xffffffe2u);
    /* 004c81cb: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4c81d0u); f_00464210();
    /* 004c81d0: jmp 0x4c8172 */ goto L_004c8172;
L_004c81d2:; BB(0x004c81d2);
    /* 004c81d2: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 004c81d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c81d6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c81d9: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4c81deu); f_00484320();
    /* 004c81de: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c81e1: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c81e4: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004c81e7: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c81eb: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004c81ee: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c81f3u); f_00484470();
    /* 004c81f3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004c81f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c81f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8200: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c8201: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8203: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8204: ret 4 */ FN_RET(0x004c80b0); r_esp += 8; return;
}

void f_004c8210(void) /* sub_4C8210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c8210);
    /* 004c8210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c8211: mov ebp, esp */ r_ebp = r_esp;
    /* 004c8213: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004c8215: push 0x6a23ba */ { u32 v = 0x6a23bau; r_esp -= 4; W32(r_esp, v); }
    /* 004c821a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004c8220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c8221: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c8224: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004c8229: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c822b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c822c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004c822f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004c8235: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004c8238: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004c823f: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004c8242: call 0x484300 */ r_esp -= 4; W32(r_esp, 0x4c8247u); f_00484300();
    /* 004c8247: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004c824e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c8251: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8255: je 0x4c82c0 */ if (fZ) goto L_004c82c0;
L_004c8257:; BB(0x004c8257);
    /* 004c8257: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004c825e: jmp 0x4c8269 */ goto L_004c8269;
L_004c8260:; BB(0x004c8260);
    /* 004c8260: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8263: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c8266: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_004c8269:; BB(0x004c8269);
    /* 004c8269: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c826c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004c826f: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x4c8274u); f_0060c9a0();
    /* 004c8274: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8277: jge 0x4c82c0 */ if ((fS==fO)) goto L_004c82c0;
L_004c8279:; BB(0x004c8279);
    /* 004c8279: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c827c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c827d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c8280: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004c8283: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c8284: call 0x4c7310 */ r_esp -= 4; W32(r_esp, 0x4c8289u); f_004c7310();
    /* 004c8289: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c828c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c828d: lea eax, [ebp - 0x19] */ r_eax = (u32)(r_ebp+0xffffffe7u);
    /* 004c8290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c8291: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c8294: call 0x4ddb10 */ r_esp -= 4; W32(r_esp, 0x4c8299u); f_004ddb10();
    /* 004c8299: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004c829c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004c829f: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004c82a2: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004c82a6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004c82a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c82aa: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004c82ad: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x4c82b2u); f_00484830();
    /* 004c82b2: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004c82b6: lea ecx, [ebp - 0x19] */ r_ecx = (u32)(r_ebp+0xffffffe7u);
    /* 004c82b9: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x4c82beu); f_00464210();
    /* 004c82be: jmp 0x4c8260 */ goto L_004c8260;
L_004c82c0:; BB(0x004c82c0);
    /* 004c82c0: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 004c82c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c82c4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c82c7: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x4c82ccu); f_00484320();
    /* 004c82cc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c82cf: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004c82d2: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004c82d5: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c82d9: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004c82dc: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4c82e1u); f_00484470();
    /* 004c82e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004c82e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c82e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c82ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c82ef: mov esp, ebp */ r_esp = r_ebp;
    /* 004c82f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c82f2: ret 4 */ FN_RET(0x004c8210); r_esp += 8; return;
}

void f_004c8eb0(void) /* sub_4C8EB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c8eb0);
    /* 004c8eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c8eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 004c8eb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c8eb6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004c8eb9: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c8ebf: jmp 0x4c8ecd */ goto L_004c8ecd;
L_004c8ec1:; BB(0x004c8ec1);
    /* 004c8ec1: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004c8ec5: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004c8ec9: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_004c8ecd:; BB(0x004c8ecd);
    /* 004c8ecd: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004c8ed1: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8ed4: jge 0x4c8f14 */ if ((fS==fO)) goto L_004c8f14;
L_004c8ed6:; BB(0x004c8ed6);
    /* 004c8ed6: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004c8eda: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c8edd: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 004c8ee1: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004c8ee5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c8ee8: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 004c8eec: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004c8eee: mov ecx, edx */ r_ecx = r_edx;
    /* 004c8ef0: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004c8ef3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4c8ef5u); call_ind(t); }
    /* 004c8ef5: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004c8ef9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c8efc: mov edx, dword ptr [ecx + eax*4 + 0x50] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x50u));
    /* 004c8f00: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004c8f04: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c8f07: mov ecx, dword ptr [ecx + eax*4 + 0x50] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x50u));
    /* 004c8f0b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004c8f0d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004c8f10: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c8f12u); call_ind(t); }
    /* 004c8f12: jmp 0x4c8ec1 */ goto L_004c8ec1;
L_004c8f14:; BB(0x004c8f14);
    /* 004c8f14: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c8f1a: jmp 0x4c8f28 */ goto L_004c8f28;
L_004c8f1c:; BB(0x004c8f1c);
    /* 004c8f1c: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004c8f20: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004c8f24: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_004c8f28:; BB(0x004c8f28);
    /* 004c8f28: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004c8f2c: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8f2f: jge 0x4c8f50 */ if ((fS==fO)) goto L_004c8f50;
L_004c8f31:; BB(0x004c8f31);
    /* 004c8f31: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004c8f35: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c8f38: mov edx, dword ptr [ecx + eax*4 + 0x58] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x58u));
    /* 004c8f3c: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004c8f40: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c8f43: mov ecx, dword ptr [ecx + eax*4 + 0x58] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x58u));
    /* 004c8f47: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004c8f49: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004c8f4c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4c8f4eu); call_ind(t); }
    /* 004c8f4e: jmp 0x4c8f1c */ goto L_004c8f1c;
L_004c8f50:; BB(0x004c8f50);
    /* 004c8f50: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f53: ret  */ FN_RET(0x004c8eb0); r_esp += 4; return;
}

void f_004c8f60(void) /* sub_4C8F60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c8f60);
    /* 004c8f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c8f61: mov ebp, esp */ r_ebp = r_esp;
    /* 004c8f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c8f64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c8f65: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004c8f68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c8f6b: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x4c8f70u); f_004c6a70();
    /* 004c8f70: mov esi, eax */ r_esi = r_eax;
    /* 004c8f72: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c8f78: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x4c8f7du); f_0047bc20();
    /* 004c8f7d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8f7f: jge 0x4c8f87 */ if ((fS==fO)) goto L_004c8f87;
L_004c8f81:; BB(0x004c8f81);
    /* 004c8f81: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c8f83: jmp 0x4c8f89 */ goto L_004c8f89;
L_004c8f87:; BB(0x004c8f87);
    /* 004c8f87: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004c8f89:; BB(0x004c8f89);
    /* 004c8f89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c8f8a: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f8d: ret  */ FN_RET(0x004c8f60); r_esp += 4; return;
}

