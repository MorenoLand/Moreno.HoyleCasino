#include "protos.h"

void f_005aa000(void) /* sub_5AA000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aa000);
    /* 005aa000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aa001: mov ebp, esp */ r_ebp = r_esp;
    /* 005aa003: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aa009: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005aa00e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005aa010: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005aa013: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 005aa016: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aa01c: call 0x5b4000 */ r_esp -= 4; W32(r_esp, 0x5aa021u); f_005b4000();
    /* 005aa021: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005aa024: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aa02a: call 0x5b58a0 */ r_esp -= 4; W32(r_esp, 0x5aa02fu); f_005b58a0();
    /* 005aa02f: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005aa032: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aa038: sub eax, dword ptr [ecx + 0x5d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x5d0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005aa03e: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005aa041: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005aa047: mov eax, dword ptr [edx + 0x5cc] */ r_eax = R32((u32)(r_edx+0x5ccu));
    /* 005aa04d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa04e: push 0x6cfc68 */ { u32 v = 0x6cfc68u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa053: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5aa058u); f_00630f40();
    /* 005aa058: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa05b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa05c: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 005aa05f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa060: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5aa066u); call_ind(t); }
    /* 005aa066: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa06b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005aa06e: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5aa073u); f_005fb550();
    /* 005aa073: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005aa076: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 005aa079: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa07a: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 005aa07d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aa07f: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005aa082: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005aa088: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa08au); call_ind(t); }
    /* 005aa08a: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aa090: mov edx, dword ptr [ecx + 0x5c8] */ r_edx = R32((u32)(r_ecx+0x5c8u));
    /* 005aa096: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa097: push 0x6cfc48 */ { u32 v = 0x6cfc48u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa09c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5aa0a1u); f_00630f40();
    /* 005aa0a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa0a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa0a5: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 005aa0a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa0a9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5aa0afu); call_ind(t); }
    /* 005aa0af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa0b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa0b4: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005aa0b7: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5aa0bcu); f_005fb550();
    /* 005aa0bc: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005aa0c2: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 005aa0c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa0c6: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005aa0cc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005aa0ce: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005aa0d4: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005aa0da: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5aa0dcu); call_ind(t); }
    /* 005aa0dc: mov eax, dword ptr [0x793604] */ r_eax = R32((u32)(0x793604u));
    /* 005aa0e1: cmp dword ptr [eax + 0x5c8], 1 */ {  u32 a = R32((u32)(r_eax+0x5c8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aa0e8: jle 0x5aa107 */ if ((fZ||fS!=fO)) goto L_005aa107;
L_005aa0ea:; BB(0x005aa0ea);
    /* 005aa0ea: push 0x6cfc24 */ { u32 v = 0x6cfc24u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa0ef: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5aa0f4u); f_00630f40();
    /* 005aa0f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa0f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa0f8: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 005aa0fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa0fc: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5aa102u); call_ind(t); }
    /* 005aa102: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa105: jmp 0x5aa14e */ goto L_005aa14e;
L_005aa107:; BB(0x005aa107);
    /* 005aa107: mov edx, dword ptr [0x793604] */ r_edx = R32((u32)(0x793604u));
    /* 005aa10d: cmp dword ptr [edx + 0x5c8], -1 */ {  u32 a = R32((u32)(r_edx+0x5c8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aa114: jge 0x5aa133 */ if ((fS==fO)) goto L_005aa133;
L_005aa116:; BB(0x005aa116);
    /* 005aa116: push 0x6cfc04 */ { u32 v = 0x6cfc04u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa11b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5aa120u); f_00630f40();
    /* 005aa120: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa123: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa124: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 005aa127: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa128: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5aa12eu); call_ind(t); }
    /* 005aa12e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa131: jmp 0x5aa14e */ goto L_005aa14e;
L_005aa133:; BB(0x005aa133);
    /* 005aa133: push 0x6cfbe8 */ { u32 v = 0x6cfbe8u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa138: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5aa13du); f_00630f40();
    /* 005aa13d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa141: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 005aa144: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa145: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5aa14bu); call_ind(t); }
    /* 005aa14b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005aa14e:; BB(0x005aa14e);
    /* 005aa14e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa150: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005aa153: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5aa158u); f_005fb550();
    /* 005aa158: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005aa15e: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 005aa161: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa162: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005aa168: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aa16a: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005aa170: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005aa176: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa178u); call_ind(t); }
    /* 005aa178: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aa17c: jle 0x5aa19f */ if ((fZ||fS!=fO)) goto L_005aa19f;
L_005aa17e:; BB(0x005aa17e);
    /* 005aa17e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005aa181: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa182: push 0x6cfbc8 */ { u32 v = 0x6cfbc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa187: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5aa18cu); f_00630f40();
    /* 005aa18c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa18f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa190: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 005aa193: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa194: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5aa19au); call_ind(t); }
    /* 005aa19a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa19d: jmp 0x5aa1e5 */ goto L_005aa1e5;
L_005aa19f:; BB(0x005aa19f);
    /* 005aa19f: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005aa1a3: jge 0x5aa1c6 */ if ((fS==fO)) goto L_005aa1c6;
L_005aa1a5:; BB(0x005aa1a5);
    /* 005aa1a5: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005aa1a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa1a9: push 0x6cfba8 */ { u32 v = 0x6cfba8u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa1ae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5aa1b3u); f_00630f40();
    /* 005aa1b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa1b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa1b7: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 005aa1ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa1bb: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5aa1c1u); call_ind(t); }
    /* 005aa1c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa1c4: jmp 0x5aa1e5 */ goto L_005aa1e5;
L_005aa1c6:; BB(0x005aa1c6);
    /* 005aa1c6: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005aa1c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa1ca: push 0x6cfb84 */ { u32 v = 0x6cfb84u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa1cf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5aa1d4u); f_00630f40();
    /* 005aa1d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa1d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa1d8: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 005aa1db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa1dc: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5aa1e2u); call_ind(t); }
    /* 005aa1e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005aa1e5:; BB(0x005aa1e5);
    /* 005aa1e5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa1e7: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005aa1ea: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5aa1efu); f_005fb550();
    /* 005aa1ef: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005aa1f5: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 005aa1f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa1f9: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005aa1ff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005aa201: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005aa207: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 005aa20d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5aa20fu); call_ind(t); }
    /* 005aa20f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aa212: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005aa214: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5aa219u); f_00686d72();
    /* 005aa219: mov esp, ebp */ r_esp = r_ebp;
    /* 005aa21b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa21c: ret  */ FN_RET(0x005aa000); r_esp += 4; return;
}

void f_005aa220(void) /* sub_5AA220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aa220);
    /* 005aa220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aa221: mov ebp, esp */ r_ebp = r_esp;
    /* 005aa223: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005aa225: push 0x6a7a81 */ { u32 v = 0x6a7a81u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa22a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005aa230: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa231: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aa234: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005aa239: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005aa23b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa23c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005aa23f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005aa245: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005aa248: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa24d: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa251: je 0x5aa2d9 */ if (fZ) goto L_005aa2d9;
L_005aa257:; BB(0x005aa257);
    /* 005aa257: push 0x13a5 */ { u32 v = 0x13a5u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa25c: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa262: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005aa265: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aa26au); f_005eaf00();
    /* 005aa26a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa26c: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aa272: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005aa275: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa27b: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005aa27e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aa280: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005aa286: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa288u); call_ind(t); }
    /* 005aa288: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa28a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5aa28fu); f_00686d82();
    /* 005aa28f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa292: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005aa295: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005aa29c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa2a0: je 0x5aa2b3 */ if (fZ) goto L_005aa2b3;
L_005aa2a2:; BB(0x005aa2a2);
    /* 005aa2a2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aa2a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa2a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aa2a9: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5aa2aeu); f_006010a0();
    /* 005aa2ae: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005aa2b1: jmp 0x5aa2ba */ goto L_005aa2ba;
L_005aa2b3:; BB(0x005aa2b3);
    /* 005aa2b3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005aa2ba:; BB(0x005aa2ba);
    /* 005aa2ba: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aa2bd: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005aa2c0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aa2c7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aa2ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa2cb: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa2d1: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005aa2d4: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5aa2d9u); f_005f5d50();
L_005aa2d9:; BB(0x005aa2d9);
    /* 005aa2d9: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aa2df: cmp dword ptr [edx + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa2e3: je 0x5aa362 */ if (fZ) goto L_005aa362;
L_005aa2e5:; BB(0x005aa2e5);
    /* 005aa2e5: push 0x13a4 */ { u32 v = 0x13a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa2ea: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa2ef: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aa2f2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aa2f7u); f_005eaf00();
    /* 005aa2f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa2f9: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa2ff: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005aa302: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa307: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aa30a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aa30c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005aa312: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa314u); call_ind(t); }
    /* 005aa314: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa316: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5aa31bu); f_00686d82();
    /* 005aa31b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa31e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005aa321: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005aa328: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa32c: je 0x5aa33d */ if (fZ) goto L_005aa33d;
L_005aa32e:; BB(0x005aa32e);
    /* 005aa32e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa330: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005aa333: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5aa338u); f_006010a0();
    /* 005aa338: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005aa33b: jmp 0x5aa344 */ goto L_005aa344;
L_005aa33d:; BB(0x005aa33d);
    /* 005aa33d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005aa344:; BB(0x005aa344);
    /* 005aa344: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aa347: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005aa34a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aa351: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aa354: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa355: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa35a: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aa35d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5aa362u); f_005f5d50();
L_005aa362:; BB(0x005aa362);
    /* 005aa362: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aa365: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aa36c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aa36d: mov esp, ebp */ r_esp = r_ebp;
    /* 005aa36f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa370: ret 4 */ FN_RET(0x005aa220); r_esp += 8; return;
}

void f_005aa380(void) /* sub_5AA380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aa380);
    /* 005aa380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aa381: mov ebp, esp */ r_ebp = r_esp;
    /* 005aa383: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005aa385: push 0x6a7ab2 */ { u32 v = 0x6a7ab2u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa38a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005aa390: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa391: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aa394: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005aa399: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005aa39b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa39c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005aa39f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005aa3a5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005aa3a8: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa3ad: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa3b1: je 0x5aa439 */ if (fZ) goto L_005aa439;
L_005aa3b7:; BB(0x005aa3b7);
    /* 005aa3b7: push 0x13ad */ { u32 v = 0x13adu; r_esp -= 4; W32(r_esp, v); }
    /* 005aa3bc: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa3c2: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005aa3c5: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aa3cau); f_005eaf00();
    /* 005aa3ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa3cc: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aa3d2: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005aa3d5: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa3db: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005aa3de: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aa3e0: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005aa3e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa3e8u); call_ind(t); }
    /* 005aa3e8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa3ea: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5aa3efu); f_00686d82();
    /* 005aa3ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa3f2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005aa3f5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005aa3fc: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa400: je 0x5aa413 */ if (fZ) goto L_005aa413;
L_005aa402:; BB(0x005aa402);
    /* 005aa402: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aa405: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa406: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aa409: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5aa40eu); f_006010a0();
    /* 005aa40e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005aa411: jmp 0x5aa41a */ goto L_005aa41a;
L_005aa413:; BB(0x005aa413);
    /* 005aa413: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005aa41a:; BB(0x005aa41a);
    /* 005aa41a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aa41d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005aa420: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aa427: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aa42a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa42b: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa431: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005aa434: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5aa439u); f_005f5d50();
L_005aa439:; BB(0x005aa439);
    /* 005aa439: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aa43f: cmp dword ptr [edx + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa443: je 0x5aa4c2 */ if (fZ) goto L_005aa4c2;
L_005aa445:; BB(0x005aa445);
    /* 005aa445: push 0x13ac */ { u32 v = 0x13acu; r_esp -= 4; W32(r_esp, v); }
    /* 005aa44a: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa44f: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aa452: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aa457u); f_005eaf00();
    /* 005aa457: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa459: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa45f: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005aa462: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa467: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aa46a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aa46c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005aa472: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa474u); call_ind(t); }
    /* 005aa474: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa476: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5aa47bu); f_00686d82();
    /* 005aa47b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa47e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005aa481: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005aa488: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa48c: je 0x5aa49d */ if (fZ) goto L_005aa49d;
L_005aa48e:; BB(0x005aa48e);
    /* 005aa48e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa490: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005aa493: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5aa498u); f_006010a0();
    /* 005aa498: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005aa49b: jmp 0x5aa4a4 */ goto L_005aa4a4;
L_005aa49d:; BB(0x005aa49d);
    /* 005aa49d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005aa4a4:; BB(0x005aa4a4);
    /* 005aa4a4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aa4a7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005aa4aa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aa4b1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aa4b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4b5: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa4ba: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aa4bd: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5aa4c2u); f_005f5d50();
L_005aa4c2:; BB(0x005aa4c2);
    /* 005aa4c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aa4c5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aa4cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aa4cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005aa4cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa4d0: ret 4 */ FN_RET(0x005aa380); r_esp += 8; return;
}

void f_005aa4e0(void) /* sub_5AA4E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aa4e0);
    /* 005aa4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005aa4e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4e5: push 0x6a7ae3 */ { u32 v = 0x6a7ae3u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005aa4f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4f1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aa4f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005aa4f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005aa4fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa4fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005aa4ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005aa505: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005aa508: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa50d: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa511: je 0x5aa5b1 */ if (fZ) goto L_005aa5b1;
L_005aa517:; BB(0x005aa517);
    /* 005aa517: push 0x13a3 */ { u32 v = 0x13a3u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa51c: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa522: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005aa525: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aa52au); f_005eaf00();
    /* 005aa52a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa52c: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aa532: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005aa535: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa53b: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005aa53e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aa540: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005aa546: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa548u); call_ind(t); }
    /* 005aa548: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa54e: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005aa551: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa556: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005aa559: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aa55b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005aa55e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa560u); call_ind(t); }
    /* 005aa560: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa562: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5aa567u); f_00686d82();
    /* 005aa567: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa56a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005aa56d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005aa574: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa578: je 0x5aa58b */ if (fZ) goto L_005aa58b;
L_005aa57a:; BB(0x005aa57a);
    /* 005aa57a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005aa57d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa57e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005aa581: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5aa586u); f_006010a0();
    /* 005aa586: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005aa589: jmp 0x5aa592 */ goto L_005aa592;
L_005aa58b:; BB(0x005aa58b);
    /* 005aa58b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005aa592:; BB(0x005aa592);
    /* 005aa592: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005aa595: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005aa598: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aa59f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005aa5a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aa5a3: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa5a9: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005aa5ac: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5aa5b1u); f_005f5d50();
L_005aa5b1:; BB(0x005aa5b1);
    /* 005aa5b1: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aa5b7: cmp dword ptr [edx + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa5bb: je 0x5aa656 */ if (fZ) goto L_005aa656;
L_005aa5c1:; BB(0x005aa5c1);
    /* 005aa5c1: push 0x13a2 */ { u32 v = 0x13a2u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa5c6: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa5cb: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aa5ce: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5aa5d3u); f_005eaf00();
    /* 005aa5d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa5d5: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa5db: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005aa5de: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa5e3: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aa5e6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aa5e8: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005aa5ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa5f0u); call_ind(t); }
    /* 005aa5f0: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aa5f6: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005aa5f9: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa5fe: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aa601: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005aa603: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005aa606: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5aa608u); call_ind(t); }
    /* 005aa608: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa60a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5aa60fu); f_00686d82();
    /* 005aa60f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aa612: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005aa615: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005aa61c: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aa620: je 0x5aa631 */ if (fZ) goto L_005aa631;
L_005aa622:; BB(0x005aa622);
    /* 005aa622: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aa624: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005aa627: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5aa62cu); f_006010a0();
    /* 005aa62c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005aa62f: jmp 0x5aa638 */ goto L_005aa638;
L_005aa631:; BB(0x005aa631);
    /* 005aa631: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005aa638:; BB(0x005aa638);
    /* 005aa638: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005aa63b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005aa63e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005aa645: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aa648: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aa649: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aa64e: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aa651: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5aa656u); f_005f5d50();
L_005aa656:; BB(0x005aa656);
    /* 005aa656: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aa659: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aa660: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aa661: mov esp, ebp */ r_esp = r_ebp;
    /* 005aa663: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aa664: ret 4 */ FN_RET(0x005aa4e0); r_esp += 8; return;
}

void f_005aad60(void) /* sub_5AAD60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005aad60);
    /* 005aad60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005aad61: mov ebp, esp */ r_ebp = r_esp;
    /* 005aad63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aad66: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005aad69: mov eax, dword ptr [0x7935f8] */ r_eax = R32((u32)(0x7935f8u));
    /* 005aad6e: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 005aad71: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5aad76u); f_005eb240();
    /* 005aad76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005aad78: jl 0x5aade0 */ if ((fS!=fO)) goto L_005aade0;
L_005aad7a:; BB(0x005aad7a);
    /* 005aad7a: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005aad80: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005aad83: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5aad88u); f_005eb240();
    /* 005aad88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005aad8a: jl 0x5aade0 */ if ((fS!=fO)) goto L_005aade0;
L_005aad8c:; BB(0x005aad8c);
    /* 005aad8c: mov edx, dword ptr [0x7935f8] */ r_edx = R32((u32)(0x7935f8u));
    /* 005aad92: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 005aad95: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5aad9au); f_005eb240();
    /* 005aad9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005aad9c: jl 0x5aade0 */ if ((fS!=fO)) goto L_005aade0;
L_005aad9e:; BB(0x005aad9e);
    /* 005aad9e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005aada4: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x5aada9u); f_00637630();
    /* 005aada9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005aadac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aadae: je 0x5aade0 */ if (fZ) goto L_005aade0;
L_005aadb0:; BB(0x005aadb0);
    /* 005aadb0: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 005aadb7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aadb9: jne 0x5aade0 */ if (!fZ) goto L_005aade0;
L_005aadbb:; BB(0x005aadbb);
    /* 005aadbb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005aadbe: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 005aadc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aadc4: jne 0x5aade0 */ if (!fZ) goto L_005aade0;
L_005aadc6:; BB(0x005aadc6);
    /* 005aadc6: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005aadcc: movzx edx, byte ptr [ecx + 0x5c0] */ r_edx = (u32)R8((u32)(r_ecx+0x5c0u));
    /* 005aadd3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aadd5: jne 0x5aade0 */ if (!fZ) goto L_005aade0;
L_005aadd7:; BB(0x005aadd7);
    /* 005aadd7: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005aadde: jmp 0x5aade7 */ goto L_005aade7;
L_005aade0:; BB(0x005aade0);
    /* 005aade0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005aade7:; BB(0x005aade7);
    /* 005aade7: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005aadea: mov esp, ebp */ r_esp = r_ebp;
    /* 005aadec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aaded: ret  */ FN_RET(0x005aad60); r_esp += 4; return;
}

