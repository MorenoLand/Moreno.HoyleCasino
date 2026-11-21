#include "protos.h"

void f_005d0260(void) /* sub_5D0260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0260);
    /* 005d0260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0261: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0263: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0266: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d026b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d026d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d0270: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005d0273: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d0276: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 005d027c: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005d027f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d0282: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d0287u); f_0063aac0();
    /* 005d0287: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d028a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d028b: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 005d028e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d028f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5d0294u); f_00686d8e();
    /* 005d0294: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0297: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 005d029a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d029b: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x5d02a0u); f_00686ecc();
    /* 005d02a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d02a3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d02a6: sub eax, dword ptr [ecx + 0x1fc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1fcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d02ac: movsx edx, byte ptr [ebp + eax - 0x24] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+r_eax+0xffffffdcu));
    /* 005d02b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d02b2: push 0x6d33e4 */ { u32 v = 0x6d33e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d02b7: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 005d02ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d02bb: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5d02c1u); call_ind(t); }
    /* 005d02c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d02c4: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005d02c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d02c8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d02cb: add edx, 0x1c8 */ {  u32 a = r_edx; u32 b = 0x1c8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d02d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d02d2: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x5d02d7u); f_00686ec6();
    /* 005d02d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d02da: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d02dc: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d02df: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 005d02e5: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5d02eau); f_005ecc60();
    /* 005d02ea: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d02ed: add ecx, 0x1c8 */ {  u32 a = r_ecx; u32 b = 0x1c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d02f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d02f4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d02f7: mov ecx, dword ptr [edx + 0x1c0] */ r_ecx = R32((u32)(r_edx+0x1c0u));
    /* 005d02fd: call 0x5ee710 */ r_esp -= 4; W32(r_esp, 0x5d0302u); f_005ee710();
    /* 005d0302: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d0305: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 005d030b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d030e: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 005d0314: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d0316: mov ecx, eax */ r_ecx = r_eax;
    /* 005d0318: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d031b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d031du); call_ind(t); }
    /* 005d031d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d0320: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 005d0326: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d0329: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d032c: mov dword ptr [eax + 0x1fc], edx */ W32((u32)(r_eax+0x1fcu), r_edx);
    /* 005d0332: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d0335: cmp dword ptr [ecx + 0x1fc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1fcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d033c: jle 0x5d037a */ if ((fZ||fS!=fO)) goto L_005d037a;
L_005d033e:; BB(0x005d033e);
    /* 005d033e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d0341: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 005d0347: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d034a: mov ecx, dword ptr [ecx + 0x1c0] */ r_ecx = R32((u32)(r_ecx+0x1c0u));
    /* 005d0350: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0352: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005d0358: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d035au); call_ind(t); }
    /* 005d035a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d035b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d035e: add ecx, 0x1c8 */ {  u32 a = r_ecx; u32 b = 0x1c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d0364: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0365: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5d036au); f_00686ec0();
    /* 005d036a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d036d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d036f: jne 0x5d037a */ if (!fZ) goto L_005d037a;
L_005d0371:; BB(0x005d0371);
    /* 005d0371: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005d0378: jmp 0x5d0381 */ goto L_005d0381;
L_005d037a:; BB(0x005d037a);
    /* 005d037a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005d0381:; BB(0x005d0381);
    /* 005d0381: mov al, byte ptr [ebp - 0x34] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffccu))) & 0xffu);
    /* 005d0384: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0387: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d0389: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5d038eu); f_00686d72();
    /* 005d038e: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0390: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0391: ret  */ FN_RET(0x005d0260); r_esp += 4; return;
}

