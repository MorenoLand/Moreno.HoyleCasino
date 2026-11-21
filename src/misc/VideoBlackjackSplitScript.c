#include "protos.h"

void f_00546eb0(void) /* VideoBlackjackSplitScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546eb0);
    /* 00546eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00546eb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00546eb5: push 0x6a519d */ { u32 v = 0x6a519du; r_esp -= 4; W32(r_esp, v); }
    /* 00546eba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00546ec0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546ec1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546ec2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00546ec7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00546ec9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546eca: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00546ecd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00546ed3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00546ed6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546ed8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546edb: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x546ee0u); f_005fc0d0();
    /* 00546ee0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00546ee7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546eea: mov dword ptr [eax], 0x6c6918 */ W32((u32)(r_eax), 0x6c6918u);
    /* 00546ef0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00546ef2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00546ef8: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x546efdu); f_00637810();
    /* 00546efd: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00546eff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546f02: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00546f05: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00546f0c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546f0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546f12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00546f19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00546f1a: mov esp, ebp */ r_esp = r_ebp;
    /* 00546f1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546f1d: ret  */ FN_RET(0x00546eb0); r_esp += 4; return;
}

void f_00546f20(void) /* VideoBlackjackSplitScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546f20);
    /* 00546f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00546f23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00546f26: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00546f29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546f2c: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x546f31u); f_005fc360();
    /* 00546f31: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00546f34: cmp dword ptr [ebp - 8], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00546f38: ja 0x547256 */ if ((!fC&&!fZ)) goto L_00547256;
L_00546f3e:; BB(0x00546f3e);
    /* 00546f3e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00546f41: jmp dword ptr [eax*4 + 0x547278] */ { u32 t = R32((u32)(r_eax*4+0x547278u)); switch (t) { case 0x546f48u: goto L_00546f48; case 0x546f63u: goto L_00546f63; case 0x546fadu: goto L_00546fad; case 0x546ff0u: goto L_00546ff0; case 0x54701au: goto L_0054701a; case 0x547051u: goto L_00547051; case 0x547091u: goto L_00547091; case 0x547256u: goto L_00547256; case 0x5470a6u: goto L_005470a6; case 0x5470fcu: goto L_005470fc; case 0x547147u: goto L_00547147; case 0x54717au: goto L_0054717a; case 0x5471cau: goto L_005471ca; case 0x54721bu: goto L_0054721b; case 0x54722eu: goto L_0054722e; default: UNSUP(0x00546f41, "jump table entry is not a known target"); } }
L_00546f48:; BB(0x00546f48);
    /* 00546f48: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546f4b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00546f4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00546f4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546f51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546f54: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00546f56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546f59: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546f5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546f5eu); call_ind(t); }
    /* 00546f5e: jmp 0x547271 */ goto L_00547271;
L_00546f63:; BB(0x00546f63);
    /* 00546f63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546f65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546f67: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00546f6d: call 0x549080 */ r_esp -= 4; W32(r_esp, 0x546f72u); f_00549080();
    /* 00546f72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546f75: mov word ptr [ecx + 0x24], ax */ W16((u32)(r_ecx+0x24u), (u16)r_eax);
    /* 00546f79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546f7b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546f7d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546f80: mov ax, word ptr [edx + 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x24u))) & 0xffffu);
    /* 00546f84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546f85: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00546f87: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00546f8d: call 0x548fe0 */ r_esp -= 4; W32(r_esp, 0x546f92u); f_00548fe0();
    /* 00546f92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546f95: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00546f98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00546f99: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00546f9b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546f9e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00546fa0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546fa3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546fa6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546fa8u); call_ind(t); }
    /* 00546fa8: jmp 0x547271 */ goto L_00547271;
L_00546fad:; BB(0x00546fad);
    /* 00546fad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546fb0: mov dx, word ptr [ecx + 0x24] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x24u))) & 0xffffu);
    /* 00546fb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00546fb5: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00546fbb: call 0x549df0 */ r_esp -= 4; W32(r_esp, 0x546fc0u); f_00549df0();
    /* 00546fc0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00546fc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546fc5: je 0x546fda */ if (fZ) goto L_00546fda;
L_00546fc7:; BB(0x00546fc7);
    /* 00546fc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546fc9: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00546fcb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546fce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00546fd0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546fd3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546fd6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546fd8u); call_ind(t); }
    /* 00546fd8: jmp 0x546feb */ goto L_00546feb;
