#include "protos.h"

void f_00466800(void) /* sub_466800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00466800);
    /* 00466800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00466801: mov ebp, esp */ r_ebp = r_esp;
    /* 00466803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00466807: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046680a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0046680d: mov byte ptr [eax + 0x200], cl */ W8((u32)(r_eax+0x200u), (u8)r_ecx);
    /* 00466813: mov esp, ebp */ r_esp = r_ebp;
    /* 00466815: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00466816: ret 4 */ FN_RET(0x00466800); r_esp += 8; return;
}

void f_00466820(void) /* sub_466820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00466820);
    /* 00466820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00466821: mov ebp, esp */ r_ebp = r_esp;
    /* 00466823: sub esp, 0x194 */ {  u32 a = r_esp; u32 b = 0x194u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00466829: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0046682e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00466830: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00466833: mov dword ptr [ebp - 0x194], ecx */ W32((u32)(r_ebp+0xfffffe6cu), r_ecx);
    /* 00466839: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0046683c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046683d: lea ecx, [ebp - 0x10c] */ r_ecx = (u32)(r_ebp+0xfffffef4u);
    /* 00466843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466844: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046684a: call 0x47ce00 */ r_esp -= 4; W32(r_esp, 0x46684fu); f_0047ce00();
    /* 0046684f: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00466855: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00466856: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00466858: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0046685a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046685b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00466861: call 0x47bc40 */ r_esp -= 4; W32(r_esp, 0x466866u); f_0047bc40();
    /* 00466866: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 0046686c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0046686d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0046686f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00466871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00466872: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00466878: call 0x47bc80 */ r_esp -= 4; W32(r_esp, 0x46687du); f_0047bc80();
    /* 0046687d: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00466883: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00466884: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046688a: call 0x47bcc0 */ r_esp -= 4; W32(r_esp, 0x46688fu); f_0047bcc0();
    /* 0046688f: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00466895: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00466896: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046689c: call 0x47bd40 */ r_esp -= 4; W32(r_esp, 0x4668a1u); f_0047bd40();
    /* 004668a1: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 004668a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004668a8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004668ae: call 0x47bd80 */ r_esp -= 4; W32(r_esp, 0x4668b3u); f_0047bd80();
    /* 004668b3: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 004668b9: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004668bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004668bc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004668c2: call 0x47bd00 */ r_esp -= 4; W32(r_esp, 0x4668c7u); f_0047bd00();
    /* 004668c7: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 004668cd: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004668cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004668d0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004668d6: call 0x47bdc0 */ r_esp -= 4; W32(r_esp, 0x4668dbu); f_0047bdc0();
    /* 004668db: lea ecx, [ebp - 0x190] */ r_ecx = (u32)(r_ebp+0xfffffe70u);
    /* 004668e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004668e2: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 004668e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004668e9: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x4668eeu); f_006311e0();
    /* 004668ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004668f1: lea eax, [ebp - 0x150] */ r_eax = (u32)(r_ebp+0xfffffeb0u);
    /* 004668f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004668f8: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 004668fe: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00466900: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466901: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x466906u); f_006311e0();
    /* 00466906: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466909: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046690f: call 0x480f80 */ r_esp -= 4; W32(r_esp, 0x466914u); f_00480f80();
    /* 00466914: mov byte ptr [ebp - 0x10d], al */ W8((u32)(r_ebp+0xfffffef3u), (u8)r_eax);
    /* 0046691a: movzx edx, byte ptr [ebp - 0x10d] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffef3u));
    /* 00466921: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00466923: je 0x466a27 */ if (fZ) goto L_00466a27;
L_00466929:; BB(0x00466929);
    /* 00466929: push 0x6bade8 */ { u32 v = 0x6bade8u; r_esp -= 4; W32(r_esp, v); }
    /* 0046692e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x466933u); f_00630f40();
    /* 00466933: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466936: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00466937: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0046693d: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00466943: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466949: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046694f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00466951: mov ecx, eax */ r_ecx = r_eax;
    /* 00466953: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00466959: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46695bu); call_ind(t); }
    /* 0046695b: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 0046695d: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466963: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 00466969: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x46696eu); f_006026f0();
    /* 0046696e: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00466970: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00466972: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466978: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046697e: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466984: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 0046698a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046698c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046698f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466991u); call_ind(t); }
    /* 00466991: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00466993: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00466995: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 0046699b: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 004669a1: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 004669a7: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 004669ad: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004669af: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004669b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4669b4u); call_ind(t); }
    /* 004669b4: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 004669ba: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 004669c0: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 004669c6: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 004669cc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004669ce: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004669d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4669d3u); call_ind(t); }
    /* 004669d3: push 0x6badc8 */ { u32 v = 0x6badc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004669d8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4669ddu); f_00630f40();
    /* 004669dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004669e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004669e1: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 004669e7: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 004669ed: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 004669f3: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 004669f9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004669fb: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00466a01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466a03u); call_ind(t); }
    /* 00466a03: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466a09: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 00466a0f: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466a15: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 00466a1b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466a1d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00466a20: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466a22u); call_ind(t); }
    /* 00466a22: jmp 0x466afb */ goto L_00466afb;
L_00466a27:; BB(0x00466a27);
    /* 00466a27: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00466a29: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00466a2b: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466a31: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 00466a37: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466a3d: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00466a43: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466a45: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00466a48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466a4au); call_ind(t); }
    /* 00466a4a: push 0x6bace8 */ { u32 v = 0x6bace8u; r_esp -= 4; W32(r_esp, v); }
    /* 00466a4f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x466a54u); f_00630f40();
    /* 00466a54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466a57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00466a58: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466a5e: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 00466a64: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466a6a: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00466a70: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466a72: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00466a78: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466a7au); call_ind(t); }
    /* 00466a7a: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00466a7c: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466a82: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 00466a88: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x466a8du); f_006026f0();
    /* 00466a8d: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466a93: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 00466a99: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466a9f: mov ecx, dword ptr [ecx + 0x1ec] */ r_ecx = R32((u32)(r_ecx+0x1ecu));
    /* 00466aa5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00466aa7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00466aaa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466aacu); call_ind(t); }
    /* 00466aac: push 0x6bada8 */ { u32 v = 0x6bada8u; r_esp -= 4; W32(r_esp, v); }
    /* 00466ab1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x466ab6u); f_00630f40();
    /* 00466ab6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466ab9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00466aba: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466ac0: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 00466ac6: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466acc: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 00466ad2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466ad4: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00466ada: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466adcu); call_ind(t); }
    /* 00466adc: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466ae2: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 00466ae8: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466aee: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 00466af4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466af6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00466af9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466afbu); call_ind(t); }
L_00466afb:; BB(0x00466afb);
    /* 00466afb: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466b01: movzx edx, byte ptr [ecx + 0x200] */ r_edx = (u32)R8((u32)(r_ecx+0x200u));
    /* 00466b08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00466b0a: je 0x466ce2 */ if (fZ) goto L_00466ce2;
L_00466b10:; BB(0x00466b10);
    /* 00466b10: push 0x6bad84 */ { u32 v = 0x6bad84u; r_esp -= 4; W32(r_esp, v); }
    /* 00466b15: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x466b1au); f_00630f40();
    /* 00466b1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466b1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00466b1e: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466b24: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 00466b2a: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466b30: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 00466b36: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00466b38: mov ecx, eax */ r_ecx = r_eax;
    /* 00466b3a: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00466b40: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466b42u); call_ind(t); }
    /* 00466b42: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 00466b44: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00466b46: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466b4c: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 00466b52: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466b58: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 00466b5e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466b60: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00466b63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466b65u); call_ind(t); }
    /* 00466b65: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00466b67: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466b6d: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 00466b73: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x466b78u); f_005ef310();
    /* 00466b78: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466b7e: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 00466b84: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466b8a: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 00466b90: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00466b92: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00466b95: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466b97u); call_ind(t); }
    /* 00466b97: lea ecx, [ebp - 0x190] */ r_ecx = (u32)(r_ebp+0xfffffe70u);
    /* 00466b9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466b9e: push 0x6bad58 */ { u32 v = 0x6bad58u; r_esp -= 4; W32(r_esp, v); }
    /* 00466ba3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x466ba8u); f_00630f40();
    /* 00466ba8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466bab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00466bac: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00466bb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00466bb3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x466bb9u); call_ind(t); }
    /* 00466bb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466bbc: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00466bc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00466bc3: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466bc9: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 00466bcf: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466bd5: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 00466bdb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466bdd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00466be3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466be5u); call_ind(t); }
    /* 00466be5: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00466be7: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00466be9: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466bef: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 00466bf5: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466bfb: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 00466c01: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466c03: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00466c06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466c08u); call_ind(t); }
    /* 00466c08: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00466c0a: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466c10: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 00466c16: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x466c1bu); f_005ef310();
    /* 00466c1b: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466c21: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 00466c27: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466c2d: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 00466c33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00466c35: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00466c38: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466c3au); call_ind(t); }
    /* 00466c3a: lea ecx, [ebp - 0x150] */ r_ecx = (u32)(r_ebp+0xfffffeb0u);
    /* 00466c40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466c41: push 0x6bad30 */ { u32 v = 0x6bad30u; r_esp -= 4; W32(r_esp, v); }
    /* 00466c46: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x466c4bu); f_00630f40();
    /* 00466c4b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466c4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00466c4f: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00466c55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00466c56: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x466c5cu); call_ind(t); }
    /* 00466c5c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466c5f: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00466c65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00466c66: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466c6c: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 00466c72: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466c78: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 00466c7e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466c80: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00466c86: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466c88u); call_ind(t); }
    /* 00466c88: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00466c8a: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00466c8c: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466c92: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 00466c98: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466c9e: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 00466ca4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466ca6: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00466ca9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466cabu); call_ind(t); }
    /* 00466cab: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00466cad: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466cb3: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 00466cb9: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x466cbeu); f_005ef310();
    /* 00466cbe: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466cc4: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 00466cca: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466cd0: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 00466cd6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00466cd8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00466cdb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466cddu); call_ind(t); }
    /* 00466cdd: jmp 0x466e47 */ goto L_00466e47;
L_00466ce2:; BB(0x00466ce2);
    /* 00466ce2: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466ce8: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 00466cee: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466cf4: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 00466cfa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466cfc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00466cff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466d01u); call_ind(t); }
    /* 00466d01: lea ecx, [ebp - 0x190] */ r_ecx = (u32)(r_ebp+0xfffffe70u);
    /* 00466d07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466d08: push 0x6bad58 */ { u32 v = 0x6bad58u; r_esp -= 4; W32(r_esp, v); }
    /* 00466d0d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x466d12u); f_00630f40();
    /* 00466d12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466d15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00466d16: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00466d1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00466d1d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x466d23u); call_ind(t); }
    /* 00466d23: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466d26: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00466d2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00466d2d: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466d33: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 00466d39: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466d3f: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 00466d45: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466d47: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00466d4d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466d4fu); call_ind(t); }
    /* 00466d4f: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00466d51: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00466d53: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466d59: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 00466d5f: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466d65: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 00466d6b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466d6d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00466d70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466d72u); call_ind(t); }
    /* 00466d72: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00466d74: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466d7a: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 00466d80: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x466d85u); f_005ef310();
    /* 00466d85: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466d8b: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 00466d91: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466d97: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 00466d9d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00466d9f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00466da2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466da4u); call_ind(t); }
    /* 00466da4: lea ecx, [ebp - 0x150] */ r_ecx = (u32)(r_ebp+0xfffffeb0u);
    /* 00466daa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466dab: push 0x6bad30 */ { u32 v = 0x6bad30u; r_esp -= 4; W32(r_esp, v); }
    /* 00466db0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x466db5u); f_00630f40();
    /* 00466db5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466db8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00466db9: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00466dbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00466dc0: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x466dc6u); call_ind(t); }
    /* 00466dc6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466dc9: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00466dcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00466dd0: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466dd6: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 00466ddc: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466de2: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 00466de8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466dea: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00466df0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466df2u); call_ind(t); }
    /* 00466df2: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00466df4: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00466df6: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466dfc: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 00466e02: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466e08: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 00466e0e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466e10: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00466e13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466e15u); call_ind(t); }
    /* 00466e15: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00466e17: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466e1d: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 00466e23: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x466e28u); f_005ef310();
    /* 00466e28: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466e2e: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 00466e34: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466e3a: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 00466e40: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00466e42: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00466e45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466e47u); call_ind(t); }
L_00466e47:; BB(0x00466e47);
    /* 00466e47: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00466e4d: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x466e52u); f_005f85d0();
    /* 00466e52: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00466e55: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00466e57: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x466e5cu); f_00686d72();
    /* 00466e5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00466e5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00466e5f: ret  */ FN_RET(0x00466820); r_esp += 4; return;
}

