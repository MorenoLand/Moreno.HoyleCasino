#include "protos.h"

void f_0044e340(void) /* sub_44E340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044e340);
    /* 0044e340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e341: mov ebp, esp */ r_ebp = r_esp;
    /* 0044e343: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044e346: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0044e349: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0044e350: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0044e357: mov dword ptr [ebp - 0x38], 2 */ W32((u32)(r_ebp+0xffffffc8u), 0x2u);
    /* 0044e35e: mov dword ptr [ebp - 0x34], 3 */ W32((u32)(r_ebp+0xffffffccu), 0x3u);
    /* 0044e365: mov dword ptr [ebp - 0x30], 5 */ W32((u32)(r_ebp+0xffffffd0u), 0x5u);
    /* 0044e36c: mov dword ptr [ebp - 0x2c], 8 */ W32((u32)(r_ebp+0xffffffd4u), 0x8u);
    /* 0044e373: mov dword ptr [ebp - 0x28], 0xb */ W32((u32)(r_ebp+0xffffffd8u), 0xbu);
    /* 0044e37a: mov dword ptr [ebp - 0x24], 0x32 */ W32((u32)(r_ebp+0xffffffdcu), 0x32u);
    /* 0044e381: mov dword ptr [ebp - 0x20], 0xc8 */ W32((u32)(r_ebp+0xffffffe0u), 0xc8u);
    /* 0044e388: mov dword ptr [ebp - 0x1c], 0x3e8 */ W32((u32)(r_ebp+0xffffffe4u), 0x3e8u);
    /* 0044e38f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044e392: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0044e395: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0044e398: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 0044e39c: mov eax, dword ptr [ecx + eax + 0x4c] */ r_eax = R32((u32)(r_ecx+r_eax+0x4cu));
    /* 0044e3a0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0044e3a3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044e3a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e3a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e3aa: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x44e3afu); f_0064c8a0();
    /* 0044e3af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e3b2: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0044e3b5: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0044e3b8: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044e3bb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0044e3be: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0044e3c1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0044e3c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e3c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e3c8: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x44e3cdu); f_0064c8a0();
    /* 0044e3cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e3d0: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0044e3d3: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0044e3d6: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0044e3d9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044e3dc: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0044e3df: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044e3e2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044e3e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e3e6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44e3ebu); f_005dcb00();
    /* 0044e3eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e3ee: mov ecx, eax */ r_ecx = r_eax;
    /* 0044e3f0: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x44e3f5u); f_005d5a50();
    /* 0044e3f5: cmp eax, 0x3b9aca00 */ {  u32 a = r_eax; u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e3fa: jl 0x44e401 */ if ((fS!=fO)) goto L_0044e401;
L_0044e3fc:; BB(0x0044e3fc);
    /* 0044e3fc: jmp 0x44e619 */ goto L_0044e619;
L_0044e401:; BB(0x0044e401);
    /* 0044e401: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e405: jg 0x44e4de */ if ((!fZ&&fS==fO)) goto L_0044e4de;
L_0044e40b:; BB(0x0044e40b);
    /* 0044e40b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0044e40e: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x44e413u); f_005f5400();
    /* 0044e413: mov ecx, dword ptr [0x790718] */ r_ecx = R32((u32)(0x790718u));
    /* 0044e419: mov edx, dword ptr [ecx + eax*4 + 0x14] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0044e41d: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0044e420: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0044e423: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044e425: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0044e428: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0044e42e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44e430u); call_ind(t); }
    /* 0044e430: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044e433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e434: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44e439u); f_005dcb00();
    /* 0044e439: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e43c: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e443: jle 0x44e45b */ if ((fZ||fS!=fO)) goto L_0044e45b;
L_0044e445:; BB(0x0044e445);
    /* 0044e445: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044e448: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e449: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44e44eu); f_005dcb00();
    /* 0044e44e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e451: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_0044e45b:; BB(0x0044e45b);
    /* 0044e45b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044e45e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e45f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44e464u); f_005dcb00();
    /* 0044e464: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e467: add eax, 0x4a8 */ {  u32 a = r_eax; u32 b = 0x4a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044e46c: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0044e46f: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0044e472: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044e474: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0044e477: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0044e47a: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0044e47c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044e47f: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044e482: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0044e485: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e488: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044e48b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0044e48e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044e491: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e492: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044e495: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e496: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044e499: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e49a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44e49fu); f_005dcb00();
    /* 0044e49f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e4a2: mov ecx, eax */ r_ecx = r_eax;
    /* 0044e4a4: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x44e4a9u); f_005d5fb0();
    /* 0044e4a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e4ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e4ad: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x44e4b2u); f_0064c8a0();
    /* 0044e4b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e4b5: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0044e4b8: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0044e4bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e4bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044e4c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e4c1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0044e4c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e4c5: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0044e4c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e4c9: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0044e4cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044e4ce: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0044e4d1: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0044e4d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44e4d9u); call_ind(t); }
    /* 0044e4d9: jmp 0x44e619 */ goto L_0044e619;
L_0044e4de:; BB(0x0044e4de);
    /* 0044e4de: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044e4e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e4e2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44e4e7u); f_005dcb00();
    /* 0044e4e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e4ea: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e4f1: jge 0x44e52d */ if ((fS==fO)) goto L_0044e52d;
L_0044e4f3:; BB(0x0044e4f3);
    /* 0044e4f3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044e4f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e4f7: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44e4fcu); f_005dcb00();
    /* 0044e4fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e4ff: cmp dword ptr [eax + 0x4a8], -3 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e506: jge 0x44e517 */ if ((fS==fO)) goto L_0044e517;
L_0044e508:; BB(0x0044e508);
    /* 0044e508: mov eax, dword ptr [0x790710] */ r_eax = R32((u32)(0x790710u));
    /* 0044e50d: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044e510: mov byte ptr [eax + 0xec], 1 */ W8((u32)(r_eax+0xecu), 0x1u);
L_0044e517:; BB(0x0044e517);
    /* 0044e517: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044e51a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e51b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44e520u); f_005dcb00();
    /* 0044e520: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e523: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_0044e52d:; BB(0x0044e52d);
    /* 0044e52d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044e530: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e531: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44e536u); f_005dcb00();
    /* 0044e536: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e539: mov ecx, eax */ r_ecx = r_eax;
    /* 0044e53b: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x44e540u); f_005d7540();
    /* 0044e540: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044e543: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044e546: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e549: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044e54c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0044e54f: fild dword ptr [ebp + edx*4 - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+r_edx*4+0xffffffbcu)));
    /* 0044e553: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044e556: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0044e559: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0044e55c: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x44e561u); f_0064c560();
    /* 0044e561: cmp dword ptr [ebp - 0x18], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e568: jle 0x44e571 */ if ((fZ||fS!=fO)) goto L_0044e571;
L_0044e56a:; BB(0x0044e56a);
    /* 0044e56a: mov dword ptr [ebp - 0x18], 0x3b9aca00 */ W32((u32)(r_ebp+0xffffffe8u), 0x3b9aca00u);
L_0044e571:; BB(0x0044e571);
    /* 0044e571: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044e574: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0044e577: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0044e57a: mov edx, dword ptr [ecx + eax + 0x4c] */ r_edx = R32((u32)(r_ecx+r_eax+0x4cu));
    /* 0044e57e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e57f: mov eax, dword ptr [ecx + eax + 0x48] */ r_eax = R32((u32)(r_ecx+r_eax+0x48u));
    /* 0044e583: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e584: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 0044e587: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e588: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0044e58b: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x44e590u); f_0064c5c0();
    /* 0044e590: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044e592: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0044e595: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0044e598: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044e59b: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e5a2: jl 0x44e5c5 */ if ((fS!=fO)) goto L_0044e5c5;
L_0044e5a4:; BB(0x0044e5a4);
    /* 0044e5a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e5a6: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e5ab: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x44e5b0u); f_0064c8a0();
    /* 0044e5b0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e5b3: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0044e5b6: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0044e5b9: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0044e5bc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0044e5bf: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0044e5c2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0044e5c5:; BB(0x0044e5c5);
    /* 0044e5c5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044e5c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e5c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044e5cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e5cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044e5d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e5d1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44e5d6u); f_005dcb00();
    /* 0044e5d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e5d9: mov ecx, eax */ r_ecx = r_eax;
    /* 0044e5db: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x44e5e0u); f_005d5cf0();
    /* 0044e5e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044e5e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e5e4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044e5e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e5e8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044e5eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e5ec: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44e5f1u); f_005dcb00();
    /* 0044e5f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e5f4: mov ecx, eax */ r_ecx = r_eax;
    /* 0044e5f6: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x44e5fbu); f_005d5fb0();
    /* 0044e5fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e5fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044e600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e601: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044e604: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e605: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044e608: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e609: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0044e60c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044e60e: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0044e611: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 0044e617: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44e619u); call_ind(t); }
L_0044e619:; BB(0x0044e619);
    /* 0044e619: mov esp, ebp */ r_esp = r_ebp;
    /* 0044e61b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e61c: ret 8 */ FN_RET(0x0044e340); r_esp += 12; return;
}

