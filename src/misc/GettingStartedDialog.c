#include "protos.h"

void f_00671f90(void) /* GettingStartedDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671f90);
    /* 00671f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00671f93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00671f95: push 0x6ad278 */ { u32 v = 0x6ad278u; r_esp -= 4; W32(r_esp, v); }
    /* 00671f9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00671fa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671fa1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671fa2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00671fa7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00671fa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671faa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00671fad: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00671fb3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00671fb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671fb8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00671fba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671fbd: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x671fc2u); f_005f71f0();
    /* 00671fc2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00671fc9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671fcc: mov dword ptr [eax], 0x6e1224 */ W32((u32)(r_eax), 0x6e1224u);
    /* 00671fd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00671fd4: push 0x30d4f6 */ { u32 v = 0x30d4f6u; r_esp -= 4; W32(r_esp, v); }
    /* 00671fd9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671fdc: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x671fe1u); f_005f83d0();
    /* 00671fe1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671fe4: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00671fe7: mov byte ptr [ecx + 0x1bc], dl */ W8((u32)(r_ecx+0x1bcu), (u8)r_edx);
    /* 00671fed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00671ff4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671ff7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00671ffa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00672001: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00672002: mov esp, ebp */ r_esp = r_ebp;
    /* 00672004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672005: ret 4 */ FN_RET(0x00671f90); r_esp += 8; return;
}

