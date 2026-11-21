#include "protos.h"

void f_0063fe70(void) /* AIBiographyDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063fe70);
    /* 0063fe70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe71: mov ebp, esp */ r_ebp = r_esp;
    /* 0063fe73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe75: push 0x6abcb3 */ { u32 v = 0x6abcb3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063fe80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe82: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063fe87: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063fe89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe8a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063fe8d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0063fe93: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063fe96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fe9a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063fe9d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x63fea2u); f_005f71f0();
    /* 0063fea2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063fea9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063feac: mov dword ptr [eax], 0x6dbd6c */ W32((u32)(r_eax), 0x6dbd6cu);
    /* 0063feb2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063feb5: add ecx, 0x1bc */ {  u32 a = r_ecx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063febb: call 0x63a0c0 */ r_esp -= 4; W32(r_esp, 0x63fec0u); f_0063a0c0();
    /* 0063fec0: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0063fec4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fec6: push 0x30d4f2 */ { u32 v = 0x30d4f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fecb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063fece: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x63fed3u); f_005f83d0();
    /* 0063fed3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063fed6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063fed9: mov dword ptr [ecx + 0x568], edx */ W32((u32)(r_ecx+0x568u), r_edx);
    /* 0063fedf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063fee6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063fee9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063feec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063fef3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063fef4: mov esp, ebp */ r_esp = r_ebp;
    /* 0063fef6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063fef7: ret 4 */ FN_RET(0x0063fe70); r_esp += 8; return;
}