void f_0044e970(void) /* sub_44E970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044e970);
    /* 0044e970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e971: mov ebp, esp */ r_ebp = r_esp;
    /* 0044e973: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044e979: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0044e97f: mov dword ptr [ebp - 0x28], 8 */ W32((u32)(r_ebp+0xffffffd8u), 0x8u);
    /* 0044e986: mov dword ptr [ebp - 0x24], 0xa */ W32((u32)(r_ebp+0xffffffdcu), 0xau);
    /* 0044e98d: mov dword ptr [ebp - 0x20], 2 */ W32((u32)(r_ebp+0xffffffe0u), 0x2u);
    /* 0044e994: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 0044e99b: mov dword ptr [ebp - 0x18], 5 */ W32((u32)(r_ebp+0xffffffe8u), 0x5u);
    /* 0044e9a2: mov dword ptr [ebp - 0x14], 5 */ W32((u32)(r_ebp+0xffffffecu), 0x5u);
    /* 0044e9a9: mov dword ptr [ebp - 0x10], 8 */ W32((u32)(r_ebp+0xfffffff0u), 0x8u);
    /* 0044e9b0: mov dword ptr [ebp - 0xc], 4 */ W32((u32)(r_ebp+0xfffffff4u), 0x4u);
    /* 0044e9b7: mov dword ptr [ebp - 8], 6 */ W32((u32)(r_ebp+0xfffffff8u), 0x6u);
    /* 0044e9be: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0044e9c5: mov dword ptr [ebp - 0x78], 4 */ W32((u32)(r_ebp+0xffffff88u), 0x4u);
    /* 0044e9cc: mov dword ptr [ebp - 0x74], 0xa */ W32((u32)(r_ebp+0xffffff8cu), 0xau);
    /* 0044e9d3: mov dword ptr [ebp - 0x70], 8 */ W32((u32)(r_ebp+0xffffff90u), 0x8u);
    /* 0044e9da: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 0044e9e1: mov dword ptr [ebp - 0x68], 5 */ W32((u32)(r_ebp+0xffffff98u), 0x5u);
    /* 0044e9e8: mov dword ptr [ebp - 0x64], 0xa */ W32((u32)(r_ebp+0xffffff9cu), 0xau);
    /* 0044e9ef: mov dword ptr [ebp - 0x60], 0xa */ W32((u32)(r_ebp+0xffffffa0u), 0xau);
    /* 0044e9f6: mov dword ptr [ebp - 0x5c], 6 */ W32((u32)(r_ebp+0xffffffa4u), 0x6u);
    /* 0044e9fd: mov dword ptr [ebp - 0x58], 0xa */ W32((u32)(r_ebp+0xffffffa8u), 0xau);
    /* 0044ea04: mov dword ptr [ebp - 0x54], 0xa */ W32((u32)(r_ebp+0xffffffacu), 0xau);
    /* 0044ea0b: mov dword ptr [ebp - 0x50], 8 */ W32((u32)(r_ebp+0xffffffb0u), 0x8u);
    /* 0044ea12: mov dword ptr [ebp - 0x4c], 0xa */ W32((u32)(r_ebp+0xffffffb4u), 0xau);
    /* 0044ea19: mov dword ptr [ebp - 0x48], 5 */ W32((u32)(r_ebp+0xffffffb8u), 0x5u);
    /* 0044ea20: mov dword ptr [ebp - 0x44], 5 */ W32((u32)(r_ebp+0xffffffbcu), 0x5u);
    /* 0044ea27: mov dword ptr [ebp - 0x40], 5 */ W32((u32)(r_ebp+0xffffffc0u), 0x5u);
    /* 0044ea2e: mov dword ptr [ebp - 0x3c], 2 */ W32((u32)(r_ebp+0xffffffc4u), 0x2u);
    /* 0044ea35: mov dword ptr [ebp - 0x38], 8 */ W32((u32)(r_ebp+0xffffffc8u), 0x8u);
    /* 0044ea3c: mov dword ptr [ebp - 0x34], 4 */ W32((u32)(r_ebp+0xffffffccu), 0x4u);
    /* 0044ea43: mov dword ptr [ebp - 0x30], 4 */ W32((u32)(r_ebp+0xffffffd0u), 0x4u);
    /* 0044ea4a: mov dword ptr [ebp - 0x2c], 0xa */ W32((u32)(r_ebp+0xffffffd4u), 0xau);
    /* 0044ea51: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044ea54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ea55: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44ea5au); f_005dcb00();
    /* 0044ea5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ea5d: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0044ea60: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0044ea63: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0044ea66: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0044ea6c: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0044ea72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ea73: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044ea79: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044ea7b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044ea81: mov eax, dword ptr [edx + 0x170] */ r_eax = R32((u32)(r_edx+0x170u));
    /* 0044ea87: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44ea89u); call_ind(t); }
    /* 0044ea89: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0044ea8c: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044ea92: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x44ea97u); f_005da7b0();
    /* 0044ea97: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0044ea9a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ea9c: je 0x44eadc */ if (fZ) goto L_0044eadc;
