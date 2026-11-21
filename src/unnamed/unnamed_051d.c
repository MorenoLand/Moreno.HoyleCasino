#include "protos.h"

void f_0051df90(void) /* sub_51DF90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051df90);
    /* 0051df90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051df91: mov ebp, esp */ r_ebp = r_esp;
    /* 0051df93: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051df96: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0051df99: mov dword ptr [ebp - 8], 0x14 */ W32((u32)(r_ebp+0xfffffff8u), 0x14u);
    /* 0051dfa0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051dfa3: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 0051dfa9: mov edx, dword ptr [ecx*8 + 0x7219d0] */ r_edx = R32((u32)(r_ecx*8+0x7219d0u));
    /* 0051dfb0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0051dfb3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051dfb6: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 0051dfbc: mov edx, dword ptr [ecx*8 + 0x7219d4] */ r_edx = R32((u32)(r_ecx*8+0x7219d4u));
    /* 0051dfc3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0051dfc6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051dfc9: cmp dword ptr [eax + 0x1cc], 0x16 */ {  u32 a = R32((u32)(r_eax+0x1ccu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051dfd0: jl 0x51dfdd */ if ((fS!=fO)) goto L_0051dfdd;
L_0051dfd2:; BB(0x0051dfd2);
    /* 0051dfd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051dfd5: add ecx, 0x3c */ {  u32 a = r_ecx; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051dfd8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051dfdb: jmp 0x51e009 */ goto L_0051e009;
L_0051dfdd:; BB(0x0051dfdd);
    /* 0051dfdd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051dfe0: cmp dword ptr [edx + 0x1cc], 0xf */ {  u32 a = R32((u32)(r_edx+0x1ccu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051dfe7: jl 0x51dff4 */ if ((fS!=fO)) goto L_0051dff4;
L_0051dfe9:; BB(0x0051dfe9);
    /* 0051dfe9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051dfec: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051dfef: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051dff2: jmp 0x51e009 */ goto L_0051e009;
L_0051dff4:; BB(0x0051dff4);
    /* 0051dff4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051dff7: cmp dword ptr [ecx + 0x1cc], 8 */ {  u32 a = R32((u32)(r_ecx+0x1ccu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051dffe: jl 0x51e009 */ if ((fS!=fO)) goto L_0051e009;
L_0051e000:; BB(0x0051e000);
    /* 0051e000: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051e003: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051e006: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0051e009:; BB(0x0051e009);
    /* 0051e009: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0051e010: jmp 0x51e01b */ goto L_0051e01b;
L_0051e012:; BB(0x0051e012);
    /* 0051e012: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e015: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051e018: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0051e01b:; BB(0x0051e01b);
    /* 0051e01b: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051e01f: jg 0x51e02f */ if ((!fZ&&fS==fO)) goto L_0051e02f;
L_0051e021:; BB(0x0051e021);
    /* 0051e021: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e024: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e025: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051e028: call 0x51e100 */ r_esp -= 4; W32(r_esp, 0x51e02du); f_0051e100();
    /* 0051e02d: jmp 0x51e012 */ goto L_0051e012;
L_0051e02f:; BB(0x0051e02f);
    /* 0051e02f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051e032: call 0x51e480 */ r_esp -= 4; W32(r_esp, 0x51e037u); f_0051e480();
    /* 0051e037: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 0051e03e: jmp 0x51e049 */ goto L_0051e049;
L_0051e040:; BB(0x0051e040);
    /* 0051e040: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e043: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051e046: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0051e049:; BB(0x0051e049);
    /* 0051e049: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051e04d: jge 0x51e070 */ if ((fS==fO)) goto L_0051e070;
L_0051e04f:; BB(0x0051e04f);
    /* 0051e04f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051e052: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051e053: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051e056: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x51e05bu); f_005fb300();
    /* 0051e05b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0051e05e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051e061: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051e063: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051e066: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0051e06c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51e06eu); call_ind(t); }
    /* 0051e06e: jmp 0x51e040 */ goto L_0051e040;
L_0051e070:; BB(0x0051e070);
    /* 0051e070: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051e073: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0051e079: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051e07c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e07d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051e080: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x51e085u); f_005fb300();
    /* 0051e085: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0051e088: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051e08b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051e08d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051e090: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0051e096: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51e098u); call_ind(t); }
    /* 0051e098: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e09a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051e09d: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51e0a2u); f_005fb2b0();
    /* 0051e0a2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0051e0a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051e0a8: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 0051e0ae: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051e0b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e0b2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051e0b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051e0b7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051e0ba: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0051e0c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51e0c2u); call_ind(t); }
    /* 0051e0c2: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e0c4: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e0c6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051e0c9: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51e0ceu); f_005fb2b0();
    /* 0051e0ce: mov ecx, eax */ r_ecx = r_eax;
    /* 0051e0d0: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x51e0d5u); f_005eb5d0();
    /* 0051e0d5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0051e0d7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051e0da: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51e0dfu); f_005fb2b0();
    /* 0051e0df: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0051e0e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051e0e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e0e6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051e0e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e0ea: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051e0ed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051e0ef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051e0f2: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0051e0f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51e0f7u); call_ind(t); }
    /* 0051e0f7: mov esp, ebp */ r_esp = r_ebp;
    /* 0051e0f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e0fa: ret  */ FN_RET(0x0051df90); r_esp += 4; return;
}