L_00546fda:; BB(0x00546fda);
    /* 00546fda: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546fdc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00546fde: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546fe1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00546fe3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00546fe6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00546fe9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546febu); call_ind(t); }
L_00546feb:; BB(0x00546feb);
    /* 00546feb: jmp 0x547271 */ goto L_00547271;
L_00546ff0:; BB(0x00546ff0);
    /* 00546ff0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546ff2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546ff4: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00546ffa: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x546fffu); f_005492c0();
    /* 00546fff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547002: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00547005: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00547006: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00547008: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054700b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0054700d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547010: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00547013: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x547015u); call_ind(t); }
    /* 00547015: jmp 0x547271 */ goto L_00547271;
L_0054701a:; BB(0x0054701a);
    /* 0054701a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054701c: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547022: call 0x54a6c0 */ r_esp -= 4; W32(r_esp, 0x547027u); f_0054a6c0();
    /* 00547027: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054702a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054702c: je 0x54703b */ if (fZ) goto L_0054703b;
L_0054702e:; BB(0x0054702e);
    /* 0054702e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00547030: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547036: call 0x545600 */ r_esp -= 4; W32(r_esp, 0x54703bu); f_00545600();
L_0054703b:; BB(0x0054703b);
    /* 0054703b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054703d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054703f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547042: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00547044: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547047: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0054704a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x54704cu); call_ind(t); }
    /* 0054704c: jmp 0x547271 */ goto L_00547271;
L_00547051:; BB(0x00547051);
    /* 00547051: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547057: call 0x5450a0 */ r_esp -= 4; W32(r_esp, 0x54705cu); f_005450a0();
    /* 0054705c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054705e: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547064: call 0x54a770 */ r_esp -= 4; W32(r_esp, 0x547069u); f_0054a770();
    /* 00547069: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054706c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054706e: je 0x54707b */ if (fZ) goto L_0054707b;
L_00547070:; BB(0x00547070);
    /* 00547070: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547076: call 0x549750 */ r_esp -= 4; W32(r_esp, 0x54707bu); f_00549750();
L_0054707b:; BB(0x0054707b);
    /* 0054707b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054707d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054707f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547082: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00547084: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547087: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0054708a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x54708cu); call_ind(t); }
    /* 0054708c: jmp 0x547271 */ goto L_00547271;
L_00547091:; BB(0x00547091);
    /* 00547091: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547093: mov ecx, dword ptr [0x793400] */ r_ecx = R32((u32)(0x793400u));
    /* 00547099: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0054709c: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5470a1u); f_005fc420();
    /* 005470a1: jmp 0x547271 */ goto L_00547271;
L_005470a6:; BB(0x005470a6);
    /* 005470a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005470a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005470aa: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005470b0: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x5470b5u); f_005492c0();
    /* 005470b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005470b7: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005470bd: call 0x54a6c0 */ r_esp -= 4; W32(r_esp, 0x5470c2u); f_0054a6c0();
    /* 005470c2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005470c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005470c7: je 0x5470d6 */ if (fZ) goto L_005470d6;
L_005470c9:; BB(0x005470c9);
    /* 005470c9: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005470cb: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005470d1: call 0x545600 */ r_esp -= 4; W32(r_esp, 0x5470d6u); f_00545600();
L_005470d6:; BB(0x005470d6);
    /* 005470d6: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 005470dc: call 0x545250 */ r_esp -= 4; W32(r_esp, 0x5470e1u); f_00545250();
    /* 005470e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005470e4: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005470e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005470e8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005470ea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005470ed: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005470ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005470f2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005470f5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5470f7u); call_ind(t); }
    /* 005470f7: jmp 0x547271 */ goto L_00547271;
L_005470fc:; BB(0x005470fc);
    /* 005470fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005470fe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00547100: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547106: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x54710bu); f_005492c0();
    /* 0054710b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054710d: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547113: call 0x54a6c0 */ r_esp -= 4; W32(r_esp, 0x547118u); f_0054a6c0();
    /* 00547118: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054711b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054711d: je 0x54712c */ if (fZ) goto L_0054712c;
L_0054711f:; BB(0x0054711f);
    /* 0054711f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00547121: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547127: call 0x545600 */ r_esp -= 4; W32(r_esp, 0x54712cu); f_00545600();