L_0044ea9e:; BB(0x0044ea9e);
    /* 0044ea9e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044eaa1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044eaa2: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0044eaa8: call 0x44eca0 */ r_esp -= 4; W32(r_esp, 0x44eaadu); f_0044eca0();
    /* 0044eaad: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044eab0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044eab2: je 0x44eabd */ if (fZ) goto L_0044eabd;
L_0044eab4:; BB(0x0044eab4);
    /* 0044eab4: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0044eab7: mov eax, dword ptr [ebp + ecx*4 - 0x78] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffff88u));
    /* 0044eabb: jmp 0x44eae3 */ goto L_0044eae3;
L_0044eabd:; BB(0x0044eabd);
    /* 0044eabd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044eac0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044eac1: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0044eac7: call 0x44ed20 */ r_esp -= 4; W32(r_esp, 0x44eaccu); f_0044ed20();
    /* 0044eacc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044eacf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ead1: je 0x44eadc */ if (fZ) goto L_0044eadc;
L_0044ead3:; BB(0x0044ead3);
    /* 0044ead3: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0044ead6: mov eax, dword ptr [ebp + ecx*4 - 0x50] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffb0u));
    /* 0044eada: jmp 0x44eae3 */ goto L_0044eae3;
L_0044eadc:; BB(0x0044eadc);
    /* 0044eadc: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0044eadf: mov eax, dword ptr [ebp + edx*4 - 0x28] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffd8u));
L_0044eae3:; BB(0x0044eae3);
    /* 0044eae3: mov esp, ebp */ r_esp = r_ebp;
    /* 0044eae5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044eae6: ret 4 */ FN_RET(0x0044e970); r_esp += 8; return;
}

