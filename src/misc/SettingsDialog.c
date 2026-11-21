#include "protos.h"

void f_0063b600(void) /* SettingsDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063b600);
    /* 0063b600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b601: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b603: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b605: push 0x6abb98 */ { u32 v = 0x6abb98u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b60a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063b610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b611: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b614: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063b619: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b61b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b61c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063b61f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0063b625: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0063b628: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b62a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b62c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b62f: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x63b634u); f_005f71f0();
    /* 0063b634: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063b63b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b63e: mov dword ptr [eax], 0x6db7ac */ W32((u32)(r_eax), 0x6db7acu);
    /* 0063b644: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b646: push 0x30d4dd */ { u32 v = 0x30d4ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b64b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b64e: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x63b653u); f_005f83d0();
    /* 0063b653: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b656: mov byte ptr [ecx + 0x1b8], 1 */ W8((u32)(r_ecx+0x1b8u), 0x1u);
    /* 0063b65d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b663: call 0x636e70 */ r_esp -= 4; W32(r_esp, 0x63b668u); f_00636e70();
    /* 0063b668: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b66a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b66d: add edx, 0x1cc */ {  u32 a = r_edx; u32 b = 0x1ccu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063b673: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b674: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b67a: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x63b67fu); f_005f3bf0();
    /* 0063b67f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b680: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063b685: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063b687: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b68d: mov eax, dword ptr [edx + 0x364] */ r_eax = R32((u32)(r_edx+0x364u));
    /* 0063b693: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63b695u); call_ind(t); }
    /* 0063b695: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b69b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063b69d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b6a3: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063b6a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63b6abu); call_ind(t); }
    /* 0063b6ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063b6ad: mov edx, 4 */ r_edx = 0x4u;
    /* 0063b6b2: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0063b6b4: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0063b6b7: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0063b6b9: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0063b6bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b6bc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63b6c1u); f_00686d82();
    /* 0063b6c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b6c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063b6c7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b6ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063b6cd: mov dword ptr [eax + 0x1bc], ecx */ W32((u32)(r_eax+0x1bcu), r_ecx);
    /* 0063b6d3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b6d6: mov dword ptr [edx + 0x1c0], 0 */ W32((u32)(r_edx+0x1c0u), 0x0u);
    /* 0063b6e0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063b6e7: jmp 0x63b6f2 */ goto L_0063b6f2;
L_0063b6e9:; BB(0x0063b6e9);
    /* 0063b6e9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b6ec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063b6ef: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0063b6f2:; BB(0x0063b6f2);
    /* 0063b6f2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b6f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063b6fa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b700: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0063b706: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63b708u); call_ind(t); }
    /* 0063b708: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b70b: jge 0x63b7ab */ if ((fS==fO)) goto L_0063b7ab;
L_0063b711:; BB(0x0063b711);
    /* 0063b711: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b717: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063b719: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b71f: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 0063b725: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63b727u); call_ind(t); }
    /* 0063b727: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b72a: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063b730: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b733: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 0063b736: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063b73c: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0063b73f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b742: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063b745: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b746: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b749: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063b74f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b752: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063b755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b756: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063b75c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063b75e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063b764: mov eax, dword ptr [edx + 0x154] */ r_eax = R32((u32)(r_edx+0x154u));
    /* 0063b76a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63b76cu); call_ind(t); }
    /* 0063b76c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b76f: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0063b775: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b778: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063b77b: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 0063b782: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063b788: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0063b78b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b78e: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0063b791: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b794: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063b79a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b79d: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0063b7a0: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0063b7a3: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0063b7a6: jmp 0x63b6e9 */ goto L_0063b6e9;
L_0063b7ab:; BB(0x0063b7ab);
    /* 0063b7ab: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b7ae: mov dword ptr [eax + 0x1e8], 0 */ W32((u32)(r_eax+0x1e8u), 0x0u);
    /* 0063b7b8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b7bb: mov dword ptr [ecx + 0x1c8], 0 */ W32((u32)(r_ecx+0x1c8u), 0x0u);
    /* 0063b7c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063b7cc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b7cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063b7d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063b7d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063b7da: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b7dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b7dd: ret  */ FN_RET(0x0063b600); r_esp += 4; return;
}