void f_005d05a0(void) /* sub_5D05A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d05a0);
    /* 005d05a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d05a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d05a3: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d05a6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d05ab: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d05ad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d05b0: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005d05b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d05b5: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005d05b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d05b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d05bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d05bd: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005d05bf: push 0x1c0 */ { u32 v = 0x1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d05c4: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005d05c6: push 0x6d309c */ { u32 v = 0x6d309cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d05cb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d05d0u); f_00630f40();
    /* 005d05d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d05d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d05d4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d05d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d05d8: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005d05db: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5d05e0u); f_005fa5b0();
    /* 005d05e0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d05e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d05e4: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005d05e7: add ecx, 0x1bc */ {  u32 a = r_ecx; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d05ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d05ee: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5d05f3u); f_00686d8e();
    /* 005d05f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d05f6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d05f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d05fa: push 0x6d345c */ { u32 v = 0x6d345cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d05ff: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d0604u); f_00630f40();
    /* 005d0604: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0607: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0608: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 005d060b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d060c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5d0612u); call_ind(t); }
    /* 005d0612: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0615: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0617: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0619: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d061b: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005d061d: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0622: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005d0624: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0629: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005d062b: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 005d062e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d062f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0631: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0633: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005d0636: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5d063bu); f_005fa5b0();
    /* 005d063b: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005d063d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d063f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0641: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0643: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0648: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 005d064d: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0652: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0654: push 0x6d3440 */ { u32 v = 0x6d3440u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0659: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d065eu); f_00630f40();
    /* 005d065e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0662: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0664: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0666: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005d0669: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5d066eu); f_005fa5b0();
    /* 005d066e: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0670: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0672: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005d0674: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0676: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0678: push 0x6d342c */ { u32 v = 0x6d342cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d067d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d0682u); f_00630f40();
    /* 005d0682: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0685: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0686: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0688: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d068d: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0692: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0697: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0699: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d069b: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005d069e: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5d06a3u); f_005f9de0();
    /* 005d06a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d06a6: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d06a8: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5d06adu); f_00686d72();
    /* 005d06ad: mov esp, ebp */ r_esp = r_ebp;
    /* 005d06af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d06b0: ret 4 */ FN_RET(0x005d05a0); r_esp += 8; return;
}

void f_005d06f0(void) /* sub_5D06F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d06f0);
    /* 005d06f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d06f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d06f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d06f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d06f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d06fa: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5d06ffu); f_005f85d0();
L_005d06ff:; BB(0x005d06ff);
    /* 005d06ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0702: movzx ecx, byte ptr [eax + 0x1ee] */ r_ecx = (u32)R8((u32)(r_eax+0x1eeu));
    /* 005d0709: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d070b: jne 0x5d072f */ if (!fZ) goto L_005d072f;
L_005d070d:; BB(0x005d070d);
    /* 005d070d: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005d0713: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d0715: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005d071b: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005d071e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d0720u); call_ind(t); }
    /* 005d0720: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005d0725: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005d0728: call 0x613e70 */ r_esp -= 4; W32(r_esp, 0x5d072du); f_00613e70();
    /* 005d072d: jmp 0x5d06ff */ goto L_005d06ff;
L_005d072f:; BB(0x005d072f);
    /* 005d072f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0731: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0732: ret  */ FN_RET(0x005d06f0); r_esp += 4; return;
}

void f_005d0a20(void) /* sub_5D0A20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0a20);
    /* 005d0a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a21: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0a23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0a26: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d0a29: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d0a30: cmp dword ptr [ebp + 8], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d0a37: jle 0x5d0a6a */ if ((fZ||fS!=fO)) goto L_005d0a6a;
L_005d0a39:; BB(0x005d0a39);
    /* 005d0a39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0a3c: sub eax, 0xf423f */ {  u32 a = r_eax; u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d0a41: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d0a44: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0a47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a48: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 005d0a4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a4c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0a4f: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5d0a54u); f_005d0c30();
    /* 005d0a54: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d0a57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a58: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0a5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0a5b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0a5e: call 0x5d1420 */ r_esp -= 4; W32(r_esp, 0x5d0a63u); f_005d1420();
    /* 005d0a63: mov dword ptr [ebp + 8], 0xf423f */ W32((u32)(r_ebp+0x8u), 0xf423fu);