void f_0044eaf0(void) /* sub_44EAF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044eaf0);
    /* 0044eaf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044eaf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044eaf3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044eaf6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044eafb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044eafd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044eb00: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0044eb03: mov byte ptr [ebp - 0x15], 0 */ W8((u32)(r_ebp+0xffffffebu), 0x0u);
    /* 0044eb07: mov byte ptr [ebp - 0x16], 0 */ W8((u32)(r_ebp+0xffffffeau), 0x0u);
    /* 0044eb0b: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0044eb0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044eb0f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044eb12: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0044eb18: mov ax, word ptr [edx + ecx*2 + 0xac] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0xacu))) & 0xffffu);
    /* 0044eb20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044eb21: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044eb24: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0044eb2a: mov ax, word ptr [edx + ecx*2 + 0xa2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0xa2u))) & 0xffffu);
    /* 0044eb32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044eb33: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044eb36: call 0x452fd0 */ r_esp -= 4; W32(r_esp, 0x44eb3bu); f_00452fd0();
    /* 0044eb3b: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0044eb3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044eb3f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044eb42: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0044eb47: mov cx, word ptr [eax + edx*2 + 0xac] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0xacu))) & 0xffffu);
    /* 0044eb4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044eb50: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044eb53: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0044eb58: mov cx, word ptr [eax + edx*2 + 0xa2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0xa2u))) & 0xffffu);
    /* 0044eb60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044eb61: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044eb64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044eb65: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044eb68: call 0x4530b0 */ r_esp -= 4; W32(r_esp, 0x44eb6du); f_004530b0();
    /* 0044eb6d: movsx eax, byte ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffecu));
    /* 0044eb71: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044eb74: jne 0x44eb7a */ if (!fZ) goto L_0044eb7a;
L_0044eb76:; BB(0x0044eb76);
    /* 0044eb76: mov byte ptr [ebp - 0x15], 1 */ W8((u32)(r_ebp+0xffffffebu), 0x1u);
L_0044eb7a:; BB(0x0044eb7a);
    /* 0044eb7a: movsx ecx, byte ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff4u));
    /* 0044eb7e: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044eb81: jl 0x44eb87 */ if ((fS!=fO)) goto L_0044eb87;
L_0044eb83:; BB(0x0044eb83);
    /* 0044eb83: mov byte ptr [ebp - 0x16], 1 */ W8((u32)(r_ebp+0xffffffeau), 0x1u);
L_0044eb87:; BB(0x0044eb87);
    /* 0044eb87: movzx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0044eb8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044eb8d: je 0x44eba0 */ if (fZ) goto L_0044eba0;
L_0044eb8f:; BB(0x0044eb8f);
    /* 0044eb8f: movzx eax, byte ptr [ebp - 0x16] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffeau));
    /* 0044eb93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044eb95: je 0x44eba0 */ if (fZ) goto L_0044eba0;
L_0044eb97:; BB(0x0044eb97);
    /* 0044eb97: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0044eb9e: jmp 0x44eba7 */ goto L_0044eba7;
L_0044eba0:; BB(0x0044eba0);
    /* 0044eba0: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0044eba7:; BB(0x0044eba7);
    /* 0044eba7: mov al, byte ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe0u))) & 0xffu);
    /* 0044ebaa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ebad: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044ebaf: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x44ebb4u); f_00686d72();
    /* 0044ebb4: mov esp, ebp */ r_esp = r_ebp;
    /* 0044ebb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ebb7: ret 4 */ FN_RET(0x0044eaf0); r_esp += 8; return;
}

void f_0044ebc0(void) /* sub_44EBC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044ebc0);
    /* 0044ebc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ebc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ebc3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044ebc6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044ebcb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044ebcd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044ebd0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0044ebd3: mov byte ptr [ebp - 0x16], 0 */ W8((u32)(r_ebp+0xffffffeau), 0x0u);
    /* 0044ebd7: mov byte ptr [ebp - 0x15], 0 */ W8((u32)(r_ebp+0xffffffebu), 0x0u);
    /* 0044ebdb: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0044ebde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ebdf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044ebe2: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0044ebe8: mov ax, word ptr [edx + ecx*2 + 0xac] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0xacu))) & 0xffffu);
    /* 0044ebf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ebf1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044ebf4: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0044ebfa: mov ax, word ptr [edx + ecx*2 + 0xa2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0xa2u))) & 0xffffu);
    /* 0044ec02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ec03: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044ec06: call 0x452fd0 */ r_esp -= 4; W32(r_esp, 0x44ec0bu); f_00452fd0();
    /* 0044ec0b: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0044ec0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ec0f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044ec12: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0044ec17: mov cx, word ptr [eax + edx*2 + 0xac] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0xacu))) & 0xffffu);
    /* 0044ec1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ec20: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044ec23: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0044ec28: mov cx, word ptr [eax + edx*2 + 0xa2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0xa2u))) & 0xffffu);
    /* 0044ec30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ec31: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044ec34: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ec35: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044ec38: call 0x4530b0 */ r_esp -= 4; W32(r_esp, 0x44ec3du); f_004530b0();
    /* 0044ec3d: movsx eax, byte ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffecu));
    /* 0044ec41: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ec44: jne 0x44ec53 */ if (!fZ) goto L_0044ec53;
L_0044ec46:; BB(0x0044ec46);
    /* 0044ec46: movsx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffefu));
    /* 0044ec4a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ec4d: jg 0x44ec53 */ if ((!fZ&&fS==fO)) goto L_0044ec53;
L_0044ec4f:; BB(0x0044ec4f);
    /* 0044ec4f: mov byte ptr [ebp - 0x16], 1 */ W8((u32)(r_ebp+0xffffffeau), 0x1u);
L_0044ec53:; BB(0x0044ec53);
    /* 0044ec53: movsx edx, byte ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff4u));
    /* 0044ec57: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ec5a: jg 0x44ec69 */ if ((!fZ&&fS==fO)) goto L_0044ec69;
L_0044ec5c:; BB(0x0044ec5c);
    /* 0044ec5c: movsx eax, byte ptr [ebp - 0xb] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff5u));
    /* 0044ec60: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ec63: jge 0x44ec69 */ if ((fS==fO)) goto L_0044ec69;
