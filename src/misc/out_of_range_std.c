#include "protos.h"

void f_0068dd20(void) /* out_of_range@std::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068dd20);
    /* 0068dd20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068dd21: mov ebp, esp */ r_ebp = r_esp;
    /* 0068dd23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068dd25: push 0x6ae179 */ { u32 v = 0x6ae179u; r_esp -= 4; W32(r_esp, v); }
    /* 0068dd2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068dd30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068dd31: sub esp, 0x12c */ {  u32 a = r_esp; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068dd37: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068dd3c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068dd3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068dd3f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068dd42: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068dd48: mov dword ptr [ebp - 0x130], ecx */ W32((u32)(r_ebp+0xfffffed0u), r_ecx);
    /* 0068dd4e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068dd51: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0068dd54: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068dd57: movsx edx, byte ptr [ecx + 0x35] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x35u));
    /* 0068dd5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dd5d: je 0x68dda5 */ if (fZ) goto L_0068dda5;
L_0068dd5f:; BB(0x0068dd5f);
    /* 0068dd5f: push 0x6e5680 */ { u32 v = 0x6e5680u; r_esp -= 4; W32(r_esp, v); }
    /* 0068dd64: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 0068dd67: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x68dd6du); call_ind(t); }
    /* 0068dd6d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068dd74: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 0068dd77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068dd78: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0068dd7b: call 0x68d440 */ r_esp -= 4; W32(r_esp, 0x68dd80u); f_0068d440();
    /* 0068dd80: mov dword ptr [ebp - 0x44], 0x6e5678 */ W32((u32)(r_ebp+0xffffffbcu), 0x6e5678u);
    /* 0068dd87: push 0x702f5c */ { u32 v = 0x702f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068dd8c: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0068dd8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068dd90: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x68dd95u); f_00686fc0();
    /* 0068dd95: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068dd9c: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 0068dd9f: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68dda5u); call_ind(t); }
L_0068dda5:; BB(0x0068dda5);
    /* 0068dda5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068dda8: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0068ddab: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 0068ddae: call 0x68e790 */ r_esp -= 4; W32(r_esp, 0x68ddb3u); f_0068e790();
    /* 0068ddb3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068ddb6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0068ddb9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068ddbc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068ddbe: movsx eax, byte ptr [edx + 0x35] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x35u));
    /* 0068ddc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ddc4: je 0x68ddd1 */ if (fZ) goto L_0068ddd1;
L_0068ddc6:; BB(0x0068ddc6);
    /* 0068ddc6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068ddc9: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068ddcc: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068ddcf: jmp 0x68ddf8 */ goto L_0068ddf8;
L_0068ddd1:; BB(0x0068ddd1);
    /* 0068ddd1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068ddd4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068ddd7: movsx edx, byte ptr [ecx + 0x35] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x35u));
    /* 0068dddb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dddd: je 0x68dde9 */ if (fZ) goto L_0068dde9;
L_0068dddf:; BB(0x0068dddf);
    /* 0068dddf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068dde2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068dde4: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068dde7: jmp 0x68ddf8 */ goto L_0068ddf8;
L_0068dde9:; BB(0x0068dde9);
    /* 0068dde9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068ddec: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0068ddef: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068ddf2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068ddf5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0068ddf8:; BB(0x0068ddf8);
    /* 0068ddf8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068ddfb: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ddfe: jne 0x68df2f */ if (!fZ) goto L_0068df2f;
L_0068de04:; BB(0x0068de04);
    /* 0068de04: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068de07: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068de0a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0068de0d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068de10: movsx eax, byte ptr [edx + 0x35] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x35u));
    /* 0068de14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068de16: jne 0x68de21 */ if (!fZ) goto L_0068de21;
L_0068de18:; BB(0x0068de18);
    /* 0068de18: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068de1b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068de1e: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_0068de21:; BB(0x0068de21);
    /* 0068de21: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068de27: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068de2a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068de2d: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068de30: jne 0x68de43 */ if (!fZ) goto L_0068de43;
L_0068de32:; BB(0x0068de32);
    /* 0068de32: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068de38: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068de3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068de3e: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0068de41: jmp 0x68de60 */ goto L_0068de60;
L_0068de43:; BB(0x0068de43);
    /* 0068de43: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068de46: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068de48: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068de4b: jne 0x68de57 */ if (!fZ) goto L_0068de57;
L_0068de4d:; BB(0x0068de4d);
    /* 0068de4d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068de50: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068de53: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068de55: jmp 0x68de60 */ goto L_0068de60;
L_0068de57:; BB(0x0068de57);
    /* 0068de57: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068de5a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068de5d: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
L_0068de60:; BB(0x0068de60);
    /* 0068de60: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068de66: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068de69: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0068de6c: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0068de6f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068de71: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068de74: jne 0x68dec9 */ if (!fZ) goto L_0068dec9;
L_0068de76:; BB(0x0068de76);
    /* 0068de76: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068de79: movsx edx, byte ptr [ecx + 0x35] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x35u));
    /* 0068de7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068de7f: je 0x68de8c */ if (fZ) goto L_0068de8c;
L_0068de81:; BB(0x0068de81);
    /* 0068de81: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068de84: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 0068de8a: jmp 0x68deb2 */ goto L_0068deb2;
L_0068de8c:; BB(0x0068de8c);
    /* 0068de8c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068de8f: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
L_0068de92:; BB(0x0068de92);
    /* 0068de92: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0068de95: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068de97: movsx ecx, byte ptr [eax + 0x35] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x35u));
    /* 0068de9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068de9d: jne 0x68dea9 */ if (!fZ) goto L_0068dea9;
L_0068de9f:; BB(0x0068de9f);
    /* 0068de9f: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0068dea2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068dea4: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0068dea7: jmp 0x68de92 */ goto L_0068de92;
L_0068dea9:; BB(0x0068dea9);
    /* 0068dea9: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0068deac: mov dword ptr [ebp - 0x134], ecx */ W32((u32)(r_ebp+0xfffffeccu), r_ecx);
L_0068deb2:; BB(0x0068deb2);
    /* 0068deb2: mov edx, dword ptr [ebp - 0x130] */ r_edx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068deb8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068debb: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0068debe: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0068dec1: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 0068dec7: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_0068dec9:; BB(0x0068dec9);
    /* 0068dec9: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068decf: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068ded2: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068ded5: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ded8: jne 0x68df2a */ if (!fZ) goto L_0068df2a;
L_0068deda:; BB(0x0068deda);
    /* 0068deda: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068dedd: movsx ecx, byte ptr [eax + 0x35] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x35u));
    /* 0068dee1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dee3: je 0x68def0 */ if (fZ) goto L_0068def0;
L_0068dee5:; BB(0x0068dee5);
    /* 0068dee5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068dee8: mov dword ptr [ebp - 0x138], edx */ W32((u32)(r_ebp+0xfffffec8u), r_edx);
    /* 0068deee: jmp 0x68df18 */ goto L_0068df18;
L_0068def0:; BB(0x0068def0);
    /* 0068def0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068def3: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
L_0068def6:; BB(0x0068def6);
    /* 0068def6: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068def9: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068defc: movsx eax, byte ptr [edx + 0x35] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x35u));
    /* 0068df00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068df02: jne 0x68df0f */ if (!fZ) goto L_0068df0f;
L_0068df04:; BB(0x0068df04);
    /* 0068df04: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068df07: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068df0a: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0068df0d: jmp 0x68def6 */ goto L_0068def6;
L_0068df0f:; BB(0x0068df0f);
    /* 0068df0f: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068df12: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
L_0068df18:; BB(0x0068df18);
    /* 0068df18: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068df1e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068df21: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 0068df27: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_0068df2a:; BB(0x0068df2a);
    /* 0068df2a: jmp 0x68e032 */ goto L_0068e032;
L_0068df2f:; BB(0x0068df2f);
    /* 0068df2f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068df32: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068df34: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068df37: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0068df3a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068df3d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068df40: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068df42: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0068df44: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068df47: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068df4a: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068df4d: jne 0x68df57 */ if (!fZ) goto L_0068df57;
L_0068df4f:; BB(0x0068df4f);
    /* 0068df4f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068df52: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0068df55: jmp 0x68df94 */ goto L_0068df94;
L_0068df57:; BB(0x0068df57);
    /* 0068df57: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068df5a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068df5d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0068df60: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068df63: movsx ecx, byte ptr [eax + 0x35] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x35u));
    /* 0068df67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068df69: jne 0x68df74 */ if (!fZ) goto L_0068df74;
L_0068df6b:; BB(0x0068df6b);
    /* 0068df6b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068df6e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068df71: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_0068df74:; BB(0x0068df74);
    /* 0068df74: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068df77: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068df7a: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0068df7c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068df7f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068df82: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068df85: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0068df88: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068df8b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068df8e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068df91: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_0068df94:; BB(0x0068df94);
    /* 0068df94: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068df9a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068df9d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068dfa0: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dfa3: jne 0x68dfb6 */ if (!fZ) goto L_0068dfb6;
L_0068dfa5:; BB(0x0068dfa5);
    /* 0068dfa5: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068dfab: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068dfae: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068dfb1: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0068dfb4: jmp 0x68dfe8 */ goto L_0068dfe8;
L_0068dfb6:; BB(0x0068dfb6);
    /* 0068dfb6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068dfb9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068dfbc: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0068dfbf: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0068dfc2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068dfc4: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068dfc7: jne 0x68dfdc */ if (!fZ) goto L_0068dfdc;
L_0068dfc9:; BB(0x0068dfc9);
    /* 0068dfc9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068dfcc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068dfcf: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0068dfd2: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0068dfd5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068dfd8: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068dfda: jmp 0x68dfe8 */ goto L_0068dfe8;
L_0068dfdc:; BB(0x0068dfdc);
    /* 0068dfdc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068dfdf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068dfe2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068dfe5: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
L_0068dfe8:; BB(0x0068dfe8);
    /* 0068dfe8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068dfeb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068dfee: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068dff1: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0068dff4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068dff7: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068dffa: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0068e000: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e003: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068e006: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0068e00c: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0068e012: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0068e014: mov byte ptr [ebp - 0x7d], dl */ W8((u32)(r_ebp+0xffffff83u), (u8)r_edx);
    /* 0068e017: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0068e01d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0068e023: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0068e025: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0068e027: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0068e02d: mov cl, byte ptr [ebp - 0x7d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff83u))) & 0xffu);
    /* 0068e030: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
L_0068e032:; BB(0x0068e032);
    /* 0068e032: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068e035: movsx eax, byte ptr [edx + 0x34] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x34u));
    /* 0068e039: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e03c: jne 0x68e252 */ if (!fZ) goto L_0068e252;
L_0068e042:; BB(0x0068e042);
    /* 0068e042: jmp 0x68e04d */ goto L_0068e04d;
L_0068e044:; BB(0x0068e044);
    /* 0068e044: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e047: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068e04a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_0068e04d:; BB(0x0068e04d);
    /* 0068e04d: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068e053: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068e056: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e059: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e05c: je 0x68e24b */ if (fZ) goto L_0068e24b;
L_0068e062:; BB(0x0068e062);
    /* 0068e062: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e065: movsx ecx, byte ptr [eax + 0x34] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x34u));
    /* 0068e069: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e06c: jne 0x68e24b */ if (!fZ) goto L_0068e24b;
L_0068e072:; BB(0x0068e072);
    /* 0068e072: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e075: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e078: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e07a: jne 0x68e169 */ if (!fZ) goto L_0068e169;
L_0068e080:; BB(0x0068e080);
    /* 0068e080: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e083: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068e086: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0068e089: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e08c: movsx ecx, byte ptr [eax + 0x34] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x34u));
    /* 0068e090: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e092: jne 0x68e0ba */ if (!fZ) goto L_0068e0ba;
L_0068e094:; BB(0x0068e094);
    /* 0068e094: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e097: mov byte ptr [edx + 0x34], 1 */ W8((u32)(r_edx+0x34u), 0x1u);
    /* 0068e09b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e09e: mov byte ptr [eax + 0x34], 0 */ W8((u32)(r_eax+0x34u), 0x0u);
    /* 0068e0a2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e0a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e0a6: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068e0ac: call 0x68e3c0 */ r_esp -= 4; W32(r_esp, 0x68e0b1u); f_0068e3c0();
    /* 0068e0b1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e0b4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068e0b7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0068e0ba:; BB(0x0068e0ba);
    /* 0068e0ba: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e0bd: movsx edx, byte ptr [ecx + 0x35] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x35u));
    /* 0068e0c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e0c3: je 0x68e0d0 */ if (fZ) goto L_0068e0d0;
L_0068e0c5:; BB(0x0068e0c5);
    /* 0068e0c5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e0c8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068e0cb: jmp 0x68e164 */ goto L_0068e164;
L_0068e0d0:; BB(0x0068e0d0);
    /* 0068e0d0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e0d3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068e0d5: movsx eax, byte ptr [edx + 0x34] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x34u));
    /* 0068e0d9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e0dc: jne 0x68e0fc */ if (!fZ) goto L_0068e0fc;
L_0068e0de:; BB(0x0068e0de);
    /* 0068e0de: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e0e1: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068e0e4: movsx eax, byte ptr [edx + 0x34] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x34u));
    /* 0068e0e8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e0eb: jne 0x68e0fc */ if (!fZ) goto L_0068e0fc;
L_0068e0ed:; BB(0x0068e0ed);
    /* 0068e0ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e0f0: mov byte ptr [ecx + 0x34], 0 */ W8((u32)(r_ecx+0x34u), 0x0u);
    /* 0068e0f4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e0f7: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068e0fa: jmp 0x68e164 */ goto L_0068e164;
L_0068e0fc:; BB(0x0068e0fc);
    /* 0068e0fc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e0ff: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068e102: movsx edx, byte ptr [ecx + 0x34] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x34u));
    /* 0068e106: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e109: jne 0x68e133 */ if (!fZ) goto L_0068e133;
L_0068e10b:; BB(0x0068e10b);
    /* 0068e10b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e10e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068e110: mov byte ptr [ecx + 0x34], 1 */ W8((u32)(r_ecx+0x34u), 0x1u);
    /* 0068e114: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e117: mov byte ptr [edx + 0x34], 0 */ W8((u32)(r_edx+0x34u), 0x0u);
    /* 0068e11b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e11e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e11f: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068e125: call 0x68e470 */ r_esp -= 4; W32(r_esp, 0x68e12au); f_0068e470();
    /* 0068e12a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e12d: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068e130: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0068e133:; BB(0x0068e133);
    /* 0068e133: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e136: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e139: mov dl, byte ptr [ecx + 0x34] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x34u))) & 0xffu);
    /* 0068e13c: mov byte ptr [eax + 0x34], dl */ W8((u32)(r_eax+0x34u), (u8)r_edx);
    /* 0068e13f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e142: mov byte ptr [eax + 0x34], 1 */ W8((u32)(r_eax+0x34u), 0x1u);
    /* 0068e146: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e149: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068e14c: mov byte ptr [edx + 0x34], 1 */ W8((u32)(r_edx+0x34u), 0x1u);
    /* 0068e150: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e153: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e154: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068e15a: call 0x68e3c0 */ r_esp -= 4; W32(r_esp, 0x68e15fu); f_0068e3c0();
    /* 0068e15f: jmp 0x68e24b */ goto L_0068e24b;
L_0068e164:; BB(0x0068e164);
    /* 0068e164: jmp 0x68e246 */ goto L_0068e246;
L_0068e169:; BB(0x0068e169);
    /* 0068e169: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e16c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068e16e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0068e171: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e174: movsx ecx, byte ptr [eax + 0x34] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x34u));
    /* 0068e178: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e17a: jne 0x68e1a1 */ if (!fZ) goto L_0068e1a1;
L_0068e17c:; BB(0x0068e17c);
    /* 0068e17c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e17f: mov byte ptr [edx + 0x34], 1 */ W8((u32)(r_edx+0x34u), 0x1u);
    /* 0068e183: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e186: mov byte ptr [eax + 0x34], 0 */ W8((u32)(r_eax+0x34u), 0x0u);
    /* 0068e18a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e18d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e18e: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068e194: call 0x68e470 */ r_esp -= 4; W32(r_esp, 0x68e199u); f_0068e470();
    /* 0068e199: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e19c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068e19e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0068e1a1:; BB(0x0068e1a1);
    /* 0068e1a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e1a4: movsx edx, byte ptr [ecx + 0x35] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x35u));
    /* 0068e1a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e1aa: je 0x68e1b7 */ if (fZ) goto L_0068e1b7;
L_0068e1ac:; BB(0x0068e1ac);
    /* 0068e1ac: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e1af: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068e1b2: jmp 0x68e246 */ goto L_0068e246;
L_0068e1b7:; BB(0x0068e1b7);
    /* 0068e1b7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e1ba: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068e1bd: movsx eax, byte ptr [edx + 0x34] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x34u));
    /* 0068e1c1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e1c4: jne 0x68e1e3 */ if (!fZ) goto L_0068e1e3;
L_0068e1c6:; BB(0x0068e1c6);
    /* 0068e1c6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e1c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068e1cb: movsx eax, byte ptr [edx + 0x34] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x34u));
    /* 0068e1cf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e1d2: jne 0x68e1e3 */ if (!fZ) goto L_0068e1e3;
L_0068e1d4:; BB(0x0068e1d4);
    /* 0068e1d4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e1d7: mov byte ptr [ecx + 0x34], 0 */ W8((u32)(r_ecx+0x34u), 0x0u);
    /* 0068e1db: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e1de: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068e1e1: jmp 0x68e246 */ goto L_0068e246;
L_0068e1e3:; BB(0x0068e1e3);
    /* 0068e1e3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e1e6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068e1e8: movsx edx, byte ptr [ecx + 0x34] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x34u));
    /* 0068e1ec: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e1ef: jne 0x68e219 */ if (!fZ) goto L_0068e219;
L_0068e1f1:; BB(0x0068e1f1);
    /* 0068e1f1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e1f4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068e1f7: mov byte ptr [ecx + 0x34], 1 */ W8((u32)(r_ecx+0x34u), 0x1u);
    /* 0068e1fb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e1fe: mov byte ptr [edx + 0x34], 0 */ W8((u32)(r_edx+0x34u), 0x0u);
    /* 0068e202: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e205: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e206: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068e20c: call 0x68e3c0 */ r_esp -= 4; W32(r_esp, 0x68e211u); f_0068e3c0();
    /* 0068e211: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e214: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068e216: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0068e219:; BB(0x0068e219);
    /* 0068e219: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e21c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e21f: mov dl, byte ptr [ecx + 0x34] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x34u))) & 0xffu);
    /* 0068e222: mov byte ptr [eax + 0x34], dl */ W8((u32)(r_eax+0x34u), (u8)r_edx);
    /* 0068e225: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e228: mov byte ptr [eax + 0x34], 1 */ W8((u32)(r_eax+0x34u), 0x1u);
    /* 0068e22c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e22f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068e231: mov byte ptr [edx + 0x34], 1 */ W8((u32)(r_edx+0x34u), 0x1u);
    /* 0068e235: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e239: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068e23f: call 0x68e470 */ r_esp -= 4; W32(r_esp, 0x68e244u); f_0068e470();
    /* 0068e244: jmp 0x68e24b */ goto L_0068e24b;
L_0068e246:; BB(0x0068e246);
    /* 0068e246: jmp 0x68e044 */ goto L_0068e044;
L_0068e24b:; BB(0x0068e24b);
    /* 0068e24b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e24e: mov byte ptr [ecx + 0x34], 1 */ W8((u32)(r_ecx+0x34u), 0x1u);
L_0068e252:; BB(0x0068e252);
    /* 0068e252: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068e255: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e256: call 0x68f950 */ r_esp -= 4; W32(r_esp, 0x68e25bu); f_0068f950();
    /* 0068e25b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068e25e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068e261: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e262: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x68e267u); f_00686cae();
    /* 0068e267: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068e26a: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068e270: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068e274: jbe 0x68e28b */ if ((fC||fZ)) goto L_0068e28b;
L_0068e276:; BB(0x0068e276);
    /* 0068e276: mov edx, dword ptr [ebp - 0x130] */ r_edx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068e27c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068e27f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068e282: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0068e288: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
L_0068e28b:; BB(0x0068e28b);
    /* 0068e28b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068e28e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068e291: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068e293: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068e296: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0068e299: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068e29c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068e29f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068e2a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068e2a7: mov esp, ebp */ r_esp = r_ebp;
    /* 0068e2a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e2aa: ret 0xc */ FN_RET(0x0068dd20); r_esp += 16; return;
}