L_005d0a6a:; BB(0x005d0a6a);
    /* 005d0a6a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0a6d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d0a70: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005d0a73: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0a75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0a76: ret 4 */ FN_RET(0x005d0a20); r_esp += 8; return;
}

void f_005d0c30(void) /* sub_5D0C30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0c30);
    /* 005d0c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c31: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0c33: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0c36: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005d0c39: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005d0c3e: mov ecx, dword ptr [eax + 0x4f10] */ r_ecx = R32((u32)(r_eax+0x4f10u));
    /* 005d0c44: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d0c47: cmp dword ptr [ebp - 0x18], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d0c4b: jge 0x5d0c95 */ if ((fS==fO)) goto L_005d0c95;
L_005d0c4d:; BB(0x005d0c4d);
    /* 005d0c4d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d0c50: call 0x5d0b60 */ r_esp -= 4; W32(r_esp, 0x5d0c55u); f_005d0b60();
    /* 005d0c55: imul eax, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d0c59: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d0c5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0c5f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d0c60: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 005d0c65: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005d0c65, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d0c65, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d0c67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0c6b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d0c6c: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 005d0c71: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005d0c71, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d0c71, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d0c73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c74: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d0c79u); f_0064c8a0();
    /* 005d0c79: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0c7c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d0c7f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d0c82: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d0c85: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0c88: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005d0c8a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d0c8d: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005d0c90: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0c93: jmp 0x5d0cc3 */ goto L_005d0cc3;
L_005d0c95:; BB(0x005d0c95);
    /* 005d0c95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0c97: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d0c9a: call 0x5d0aa0 */ r_esp -= 4; W32(r_esp, 0x5d0c9fu); f_005d0aa0();
    /* 005d0c9f: imul eax, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d0ca3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ca4: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d0ca9u); f_0064c8a0();
    /* 005d0ca9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0cac: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d0caf: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005d0cb2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d0cb5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d0cb8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005d0cba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0cbd: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005d0cc0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_005d0cc3:; BB(0x005d0cc3);
    /* 005d0cc3: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0cc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0cc6: ret 8 */ FN_RET(0x005d0c30); r_esp += 12; return;
}

void f_005d0cd0(void) /* sub_5D0CD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0cd0);
    /* 005d0cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0cd3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0cd6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005d0cd9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d0cdc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005d0cdf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d0ce2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d0ce5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d0ce8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d0ceb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d0cee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0cef: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005d0cf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0cf3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d0cf6: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5d0cfbu); f_005d0c30();
    /* 005d0cfb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d0cfe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0cff: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0d01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d02: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0d05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d06: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d0d09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d0a: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005d0d0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d0e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d0d11: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5d0d16u); f_005d0c30();
    /* 005d0d16: mov ecx, eax */ r_ecx = r_eax;
    /* 005d0d18: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5d0d1du); f_0064c5c0();
    /* 005d0d1d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0d20: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0d22: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0d23: ret 4 */ FN_RET(0x005d0cd0); r_esp += 8; return;
}

void f_005d0d30(void) /* sub_5D0D30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0d30);
    /* 005d0d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d31: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0d33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0d36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d0d39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0d3c: imul eax, eax, 0x64 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x64u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d0d3f: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d0d42: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d0d45: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d0d48: call 0x5d0b60 */ r_esp -= 4; W32(r_esp, 0x5d0d4du); f_005d0b60();
    /* 005d0d4d: mov ecx, eax */ r_ecx = r_eax;
    /* 005d0d4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0d52: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d0d53: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005d0d53, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d0d53, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d0d55: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0d57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0d58: ret 8 */ FN_RET(0x005d0d30); r_esp += 12; return;
}

