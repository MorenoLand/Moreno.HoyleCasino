#include "protos.h"

void f_0045e930(void) /* PaiGowSettingsHelpText::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045e930);
    /* 0045e930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045e931: mov ebp, esp */ r_ebp = r_esp;
    /* 0045e933: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045e936: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0045e939: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045e940: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e947: jne 0x45e94e */ if (!fZ) goto L_0045e94e;
L_0045e949:; BB(0x0045e949);
    /* 0045e949: jmp 0x45eafa */ goto L_0045eafa;
L_0045e94e:; BB(0x0045e94e);
    /* 0045e94e: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e950: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e956: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e95bu); f_005fb350();
    /* 0045e95b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0045e95e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0045e965: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e967: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e96d: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e972u); f_005fb350();
    /* 0045e972: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045e975: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0045e97c: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e97e: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e984: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e989u); f_005fb350();
    /* 0045e989: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0045e98c: mov dword ptr [ebp - 0x20], 2 */ W32((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 0045e993: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e995: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e99b: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e9a0u); f_005fb350();
    /* 0045e9a0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045e9a3: mov dword ptr [ebp - 0x18], 3 */ W32((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 0045e9aa: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0045e9ac: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0045e9b2: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x45e9b7u); f_005fb350();
    /* 0045e9b7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045e9ba: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 0045e9c1: mov dword ptr [ebp - 0xc], 5 */ W32((u32)(r_ebp+0xfffffff4u), 0x5u);
    /* 0045e9c8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045e9cf: jmp 0x45e9da */ goto L_0045e9da;
L_0045e9d1:; BB(0x0045e9d1);
    /* 0045e9d1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e9d4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045e9d7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0045e9da:; BB(0x0045e9da);
    /* 0045e9da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e9dd: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045e9e0: jge 0x45ea1d */ if ((fS==fO)) goto L_0045ea1d;
L_0045e9e2:; BB(0x0045e9e2);
    /* 0045e9e2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e9e5: cmp dword ptr [ebp + edx*8 - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*8+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045e9ea: je 0x45ea1b */ if (fZ) goto L_0045ea1b;
L_0045e9ec:; BB(0x0045e9ec);
    /* 0045e9ec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045e9ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045e9f0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e9f3: mov edx, dword ptr [ebp + ecx*8 - 0x34] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xffffffccu));
    /* 0045e9f7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045e9fa: mov ecx, dword ptr [ebp + eax*8 - 0x34] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffccu));
    /* 0045e9fe: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0045ea00: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0045ea06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ea08u); call_ind(t); }
    /* 0045ea08: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045ea0b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ea0d: je 0x45ea1b */ if (fZ) goto L_0045ea1b;
L_0045ea0f:; BB(0x0045ea0f);
    /* 0045ea0f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ea12: mov eax, dword ptr [ebp + edx*8 - 0x30] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffd0u));
    /* 0045ea16: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045ea19: jmp 0x45ea1d */ goto L_0045ea1d;
L_0045ea1b:; BB(0x0045ea1b);
    /* 0045ea1b: jmp 0x45e9d1 */ goto L_0045e9d1;
L_0045ea1d:; BB(0x0045ea1d);
    /* 0045ea1d: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ea21: jne 0x45ea46 */ if (!fZ) goto L_0045ea46;
L_0045ea23:; BB(0x0045ea23);
    /* 0045ea23: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045ea26: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ea2a: jne 0x45ea41 */ if (!fZ) goto L_0045ea41;
L_0045ea2c:; BB(0x0045ea2c);
    /* 0045ea2c: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ea31: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045ea34: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045ea36: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045ea39: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0045ea3f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45ea41u); call_ind(t); }
L_0045ea41:; BB(0x0045ea41);
    /* 0045ea41: jmp 0x45eafa */ goto L_0045eafa;
L_0045ea46:; BB(0x0045ea46);
    /* 0045ea46: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ea4a: jne 0x45ea6a */ if (!fZ) goto L_0045ea6a;
L_0045ea4c:; BB(0x0045ea4c);
    /* 0045ea4c: push 0x6ba0d8 */ { u32 v = 0x6ba0d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ea51: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45ea56u); f_00630f40();
    /* 0045ea56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ea59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ea5a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045ea5d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045ea5f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045ea62: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0045ea68: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ea6au); call_ind(t); }
L_0045ea6a:; BB(0x0045ea6a);
    /* 0045ea6a: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ea6e: jne 0x45ea8e */ if (!fZ) goto L_0045ea8e;
L_0045ea70:; BB(0x0045ea70);
    /* 0045ea70: push 0x6ba0bc */ { u32 v = 0x6ba0bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0045ea75: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45ea7au); f_00630f40();
    /* 0045ea7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ea7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ea7e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045ea81: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045ea83: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045ea86: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0045ea8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ea8eu); call_ind(t); }
L_0045ea8e:; BB(0x0045ea8e);
    /* 0045ea8e: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ea92: jne 0x45eab2 */ if (!fZ) goto L_0045eab2;
L_0045ea94:; BB(0x0045ea94);
    /* 0045ea94: push 0x6ba0a0 */ { u32 v = 0x6ba0a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ea99: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45ea9eu); f_00630f40();
    /* 0045ea9e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045eaa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045eaa2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045eaa5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045eaa7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045eaaa: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0045eab0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45eab2u); call_ind(t); }
L_0045eab2:; BB(0x0045eab2);
    /* 0045eab2: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045eab6: jne 0x45ead6 */ if (!fZ) goto L_0045ead6;
L_0045eab8:; BB(0x0045eab8);
    /* 0045eab8: push 0x6ba084 */ { u32 v = 0x6ba084u; r_esp -= 4; W32(r_esp, v); }
    /* 0045eabd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45eac2u); f_00630f40();
    /* 0045eac2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045eac5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045eac6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045eac9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045eacb: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045eace: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0045ead4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ead6u); call_ind(t); }
L_0045ead6:; BB(0x0045ead6);
    /* 0045ead6: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045eada: jne 0x45eafa */ if (!fZ) goto L_0045eafa;
L_0045eadc:; BB(0x0045eadc);
    /* 0045eadc: push 0x6ba068 */ { u32 v = 0x6ba068u; r_esp -= 4; W32(r_esp, v); }
    /* 0045eae1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45eae6u); f_00630f40();
    /* 0045eae6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045eae9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045eaea: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045eaed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045eaef: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045eaf2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0045eaf8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45eafau); call_ind(t); }
L_0045eafa:; BB(0x0045eafa);
    /* 0045eafa: mov esp, ebp */ r_esp = r_ebp;
    /* 0045eafc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045eafd: ret 4 */ FN_RET(0x0045e930); r_esp += 8; return;
}