void f_00672030(void) /* GettingStartedDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00672030);
    /* 00672030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672031: mov ebp, esp */ r_ebp = r_esp;
    /* 00672033: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00672039: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067203e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00672040: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00672043: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 00672049: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0067204f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672050: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00672056: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x67205bu); f_005f3bf0();
    /* 0067205b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067205c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00672062: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672064: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067206a: mov eax, dword ptr [edx + 0x338] */ r_eax = R32((u32)(r_edx+0x338u));
    /* 00672070: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672072u); call_ind(t); }
    /* 00672072: lea ecx, [ebp - 0xa8] */ r_ecx = (u32)(r_ebp+0xffffff58u);
    /* 00672078: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00672079: push 0x6e130c */ { u32 v = 0x6e130cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067207e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x672083u); f_00630f40();
    /* 00672083: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00672086: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672087: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 0067208d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067208e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x672094u); call_ind(t); }
    /* 00672094: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00672097: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672099: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067209b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067209d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067209f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006720a1: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006720a3: push 0x1ab */ { u32 v = 0x1abu; r_esp -= 4; W32(r_esp, v); }
    /* 006720a8: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 006720aa: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 006720b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006720b1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006720b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006720b5: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 006720bb: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6720c0u); f_005fa5b0();
    /* 006720c0: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006720c2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006720c4: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 006720c6: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 006720c8: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006720ca: push 0x6b4d38 */ { u32 v = 0x6b4d38u; r_esp -= 4; W32(r_esp, v); }
    /* 006720cf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6720d4u); f_00630f40();
    /* 006720d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006720d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006720d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006720da: push 0x159 */ { u32 v = 0x159u; r_esp -= 4; W32(r_esp, v); }
    /* 006720df: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 006720e5: movzx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)R8((u32)(r_ecx+0x1bcu));
    /* 006720ec: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 006720ee: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 006720f0: and edx, 0xffffffd6 */ {  u32 a = r_edx; u32 b = 0xffffffd6u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006720f3: add edx, 0xb0 */ {  u32 a = r_edx; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006720f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006720fa: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 006720ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672101: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672103: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00672109: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x67210eu); f_005f9de0();
    /* 0067210e: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00672114: movzx ecx, byte ptr [eax + 0x1bc] */ r_ecx = (u32)R8((u32)(r_eax+0x1bcu));
    /* 0067211b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067211d: je 0x672157 */ if (fZ) goto L_00672157;
L_0067211f:; BB(0x0067211f);
    /* 0067211f: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00672121: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672123: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00672125: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00672127: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00672129: push 0x6e12fc */ { u32 v = 0x6e12fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0067212e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x672133u); f_00630f40();
    /* 00672133: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00672136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672137: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672139: push 0x159 */ { u32 v = 0x159u; r_esp -= 4; W32(r_esp, v); }
    /* 0067213e: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672143: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 00672148: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067214a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067214c: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00672152: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x672157u); f_005f9de0();
L_00672157:; BB(0x00672157);
    /* 00672157: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672159: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067215b: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0067215d: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067215f: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00672161: push 0x6e12e8 */ { u32 v = 0x6e12e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00672166: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67216bu); f_00630f40();
    /* 0067216b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067216e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067216f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672171: push 0x159 */ { u32 v = 0x159u; r_esp -= 4; W32(r_esp, v); }
    /* 00672176: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00672178: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0067217d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067217f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672181: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00672187: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x67218cu); f_005f9de0();
    /* 0067218c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067218e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672190: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672192: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672197: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00672199: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0067219b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067219d: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0067219f: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 006721a4: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 006721a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006721ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006721ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006721af: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 006721b5: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x6721bau); f_005fa880();
    /* 006721ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006721bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006721be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006721c0: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006721c5: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006721ca: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006721cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006721d1: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 006721d3: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 006721d8: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 006721dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006721df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006721e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006721e3: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 006721e9: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x6721eeu); f_005fa880();
    /* 006721ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006721f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006721f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006721f4: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 006721f9: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 006721fb: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 006721fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006721ff: push 0x151 */ { u32 v = 0x151u; r_esp -= 4; W32(r_esp, v); }
    /* 00672204: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00672206: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672208: push 0x1b1 */ { u32 v = 0x1b1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067220d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067220f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672211: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00672217: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x67221cu); f_005fa880();
    /* 0067221c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067221e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672220: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672222: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672227: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067222c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672231: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672233: push 0x152 */ { u32 v = 0x152u; r_esp -= 4; W32(r_esp, v); }
    /* 00672238: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067223a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067223c: push 0x1b1 */ { u32 v = 0x1b1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672241: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672243: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672245: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0067224b: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x672250u); f_005fa880();
    /* 00672250: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672252: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00672254: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672256: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00672258: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0067225a: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067225c: push 0x6e12cc */ { u32 v = 0x6e12ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00672261: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x672266u); f_00630f40();
    /* 00672266: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00672269: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067226a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067226c: push 0x133 */ { u32 v = 0x133u; r_esp -= 4; W32(r_esp, v); }
    /* 00672271: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00672273: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00672278: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067227a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067227c: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00672282: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x672287u); f_005f9ef0();
    /* 00672287: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672289: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067228f: call 0x6378a0 */ r_esp -= 4; W32(r_esp, 0x672294u); f_006378a0();
    /* 00672294: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00672297: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672299: je 0x6722d0 */ if (fZ) goto L_006722d0;
L_0067229b:; BB(0x0067229b);
    /* 0067229b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067229d: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 006722a3: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x6722a8u); f_005fb350();
    /* 006722a8: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 006722ae: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 006722b4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006722b6: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 006722bc: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 006722c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6722c4u); call_ind(t); }
    /* 006722c4: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
    /* 006722ce: jmp 0x672303 */ goto L_00672303;
L_006722d0:; BB(0x006722d0);
    /* 006722d0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006722d2: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 006722d8: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x6722ddu); f_005fb350();
    /* 006722dd: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 006722e3: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 006722e9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006722eb: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 006722f1: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 006722f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6722f9u); call_ind(t); }
    /* 006722f9: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_00672303:; BB(0x00672303);
    /* 00672303: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672305: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067230a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067230c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067230e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00672310: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00672312: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00672318: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067231a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00672320: mov eax, dword ptr [edx + 0x2fc] */ r_eax = R32((u32)(r_edx+0x2fcu));
    /* 00672326: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672328u); call_ind(t); }
    /* 00672328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672329: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067232b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067232d: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00672333: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x672338u); f_005f9ce0();
    /* 00672338: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067233a: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067233f: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672344: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672349: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067234e: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00672350: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00672352: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672354: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00672356: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00672358: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 0067235a: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 0067235f: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00672361: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00672366: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672368: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067236a: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00672370: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x672375u); f_005fa790();
    /* 00672375: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672377: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00672379: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067237b: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0067237d: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0067237f: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00672381: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 00672383: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00672385: push 0x6e12ac */ { u32 v = 0x6e12acu; r_esp -= 4; W32(r_esp, v); }
    /* 0067238a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67238fu); f_00630f40();
    /* 0067238f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00672392: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672393: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672395: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672397: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0067239d: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6723a2u); f_005fa5b0();
    /* 006723a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006723a4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006723a6: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 006723a8: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 006723aa: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006723ac: push 0x6db8c0 */ { u32 v = 0x6db8c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006723b1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6723b6u); f_00630f40();
    /* 006723b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006723b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006723ba: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006723bc: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 006723be: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006723c0: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 006723c5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006723c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006723c9: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 006723cf: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x6723d4u); f_005f9de0();
    /* 006723d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006723d6: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006723db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006723dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006723df: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 006723e1: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006723e3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006723e9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006723eb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006723f1: mov eax, dword ptr [edx + 0x300] */ r_eax = R32((u32)(r_edx+0x300u));
    /* 006723f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6723f9u); call_ind(t); }
    /* 006723f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006723fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006723fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006723fe: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00672404: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x672409u); f_005f9ce0();
    /* 00672409: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067240b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672410: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672415: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067241a: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067241f: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00672421: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00672423: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672425: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 00672427: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00672429: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 0067242b: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00672430: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00672432: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00672437: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672439: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067243b: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00672441: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x672446u); f_005fa790();
    /* 00672446: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672448: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067244a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067244c: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 00672451: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00672453: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00672455: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 00672457: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00672459: push 0x6e128c */ { u32 v = 0x6e128cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067245e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x672463u); f_00630f40();
    /* 00672463: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00672466: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672467: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672469: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067246b: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00672471: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x672476u); f_005fa5b0();
    /* 00672476: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672478: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067247a: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0067247c: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067247e: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00672480: push 0x6db8d4 */ { u32 v = 0x6db8d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00672485: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67248au); f_00630f40();
    /* 0067248a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067248d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067248e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00672490: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 00672495: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00672497: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0067249c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067249e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006724a0: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 006724a6: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x6724abu); f_005f9de0();
    /* 006724ab: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 006724b1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006724b3: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 006724b9: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 006724bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6724c1u); call_ind(t); }
    /* 006724c1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006724c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006724c6: je 0x6724f1 */ if (fZ) goto L_006724f1;
L_006724c8:; BB(0x006724c8);
    /* 006724c8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006724ca: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 006724d0: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6724d5u); f_005fb300();
    /* 006724d5: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 006724db: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 006724e1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006724e3: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 006724e9: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 006724ef: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6724f1u); call_ind(t); }
L_006724f1:; BB(0x006724f1);
    /* 006724f1: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 006724f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006724f8: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 006724fe: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00672504: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672506u); call_ind(t); }
    /* 00672506: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00672509: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067250b: je 0x672536 */ if (fZ) goto L_00672536;
L_0067250d:; BB(0x0067250d);
    /* 0067250d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067250f: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00672515: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x67251au); f_005fb300();
    /* 0067251a: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00672520: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 00672526: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00672528: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0067252e: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00672534: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x672536u); call_ind(t); }
L_00672536:; BB(0x00672536);
    /* 00672536: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672538: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067253d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067253f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672541: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00672546: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00672548: push 0x30d4f9 */ { u32 v = 0x30d4f9u; r_esp -= 4; W32(r_esp, v); }
    /* 0067254d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067254f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672551: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00672557: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x67255cu); f_005f9ce0();
    /* 0067255c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067255e: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672563: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672568: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067256d: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672572: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00672574: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00672576: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00672578: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067257d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0067257f: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00672581: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00672586: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00672588: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067258d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067258f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00672591: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00672597: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x67259cu); f_005fa790();
    /* 0067259c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067259e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006725a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006725a2: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 006725a7: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 006725a9: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006725ab: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 006725ad: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006725af: push 0x6e1274 */ { u32 v = 0x6e1274u; r_esp -= 4; W32(r_esp, v); }
    /* 006725b4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6725b9u); f_00630f40();
    /* 006725b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006725bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006725bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006725bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006725c1: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 006725c7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x6725ccu); f_005fa5b0();
    /* 006725cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006725ce: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006725d0: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 006725d2: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 006725d4: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006725d6: push 0x6e1264 */ { u32 v = 0x6e1264u; r_esp -= 4; W32(r_esp, v); }
    /* 006725db: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6725e0u); f_00630f40();
    /* 006725e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006725e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006725e4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006725e6: push 0x109 */ { u32 v = 0x109u; r_esp -= 4; W32(r_esp, v); }
    /* 006725eb: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006725ed: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 006725f2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006725f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006725f6: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 006725fc: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x672601u); f_005f9de0();
    /* 00672601: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00672607: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672608: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0067260e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672610: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00672616: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 0067261c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67261eu); call_ind(t); }
    /* 0067261e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00672624: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672626: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067262c: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00672632: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672634u); call_ind(t); }
    /* 00672634: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0067263a: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00672640: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672642: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00672648: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 0067264e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x672650u); call_ind(t); }
    /* 00672650: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00672653: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672655: jne 0x67267d */ if (!fZ) goto L_0067267d;
L_00672657:; BB(0x00672657);
    /* 00672657: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00672659: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0067265f: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x672664u); f_005fb300();
    /* 00672664: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0067266a: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00672670: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00672672: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00672678: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0067267b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67267du); call_ind(t); }
L_0067267d:; BB(0x0067267d);
    /* 0067267d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672680: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00672682: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x672687u); f_00686d72();
    /* 00672687: mov esp, ebp */ r_esp = r_ebp;
    /* 00672689: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067268a: ret  */ FN_RET(0x00672030); r_esp += 4; return;
}