L_0044ec65:; BB(0x0044ec65);
    /* 0044ec65: mov byte ptr [ebp - 0x15], 1 */ W8((u32)(r_ebp+0xffffffebu), 0x1u);
L_0044ec69:; BB(0x0044ec69);
    /* 0044ec69: movzx ecx, byte ptr [ebp - 0x16] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffeau));
    /* 0044ec6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ec6f: je 0x44ec82 */ if (fZ) goto L_0044ec82;
L_0044ec71:; BB(0x0044ec71);
    /* 0044ec71: movzx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0044ec75: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ec77: je 0x44ec82 */ if (fZ) goto L_0044ec82;
L_0044ec79:; BB(0x0044ec79);
    /* 0044ec79: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0044ec80: jmp 0x44ec89 */ goto L_0044ec89;
L_0044ec82:; BB(0x0044ec82);
    /* 0044ec82: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0044ec89:; BB(0x0044ec89);
    /* 0044ec89: mov al, byte ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe0u))) & 0xffu);
    /* 0044ec8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ec8f: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044ec91: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x44ec96u); f_00686d72();
    /* 0044ec96: mov esp, ebp */ r_esp = r_ebp;
    /* 0044ec98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ec99: ret 4 */ FN_RET(0x0044ebc0); r_esp += 8; return;
}

void f_0044eca0(void) /* sub_44ECA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044eca0);
    /* 0044eca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044eca1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044eca3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044eca6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0044eca9: fldz  */ FPUSH(0.0);
    /* 0044ecab: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044ecae: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0044ecb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ecb2: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044ecb8: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x44ecbdu); f_005daa20();
    /* 0044ecbd: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 0044ecbf: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0044ecc2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044ecc5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ecc6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44eccbu); f_005dcb00();
    /* 0044eccb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ecce: mov ecx, eax */ r_ecx = r_eax;
    /* 0044ecd0: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x44ecd5u); f_005d5a50();
    /* 0044ecd5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044ecd8: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0044ecdb: fcomp qword ptr [ebp - 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 0044ecde: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044ece0: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0044ece3: jne 0x44ed10 */ if (!fZ) goto L_0044ed10;
L_0044ece5:; BB(0x0044ece5);
    /* 0044ece5: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0044ece8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ece9: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044ecef: call 0x5daae0 */ r_esp -= 4; W32(r_esp, 0x44ecf4u); f_005daae0();
    /* 0044ecf4: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 0044ecf6: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044ecf9: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0044ecfc: fdiv qword ptr [ebp - 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xfffffff8u));
    /* 0044ecff: fcomp qword ptr [0x6b3e40] */ fx_compare(ST(0), R_F64((u32)(0x6b3e40u))); FPOP();
    /* 0044ed05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044ed07: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0044ed0a: jne 0x44ed10 */ if (!fZ) goto L_0044ed10;
L_0044ed0c:; BB(0x0044ed0c);
    /* 0044ed0c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044ed0e: jmp 0x44ed12 */ goto L_0044ed12;
L_0044ed10:; BB(0x0044ed10);
    /* 0044ed10: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0044ed12:; BB(0x0044ed12);
    /* 0044ed12: mov esp, ebp */ r_esp = r_ebp;
    /* 0044ed14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ed15: ret 4 */ FN_RET(0x0044eca0); r_esp += 8; return;
}

void f_0044ed20(void) /* sub_44ED20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044ed20);
    /* 0044ed20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed21: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ed23: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044ed26: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0044ed29: fldz  */ FPUSH(0.0);
    /* 0044ed2b: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044ed2e: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0044ed31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed32: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044ed38: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x44ed3du); f_005daa20();
    /* 0044ed3d: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 0044ed3f: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0044ed42: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044ed45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed46: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44ed4bu); f_005dcb00();
    /* 0044ed4b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ed4e: mov ecx, eax */ r_ecx = r_eax;
    /* 0044ed50: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x44ed55u); f_005d5a50();
    /* 0044ed55: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044ed58: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 0044ed5b: fcomp qword ptr [ebp - 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 0044ed5e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044ed60: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0044ed63: jp 0x44ed9b */ if (fP) goto L_0044ed9b;
L_0044ed65:; BB(0x0044ed65);
    /* 0044ed65: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044ed68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ed69: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44ed6eu); f_005dcb00();
    /* 0044ed6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ed71: mov ecx, eax */ r_ecx = r_eax;
    /* 0044ed73: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x44ed78u); f_005d5a50();
    /* 0044ed78: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0044ed7b: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 0044ed7e: fsubr qword ptr [ebp - 8] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff8u)) - ST(0);
    /* 0044ed81: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0044ed84: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0044ed87: fdiv qword ptr [ebp - 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xfffffff8u));
    /* 0044ed8a: fcomp qword ptr [0x6b2c38] */ fx_compare(ST(0), R_F64((u32)(0x6b2c38u))); FPOP();
    /* 0044ed90: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044ed92: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0044ed95: jne 0x44ed9b */ if (!fZ) goto L_0044ed9b;
L_0044ed97:; BB(0x0044ed97);
    /* 0044ed97: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044ed99: jmp 0x44ed9d */ goto L_0044ed9d;
L_0044ed9b:; BB(0x0044ed9b);
    /* 0044ed9b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0044ed9d:; BB(0x0044ed9d);
    /* 0044ed9d: mov esp, ebp */ r_esp = r_ebp;
    /* 0044ed9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044eda0: ret 4 */ FN_RET(0x0044ed20); r_esp += 8; return;
}

