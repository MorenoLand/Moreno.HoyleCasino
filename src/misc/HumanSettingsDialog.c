#include "protos.h"

void f_00640d00(void) /* HumanSettingsDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640d00);
    /* 00640d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00640d03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640d05: push 0x6abcf9 */ { u32 v = 0x6abcf9u; r_esp -= 4; W32(r_esp, v); }
    /* 00640d0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00640d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640d11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640d12: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00640d17: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00640d19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640d1a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00640d1d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00640d23: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00640d26: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00640d29: call 0x65ba70 */ r_esp -= 4; W32(r_esp, 0x640d2eu); f_0065ba70();
    /* 00640d2e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00640d35: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00640d38: mov dword ptr [eax], 0x6dc2cc */ W32((u32)(r_eax), 0x6dc2ccu);
    /* 00640d3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640d40: push 0x30d4f2 */ { u32 v = 0x30d4f2u; r_esp -= 4; W32(r_esp, v); }
    /* 00640d45: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00640d48: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x640d4du); f_005f83d0();
    /* 00640d4d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00640d50: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00640d53: mov dword ptr [ecx + 0x1c8], edx */ W32((u32)(r_ecx+0x1c8u), r_edx);
    /* 00640d59: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00640d5c: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00640d5f: mov byte ptr [eax + 0x1cc], cl */ W8((u32)(r_eax+0x1ccu), (u8)r_ecx);
    /* 00640d65: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00640d68: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 00640d6b: mov byte ptr [edx + 0x1cd], al */ W8((u32)(r_edx+0x1cdu), (u8)r_eax);
    /* 00640d71: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00640d74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640d75: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00640d78: add edx, 0x1ce */ {  u32 a = r_edx; u32 b = 0x1ceu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00640d7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00640d7f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x640d84u); f_00686d8e();
    /* 00640d84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640d87: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00640d8e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00640d91: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00640d94: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00640d9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00640d9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00640d9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640d9f: ret 0x10 */ FN_RET(0x00640d00); r_esp += 20; return;
}

void f_00640eb0(void) /* HumanSettingsDialog::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640eb0);
    /* 00640eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00640eb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640eb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640eb7: mov eax, 0x2b */ r_eax = 0x2bu;
    /* 00640ebc: mov esp, ebp */ r_esp = r_ebp;
    /* 00640ebe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640ebf: ret  */ FN_RET(0x00640eb0); r_esp += 4; return;
}

void f_00640ec0(void) /* HumanSettingsDialog::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640ec0);
    /* 00640ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00640ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640ec7: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00640ecc: mov esp, ebp */ r_esp = r_ebp;
    /* 00640ece: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640ecf: ret  */ FN_RET(0x00640ec0); r_esp += 4; return;
}

void f_00640ed0(void) /* HumanSettingsDialog::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640ed0);
    /* 00640ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00640ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00640ed7: mov eax, 0xb4 */ r_eax = 0xb4u;
    /* 00640edc: mov esp, ebp */ r_esp = r_ebp;
    /* 00640ede: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00640edf: ret  */ FN_RET(0x00640ed0); r_esp += 4; return;
}

void f_00640ee0(void) /* HumanSettingsDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00640ee0);
    /* 00640ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00640ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00640ee3: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00640ee9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00640eee: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00640ef0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00640ef3: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 00640ef9: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00640eff: call 0x65bb00 */ r_esp -= 4; W32(r_esp, 0x640f04u); f_0065bb00();
    /* 00640f04: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00640f0a: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 00640f10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00640f11: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00640f17: call 0x639070 */ r_esp -= 4; W32(r_esp, 0x640f1cu); f_00639070();
    /* 00640f1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640f1d: push 0x6dc368 */ { u32 v = 0x6dc368u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f22: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640f27u); f_00630f40();
    /* 00640f27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640f2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640f2b: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00640f31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00640f32: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x640f38u); call_ind(t); }
    /* 00640f38: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640f3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640f3d: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f41: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f43: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f45: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f47: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f4c: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f4e: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00640f54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640f55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f59: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00640f5f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x640f64u); f_005fa5b0();
    /* 00640f64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f6a: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f6f: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00640f71: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f73: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f75: push 0xda */ { u32 v = 0xdau; r_esp -= 4; W32(r_esp, v); }
    /* 00640f7a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f7e: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f87: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00640f8d: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x640f92u); f_005fa880();
    /* 00640f92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640f98: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640f9d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640fa2: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640fa7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fa9: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 00640fae: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fb0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fb2: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fbb: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00640fc1: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x640fc6u); f_005fa880();
    /* 00640fc6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00640fc8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640fca: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00640fcc: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640fce: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fd0: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fd5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x640fdau); f_00630f40();
    /* 00640fda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00640fdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00640fde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fe0: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fe5: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fe7: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640fee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00640ff0: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00640ff6: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x640ffbu); f_005f9de0();
    /* 00640ffb: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00640ffd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00640fff: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00641001: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00641003: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00641005: push 0x6c2318 */ { u32 v = 0x6c2318u; r_esp -= 4; W32(r_esp, v); }
    /* 0064100a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64100fu); f_00630f40();
    /* 0064100f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641012: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641013: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00641015: push 0xe1 */ { u32 v = 0xe1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064101a: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 0064101f: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 00641024: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00641026: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00641028: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0064102e: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x641033u); f_005f9de0();
    /* 00641033: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00641035: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 0064103b: add ecx, 0x1ce */ {  u32 a = r_ecx; u32 b = 0x1ceu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00641041: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641042: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00641048: mov al, byte ptr [edx + 0x1cd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1cdu))) & 0xffu);
    /* 0064104e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064104f: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00641055: mov dl, byte ptr [ecx + 0x1cc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x1ccu))) & 0xffu);
    /* 0064105b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064105c: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00641062: call 0x65c820 */ r_esp -= 4; W32(r_esp, 0x641067u); f_0065c820();
    /* 00641067: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0064106d: add eax, 0x1ce */ {  u32 a = r_eax; u32 b = 0x1ceu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00641072: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641073: call 0x665800 */ r_esp -= 4; W32(r_esp, 0x641078u); f_00665800();
    /* 00641078: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064107b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064107c: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00641082: call 0x65c9c0 */ r_esp -= 4; W32(r_esp, 0x641087u); f_0065c9c0();
    /* 00641087: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064108a: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064108c: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x641091u); f_00686d72();
    /* 00641091: mov esp, ebp */ r_esp = r_ebp;
    /* 00641093: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641094: ret  */ FN_RET(0x00640ee0); r_esp += 4; return;
}