void f_00672690(void) /* GettingStartedDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00672690);
    /* 00672690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672691: mov ebp, esp */ r_ebp = r_esp;
    /* 00672693: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00672696: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00672699: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067269c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0067269f: cmp dword ptr [ebp - 0x2c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006726a3: ja 0x6728c4 */ if ((!fC&&!fZ)) goto L_006728c4;
L_006726a9:; BB(0x006726a9);
    /* 006726a9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006726ac: jmp dword ptr [ecx*4 + 0x6728cc] */ { u32 t = R32((u32)(r_ecx*4+0x6728ccu)); switch (t) { case 0x6726b3u: goto L_006726b3; case 0x672742u: goto L_00672742; case 0x6727d6u: goto L_006727d6; case 0x672860u: goto L_00672860; case 0x672881u: goto L_00672881; case 0x6728a3u: goto L_006728a3; default: UNSUP(0x006726ac, "jump table entry is not a known target"); } }
L_006726b3:; BB(0x006726b3);
    /* 006726b3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006726b5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006726b8: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x6726bdu); f_005fb350();
    /* 006726bd: mov ecx, eax */ r_ecx = r_eax;
    /* 006726bf: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x6726c4u); f_00600230();
    /* 006726c4: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 006726c7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006726cd: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x6726d2u); f_005f3bf0();
    /* 006726d2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006726d5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006726db: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6726e0u); f_006375b0();
    /* 006726e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006726e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006726e6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6726ebu); f_0063aac0();
    /* 006726eb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006726ee: mov cl, byte ptr [ebp - 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 006726f1: mov byte ptr [eax + edx + 0x268], cl */ W8((u32)(r_eax+r_edx+0x268u), (u8)r_ecx);
    /* 006726f8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006726fe: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x672703u); f_00637610();
    /* 00672703: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00672709: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067270b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00672711: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 00672717: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x672719u); call_ind(t); }
    /* 00672719: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067271c: movzx ecx, byte ptr [eax + 0x1bc] */ r_ecx = (u32)R8((u32)(r_eax+0x1bcu));
    /* 00672723: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00672725: je 0x67273d */ if (fZ) goto L_0067273d;