L_0054712c:; BB(0x0054712c);
    /* 0054712c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054712f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00547132: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00547133: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00547135: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547138: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0054713a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054713d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00547140: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x547142u); call_ind(t); }
    /* 00547142: jmp 0x547271 */ goto L_00547271;
L_00547147:; BB(0x00547147);
    /* 00547147: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054714d: call 0x545b90 */ r_esp -= 4; W32(r_esp, 0x547152u); f_00545b90();
    /* 00547152: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00547158: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 0054715f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547162: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00547165: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547166: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00547168: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054716b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0054716d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547170: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00547173: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x547175u); call_ind(t); }
    /* 00547175: jmp 0x547271 */ goto L_00547271;
L_0054717a:; BB(0x0054717a);
    /* 0054717a: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547180: call 0x5442b0 */ r_esp -= 4; W32(r_esp, 0x547185u); f_005442b0();
    /* 00547185: mov ecx, dword ptr [0x79340c] */ r_ecx = R32((u32)(0x79340cu));
    /* 0054718b: call 0x542980 */ r_esp -= 4; W32(r_esp, 0x547190u); f_00542980();
    /* 00547190: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00547193: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547195: je 0x5471af */ if (fZ) goto L_005471af;
L_00547197:; BB(0x00547197);
    /* 00547197: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054719a: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0054719d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054719e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005471a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005471a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005471a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005471a8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005471ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5471adu); call_ind(t); }
    /* 005471ad: jmp 0x5471c5 */ goto L_005471c5;
L_005471af:; BB(0x005471af);
    /* 005471af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005471b2: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005471b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005471b6: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005471b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005471bb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005471bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005471c0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005471c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5471c5u); call_ind(t); }
L_005471c5:; BB(0x005471c5);
    /* 005471c5: jmp 0x547271 */ goto L_00547271;
L_005471ca:; BB(0x005471ca);
    /* 005471ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005471cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005471ce: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005471d4: call 0x5492c0 */ r_esp -= 4; W32(r_esp, 0x5471d9u); f_005492c0();
    /* 005471d9: mov ecx, dword ptr [0x79340c] */ r_ecx = R32((u32)(0x79340cu));
    /* 005471df: call 0x542980 */ r_esp -= 4; W32(r_esp, 0x5471e4u); f_00542980();
    /* 005471e4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005471e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005471e9: je 0x547203 */ if (fZ) goto L_00547203;
L_005471eb:; BB(0x005471eb);
    /* 005471eb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005471ee: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005471f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005471f2: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005471f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005471f7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005471f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005471fc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005471ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x547201u); call_ind(t); }
    /* 00547201: jmp 0x547219 */ goto L_00547219;
L_00547203:; BB(0x00547203);
    /* 00547203: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547206: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00547209: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054720a: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0054720c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054720f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00547211: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547214: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00547217: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x547219u); call_ind(t); }
L_00547219:; BB(0x00547219);
    /* 00547219: jmp 0x547271 */ goto L_00547271;
L_0054721b:; BB(0x0054721b);
    /* 0054721b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054721d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0054721f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547222: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00547224: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00547227: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0054722a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x54722cu); call_ind(t); }
    /* 0054722c: jmp 0x547271 */ goto L_00547271;
L_0054722e:; BB(0x0054722e);
    /* 0054722e: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00547234: call 0x5450a0 */ r_esp -= 4; W32(r_esp, 0x547239u); f_005450a0();
    /* 00547239: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 0054723f: call 0x5493a0 */ r_esp -= 4; W32(r_esp, 0x547244u); f_005493a0();
    /* 00547244: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547246: mov ecx, dword ptr [0x793400] */ r_ecx = R32((u32)(0x793400u));
    /* 0054724c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0054724f: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x547254u); f_005fc420();
    /* 00547254: jmp 0x547271 */ goto L_00547271;
L_00547256:; BB(0x00547256);
    /* 00547256: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00547258: jne 0x547271 */ if (!fZ) goto L_00547271;
L_0054725a:; BB(0x0054725a);
    /* 0054725a: push 0x621 */ { u32 v = 0x621u; r_esp -= 4; W32(r_esp, v); }
    /* 0054725f: push 0x6c66dc */ { u32 v = 0x6c66dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00547264: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00547269: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x54726eu); f_005e9f20();
    /* 0054726e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00547271:; BB(0x00547271);
    /* 00547271: mov esp, ebp */ r_esp = r_ebp;
    /* 00547273: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547274: ret  */ FN_RET(0x00546f20); r_esp += 4; return;
}