void f_0044edb0(void) /* sub_44EDB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044edb0);
    /* 0044edb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044edb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044edb3: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044edb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044edb7: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0044edba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044edbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044edbe: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44edc3u); f_005dcb00();
    /* 0044edc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044edc6: mov ecx, eax */ r_ecx = r_eax;
    /* 0044edc8: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x44edcdu); f_005d5a50();
    /* 0044edcd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044edd0: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044edd6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044edd8: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044edde: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0044ede4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44ede6u); call_ind(t); }
    /* 0044ede6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044ede9: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044edef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044edf1: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044edf7: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 0044edfd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44edffu); call_ind(t); }
    /* 0044edff: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044ee02: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044ee08: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x44ee0du); f_005da8a0();
    /* 0044ee0d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044ee10: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044ee16: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x44ee1bu); f_005dac90();
    /* 0044ee1b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044ee1e: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044ee24: call 0x5da8c0 */ r_esp -= 4; W32(r_esp, 0x44ee29u); f_005da8c0();
    /* 0044ee29: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044ee2c: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 0044ee2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ee30: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044ee36: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x44ee3bu); f_005daa20();
    /* 0044ee3b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044ee3d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0044ee40: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044ee43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ee44: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44ee49u); f_005dcb00();
    /* 0044ee49: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ee4c: mov ecx, dword ptr [eax + 0x4a8] */ r_ecx = R32((u32)(r_eax+0x4a8u));
    /* 0044ee52: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0044ee55: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0044ee5c: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0044ee63: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044ee66: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ee69: jl 0x44ee73 */ if ((fS!=fO)) goto L_0044ee73;
L_0044ee6b:; BB(0x0044ee6b);
    /* 0044ee6b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044ee6e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044ee71: jmp 0x44ee79 */ goto L_0044ee79;
L_0044ee73:; BB(0x0044ee73);
    /* 0044ee73: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044ee76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0044ee79:; BB(0x0044ee79);
    /* 0044ee79: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ee7c: sub edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0044ee7f: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ee82: jge 0x44ef36 */ if ((fS==fO)) goto L_0044ef36;
L_0044ee88:; BB(0x0044ee88);
    /* 0044ee88: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ee8b: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ee8e: jne 0x44eeb1 */ if (!fZ) goto L_0044eeb1;
L_0044ee90:; BB(0x0044ee90);
    /* 0044ee90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044ee93: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ee96: jge 0x44eeaf */ if ((fS==fO)) goto L_0044eeaf;
L_0044ee98:; BB(0x0044ee98);
    /* 0044ee98: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ee9b: sub edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0044ee9e: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044eea1: jg 0x44eeaf */ if ((!fZ&&fS==fO)) goto L_0044eeaf;
L_0044eea3:; BB(0x0044eea3);
    /* 0044eea3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044eea6: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044eea9: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044eeac: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_0044eeaf:; BB(0x0044eeaf);
    /* 0044eeaf: jmp 0x44ef0e */ goto L_0044ef0e;
L_0044eeb1:; BB(0x0044eeb1);
    /* 0044eeb1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044eeb4: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044eeb7: jge 0x44ef0e */ if ((fS==fO)) goto L_0044ef0e;
L_0044eeb9:; BB(0x0044eeb9);
    /* 0044eeb9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044eebc: sub edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0044eebf: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044eec2: jg 0x44eee3 */ if ((!fZ&&fS==fO)) goto L_0044eee3;
L_0044eec4:; BB(0x0044eec4);
    /* 0044eec4: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044eec7: sub esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0044eeca: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044eecc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44eed1u); f_0062fbf0();
    /* 0044eed1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044eed4: mov ecx, eax */ r_ecx = r_eax;
    /* 0044eed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044eed9: mov eax, esi */ r_eax = r_esi;
    /* 0044eedb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0044eedc: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0044eedc, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0044eedc, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044eede: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044eee1: jmp 0x44ef0e */ goto L_0044ef0e;
L_0044eee3:; BB(0x0044eee3);
    /* 0044eee3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044eee6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044eee7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044eeea: call 0x44ed20 */ r_esp -= 4; W32(r_esp, 0x44eeefu); f_0044ed20();
    /* 0044eeef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044eef2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044eef4: je 0x44ef0e */ if (fZ) goto L_0044ef0e;
L_0044eef6:; BB(0x0044eef6);
    /* 0044eef6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044eef8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44eefdu); f_0062fbf0();
    /* 0044eefd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ef00: mov ecx, eax */ r_ecx = r_eax;
    /* 0044ef02: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044ef05: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044ef08: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0044ef09: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0044ef09, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0044ef09, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044ef0b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_0044ef0e:; BB(0x0044ef0e);
    /* 0044ef0e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044ef11: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0044ef12: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0044ef17: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0044ef17, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0044ef17, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044ef19: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ef1b: je 0x44ef28 */ if (fZ) goto L_0044ef28;
L_0044ef1d:; BB(0x0044ef1d);
    /* 0044ef1d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044ef20: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044ef23: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0044ef26: jmp 0x44ef0e */ goto L_0044ef0e;
L_0044ef28:; BB(0x0044ef28);
    /* 0044ef28: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ef2c: je 0x44ef36 */ if (fZ) goto L_0044ef36;
L_0044ef2e:; BB(0x0044ef2e);
    /* 0044ef2e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044ef31: jmp 0x44efc3 */ goto L_0044efc3;