void f_006410a0(void) /* HumanSettingsDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006410a0);
    /* 006410a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006410a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006410a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006410a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006410a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006410ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006410ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006410b0: call 0x65c660 */ r_esp -= 4; W32(r_esp, 0x6410b5u); f_0065c660();
    /* 006410b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006410b8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006410bb: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006410bf: je 0x6410c9 */ if (fZ) goto L_006410c9;
L_006410c1:; BB(0x006410c1);
    /* 006410c1: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006410c5: je 0x6410f4 */ if (fZ) goto L_006410f4;
L_006410c7:; BB(0x006410c7);
    /* 006410c7: jmp 0x641108 */ goto L_00641108;
L_006410c9:; BB(0x006410c9);
    /* 006410c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006410cc: add edx, 0x1ce */ {  u32 a = r_edx; u32 b = 0x1ceu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006410d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006410d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006410d6: mov cl, byte ptr [eax + 0x1cd] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1cdu))) & 0xffu);
    /* 006410dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006410dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006410e0: mov al, byte ptr [edx + 0x1cc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1ccu))) & 0xffu);
    /* 006410e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006410e7: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 006410ed: call 0x63e3b0 */ r_esp -= 4; W32(r_esp, 0x6410f2u); f_0063e3b0();
    /* 006410f2: jmp 0x641108 */ goto L_00641108;
L_006410f4:; BB(0x006410f4);
    /* 006410f4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006410f9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006410fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006410fd: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 00641103: call 0x63e3b0 */ r_esp -= 4; W32(r_esp, 0x641108u); f_0063e3b0();
L_00641108:; BB(0x00641108);
    /* 00641108: mov esp, ebp */ r_esp = r_ebp;
    /* 0064110a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064110b: ret 4 */ FN_RET(0x006410a0); r_esp += 8; return;
}

void f_00641110(void) /* HumanSettingsDialog::vfunc34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641110);
    /* 00641110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641111: mov ebp, esp */ r_ebp = r_esp;
    /* 00641113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00641117: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064111a: movsx ecx, byte ptr [eax + 0x1cc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1ccu));
    /* 00641121: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641124: jne 0x641134 */ if (!fZ) goto L_00641134;
L_00641126:; BB(0x00641126);
    /* 00641126: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641129: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0064112c: mov byte ptr [edx + 0x1cd], al */ W8((u32)(r_edx+0x1cdu), (u8)r_eax);
    /* 00641132: jmp 0x64114d */ goto L_0064114d;
L_00641134:; BB(0x00641134);
    /* 00641134: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00641137: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641138: mov edx, dword ptr [0x1630690] */ r_edx = R32((u32)(0x1630690u));
    /* 0064113e: add edx, 0x1ce */ {  u32 a = r_edx; u32 b = 0x1ceu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00641144: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00641145: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x64114au); f_00686d8e();
    /* 0064114a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064114d:; BB(0x0064114d);
    /* 0064114d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064114f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641150: ret 8 */ FN_RET(0x00641110); r_esp += 12; return;
}

void f_00641160(void) /* HumanSettingsDialog::vfunc35 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00641160);
    /* 00641160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641161: mov ebp, esp */ r_ebp = r_esp;
    /* 00641163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00641164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00641167: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064116a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0064116d: mov byte ptr [eax + 0x1cc], cl */ W8((u32)(r_eax+0x1ccu), (u8)r_ecx);
    /* 00641173: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641176: movsx eax, byte ptr [edx + 0x1cc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1ccu));
    /* 0064117d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641180: jne 0x64118e */ if (!fZ) goto L_0064118e;
L_00641182:; BB(0x00641182);
    /* 00641182: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00641185: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00641188: mov byte ptr [ecx + 0x1cd], dl */ W8((u32)(r_ecx+0x1cdu), (u8)r_edx);
L_0064118e:; BB(0x0064118e);
    /* 0064118e: mov esp, ebp */ r_esp = r_ebp;
    /* 00641190: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641191: ret 0xc */ FN_RET(0x00641160); r_esp += 16; return;
}