void f_0063ff00(void) /* AIBiographyDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063ff00);
    /* 0063ff00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff01: mov ebp, esp */ r_ebp = r_esp;
    /* 0063ff03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff05: push 0x6abcd6 */ { u32 v = 0x6abcd6u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063ff10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff12: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063ff17: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063ff19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff1a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063ff1d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0063ff23: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063ff26: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ff29: mov dword ptr [eax], 0x6dbd6c */ W32((u32)(r_eax), 0x6dbd6cu);
    /* 0063ff2f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063ff36: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ff39: add ecx, 0x1bc */ {  u32 a = r_ecx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063ff3f: call 0x63a120 */ r_esp -= 4; W32(r_esp, 0x63ff44u); f_0063a120();
    /* 0063ff44: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063ff4b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063ff4e: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x63ff53u); f_005f7260();
    /* 0063ff53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063ff56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063ff5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063ff5e: mov esp, ebp */ r_esp = r_ebp;
    /* 0063ff60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063ff61: ret  */ FN_RET(0x0063ff00); r_esp += 4; return;
}

void f_0063ff70(void) /* AIBiographyDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063ff70);
    /* 0063ff70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff71: mov ebp, esp */ r_ebp = r_esp;
    /* 0063ff73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063ff76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063ff79: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff7b: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff7d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff7f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff81: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff83: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff85: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff8a: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff8c: push 0x6dc2b4 */ { u32 v = 0x6dc2b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff91: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63ff96u); f_00630f40();
    /* 0063ff96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ff99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff9a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ff9e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063ffa1: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x63ffa6u); f_005fa5b0();
    /* 0063ffa6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffa8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffaa: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffac: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffae: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffb0: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffb5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63ffbau); f_00630f40();
    /* 0063ffba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ffbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffbe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffc0: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffc5: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffc7: push 0x30d4e4 */ { u32 v = 0x30d4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffd0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063ffd3: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x63ffd8u); f_005f9de0();
    /* 0063ffd8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffdc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffde: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffe3: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffe5: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffe7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffe9: push 0xda */ { u32 v = 0xdau; r_esp -= 4; W32(r_esp, v); }
    /* 0063ffee: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fff0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fff2: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fff7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fff9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063fffb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063fffe: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x640003u); f_005fa880();
    /* 00640003: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640005: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640007: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640009: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064000e: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640013: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640018: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064001a: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 0064001f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00640021: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640023: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 00640028: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064002a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064002c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064002f: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x640034u); f_005fa880();
    /* 00640034: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640037: mov ecx, dword ptr [eax + 0x568] */ r_ecx = R32((u32)(r_eax+0x568u));
    /* 0064003d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00640040: cmp dword ptr [ebp - 0xc], 0x1c */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00640044: ja 0x640bb3 */ if ((!fC&&!fZ)) goto L_00640bb3;
L_0064004a:; BB(0x0064004a);
    /* 0064004a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064004d: jmp dword ptr [edx*4 + 0x640c40] */ { u32 t = R32((u32)(r_edx*4+0x640c40u)); switch (t) { case 0x6402c1u: goto L_006402c1; case 0x640326u: goto L_00640326; case 0x64038bu: goto L_0064038b; case 0x640054u: goto L_00640054; case 0x6403f0u: goto L_006403f0; case 0x640458u: goto L_00640458; case 0x64018cu: goto L_0064018c; case 0x6404bdu: goto L_006404bd; case 0x640525u: goto L_00640525; case 0x6400bcu: goto L_006400bc; case 0x640259u: goto L_00640259; case 0x640124u: goto L_00640124; case 0x6401f4u: goto L_006401f4; case 0x640949u: goto L_00640949; case 0x6409b1u: goto L_006409b1; case 0x640a19u: goto L_00640a19; case 0x640a81u: goto L_00640a81; case 0x640ae9u: goto L_00640ae9; case 0x640b4eu: goto L_00640b4e; case 0x640765u: goto L_00640765; case 0x64058du: goto L_0064058d; case 0x6407d0u: goto L_006407d0; case 0x640808u: goto L_00640808; case 0x6405f5u: goto L_006405f5; case 0x64065du: goto L_0064065d; case 0x640873u: goto L_00640873; case 0x640692u: goto L_00640692; case 0x6408deu: goto L_006408de; case 0x6406fau: goto L_006406fa; default: UNSUP(0x0064004d, "jump table entry is not a known target"); } }
L_00640054:; BB(0x00640054);
    /* 00640054: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640056: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640058: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064005a: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0064005c: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640061: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00640063: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640068: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064006a: push 0x6dc29c */ { u32 v = 0x6dc29cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064006f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640074u); f_00630f40();
    /* 00640074: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640077: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640078: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064007a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064007c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064007f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640084u); f_005fa5b0();
    /* 00640084: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640086: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640088: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064008a: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064008f: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640094: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640096: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064009b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064009d: push 0x6dc284 */ { u32 v = 0x6dc284u; r_esp -= 4; W32(r_esp, v); }
    /* 006400a2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6400a7u); f_00630f40();
    /* 006400a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006400aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006400ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006400ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006400af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006400b2: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6400b7u); f_005fa5b0();
    /* 006400b7: jmp 0x640bce */ goto L_00640bce;
L_006400bc:; BB(0x006400bc);
    /* 006400bc: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006400be: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006400c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006400c2: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 006400c4: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006400c9: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006400cb: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006400d0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006400d2: push 0x6dc26c */ { u32 v = 0x6dc26cu; r_esp -= 4; W32(r_esp, v); }
    /* 006400d7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6400dcu); f_00630f40();
    /* 006400dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006400df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006400e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006400e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006400e4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006400e7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6400ecu); f_005fa5b0();
    /* 006400ec: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006400ee: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006400f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006400f2: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 006400f7: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006400fc: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006400fe: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640103: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640105: push 0x6dc254 */ { u32 v = 0x6dc254u; r_esp -= 4; W32(r_esp, v); }
    /* 0064010a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64010fu); f_00630f40();
    /* 0064010f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640112: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640113: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640115: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640117: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064011a: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x64011fu); f_005fa5b0();
    /* 0064011f: jmp 0x640bce */ goto L_00640bce;
L_00640124:; BB(0x00640124);
    /* 00640124: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640126: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640128: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064012a: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0064012c: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640131: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00640133: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640138: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064013a: push 0x6dc23c */ { u32 v = 0x6dc23cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064013f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640144u); f_00630f40();
    /* 00640144: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640148: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064014a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064014c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064014f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640154u); f_005fa5b0();
    /* 00640154: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640156: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640158: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064015a: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 0064015f: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640164: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 00640166: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064016b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064016d: push 0x6dc224 */ { u32 v = 0x6dc224u; r_esp -= 4; W32(r_esp, v); }
    /* 00640172: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640177u); f_00630f40();
    /* 00640177: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064017a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064017b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064017d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064017f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640182: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640187u); f_005fa5b0();
    /* 00640187: jmp 0x640bce */ goto L_00640bce;
L_0064018c:; BB(0x0064018c);
    /* 0064018c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064018e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640190: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640192: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640194: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640199: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0064019b: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006401a0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006401a2: push 0x6dc20c */ { u32 v = 0x6dc20cu; r_esp -= 4; W32(r_esp, v); }
    /* 006401a7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6401acu); f_00630f40();
    /* 006401ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006401af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006401b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006401b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006401b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006401b7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6401bcu); f_005fa5b0();
    /* 006401bc: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006401be: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006401c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006401c2: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 006401c7: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006401cc: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006401ce: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006401d3: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006401d5: push 0x6dc1f4 */ { u32 v = 0x6dc1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 006401da: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6401dfu); f_00630f40();
    /* 006401df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006401e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006401e3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006401e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006401e7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006401ea: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6401efu); f_005fa5b0();
    /* 006401ef: jmp 0x640bce */ goto L_00640bce;
L_006401f4:; BB(0x006401f4);
    /* 006401f4: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006401f6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006401f8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006401fa: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 006401fc: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640201: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00640203: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640208: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064020a: push 0x6dc1e0 */ { u32 v = 0x6dc1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064020f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640214u); f_00630f40();
    /* 00640214: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640217: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640218: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064021a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064021c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064021f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640224u); f_005fa5b0();
    /* 00640224: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640226: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640228: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064022a: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0064022c: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640231: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640233: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640238: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064023a: push 0x6dc1cc */ { u32 v = 0x6dc1ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0064023f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640244u); f_00630f40();
    /* 00640244: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640247: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640248: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064024a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064024c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064024f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640254u); f_005fa5b0();
    /* 00640254: jmp 0x640bce */ goto L_00640bce;
L_00640259:; BB(0x00640259);
    /* 00640259: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064025b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064025d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064025f: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640261: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640266: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00640268: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064026d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064026f: push 0x6dc1b4 */ { u32 v = 0x6dc1b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00640274: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640279u); f_00630f40();
    /* 00640279: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064027c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064027d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064027f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640281: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640284: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640289u); f_005fa5b0();
    /* 00640289: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064028b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064028d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064028f: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 00640294: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640299: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064029b: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006402a0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006402a2: push 0x6dc19c */ { u32 v = 0x6dc19cu; r_esp -= 4; W32(r_esp, v); }
    /* 006402a7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6402acu); f_00630f40();
    /* 006402ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006402af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006402b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006402b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006402b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006402b7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6402bcu); f_005fa5b0();
    /* 006402bc: jmp 0x640bce */ goto L_00640bce;
L_006402c1:; BB(0x006402c1);
    /* 006402c1: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006402c3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006402c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006402c7: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 006402c9: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006402ce: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006402d0: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006402d5: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006402d7: push 0x6dc188 */ { u32 v = 0x6dc188u; r_esp -= 4; W32(r_esp, v); }
    /* 006402dc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6402e1u); f_00630f40();
    /* 006402e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006402e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006402e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006402e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006402e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006402ec: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6402f1u); f_005fa5b0();
    /* 006402f1: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006402f3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006402f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006402f7: push 0x76 */ { u32 v = 0x76u; r_esp -= 4; W32(r_esp, v); }
    /* 006402f9: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006402fe: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 00640300: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640305: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640307: push 0x6dc174 */ { u32 v = 0x6dc174u; r_esp -= 4; W32(r_esp, v); }
    /* 0064030c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640311u); f_00630f40();
    /* 00640311: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640315: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640317: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640319: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064031c: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640321u); f_005fa5b0();
    /* 00640321: jmp 0x640bce */ goto L_00640bce;
L_00640326:; BB(0x00640326);
    /* 00640326: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640328: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064032a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064032c: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0064032e: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640333: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00640335: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064033a: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064033c: push 0x6dc15c */ { u32 v = 0x6dc15cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640341: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640346u); f_00630f40();
    /* 00640346: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064034a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064034c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064034e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640351: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640356u); f_005fa5b0();
    /* 00640356: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640358: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064035a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064035c: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 0064035e: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640363: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 00640365: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064036a: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064036c: push 0x6dc144 */ { u32 v = 0x6dc144u; r_esp -= 4; W32(r_esp, v); }
    /* 00640371: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640376u); f_00630f40();
    /* 00640376: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064037a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064037c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064037e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640381: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640386u); f_005fa5b0();
    /* 00640386: jmp 0x640bce */ goto L_00640bce;
L_0064038b:; BB(0x0064038b);
    /* 0064038b: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064038d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064038f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640391: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640393: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640398: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0064039a: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064039f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006403a1: push 0x6dc130 */ { u32 v = 0x6dc130u; r_esp -= 4; W32(r_esp, v); }
    /* 006403a6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6403abu); f_00630f40();
    /* 006403ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006403ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006403af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006403b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006403b3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006403b6: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6403bbu); f_005fa5b0();
    /* 006403bb: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006403bd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006403bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006403c1: push 0x76 */ { u32 v = 0x76u; r_esp -= 4; W32(r_esp, v); }
    /* 006403c3: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006403c8: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006403ca: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006403cf: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006403d1: push 0x6dc11c */ { u32 v = 0x6dc11cu; r_esp -= 4; W32(r_esp, v); }
    /* 006403d6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6403dbu); f_00630f40();
    /* 006403db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006403de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006403df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006403e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006403e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006403e6: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6403ebu); f_005fa5b0();
    /* 006403eb: jmp 0x640bce */ goto L_00640bce;
L_006403f0:; BB(0x006403f0);
    /* 006403f0: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006403f2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006403f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006403f6: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 006403f8: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006403fd: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006403ff: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640404: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640406: push 0x6dc104 */ { u32 v = 0x6dc104u; r_esp -= 4; W32(r_esp, v); }
    /* 0064040b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640410u); f_00630f40();
    /* 00640410: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640413: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640414: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640416: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640418: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064041b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640420u); f_005fa5b0();
    /* 00640420: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640422: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640424: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640426: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064042b: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640430: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00640432: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640437: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640439: push 0x6dc0ec */ { u32 v = 0x6dc0ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0064043e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640443u); f_00630f40();
    /* 00640443: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640446: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640447: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640449: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064044b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064044e: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640453u); f_005fa5b0();
    /* 00640453: jmp 0x640bce */ goto L_00640bce;
L_00640458:; BB(0x00640458);
    /* 00640458: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064045a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064045c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064045e: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640460: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640465: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00640467: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064046c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064046e: push 0x6dc0d4 */ { u32 v = 0x6dc0d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00640473: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640478u); f_00630f40();
    /* 00640478: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064047b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064047c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064047e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640480: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640483: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640488u); f_005fa5b0();
    /* 00640488: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064048a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064048c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064048e: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00640490: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640495: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 00640497: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064049c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064049e: push 0x6dc0bc */ { u32 v = 0x6dc0bcu; r_esp -= 4; W32(r_esp, v); }
    /* 006404a3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6404a8u); f_00630f40();
    /* 006404a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006404ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006404ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006404ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006404b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006404b3: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6404b8u); f_005fa5b0();
    /* 006404b8: jmp 0x640bce */ goto L_00640bce;
L_006404bd:; BB(0x006404bd);
    /* 006404bd: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006404bf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006404c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006404c3: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 006404c5: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006404ca: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006404cc: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006404d1: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006404d3: push 0x6dc0a4 */ { u32 v = 0x6dc0a4u; r_esp -= 4; W32(r_esp, v); }
    /* 006404d8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6404ddu); f_00630f40();
    /* 006404dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006404e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006404e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006404e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006404e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006404e8: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6404edu); f_005fa5b0();
    /* 006404ed: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006404ef: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006404f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006404f3: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 006404f8: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006404fd: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006404ff: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640504: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640506: push 0x6dc08c */ { u32 v = 0x6dc08cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064050b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640510u); f_00630f40();
    /* 00640510: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640513: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640514: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640516: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640518: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064051b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640520u); f_005fa5b0();
    /* 00640520: jmp 0x640bce */ goto L_00640bce;
L_00640525:; BB(0x00640525);
    /* 00640525: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640527: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640529: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064052b: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0064052d: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640532: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00640534: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640539: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064053b: push 0x6dc074 */ { u32 v = 0x6dc074u; r_esp -= 4; W32(r_esp, v); }
    /* 00640540: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640545u); f_00630f40();
    /* 00640545: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640549: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064054b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064054d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640550: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640555u); f_005fa5b0();
    /* 00640555: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640557: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640559: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064055b: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 00640560: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640565: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640567: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064056c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064056e: push 0x6dc05c */ { u32 v = 0x6dc05cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640573: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640578u); f_00630f40();
    /* 00640578: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064057b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064057c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064057e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640580: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640583: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640588u); f_005fa5b0();
    /* 00640588: jmp 0x640bce */ goto L_00640bce;
L_0064058d:; BB(0x0064058d);
    /* 0064058d: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064058f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640591: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640593: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640595: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 0064059a: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0064059c: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006405a1: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006405a3: push 0x6dc044 */ { u32 v = 0x6dc044u; r_esp -= 4; W32(r_esp, v); }
    /* 006405a8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6405adu); f_00630f40();
    /* 006405ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006405b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006405b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006405b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006405b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006405b8: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6405bdu); f_005fa5b0();
    /* 006405bd: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006405bf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006405c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006405c3: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 006405c8: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006405cd: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006405cf: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006405d4: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006405d6: push 0x6dc02c */ { u32 v = 0x6dc02cu; r_esp -= 4; W32(r_esp, v); }
    /* 006405db: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6405e0u); f_00630f40();
    /* 006405e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006405e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006405e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006405e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006405e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006405eb: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6405f0u); f_005fa5b0();
    /* 006405f0: jmp 0x640bce */ goto L_00640bce;
L_006405f5:; BB(0x006405f5);
    /* 006405f5: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006405f7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006405f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006405fb: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 006405fd: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640602: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00640604: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640609: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064060b: push 0x6dc014 */ { u32 v = 0x6dc014u; r_esp -= 4; W32(r_esp, v); }
    /* 00640610: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640615u); f_00630f40();
    /* 00640615: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640619: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064061b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064061d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640620: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640625u); f_005fa5b0();
    /* 00640625: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640627: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640629: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064062b: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 00640630: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640635: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640637: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064063c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064063e: push 0x6dbffc */ { u32 v = 0x6dbffcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640643: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640648u); f_00630f40();
    /* 00640648: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064064b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064064c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064064e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640650: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640653: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640658u); f_005fa5b0();
    /* 00640658: jmp 0x640bce */ goto L_00640bce;
L_0064065d:; BB(0x0064065d);
    /* 0064065d: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064065f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640661: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640663: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640665: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 0064066a: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0064066c: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640671: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640673: push 0x6dbfe4 */ { u32 v = 0x6dbfe4u; r_esp -= 4; W32(r_esp, v); }
    /* 00640678: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64067du); f_00630f40();
    /* 0064067d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640680: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640681: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640683: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640685: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640688: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x64068du); f_005fa5b0();
    /* 0064068d: jmp 0x640bce */ goto L_00640bce;
L_00640692:; BB(0x00640692);
    /* 00640692: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640694: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640696: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640698: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0064069a: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 0064069f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006406a1: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006406a6: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006406a8: push 0x6dbfcc */ { u32 v = 0x6dbfccu; r_esp -= 4; W32(r_esp, v); }
    /* 006406ad: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6406b2u); f_00630f40();
    /* 006406b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006406b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006406b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006406b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006406ba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006406bd: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6406c2u); f_005fa5b0();
    /* 006406c2: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006406c4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006406c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006406c8: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 006406cd: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006406d2: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 006406d4: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006406d9: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006406db: push 0x6dbfb4 */ { u32 v = 0x6dbfb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006406e0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6406e5u); f_00630f40();
    /* 006406e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006406e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006406e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006406eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006406ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006406f0: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6406f5u); f_005fa5b0();
    /* 006406f5: jmp 0x640bce */ goto L_00640bce;
L_006406fa:; BB(0x006406fa);
    /* 006406fa: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006406fc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006406fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640700: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640702: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640707: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0064070c: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640711: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640713: push 0x6dbf9c */ { u32 v = 0x6dbf9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640718: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64071du); f_00630f40();
    /* 0064071d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640720: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640721: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640723: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640725: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640728: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x64072du); f_005fa5b0();
    /* 0064072d: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064072f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640731: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640733: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00640738: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 0064073d: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064073f: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640744: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640746: push 0x6dbf84 */ { u32 v = 0x6dbf84u; r_esp -= 4; W32(r_esp, v); }
    /* 0064074b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640750u); f_00630f40();
    /* 00640750: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640753: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640754: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640756: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640758: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064075b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640760u); f_005fa5b0();
    /* 00640760: jmp 0x640bce */ goto L_00640bce;
L_00640765:; BB(0x00640765);
    /* 00640765: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640767: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640769: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064076b: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0064076d: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640772: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00640777: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064077c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064077e: push 0x6dbf70 */ { u32 v = 0x6dbf70u; r_esp -= 4; W32(r_esp, v); }
    /* 00640783: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640788u); f_00630f40();
    /* 00640788: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064078b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064078c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064078e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640790: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640793: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640798u); f_005fa5b0();
    /* 00640798: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064079a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064079c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064079e: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006407a3: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 006407a8: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006407aa: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006407af: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006407b1: push 0x6dbf5c */ { u32 v = 0x6dbf5cu; r_esp -= 4; W32(r_esp, v); }
    /* 006407b6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6407bbu); f_00630f40();
    /* 006407bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006407be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006407bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006407c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006407c3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006407c6: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6407cbu); f_005fa5b0();
    /* 006407cb: jmp 0x640bce */ goto L_00640bce;
L_006407d0:; BB(0x006407d0);
    /* 006407d0: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006407d2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006407d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006407d6: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 006407d8: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006407dd: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 006407e2: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006407e7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006407e9: push 0x6dbf44 */ { u32 v = 0x6dbf44u; r_esp -= 4; W32(r_esp, v); }
    /* 006407ee: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6407f3u); f_00630f40();
    /* 006407f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006407f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006407f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006407f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006407fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006407fe: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640803u); f_005fa5b0();
    /* 00640803: jmp 0x640bce */ goto L_00640bce;
L_00640808:; BB(0x00640808);
    /* 00640808: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064080a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064080c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064080e: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640810: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640815: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0064081a: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064081f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640821: push 0x6dbf30 */ { u32 v = 0x6dbf30u; r_esp -= 4; W32(r_esp, v); }
    /* 00640826: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64082bu); f_00630f40();
    /* 0064082b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064082e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064082f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640831: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640833: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640836: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x64083bu); f_005fa5b0();
    /* 0064083b: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064083d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064083f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640841: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 00640846: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 0064084b: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064084d: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640852: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640854: push 0x6dbf1c */ { u32 v = 0x6dbf1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640859: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64085eu); f_00630f40();
    /* 0064085e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640861: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640862: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640864: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640866: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640869: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x64086eu); f_005fa5b0();
    /* 0064086e: jmp 0x640bce */ goto L_00640bce;
L_00640873:; BB(0x00640873);
    /* 00640873: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640875: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640877: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640879: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0064087b: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640880: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00640885: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064088a: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064088c: push 0x6dbf04 */ { u32 v = 0x6dbf04u; r_esp -= 4; W32(r_esp, v); }
    /* 00640891: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640896u); f_00630f40();
    /* 00640896: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640899: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064089a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064089c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064089e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006408a1: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6408a6u); f_005fa5b0();
    /* 006408a6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006408a8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006408aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006408ac: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006408b1: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 006408b6: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006408b8: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006408bd: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006408bf: push 0x6dbeec */ { u32 v = 0x6dbeecu; r_esp -= 4; W32(r_esp, v); }
    /* 006408c4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6408c9u); f_00630f40();
    /* 006408c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006408cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006408cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006408cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006408d1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006408d4: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6408d9u); f_005fa5b0();
    /* 006408d9: jmp 0x640bce */ goto L_00640bce;
L_006408de:; BB(0x006408de);
    /* 006408de: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006408e0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006408e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006408e4: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 006408e6: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006408eb: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 006408f0: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006408f5: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006408f7: push 0x6dbed4 */ { u32 v = 0x6dbed4u; r_esp -= 4; W32(r_esp, v); }
    /* 006408fc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640901u); f_00630f40();
    /* 00640901: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640905: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640907: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640909: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064090c: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640911u); f_005fa5b0();
    /* 00640911: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640913: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640915: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640917: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 0064091c: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 00640921: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640923: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640928: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064092a: push 0x6dbebc */ { u32 v = 0x6dbebcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064092f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640934u); f_00630f40();
    /* 00640934: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640937: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640938: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064093a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064093c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064093f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640944u); f_005fa5b0();
    /* 00640944: jmp 0x640bce */ goto L_00640bce;
L_00640949:; BB(0x00640949);
    /* 00640949: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064094b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064094d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064094f: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640951: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640956: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00640958: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064095d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064095f: push 0x6dbea4 */ { u32 v = 0x6dbea4u; r_esp -= 4; W32(r_esp, v); }
    /* 00640964: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640969u); f_00630f40();
    /* 00640969: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064096c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064096d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064096f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640971: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640974: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640979u); f_005fa5b0();
    /* 00640979: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0064097b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064097d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064097f: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 00640984: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640989: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0064098b: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640990: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640992: push 0x6dbe8c */ { u32 v = 0x6dbe8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640997: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64099cu); f_00630f40();
    /* 0064099c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064099f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006409a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006409a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006409a4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006409a7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6409acu); f_005fa5b0();
    /* 006409ac: jmp 0x640bce */ goto L_00640bce;
L_006409b1:; BB(0x006409b1);
    /* 006409b1: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006409b3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006409b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006409b7: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 006409b9: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006409be: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 006409c0: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006409c5: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006409c7: push 0x6dbe74 */ { u32 v = 0x6dbe74u; r_esp -= 4; W32(r_esp, v); }
    /* 006409cc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6409d1u); f_00630f40();
    /* 006409d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006409d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006409d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006409d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006409d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006409dc: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6409e1u); f_005fa5b0();
    /* 006409e1: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006409e3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006409e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006409e7: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 006409ec: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 006409f1: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006409f3: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006409f8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006409fa: push 0x6dbe5c */ { u32 v = 0x6dbe5cu; r_esp -= 4; W32(r_esp, v); }
    /* 006409ff: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640a04u); f_00630f40();
    /* 00640a04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640a08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a0c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640a0f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640a14u); f_005fa5b0();
    /* 00640a14: jmp 0x640bce */ goto L_00640bce;
L_00640a19:; BB(0x00640a19);
    /* 00640a19: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a1b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a1f: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a21: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a26: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a28: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a2d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a2f: push 0x6dbe48 */ { u32 v = 0x6dbe48u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a34: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640a39u); f_00630f40();
    /* 00640a39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640a3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640a3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a41: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640a44: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640a49u); f_005fa5b0();
    /* 00640a49: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a4b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a4f: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a54: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a59: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a5b: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a60: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a62: push 0x6dbe34 */ { u32 v = 0x6dbe34u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a67: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640a6cu); f_00630f40();
    /* 00640a6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640a6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640a70: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a74: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640a77: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640a7cu); f_005fa5b0();
    /* 00640a7c: jmp 0x640bce */ goto L_00640bce;
L_00640a81:; BB(0x00640a81);
    /* 00640a81: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a83: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a85: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a87: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a89: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a8e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00640a90: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a95: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a97: push 0x6dbe1c */ { u32 v = 0x6dbe1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640a9c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640aa1u); f_00630f40();
    /* 00640aa1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640aa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640aa5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640aa7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640aa9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640aac: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640ab1u); f_005fa5b0();
    /* 00640ab1: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640ab3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640ab5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640ab7: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 00640abc: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640ac1: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640ac3: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640ac8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640aca: push 0x6dbe04 */ { u32 v = 0x6dbe04u; r_esp -= 4; W32(r_esp, v); }
    /* 00640acf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640ad4u); f_00630f40();
    /* 00640ad4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640ad7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640ad8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640ada: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640adc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640adf: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640ae4u); f_005fa5b0();
    /* 00640ae4: jmp 0x640bce */ goto L_00640bce;
L_00640ae9:; BB(0x00640ae9);
    /* 00640ae9: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640aeb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640aed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640aef: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640af1: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640af6: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00640af8: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640afd: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640aff: push 0x6dbdec */ { u32 v = 0x6dbdecu; r_esp -= 4; W32(r_esp, v); }
    /* 00640b04: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640b09u); f_00630f40();
    /* 00640b09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640b0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b11: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640b14: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640b19u); f_005fa5b0();
    /* 00640b19: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640b1b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b1f: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b21: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b26: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 00640b28: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640b2d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640b2f: push 0x6dbdd4 */ { u32 v = 0x6dbdd4u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b34: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640b39u); f_00630f40();
    /* 00640b39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640b3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640b3d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b41: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640b44: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640b49u); f_005fa5b0();
    /* 00640b49: jmp 0x640bce */ goto L_00640bce;
L_00640b4e:; BB(0x00640b4e);
    /* 00640b4e: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640b50: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b54: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640b56: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b5b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b5d: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640b62: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640b64: push 0x6dbdc0 */ { u32 v = 0x6dbdc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b69: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640b6eu); f_00630f40();
    /* 00640b6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640b71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640b72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b76: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640b79: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640b7eu); f_005fa5b0();
    /* 00640b7e: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640b80: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b84: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b89: push 0x83 */ { u32 v = 0x83u; r_esp -= 4; W32(r_esp, v); }
    /* 00640b8e: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640b90: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640b95: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00640b97: push 0x6dbdac */ { u32 v = 0x6dbdacu; r_esp -= 4; W32(r_esp, v); }
    /* 00640b9c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640ba1u); f_00630f40();
    /* 00640ba1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640ba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640ba5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640ba7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640ba9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640bac: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640bb1u); f_005fa5b0();
    /* 00640bb1: jmp 0x640bce */ goto L_00640bce;
L_00640bb3:; BB(0x00640bb3);
    /* 00640bb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00640bb5: jne 0x640bce */ if (!fZ) goto L_00640bce;
L_00640bb7:; BB(0x00640bb7);
    /* 00640bb7: push 0x6bf */ { u32 v = 0x6bfu; r_esp -= 4; W32(r_esp, v); }
    /* 00640bbc: push 0x6dbaac */ { u32 v = 0x6dbaacu; r_esp -= 4; W32(r_esp, v); }
    /* 00640bc1: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00640bc6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x640bcbu); f_005e9f20();
    /* 00640bcb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00640bce:; BB(0x00640bce);
    /* 00640bce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640bd0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640bd2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640bd5: add ecx, 0x1bc */ {  u32 a = r_ecx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640bdb: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x640be0u); f_0063a3e0();
    /* 00640be0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640be2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640be4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640be6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640be9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00640bea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640bed: mov ecx, dword ptr [eax + 0x568] */ r_ecx = R32((u32)(r_eax+0x568u));
    /* 00640bf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640bf4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640bf7: add ecx, 0x1bc */ {  u32 a = r_ecx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00640bfd: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x640c02u); f_0063a8d0();
    /* 00640c02: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640c05: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 00640c0b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00640c0e: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00640c10: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640c12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00640c15: call 0x646150 */ r_esp -= 4; W32(r_esp, 0x640c1au); f_00646150();
    /* 00640c1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640c1c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640c21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640c23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640c25: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00640c27: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00640c29: push 0x30d4e8 */ { u32 v = 0x30d4e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00640c2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640c30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640c32: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00640c35: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x640c3au); f_005f9ce0();
    /* 00640c3a: mov esp, ebp */ r_esp = r_ebp;
    /* 00640c3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640c3d: ret  */ FN_RET(0x0063ff70); r_esp += 4; return;
}

void f_00640cc0(void) /* AIBiographyDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640cc0);
    /* 00640cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00640cc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640cc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640cc7: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00640ccd: call 0x63db30 */ r_esp -= 4; W32(r_esp, 0x640cd2u); f_0063db30();
    /* 00640cd2: mov esp, ebp */ r_esp = r_ebp;
    /* 00640cd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640cd5: ret 4 */ FN_RET(0x00640cc0); r_esp += 8; return;
}

void f_00640ce0(void) /* AIBiographyDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640ce0);
    /* 00640ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00640ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640ce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640ce7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00640cea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640ceb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00640cee: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x640cf3u); f_005f72f0();
    /* 00640cf3: mov esp, ebp */ r_esp = r_ebp;
    /* 00640cf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640cf6: ret 4 */ FN_RET(0x00640ce0); r_esp += 8; return;
}