void f_0063b7e0(void) /* SettingsDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063b7e0);
    /* 0063b7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b7e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b7e5: push 0x6abbbb */ { u32 v = 0x6abbbbu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b7ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063b7f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b7f1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b7f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063b7f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b7fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b7fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063b7ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0063b805: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0063b808: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063b80b: mov dword ptr [eax], 0x6db7ac */ W32((u32)(r_eax), 0x6db7acu);
    /* 0063b811: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063b818: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0063b81f: jmp 0x63b82a */ goto L_0063b82a;
L_0063b821:; BB(0x0063b821);
    /* 0063b821: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b824: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063b827: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0063b82a:; BB(0x0063b82a);
    /* 0063b82a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063b830: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063b832: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b838: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 0063b83e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63b840u); call_ind(t); }
    /* 0063b840: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b843: jge 0x63b893 */ if ((fS==fO)) goto L_0063b893;
L_0063b845:; BB(0x0063b845);
    /* 0063b845: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063b848: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063b84e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b851: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0063b854: call 0x63a2a0 */ r_esp -= 4; W32(r_esp, 0x63b859u); f_0063a2a0();
    /* 0063b859: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063b85c: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0063b862: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b865: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063b868: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0063b86b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063b86e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0063b871: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b875: je 0x63b88a */ if (fZ) goto L_0063b88a;
L_0063b877:; BB(0x0063b877);
    /* 0063b877: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b879: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063b87c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063b87e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063b881: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063b883: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63b885u); call_ind(t); }
    /* 0063b885: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0063b888: jmp 0x63b891 */ goto L_0063b891;
L_0063b88a:; BB(0x0063b88a);
    /* 0063b88a: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0063b891:; BB(0x0063b891);
    /* 0063b891: jmp 0x63b821 */ goto L_0063b821;
L_0063b893:; BB(0x0063b893);
    /* 0063b893: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063b896: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0063b89c: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0063b89f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063b8a2: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0063b8a5: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b8a9: je 0x63b8be */ if (fZ) goto L_0063b8be;
L_0063b8ab:; BB(0x0063b8ab);
    /* 0063b8ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b8ad: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063b8b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063b8b2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063b8b5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063b8b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63b8b9u); call_ind(t); }
    /* 0063b8b9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0063b8bc: jmp 0x63b8c5 */ goto L_0063b8c5;
L_0063b8be:; BB(0x0063b8be);
    /* 0063b8be: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0063b8c5:; BB(0x0063b8c5);
    /* 0063b8c5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063b8c8: cmp dword ptr [ecx + 0x1bc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b8cf: je 0x63b8e9 */ if (fZ) goto L_0063b8e9;
L_0063b8d1:; BB(0x0063b8d1);
    /* 0063b8d1: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063b8d4: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0063b8da: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0063b8dd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063b8e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b8e1: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x63b8e6u); f_00686cae();
    /* 0063b8e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063b8e9:; BB(0x0063b8e9);
    /* 0063b8e9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063b8ec: cmp dword ptr [edx + 0x1c0], 0 */ {  u32 a = R32((u32)(r_edx+0x1c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b8f3: je 0x63b90d */ if (fZ) goto L_0063b90d;
L_0063b8f5:; BB(0x0063b8f5);
    /* 0063b8f5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063b8f8: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 0063b8fe: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0063b901: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063b904: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b905: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x63b90au); f_00686cae();
    /* 0063b90a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063b90d:; BB(0x0063b90d);
    /* 0063b90d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063b914: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0063b917: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x63b91cu); f_005f7260();
    /* 0063b91c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063b91f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063b926: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063b927: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b929: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b92a: ret  */ FN_RET(0x0063b7e0); r_esp += 4; return;
}

void f_0063c260(void) /* settingsdialog::func_0063c260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063c260);
    /* 0063c260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063c261: mov ebp, esp */ r_ebp = r_esp;
    /* 0063c263: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063c266: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063c269: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c26c: cmp dword ptr [eax + 0x1d4], 8 */ {  u32 a = R32((u32)(r_eax+0x1d4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063c273: jle 0x63c28c */ if ((fZ||fS!=fO)) goto L_0063c28c;
L_0063c275:; BB(0x0063c275);
    /* 0063c275: push 0x15b */ { u32 v = 0x15bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c27a: push 0x6dbaac */ { u32 v = 0x6dbaacu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c27f: push 0x6dba70 */ { u32 v = 0x6dba70u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c284: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x63c289u); f_005e9f20();
    /* 0063c289: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063c28c:; BB(0x0063c28c);
    /* 0063c28c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063c293: jmp 0x63c29e */ goto L_0063c29e;
L_0063c295:; BB(0x0063c295);
    /* 0063c295: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063c298: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063c29b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0063c29e:; BB(0x0063c29e);
    /* 0063c29e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c2a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063c2a4: cmp ecx, dword ptr [eax + 0x1d4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1d4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063c2aa: jge 0x63c3f9 */ if ((fS==fO)) goto L_0063c3f9;
L_0063c2b0:; BB(0x0063c2b0);
    /* 0063c2b0: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063c2b6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063c2b8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063c2be: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 0063c2c4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63c2c6u); call_ind(t); }
    /* 0063c2c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c2c8: jne 0x63c355 */ if (!fZ) goto L_0063c355;
L_0063c2ce:; BB(0x0063c2ce);
    /* 0063c2ce: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063c2d2: jne 0x63c2eb */ if (!fZ) goto L_0063c2eb;
L_0063c2d4:; BB(0x0063c2d4);
    /* 0063c2d4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c2d7: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 0063c2dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063c2e0: mov eax, dword ptr [ecx + edx*8] */ r_eax = R32((u32)(r_ecx+r_edx*8));
    /* 0063c2e3: add eax, 0x69 */ {  u32 a = r_eax; u32 b = 0x69u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063c2e6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0063c2e9: jmp 0x63c303 */ goto L_0063c303;
L_0063c2eb:; BB(0x0063c2eb);
    /* 0063c2eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c2ee: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0063c2f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063c2f7: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 0063c2fa: add ecx, 0x9e */ {  u32 a = r_ecx; u32 b = 0x9eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c300: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0063c303:; BB(0x0063c303);
    /* 0063c303: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c305: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c307: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0063c309: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c30b: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c30d: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c312: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c314: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c317: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 0063c31d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063c320: mov edx, dword ptr [eax + ecx*8 + 4] */ r_edx = R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 0063c324: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c325: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063c328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c329: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c32e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063c331: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c334: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c335: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c337: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c33a: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x63c33fu); f_005f9de0();
    /* 0063c33f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c340: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c342: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c344: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c347: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63c34cu); f_005fb480();
    /* 0063c34c: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c34e: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63c353u); f_005ff5a0();
    /* 0063c353: jmp 0x63c3bd */ goto L_0063c3bd;
L_0063c355:; BB(0x0063c355);
    /* 0063c355: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c357: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c359: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c35b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c35d: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c362: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c364: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c367: call 0x63d8e0 */ r_esp -= 4; W32(r_esp, 0x63c36cu); f_0063d8e0();
    /* 0063c36c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c36d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c36f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c372: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 0063c378: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063c37b: mov edx, dword ptr [eax + ecx*8 + 4] */ r_edx = R32((u32)(r_eax+r_ecx*8+0x4u));
    /* 0063c37f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c380: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c383: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 0063c389: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063c38c: mov eax, dword ptr [ecx + edx*8] */ r_eax = R32((u32)(r_ecx+r_edx*8));
    /* 0063c38f: add eax, 0x69 */ {  u32 a = r_eax; u32 b = 0x69u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063c392: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c393: push 0x30d4d1 */ { u32 v = 0x30d4d1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c398: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063c39b: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063c39e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c39f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3a1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c3a4: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x63c3a9u); f_005faee0();
    /* 0063c3a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3ac: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3ae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c3b1: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63c3b6u); f_005fb480();
    /* 0063c3b6: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c3b8: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63c3bdu); f_005ff5a0();
L_0063c3bd:; BB(0x0063c3bd);
    /* 0063c3bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3bf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3c1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3c7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3c9: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3cb: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3cd: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063c3d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c3db: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x63c3e0u); f_005fa5b0();
    /* 0063c3e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3e3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c3e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c3e8: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63c3edu); f_005fb480();
    /* 0063c3ed: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c3ef: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63c3f4u); f_005ff5a0();
    /* 0063c3f4: jmp 0x63c295 */ goto L_0063c295;
L_0063c3f9:; BB(0x0063c3f9);
    /* 0063c3f9: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063c3fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063c400: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063c406: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 0063c40c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63c40eu); call_ind(t); }
    /* 0063c40e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063c410: jle 0x63c431 */ if ((fZ||fS!=fO)) goto L_0063c431;
L_0063c412:; BB(0x0063c412);
    /* 0063c412: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c414: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c417: call 0x5fb5e0 */ r_esp -= 4; W32(r_esp, 0x63c41cu); f_005fb5e0();
    /* 0063c41c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0063c41f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c422: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063c424: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063c427: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0063c42d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63c42fu); call_ind(t); }
    /* 0063c42f: jmp 0x63c44e */ goto L_0063c44e;
L_0063c431:; BB(0x0063c431);
    /* 0063c431: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c433: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c436: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63c43bu); f_005fb300();
    /* 0063c43b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063c43e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063c441: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063c443: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063c446: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0063c44c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63c44eu); call_ind(t); }
L_0063c44e:; BB(0x0063c44e);
    /* 0063c44e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c451: cmp dword ptr [ecx + 0x1d4], 4 */ {  u32 a = R32((u32)(r_ecx+0x1d4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063c458: jle 0x63c4f5 */ if ((fZ||fS!=fO)) goto L_0063c4f5;
L_0063c45e:; BB(0x0063c45e);
    /* 0063c45e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c460: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c462: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c464: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c466: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c468: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c46d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c46f: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c474: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c476: push 0x30d503 */ { u32 v = 0x30d503u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c47b: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0063c47d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c47f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c482: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x63c487u); f_005f9de0();
    /* 0063c487: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c488: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c48a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c48c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c48f: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63c494u); f_005fb480();
    /* 0063c494: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c496: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63c49bu); f_005ff5a0();
    /* 0063c49b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c49d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c49f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4a1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4a5: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4aa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4ac: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4b1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4b3: push 0x30d504 */ { u32 v = 0x30d504u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4b8: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4bc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c4bf: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x63c4c4u); f_005f9de0();
    /* 0063c4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4c7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c4cc: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63c4d1u); f_005fb480();
    /* 0063c4d1: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c4d3: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63c4d8u); f_005ff5a0();
    /* 0063c4d8: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c4dd: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x63c4e2u); f_005fb300();
    /* 0063c4e2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0063c4e5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063c4e8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063c4ea: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063c4ed: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0063c4f3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63c4f5u); call_ind(t); }
L_0063c4f5:; BB(0x0063c4f5);
    /* 0063c4f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c4fb: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c500: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c502: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c504: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c506: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c508: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c50d: push 0x131 */ { u32 v = 0x131u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c512: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c514: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c516: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c518: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c51b: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x63c520u); f_005fa880();
    /* 0063c520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c521: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c523: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c525: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c528: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63c52du); f_005fb480();
    /* 0063c52d: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c52f: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63c534u); f_005ff5a0();
    /* 0063c534: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c536: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c538: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c53a: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c53f: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c544: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c549: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c54b: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c54d: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c552: push 0x131 */ { u32 v = 0x131u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c557: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c559: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c55b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c55d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c560: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x63c565u); f_005fa880();
    /* 0063c565: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c566: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c568: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c56a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c56d: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63c572u); f_005fb480();
    /* 0063c572: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c574: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63c579u); f_005ff5a0();
    /* 0063c579: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c57c: cmp dword ptr [eax + 0x1d4], 2 */ {  u32 a = R32((u32)(r_eax+0x1d4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063c583: jle 0x63c60d */ if ((fZ||fS!=fO)) goto L_0063c60d;
L_0063c589:; BB(0x0063c589);
    /* 0063c589: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c58b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c58d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c58f: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c594: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c596: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c598: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c59a: push 0xd1 */ { u32 v = 0xd1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c59f: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5a3: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5a8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c5af: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x63c5b4u); f_005fa880();
    /* 0063c5b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5b7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c5bc: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63c5c1u); f_005fb480();
    /* 0063c5c1: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c5c3: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63c5c8u); f_005ff5a0();
    /* 0063c5c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5ce: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5d3: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5d8: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5dd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5df: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5e4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5e6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5e8: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5ed: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c5f4: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x63c5f9u); f_005fa880();
    /* 0063c5f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5fc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063c5fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c601: call 0x5fb480 */ r_esp -= 4; W32(r_esp, 0x63c606u); f_005fb480();
    /* 0063c606: mov ecx, eax */ r_ecx = r_eax;
    /* 0063c608: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x63c60du); f_005ff5a0();
L_0063c60d:; BB(0x0063c60d);
    /* 0063c60d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063c610: call 0x63c620 */ r_esp -= 4; W32(r_esp, 0x63c615u); f_0063c620();
    /* 0063c615: mov esp, ebp */ r_esp = r_ebp;
    /* 0063c617: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063c618: ret  */ FN_RET(0x0063c260); r_esp += 4; return;
}