L_0044ef36:; BB(0x0044ef36);
    /* 0044ef36: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ef38: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44ef3du); f_0062fbf0();
    /* 0044ef3d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ef40: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044ef43: imul eax, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044ef47: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0044ef4a: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 0044ef4d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044ef50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ef51: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044ef54: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0044ef57: call 0x44e970 */ r_esp -= 4; W32(r_esp, 0x44ef5cu); f_0044e970();
    /* 0044ef5c: mov esi, eax */ r_esi = r_eax;
    /* 0044ef5e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ef60: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44ef65u); f_0062fbf0();
    /* 0044ef65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044ef68: mov ecx, eax */ r_ecx = r_eax;
    /* 0044ef6a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044ef6d: mov eax, esi */ r_eax = r_esi;
    /* 0044ef6f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0044ef70: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0044ef70, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0044ef70, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044ef72: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0044ef75: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0044ef78: fmul qword ptr [ebp - 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc0u));
    /* 0044ef7b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044ef7e: imul edx, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044ef82: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0044ef85: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 0044ef88: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044ef8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044ef8c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044ef8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044ef91: fstp qword ptr [ebp - 0x50] */ W_F64((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0044ef94: fstp qword ptr [ebp - 0x58] */ W_F64((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0044ef97: call 0x44e970 */ r_esp -= 4; W32(r_esp, 0x44ef9cu); f_0044e970();
    /* 0044ef9c: mov esi, eax */ r_esi = r_eax;
    /* 0044ef9e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044efa0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44efa5u); f_0062fbf0();
    /* 0044efa5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044efa8: mov ecx, eax */ r_ecx = r_eax;
    /* 0044efaa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044efad: mov eax, esi */ r_eax = r_esi;
    /* 0044efaf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0044efb0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0044efb0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0044efb0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044efb2: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0044efb5: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 0044efb8: fmul qword ptr [ebp - 0x58] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffa8u));
    /* 0044efbb: fadd qword ptr [ebp - 0x50] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffb0u));
    /* 0044efbe: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x44efc3u); f_00686cc0();
L_0044efc3:; BB(0x0044efc3);
    /* 0044efc3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044efc4: mov esp, ebp */ r_esp = r_ebp;
    /* 0044efc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044efc7: ret 4 */ FN_RET(0x0044edb0); r_esp += 8; return;
}

void f_0044efd0(void) /* sub_44EFD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044efd0);
    /* 0044efd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044efd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044efd3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044efd6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044efd9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044efdc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044efdf: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 0044efe2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044efe5: mov dword ptr [edx + 0x2ac], 0 */ W32((u32)(r_edx+0x2acu), 0x0u);
    /* 0044efef: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044eff2: mov dword ptr [eax + 0x2b0], 0xffffffff */ W32((u32)(r_eax+0x2b0u), 0xffffffffu);
    /* 0044effc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044efff: mov word ptr [ecx + 0x2b6], 0 */ W16((u32)(r_ecx+0x2b6u), 0x0u);
    /* 0044f008: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f00b: mov word ptr [edx + 0x2b8], 0 */ W16((u32)(r_edx+0x2b8u), 0x0u);
    /* 0044f014: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f017: mov word ptr [eax + 0x2bc], 0 */ W16((u32)(r_eax+0x2bcu), 0x0u);
    /* 0044f020: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f023: mov word ptr [ecx + 0x2ba], 0 */ W16((u32)(r_ecx+0x2bau), 0x0u);
    /* 0044f02c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f02f: mov dword ptr [edx + 0x2d0], 0xffffffff */ W32((u32)(r_edx+0x2d0u), 0xffffffffu);
    /* 0044f039: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f03c: mov dword ptr [eax + 0x2d4], 0 */ W32((u32)(r_eax+0x2d4u), 0x0u);
    /* 0044f046: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f049: mov dword ptr [ecx + 0x2f4], 0 */ W32((u32)(r_ecx+0x2f4u), 0x0u);
    /* 0044f053: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f056: mov dword ptr [edx + 0x2f8], 0xffffffff */ W32((u32)(r_edx+0x2f8u), 0xffffffffu);
    /* 0044f060: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f063: mov dword ptr [eax + 0x2fc], 0 */ W32((u32)(r_eax+0x2fcu), 0x0u);
    /* 0044f06d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f070: mov dword ptr [ecx + 0x31c], 0 */ W32((u32)(r_ecx+0x31cu), 0x0u);
    /* 0044f07a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f07d: mov dword ptr [edx + 0x320], 0xffffffff */ W32((u32)(r_edx+0x320u), 0xffffffffu);
    /* 0044f087: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f08a: mov dword ptr [eax + 0x324], 0 */ W32((u32)(r_eax+0x324u), 0x0u);
    /* 0044f094: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f097: mov dword ptr [ecx + 0x344], 0 */ W32((u32)(r_ecx+0x344u), 0x0u);
    /* 0044f0a1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f0a4: mov dword ptr [edx + 0x348], 0xffffffff */ W32((u32)(r_edx+0x348u), 0xffffffffu);
    /* 0044f0ae: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f0b1: mov dword ptr [eax + 0x34c], 0 */ W32((u32)(r_eax+0x34cu), 0x0u);
    /* 0044f0bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044f0c2: jmp 0x44f0cd */ goto L_0044f0cd;
L_0044f0c4:; BB(0x0044f0c4);
    /* 0044f0c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f0c7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044f0ca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0044f0cd:; BB(0x0044f0cd);
    /* 0044f0cd: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f0d1: jge 0x44f108 */ if ((fS==fO)) goto L_0044f108;
L_0044f0d3:; BB(0x0044f0d3);
    /* 0044f0d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f0d6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f0d9: mov dword ptr [eax + edx*4 + 0x2d8], 0 */ W32((u32)(r_eax+r_edx*4+0x2d8u), 0x0u);
    /* 0044f0e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f0e7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f0ea: mov dword ptr [edx + ecx*4 + 0x300], 0 */ W32((u32)(r_edx+r_ecx*4+0x300u), 0x0u);
    /* 0044f0f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f0f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f0fb: mov dword ptr [ecx + eax*4 + 0x328], 0 */ W32((u32)(r_ecx+r_eax*4+0x328u), 0x0u);
    /* 0044f106: jmp 0x44f0c4 */ goto L_0044f0c4;
L_0044f108:; BB(0x0044f108);
    /* 0044f108: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044f10f: jmp 0x44f11a */ goto L_0044f11a;
L_0044f111:; BB(0x0044f111);
    /* 0044f111: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f114: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044f117: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0044f11a:; BB(0x0044f11a);
    /* 0044f11a: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f11e: jge 0x44f17d */ if ((fS==fO)) goto L_0044f17d;
L_0044f120:; BB(0x0044f120);
    /* 0044f120: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f123: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044f126: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f129: mov dword ptr [ecx + eax + 0x18], 0 */ W32((u32)(r_ecx+r_eax+0x18u), 0x0u);
    /* 0044f131: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044f138: jmp 0x44f143 */ goto L_0044f143;
L_0044f13a:; BB(0x0044f13a);
    /* 0044f13a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044f13d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044f140: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0044f143:; BB(0x0044f143);
    /* 0044f143: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f147: jge 0x44f17b */ if ((fS==fO)) goto L_0044f17b;
L_0044f149:; BB(0x0044f149);
    /* 0044f149: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f14c: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044f14f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f152: lea edx, [ecx + eax + 0x18] */ r_edx = (u32)(r_ecx+r_eax+0x18u);
    /* 0044f156: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044f159: mov dword ptr [edx + eax*4 + 4], 0 */ W32((u32)(r_edx+r_eax*4+0x4u), 0x0u);
    /* 0044f161: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f164: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044f167: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f16a: lea eax, [edx + ecx + 0x18] */ r_eax = (u32)(r_edx+r_ecx+0x18u);
    /* 0044f16e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044f171: mov dword ptr [eax + ecx*4 + 0x18], 0xffffffff */ W32((u32)(r_eax+r_ecx*4+0x18u), 0xffffffffu);
    /* 0044f179: jmp 0x44f13a */ goto L_0044f13a;
L_0044f17b:; BB(0x0044f17b);
    /* 0044f17b: jmp 0x44f111 */ goto L_0044f111;
L_0044f17d:; BB(0x0044f17d);
    /* 0044f17d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044f184: jmp 0x44f18f */ goto L_0044f18f;
L_0044f186:; BB(0x0044f186);
    /* 0044f186: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f189: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044f18c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0044f18f:; BB(0x0044f18f);
    /* 0044f18f: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f193: jge 0x44f1b5 */ if ((fS==fO)) goto L_0044f1b5;
L_0044f195:; BB(0x0044f195);
    /* 0044f195: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f198: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044f199: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044f19c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f19d: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0044f1a3: call 0x4604d0 */ r_esp -= 4; W32(r_esp, 0x44f1a8u); f_004604d0();
    /* 0044f1a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f1ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f1ae: mov word ptr [ecx + edx*2 + 4], ax */ W16((u32)(r_ecx+r_edx*2+0x4u), (u16)r_eax);
    /* 0044f1b3: jmp 0x44f186 */ goto L_0044f186;
L_0044f1b5:; BB(0x0044f1b5);
    /* 0044f1b5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f1b7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f1b9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f1bc: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044f1bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f1c0: call 0x642890 */ r_esp -= 4; W32(r_esp, 0x44f1c5u); f_00642890();
    /* 0044f1c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f1c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f1cb: mov word ptr [ecx + 0x2b6], ax */ W16((u32)(r_ecx+0x2b6u), (u16)r_eax);
    /* 0044f1d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f1d4: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f1d6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f1d9: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044f1dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f1dd: call 0x642890 */ r_esp -= 4; W32(r_esp, 0x44f1e2u); f_00642890();
    /* 0044f1e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f1e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f1e8: mov word ptr [ecx + 0x2b8], ax */ W16((u32)(r_ecx+0x2b8u), (u16)r_eax);
    /* 0044f1ef: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f1f1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f1f3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f1f6: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044f1f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f1fa: call 0x642890 */ r_esp -= 4; W32(r_esp, 0x44f1ffu); f_00642890();
    /* 0044f1ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f202: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f205: mov word ptr [ecx + 0x2bc], ax */ W16((u32)(r_ecx+0x2bcu), (u16)r_eax);
    /* 0044f20c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f20e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f210: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f213: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044f216: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f217: call 0x642890 */ r_esp -= 4; W32(r_esp, 0x44f21cu); f_00642890();
    /* 0044f21c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044f21f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f222: mov word ptr [ecx + 0x2ba], ax */ W16((u32)(r_ecx+0x2bau), (u16)r_eax);
    /* 0044f229: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f22c: call 0x44f240 */ r_esp -= 4; W32(r_esp, 0x44f231u); f_0044f240();
    /* 0044f231: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044f234: call 0x44f460 */ r_esp -= 4; W32(r_esp, 0x44f239u); f_0044f460();
    /* 0044f239: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f23b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f23c: ret 4 */ FN_RET(0x0044efd0); r_esp += 8; return;
}