void f_0068e2f0(void) /* out_of_range@std::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068e2f0);
    /* 0068e2f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068e2f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e2f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068e2f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e2fa: mov dword ptr [eax], 0x6e5678 */ W32((u32)(r_eax), 0x6e5678u);
    /* 0068e300: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e303: mov dword ptr [ecx], 0x6d1bec */ W32((u32)(r_ecx), 0x6d1becu);
    /* 0068e309: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e30c: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068e30f: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68e315u); call_ind(t); }
    /* 0068e315: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e318: call dword ptr [0x6b2278] */ { u32 t = R32((u32)(0x6b2278u)); r_esp -= 4; W32(r_esp, 0x68e31eu); call_ind(t); }
    /* 0068e31e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068e321: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0068e324: je 0x68e332 */ if (fZ) goto L_0068e332;
L_0068e326:; BB(0x0068e326);
    /* 0068e326: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e32a: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x68e32fu); f_00686cae();
    /* 0068e32f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068e332:; BB(0x0068e332);
    /* 0068e332: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e335: mov esp, ebp */ r_esp = r_ebp;
    /* 0068e337: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e338: ret 4 */ FN_RET(0x0068e2f0); r_esp += 8; return;
}

void f_0068e340(void) /* out_of_range@std::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068e340);
    /* 0068e340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e341: mov ebp, esp */ r_ebp = r_esp;
    /* 0068e343: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068e345: push 0x6ae1a9 */ { u32 v = 0x6ae1a9u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e34a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068e350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e351: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e352: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068e357: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068e359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e35a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068e35d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068e363: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0068e366: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068e369: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e36a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068e36d: call dword ptr [0x6b2210] */ { u32 t = R32((u32)(0x6b2210u)); r_esp -= 4; W32(r_esp, 0x68e373u); call_ind(t); }
    /* 0068e373: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068e37a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068e37d: mov dword ptr [ecx], 0x6d1bec */ W32((u32)(r_ecx), 0x6d1becu);
    /* 0068e383: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068e386: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068e389: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e38a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068e38d: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068e390: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x68e396u); call_ind(t); }
    /* 0068e396: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068e39d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068e3a0: mov dword ptr [eax], 0x6e5678 */ W32((u32)(r_eax), 0x6e5678u);
    /* 0068e3a6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068e3a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068e3ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068e3b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068e3b4: mov esp, ebp */ r_esp = r_ebp;
    /* 0068e3b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e3b7: ret 4 */ FN_RET(0x0068e340); r_esp += 8; return;
}