void f_005d0d60(void) /* sub_5D0D60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0d60);
    /* 005d0d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d61: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0d63: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0d66: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d0d69: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 005d0d6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d6f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d0d74u); f_005dcb00();
    /* 005d0d74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0d77: mov ecx, eax */ r_ecx = r_eax;
    /* 005d0d79: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d0d7eu); f_005d5a90();
    /* 005d0d7e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d0d81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d82: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0d84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d85: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0d88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d89: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005d0d8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0d8d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d0d90: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5d0d95u); f_005d0c30();
    /* 005d0d95: mov ecx, eax */ r_ecx = r_eax;
    /* 005d0d97: call 0x64c820 */ r_esp -= 4; W32(r_esp, 0x5d0d9cu); f_0064c820();
    /* 005d0d9c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0d9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0d9f: ret 4 */ FN_RET(0x005d0d60); r_esp += 8; return;
}

void f_005d0db0(void) /* sub_5D0DB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0db0);
    /* 005d0db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0db1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0db3: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0db6: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005d0db9: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d0dbc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d0dbf: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005d0dc2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d0dc5: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d0dc8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005d0dcb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d0dce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0dcf: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 005d0dd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0dd3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d0dd6: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5d0ddbu); f_005d0c30();
    /* 005d0ddb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ddd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ddf: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d0de4u); f_0064c8a0();
    /* 005d0de4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0de7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d0dea: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005d0ded: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d0df0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d0df3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d0df6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d0df9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d0dfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0dfd: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d0e00: call 0x5d0d60 */ r_esp -= 4; W32(r_esp, 0x5d0e05u); f_005d0d60();
    /* 005d0e05: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d0e08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0e0a: jne 0x5d0e60 */ if (!fZ) goto L_005d0e60;
L_005d0e0c:; BB(0x005d0e0c);
    /* 005d0e0c: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 005d0e0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e12: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d0e17u); f_005dcb00();
    /* 005d0e17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0e1a: mov ecx, eax */ r_ecx = r_eax;
    /* 005d0e1c: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d0e21u); f_005d5a90();
    /* 005d0e21: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d0e24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e25: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0e27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e28: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d0e2b: call 0x5d0d30 */ r_esp -= 4; W32(r_esp, 0x5d0e30u); f_005d0d30();
    /* 005d0e30: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 005d0e33: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d0e36: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d0e39: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005d0e3c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d0e3f: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d0e42: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005d0e45: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d0e48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e49: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005d0e4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e4d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d0e50: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5d0e55u); f_005d0c30();
    /* 005d0e55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0e57: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005d0e5a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d0e5d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005d0e60:; BB(0x005d0e60);
    /* 005d0e60: cmp dword ptr [ebp - 4], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d0e67: jl 0x5d0e9c */ if ((fS!=fO)) goto L_005d0e9c;
L_005d0e69:; BB(0x005d0e69);
    /* 005d0e69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0e6c: sub ecx, 0xf423f */ {  u32 a = r_ecx; u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d0e72: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d0e75: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005d0e77: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 005d0e7a: mov dword ptr [ebp - 4], 0xf423f */ W32((u32)(r_ebp+0xfffffffcu), 0xf423fu);
    /* 005d0e81: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d0e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e85: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005d0e88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0e89: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d0e8c: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x5d0e91u); f_005d0c30();
    /* 005d0e91: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d0e93: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005d0e96: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005d0e99: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005d0e9c:; BB(0x005d0e9c);
    /* 005d0e9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0e9f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d0ea2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d0ea5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005d0ea8: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0eac: je 0x5d0edc */ if (fZ) goto L_005d0edc;
L_005d0eae:; BB(0x005d0eae);
    /* 005d0eae: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0eb1: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d0eb4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d0eb7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d0eba: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005d0ebd: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d0ec0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d0ec3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ec4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d0ec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ec8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d0ecb: call 0x5d1420 */ r_esp -= 4; W32(r_esp, 0x5d0ed0u); f_005d1420();
    /* 005d0ed0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d0ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0ed4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d0ed7: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5d0edcu); f_005d0a20();
L_005d0edc:; BB(0x005d0edc);
    /* 005d0edc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d0edf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d0ee2: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005d0ee4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0ee7: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005d0eea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d0eed: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0eef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0ef0: ret 8 */ FN_RET(0x005d0db0); r_esp += 12; return;
}