void f_00466e90(void) /* sub_466E90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00466e90);
    /* 00466e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00466e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00466e93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00466e96: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00466e99: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00466e9f: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x466ea4u); f_005da7b0();
    /* 00466ea4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00466ea7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00466ea9: je 0x466eb5 */ if (fZ) goto L_00466eb5;
L_00466eab:; BB(0x00466eab);
    /* 00466eab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00466eae: call 0x466820 */ r_esp -= 4; W32(r_esp, 0x466eb3u); f_00466820();
    /* 00466eb3: jmp 0x466ebd */ goto L_00466ebd;
L_00466eb5:; BB(0x00466eb5);
    /* 00466eb5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00466eb8: call 0x465d90 */ r_esp -= 4; W32(r_esp, 0x466ebdu); f_00465d90();
L_00466ebd:; BB(0x00466ebd);
    /* 00466ebd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00466ec3: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 00466ec6: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 00466ec9: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00466ecd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00466ecf: je 0x466eed */ if (fZ) goto L_00466eed;
L_00466ed1:; BB(0x00466ed1);
    /* 00466ed1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00466ed4: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 00466eda: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00466edd: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00466ee3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466ee5: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00466eeb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466eedu); call_ind(t); }
L_00466eed:; BB(0x00466eed);
    /* 00466eed: mov esp, ebp */ r_esp = r_ebp;
    /* 00466eef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00466ef0: ret  */ FN_RET(0x00466e90); r_esp += 4; return;
}