void f_0068ef90(void) /* out_of_range@std::ctor_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068ef90);
    /* 0068ef90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068ef91: mov ebp, esp */ r_ebp = r_esp;
    /* 0068ef93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068ef95: push 0x6ae279 */ { u32 v = 0x6ae279u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ef9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068efa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068efa1: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068efa7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068efac: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068efae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068efaf: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068efb2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068efb8: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 0068efbe: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068efc1: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0068efc4: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0068efc7: movsx edx, byte ptr [ecx + 0x45] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x45u));
    /* 0068efcb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068efcd: je 0x68f015 */ if (fZ) goto L_0068f015;
L_0068efcf:; BB(0x0068efcf);
    /* 0068efcf: push 0x6e5680 */ { u32 v = 0x6e5680u; r_esp -= 4; W32(r_esp, v); }
    /* 0068efd4: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 0068efd7: call dword ptr [0x6b20fc] */ { u32 t = R32((u32)(0x6b20fcu)); r_esp -= 4; W32(r_esp, 0x68efddu); call_ind(t); }
    /* 0068efdd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068efe4: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 0068efe7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068efe8: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0068efeb: call 0x68d440 */ r_esp -= 4; W32(r_esp, 0x68eff0u); f_0068d440();
    /* 0068eff0: mov dword ptr [ebp - 0x44], 0x6e5678 */ W32((u32)(r_ebp+0xffffffbcu), 0x6e5678u);
    /* 0068eff7: push 0x702f5c */ { u32 v = 0x702f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068effc: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0068efff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f000: call 0x686fc0 */ r_esp -= 4; W32(r_esp, 0x68f005u); f_00686fc0();
    /* 0068f005: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068f00c: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 0068f00f: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68f015u); call_ind(t); }
L_0068f015:; BB(0x0068f015);
    /* 0068f015: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068f018: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0068f01b: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 0068f01e: call 0x68edc0 */ r_esp -= 4; W32(r_esp, 0x68f023u); f_0068edc0();
    /* 0068f023: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f026: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0068f029: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f02c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068f02e: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068f032: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f034: je 0x68f041 */ if (fZ) goto L_0068f041;
L_0068f036:; BB(0x0068f036);
    /* 0068f036: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f039: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068f03c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068f03f: jmp 0x68f068 */ goto L_0068f068;
L_0068f041:; BB(0x0068f041);
    /* 0068f041: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f044: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068f047: movsx edx, byte ptr [ecx + 0x45] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x45u));
    /* 0068f04b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f04d: je 0x68f059 */ if (fZ) goto L_0068f059;
L_0068f04f:; BB(0x0068f04f);
    /* 0068f04f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f052: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068f054: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068f057: jmp 0x68f068 */ goto L_0068f068;
L_0068f059:; BB(0x0068f059);
    /* 0068f059: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068f05c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0068f05f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f062: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068f065: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0068f068:; BB(0x0068f068);
    /* 0068f068: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f06b: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f06e: jne 0x68f19f */ if (!fZ) goto L_0068f19f;
L_0068f074:; BB(0x0068f074);
    /* 0068f074: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f077: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f07a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0068f07d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f080: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068f084: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f086: jne 0x68f091 */ if (!fZ) goto L_0068f091;
L_0068f088:; BB(0x0068f088);
    /* 0068f088: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f08b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f08e: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_0068f091:; BB(0x0068f091);
    /* 0068f091: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f097: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f09a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f09d: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f0a0: jne 0x68f0b3 */ if (!fZ) goto L_0068f0b3;
L_0068f0a2:; BB(0x0068f0a2);
    /* 0068f0a2: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f0a8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f0ab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f0ae: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0068f0b1: jmp 0x68f0d0 */ goto L_0068f0d0;
L_0068f0b3:; BB(0x0068f0b3);
    /* 0068f0b3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f0b6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068f0b8: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f0bb: jne 0x68f0c7 */ if (!fZ) goto L_0068f0c7;
L_0068f0bd:; BB(0x0068f0bd);
    /* 0068f0bd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f0c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f0c3: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068f0c5: jmp 0x68f0d0 */ goto L_0068f0d0;
L_0068f0c7:; BB(0x0068f0c7);
    /* 0068f0c7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f0ca: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f0cd: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
L_0068f0d0:; BB(0x0068f0d0);
    /* 0068f0d0: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f0d6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f0d9: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0068f0dc: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0068f0df: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068f0e1: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f0e4: jne 0x68f139 */ if (!fZ) goto L_0068f139;
L_0068f0e6:; BB(0x0068f0e6);
    /* 0068f0e6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f0e9: movsx edx, byte ptr [ecx + 0x45] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x45u));
    /* 0068f0ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f0ef: je 0x68f0fc */ if (fZ) goto L_0068f0fc;
L_0068f0f1:; BB(0x0068f0f1);
    /* 0068f0f1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f0f4: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0068f0fa: jmp 0x68f122 */ goto L_0068f122;
L_0068f0fc:; BB(0x0068f0fc);
    /* 0068f0fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f0ff: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
L_0068f102:; BB(0x0068f102);
    /* 0068f102: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0068f105: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068f107: movsx ecx, byte ptr [eax + 0x45] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 0068f10b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f10d: jne 0x68f119 */ if (!fZ) goto L_0068f119;
L_0068f10f:; BB(0x0068f10f);
    /* 0068f10f: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0068f112: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068f114: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0068f117: jmp 0x68f102 */ goto L_0068f102;
L_0068f119:; BB(0x0068f119);
    /* 0068f119: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0068f11c: mov dword ptr [ebp - 0xd0], ecx */ W32((u32)(r_ebp+0xffffff30u), r_ecx);
L_0068f122:; BB(0x0068f122);
    /* 0068f122: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f128: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068f12b: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0068f12e: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0068f131: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 0068f137: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_0068f139:; BB(0x0068f139);
    /* 0068f139: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f13f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f142: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068f145: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f148: jne 0x68f19a */ if (!fZ) goto L_0068f19a;
L_0068f14a:; BB(0x0068f14a);
    /* 0068f14a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f14d: movsx ecx, byte ptr [eax + 0x45] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 0068f151: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f153: je 0x68f160 */ if (fZ) goto L_0068f160;
L_0068f155:; BB(0x0068f155);
    /* 0068f155: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f158: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 0068f15e: jmp 0x68f188 */ goto L_0068f188;
L_0068f160:; BB(0x0068f160);
    /* 0068f160: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f163: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
L_0068f166:; BB(0x0068f166);
    /* 0068f166: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068f169: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068f16c: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068f170: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f172: jne 0x68f17f */ if (!fZ) goto L_0068f17f;
L_0068f174:; BB(0x0068f174);
    /* 0068f174: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068f177: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068f17a: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0068f17d: jmp 0x68f166 */ goto L_0068f166;
L_0068f17f:; BB(0x0068f17f);
    /* 0068f17f: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068f182: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
L_0068f188:; BB(0x0068f188);
    /* 0068f188: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f18e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f191: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 0068f197: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_0068f19a:; BB(0x0068f19a);
    /* 0068f19a: jmp 0x68f2a2 */ goto L_0068f2a2;
L_0068f19f:; BB(0x0068f19f);
    /* 0068f19f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f1a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068f1a4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f1a7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0068f1aa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f1ad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f1b0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068f1b2: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0068f1b4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f1b7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f1ba: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f1bd: jne 0x68f1c7 */ if (!fZ) goto L_0068f1c7;
L_0068f1bf:; BB(0x0068f1bf);
    /* 0068f1bf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f1c2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0068f1c5: jmp 0x68f204 */ goto L_0068f204;
L_0068f1c7:; BB(0x0068f1c7);
    /* 0068f1c7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f1ca: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f1cd: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0068f1d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f1d3: movsx ecx, byte ptr [eax + 0x45] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 0068f1d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f1d9: jne 0x68f1e4 */ if (!fZ) goto L_0068f1e4;
L_0068f1db:; BB(0x0068f1db);
    /* 0068f1db: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f1de: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f1e1: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_0068f1e4:; BB(0x0068f1e4);
    /* 0068f1e4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f1e7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f1ea: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0068f1ec: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f1ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f1f2: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068f1f5: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0068f1f8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f1fb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068f1fe: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f201: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_0068f204:; BB(0x0068f204);
    /* 0068f204: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f20a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f20d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f210: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f213: jne 0x68f226 */ if (!fZ) goto L_0068f226;
L_0068f215:; BB(0x0068f215);
    /* 0068f215: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f21b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f21e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f221: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0068f224: jmp 0x68f258 */ goto L_0068f258;
L_0068f226:; BB(0x0068f226);
    /* 0068f226: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f229: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f22c: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0068f22f: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0068f232: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068f234: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f237: jne 0x68f24c */ if (!fZ) goto L_0068f24c;
L_0068f239:; BB(0x0068f239);
    /* 0068f239: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f23c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f23f: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0068f242: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0068f245: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f248: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068f24a: jmp 0x68f258 */ goto L_0068f258;
L_0068f24c:; BB(0x0068f24c);
    /* 0068f24c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f24f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068f252: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f255: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
L_0068f258:; BB(0x0068f258);
    /* 0068f258: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f25b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f25e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f261: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0068f264: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f267: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068f26a: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0068f270: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f273: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068f276: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0068f27c: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0068f282: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0068f284: mov byte ptr [ebp - 0x7d], dl */ W8((u32)(r_ebp+0xffffff83u), (u8)r_edx);
    /* 0068f287: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0068f28d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0068f293: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0068f295: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0068f297: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0068f29d: mov cl, byte ptr [ebp - 0x7d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff83u))) & 0xffu);
    /* 0068f2a0: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
L_0068f2a2:; BB(0x0068f2a2);
    /* 0068f2a2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f2a5: movsx eax, byte ptr [edx + 0x44] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x44u));
    /* 0068f2a9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f2ac: jne 0x68f4c2 */ if (!fZ) goto L_0068f4c2;
L_0068f2b2:; BB(0x0068f2b2);
    /* 0068f2b2: jmp 0x68f2bd */ goto L_0068f2bd;
L_0068f2b4:; BB(0x0068f2b4);
    /* 0068f2b4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f2b7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f2ba: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_0068f2bd:; BB(0x0068f2bd);
    /* 0068f2bd: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f2c3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f2c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f2c9: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f2cc: je 0x68f4bb */ if (fZ) goto L_0068f4bb;
L_0068f2d2:; BB(0x0068f2d2);
    /* 0068f2d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f2d5: movsx ecx, byte ptr [eax + 0x44] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x44u));
    /* 0068f2d9: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f2dc: jne 0x68f4bb */ if (!fZ) goto L_0068f4bb;
L_0068f2e2:; BB(0x0068f2e2);
    /* 0068f2e2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f2e5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f2e8: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f2ea: jne 0x68f3d9 */ if (!fZ) goto L_0068f3d9;
L_0068f2f0:; BB(0x0068f2f0);
    /* 0068f2f0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f2f3: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068f2f6: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0068f2f9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f2fc: movsx ecx, byte ptr [eax + 0x44] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x44u));
    /* 0068f300: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f302: jne 0x68f32a */ if (!fZ) goto L_0068f32a;
L_0068f304:; BB(0x0068f304);
    /* 0068f304: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f307: mov byte ptr [edx + 0x44], 1 */ W8((u32)(r_edx+0x44u), 0x1u);
    /* 0068f30b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f30e: mov byte ptr [eax + 0x44], 0 */ W8((u32)(r_eax+0x44u), 0x0u);
    /* 0068f312: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f315: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f316: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f31c: call 0x68eb50 */ r_esp -= 4; W32(r_esp, 0x68f321u); f_0068eb50();
    /* 0068f321: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f324: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068f327: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0068f32a:; BB(0x0068f32a);
    /* 0068f32a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f32d: movsx edx, byte ptr [ecx + 0x45] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x45u));
    /* 0068f331: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f333: je 0x68f340 */ if (fZ) goto L_0068f340;
L_0068f335:; BB(0x0068f335);
    /* 0068f335: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f338: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068f33b: jmp 0x68f3d4 */ goto L_0068f3d4;
L_0068f340:; BB(0x0068f340);
    /* 0068f340: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f343: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068f345: movsx eax, byte ptr [edx + 0x44] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x44u));
    /* 0068f349: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f34c: jne 0x68f36c */ if (!fZ) goto L_0068f36c;
L_0068f34e:; BB(0x0068f34e);
    /* 0068f34e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f351: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068f354: movsx eax, byte ptr [edx + 0x44] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x44u));
    /* 0068f358: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f35b: jne 0x68f36c */ if (!fZ) goto L_0068f36c;
L_0068f35d:; BB(0x0068f35d);
    /* 0068f35d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f360: mov byte ptr [ecx + 0x44], 0 */ W8((u32)(r_ecx+0x44u), 0x0u);
    /* 0068f364: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f367: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068f36a: jmp 0x68f3d4 */ goto L_0068f3d4;
L_0068f36c:; BB(0x0068f36c);
    /* 0068f36c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f36f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068f372: movsx edx, byte ptr [ecx + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x44u));
    /* 0068f376: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f379: jne 0x68f3a3 */ if (!fZ) goto L_0068f3a3;
L_0068f37b:; BB(0x0068f37b);
    /* 0068f37b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f37e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068f380: mov byte ptr [ecx + 0x44], 1 */ W8((u32)(r_ecx+0x44u), 0x1u);
    /* 0068f384: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f387: mov byte ptr [edx + 0x44], 0 */ W8((u32)(r_edx+0x44u), 0x0u);
    /* 0068f38b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f38e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f38f: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f395: call 0x68ec00 */ r_esp -= 4; W32(r_esp, 0x68f39au); f_0068ec00();
    /* 0068f39a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f39d: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068f3a0: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0068f3a3:; BB(0x0068f3a3);
    /* 0068f3a3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f3a6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f3a9: mov dl, byte ptr [ecx + 0x44] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x44u))) & 0xffu);
    /* 0068f3ac: mov byte ptr [eax + 0x44], dl */ W8((u32)(r_eax+0x44u), (u8)r_edx);
    /* 0068f3af: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f3b2: mov byte ptr [eax + 0x44], 1 */ W8((u32)(r_eax+0x44u), 0x1u);
    /* 0068f3b6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f3b9: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068f3bc: mov byte ptr [edx + 0x44], 1 */ W8((u32)(r_edx+0x44u), 0x1u);
    /* 0068f3c0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f3c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f3c4: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f3ca: call 0x68eb50 */ r_esp -= 4; W32(r_esp, 0x68f3cfu); f_0068eb50();
    /* 0068f3cf: jmp 0x68f4bb */ goto L_0068f4bb;
L_0068f3d4:; BB(0x0068f3d4);
    /* 0068f3d4: jmp 0x68f4b6 */ goto L_0068f4b6;
L_0068f3d9:; BB(0x0068f3d9);
    /* 0068f3d9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f3dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068f3de: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0068f3e1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f3e4: movsx ecx, byte ptr [eax + 0x44] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x44u));
    /* 0068f3e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f3ea: jne 0x68f411 */ if (!fZ) goto L_0068f411;
L_0068f3ec:; BB(0x0068f3ec);
    /* 0068f3ec: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f3ef: mov byte ptr [edx + 0x44], 1 */ W8((u32)(r_edx+0x44u), 0x1u);
    /* 0068f3f3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f3f6: mov byte ptr [eax + 0x44], 0 */ W8((u32)(r_eax+0x44u), 0x0u);
    /* 0068f3fa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f3fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f3fe: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f404: call 0x68ec00 */ r_esp -= 4; W32(r_esp, 0x68f409u); f_0068ec00();
    /* 0068f409: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f40c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068f40e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0068f411:; BB(0x0068f411);
    /* 0068f411: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f414: movsx edx, byte ptr [ecx + 0x45] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x45u));
    /* 0068f418: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f41a: je 0x68f427 */ if (fZ) goto L_0068f427;
L_0068f41c:; BB(0x0068f41c);
    /* 0068f41c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f41f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068f422: jmp 0x68f4b6 */ goto L_0068f4b6;
L_0068f427:; BB(0x0068f427);
    /* 0068f427: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f42a: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068f42d: movsx eax, byte ptr [edx + 0x44] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x44u));
    /* 0068f431: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f434: jne 0x68f453 */ if (!fZ) goto L_0068f453;
L_0068f436:; BB(0x0068f436);
    /* 0068f436: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f439: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068f43b: movsx eax, byte ptr [edx + 0x44] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x44u));
    /* 0068f43f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f442: jne 0x68f453 */ if (!fZ) goto L_0068f453;
L_0068f444:; BB(0x0068f444);
    /* 0068f444: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f447: mov byte ptr [ecx + 0x44], 0 */ W8((u32)(r_ecx+0x44u), 0x0u);
    /* 0068f44b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f44e: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068f451: jmp 0x68f4b6 */ goto L_0068f4b6;
L_0068f453:; BB(0x0068f453);
    /* 0068f453: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f456: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068f458: movsx edx, byte ptr [ecx + 0x44] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x44u));
    /* 0068f45c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f45f: jne 0x68f489 */ if (!fZ) goto L_0068f489;
L_0068f461:; BB(0x0068f461);
    /* 0068f461: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f464: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068f467: mov byte ptr [ecx + 0x44], 1 */ W8((u32)(r_ecx+0x44u), 0x1u);
    /* 0068f46b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f46e: mov byte ptr [edx + 0x44], 0 */ W8((u32)(r_edx+0x44u), 0x0u);
    /* 0068f472: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f475: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f476: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f47c: call 0x68eb50 */ r_esp -= 4; W32(r_esp, 0x68f481u); f_0068eb50();
    /* 0068f481: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f484: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068f486: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0068f489:; BB(0x0068f489);
    /* 0068f489: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f48c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f48f: mov dl, byte ptr [ecx + 0x44] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x44u))) & 0xffu);
    /* 0068f492: mov byte ptr [eax + 0x44], dl */ W8((u32)(r_eax+0x44u), (u8)r_edx);
    /* 0068f495: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f498: mov byte ptr [eax + 0x44], 1 */ W8((u32)(r_eax+0x44u), 0x1u);
    /* 0068f49c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f49f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068f4a1: mov byte ptr [edx + 0x44], 1 */ W8((u32)(r_edx+0x44u), 0x1u);
    /* 0068f4a5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f4a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f4a9: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f4af: call 0x68ec00 */ r_esp -= 4; W32(r_esp, 0x68f4b4u); f_0068ec00();
    /* 0068f4b4: jmp 0x68f4bb */ goto L_0068f4bb;
L_0068f4b6:; BB(0x0068f4b6);
    /* 0068f4b6: jmp 0x68f2b4 */ goto L_0068f2b4;
L_0068f4bb:; BB(0x0068f4bb);
    /* 0068f4bb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f4be: mov byte ptr [ecx + 0x44], 1 */ W8((u32)(r_ecx+0x44u), 0x1u);
L_0068f4c2:; BB(0x0068f4c2);
    /* 0068f4c2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f4c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f4c6: call 0x68fa90 */ r_esp -= 4; W32(r_esp, 0x68f4cbu); f_0068fa90();
    /* 0068f4cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068f4ce: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f4d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f4d2: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x68f4d7u); f_00686cae();
    /* 0068f4d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068f4da: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f4e0: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068f4e4: jbe 0x68f4fb */ if ((fC||fZ)) goto L_0068f4fb;
L_0068f4e6:; BB(0x0068f4e6);
    /* 0068f4e6: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f4ec: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068f4ef: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0068f4f2: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0068f4f8: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
L_0068f4fb:; BB(0x0068f4fb);
    /* 0068f4fb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068f4fe: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068f501: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068f503: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068f506: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0068f509: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068f50c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068f50f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068f516: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068f517: mov esp, ebp */ r_esp = r_ebp;
    /* 0068f519: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f51a: ret 0xc */ FN_RET(0x0068ef90); r_esp += 16; return;
}