L_00672727:; BB(0x00672727);
    /* 00672727: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0067272d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067272f: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00672735: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 0067273b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67273du); call_ind(t); }
L_0067273d:; BB(0x0067273d);
    /* 0067273d: jmp 0x6728c4 */ goto L_006728c4;
L_00672742:; BB(0x00672742);
    /* 00672742: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00672744: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00672747: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x67274cu); f_005fb350();
    /* 0067274c: mov ecx, eax */ r_ecx = r_eax;
    /* 0067274e: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x672753u); f_00600230();
    /* 00672753: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 00672756: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067275c: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x672761u); f_005f3bf0();
    /* 00672761: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00672764: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067276a: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x67276fu); f_006375b0();
    /* 0067276f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00672772: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00672775: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x67277au); f_0063aac0();
    /* 0067277a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067277d: mov dl, byte ptr [ebp - 0x15] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffebu))) & 0xffu);
    /* 00672780: mov byte ptr [eax + ecx + 0x268], dl */ W8((u32)(r_eax+r_ecx+0x268u), (u8)r_edx);
    /* 00672787: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0067278d: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x672792u); f_00637610();
    /* 00672792: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00672797: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00672799: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0067279f: mov eax, dword ptr [edx + 0x180] */ r_eax = R32((u32)(r_edx+0x180u));
    /* 006727a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6727a7u); call_ind(t); }
    /* 006727a7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006727ad: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006727af: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006727b5: mov eax, dword ptr [edx + 0x258] */ r_eax = R32((u32)(r_edx+0x258u));
    /* 006727bb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6727bdu); call_ind(t); }
    /* 006727bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006727be: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006727c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006727c6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006727cc: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 006727cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6727d1u); call_ind(t); }
    /* 006727d1: jmp 0x6728c4 */ goto L_006728c4;
