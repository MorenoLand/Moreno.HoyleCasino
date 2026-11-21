#include "protos.h"

void f_006078d0(void) /* sub_6078D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006078d0);
    /* 006078d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006078d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006078d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006078d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006078d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006078da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006078db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006078de: add ecx, 0x107 */ {  u32 a = r_ecx; u32 b = 0x107u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006078e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006078e5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6078eau); f_00686d8e();
    /* 006078ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006078ed: mov esp, ebp */ r_esp = r_ebp;
    /* 006078ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006078f0: ret 4 */ FN_RET(0x006078d0); r_esp += 8; return;
}

void f_00607900(void) /* sub_607900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00607900);
    /* 00607900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607901: mov ebp, esp */ r_ebp = r_esp;
    /* 00607903: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00607906: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00607909: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 0060790d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0060790f: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00607911: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00607913: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607914: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00607917: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00607918: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060791b: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x607920u); f_00607960();
    /* 00607920: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00607923: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607927: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0060792a: mov esp, ebp */ r_esp = r_ebp;
    /* 0060792c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060792d: ret 8 */ FN_RET(0x00607900); r_esp += 12; return;
}

void f_00607930(void) /* sub_607930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00607930);
    /* 00607930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607931: mov ebp, esp */ r_ebp = r_esp;
    /* 00607933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00607934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00607937: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 0060793b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0060793d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0060793f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00607941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607942: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00607945: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00607946: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00607949: call 0x6079d0 */ r_esp -= 4; W32(r_esp, 0x60794eu); f_006079d0();
    /* 0060794e: mov esp, ebp */ r_esp = r_ebp;
    /* 00607950: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607951: ret 8 */ FN_RET(0x00607930); r_esp += 12; return;
}

void f_00607960(void) /* sub_607960 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00607960);
    /* 00607960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00607961: mov ebp, esp */ r_ebp = r_esp;
    /* 00607963: sub esp, 0x12c */ {  u32 a = r_esp; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00607969: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060796e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00607970: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00607973: mov dword ptr [ebp - 0x12c], ecx */ W32((u32)(r_ebp+0xfffffed4u), r_ecx);
    /* 00607979: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0060797b: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 0060797e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060797f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00607982: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00607983: call dword ptr [0x6b21dc] */ { u32 t = R32((u32)(0x6b21dcu)); r_esp -= 4; W32(r_esp, 0x607989u); call_ind(t); }
    /* 00607989: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060798c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0060798e: lea edx, [ebp - 0x128] */ r_edx = (u32)(r_ebp+0xfffffed8u);
    /* 00607994: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00607995: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00607998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607999: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060799c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060799d: mov edx, dword ptr [ebp - 0x12c] */ r_edx = R32((u32)(r_ebp+0xfffffed4u));
    /* 006079a3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006079a5: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 006079ab: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006079ae: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6079b0u); call_ind(t); }
    /* 006079b0: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 006079b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006079b7: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x6079bdu); call_ind(t); }
    /* 006079bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006079c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006079c3: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006079c5: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6079cau); f_00686d72();
    /* 006079ca: mov esp, ebp */ r_esp = r_ebp;
    /* 006079cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006079cd: ret 8 */ FN_RET(0x00607960); r_esp += 12; return;
}

void f_006079d0(void) /* sub_6079D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006079d0);
    /* 006079d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006079d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006079d3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006079d6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006079db: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006079dd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006079e0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006079e3: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006079e5: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 006079e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006079e9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006079ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006079ed: call dword ptr [0x6b21dc] */ { u32 t = R32((u32)(0x6b21dcu)); r_esp -= 4; W32(r_esp, 0x6079f3u); call_ind(t); }
    /* 006079f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006079f6: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 006079f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006079fa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006079fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006079fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00607a01: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00607a03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00607a06: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00607a09: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x607a0bu); call_ind(t); }
    /* 00607a0b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00607a0e: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00607a10: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x607a15u); f_00686d72();
    /* 00607a15: mov esp, ebp */ r_esp = r_ebp;
    /* 00607a17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00607a18: ret 8 */ FN_RET(0x006079d0); r_esp += 12; return;
}