L_006727d6:; BB(0x006727d6);
    /* 006727d6: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 006727dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006727de: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 006727e4: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 006727ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6727ecu); call_ind(t); }
    /* 006727ec: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006727ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006727f1: jne 0x6727f8 */ if (!fZ) goto L_006727f8;
L_006727f3:; BB(0x006727f3);
    /* 006727f3: jmp 0x6728c4 */ goto L_006728c4;
L_006727f8:; BB(0x006727f8);
    /* 006727f8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006727fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006727fd: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x672802u); f_005fb350();
    /* 00672802: mov ecx, eax */ r_ecx = r_eax;
    /* 00672804: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x672809u); f_00600230();
    /* 00672809: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 0067280c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00672812: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x672817u); f_005f3bf0();
    /* 00672817: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067281a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00672820: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x672825u); f_006375b0();
    /* 00672825: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00672828: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067282b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x672830u); f_0063aac0();
    /* 00672830: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00672833: mov cl, byte ptr [ebp - 0x21] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdfu))) & 0xffu);
    /* 00672836: mov byte ptr [eax + edx + 0x268], cl */ W8((u32)(r_eax+r_edx+0x268u), (u8)r_ecx);
    /* 0067283d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00672843: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x672848u); f_00637610();
    /* 00672848: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0067284e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00672850: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00672856: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 0067285c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67285eu); call_ind(t); }
    /* 0067285e: jmp 0x6728c4 */ goto L_006728c4;
L_00672860:; BB(0x00672860);
    /* 00672860: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00672863: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x672868u); f_005f87d0();
    /* 00672868: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067286a: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0067286f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00672871: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00672877: mov eax, dword ptr [edx + 0x174] */ r_eax = R32((u32)(r_edx+0x174u));
    /* 0067287d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67287fu); call_ind(t); }
    /* 0067287f: jmp 0x6728c4 */ goto L_006728c4;
L_00672881:; BB(0x00672881);
    /* 00672881: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00672884: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x672889u); f_005f87d0();
    /* 00672889: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067288b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00672891: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00672893: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00672899: mov eax, dword ptr [edx + 0x174] */ r_eax = R32((u32)(r_edx+0x174u));
    /* 0067289f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6728a1u); call_ind(t); }
    /* 006728a1: jmp 0x6728c4 */ goto L_006728c4;
L_006728a3:; BB(0x006728a3);
    /* 006728a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006728a5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006728ab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006728ad: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006728b3: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 006728b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6728bbu); call_ind(t); }
    /* 006728bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006728bc: call 0x60cce0 */ r_esp -= 4; W32(r_esp, 0x6728c1u); f_0060cce0();
    /* 006728c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006728c4:; BB(0x006728c4);
    /* 006728c4: mov esp, ebp */ r_esp = r_ebp;
    /* 006728c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006728c7: ret 4 */ FN_RET(0x00672690); r_esp += 8; return;
}

