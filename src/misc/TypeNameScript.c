#include "protos.h"

void f_005d0140(void) /* TypeNameScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d0140);
    /* 005d0140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d0141: mov ebp, esp */ r_ebp = r_esp;
    /* 005d0143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d0145: push 0x6a8d72 */ { u32 v = 0x6a8d72u; r_esp -= 4; W32(r_esp, v); }
    /* 005d014a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d0150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0151: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d0154: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d0159: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d015b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d015c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d015f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d0165: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d0168: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d016b: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5d0170u); f_005f85d0();
    /* 005d0170: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0172: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d0178: call 0x635cb0 */ r_esp -= 4; W32(r_esp, 0x5d017du); f_00635cb0();
    /* 005d017d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d0180: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0182: je 0x5d01f0 */ if (fZ) goto L_005d01f0;
L_005d0184:; BB(0x005d0184);
    /* 005d0184: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0187: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 005d018d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005d0190: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d0193: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d0198u); f_0063aac0();
    /* 005d0198: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d019b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d019e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d01a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d01a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d01a5: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 005d01ab: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d01ae: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 005d01b4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d01b6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005d01bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d01beu); call_ind(t); }
L_005d01be:; BB(0x005d01be);
    /* 005d01be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d01c1: movzx edx, byte ptr [ecx + 0x200] */ r_edx = (u32)R8((u32)(r_ecx+0x200u));
    /* 005d01c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d01ca: jne 0x5d01ee */ if (!fZ) goto L_005d01ee;
L_005d01cc:; BB(0x005d01cc);
    /* 005d01cc: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005d01d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d01d3: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005d01d9: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005d01dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d01deu); call_ind(t); }
    /* 005d01de: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005d01e4: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005d01e7: call 0x613e70 */ r_esp -= 4; W32(r_esp, 0x5d01ecu); f_00613e70();
    /* 005d01ec: jmp 0x5d01be */ goto L_005d01be;
L_005d01ee:; BB(0x005d01ee);
    /* 005d01ee: jmp 0x5d024b */ goto L_005d024b;
L_005d01f0:; BB(0x005d01f0);
    /* 005d01f0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005d01f2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d01f7u); f_00686d82();
    /* 005d01f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d01fa: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d01fd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d0204: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0208: je 0x5d0225 */ if (fZ) goto L_005d0225;
L_005d020a:; BB(0x005d020a);
    /* 005d020a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d020c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d020f: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x5d0214u); f_005fc0d0();
    /* 005d0214: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d0217: mov dword ptr [edx], 0x6d33c4 */ W32((u32)(r_edx), 0x6d33c4u);
    /* 005d021d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d0220: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d0223: jmp 0x5d022c */ goto L_005d022c;
L_005d0225:; BB(0x005d0225);
    /* 005d0225: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005d022c:; BB(0x005d022c);
    /* 005d022c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d022f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d0232: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d0239: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d023c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d023d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d0240: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005d0246: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x5d024bu); f_005f5df0();
L_005d024b:; BB(0x005d024b);
    /* 005d024b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d024e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d0255: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d0256: mov esp, ebp */ r_esp = r_ebp;
    /* 005d0258: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d0259: ret  */ FN_RET(0x005d0140); r_esp += 4; return;
}

void f_005d03a0(void) /* TypeNameScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d03a0);
    /* 005d03a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d03a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d03a3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d03a6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d03a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d03ac: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x5d03b1u); f_005fc360();
    /* 005d03b1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d03b4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d03b8: je 0x5d03cf */ if (fZ) goto L_005d03cf;
L_005d03ba:; BB(0x005d03ba);
    /* 005d03ba: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d03be: je 0x5d0432 */ if (fZ) goto L_005d0432;
L_005d03c0:; BB(0x005d03c0);
    /* 005d03c0: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d03c4: je 0x5d049f */ if (fZ) goto L_005d049f;
L_005d03ca:; BB(0x005d03ca);
    /* 005d03ca: jmp 0x5d04f0 */ goto L_005d04f0;
L_005d03cf:; BB(0x005d03cf);
    /* 005d03cf: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d03d4: mov eax, dword ptr [0x7947d4] */ r_eax = R32((u32)(0x7947d4u));
    /* 005d03d9: add eax, 0x1c8 */ {  u32 a = r_eax; u32 b = 0x1c8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d03de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d03df: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5d03e4u); f_00686d8e();
    /* 005d03e4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d03e7: mov ecx, dword ptr [0x7947d4] */ r_ecx = R32((u32)(0x7947d4u));
    /* 005d03ed: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 005d03f3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005d03f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d03f9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d03feu); f_0063aac0();
    /* 005d03fe: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d0401: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d0404: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d0407: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d0408: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x5d040du); f_00686ecc();
    /* 005d040d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d0410: mov ecx, dword ptr [0x7947d4] */ r_ecx = R32((u32)(0x7947d4u));
    /* 005d0416: mov dword ptr [ecx + 0x1fc], eax */ W32((u32)(r_ecx+0x1fcu), r_eax);
    /* 005d041c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005d041e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0420: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0423: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d0425: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0428: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005d042b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d042du); call_ind(t); }
    /* 005d042d: jmp 0x5d04f0 */ goto L_005d04f0;
L_005d0432:; BB(0x005d0432);
    /* 005d0432: mov ecx, dword ptr [0x7947d4] */ r_ecx = R32((u32)(0x7947d4u));
    /* 005d0438: call 0x5d0260 */ r_esp -= 4; W32(r_esp, 0x5d043du); f_005d0260();
    /* 005d043d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d0440: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d0442: je 0x5d0457 */ if (fZ) goto L_005d0457;
L_005d0444:; BB(0x005d0444);
    /* 005d0444: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005d0446: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0448: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d044b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d044d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0450: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d0453: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d0455u); call_ind(t); }
    /* 005d0455: jmp 0x5d0468 */ goto L_005d0468;
L_005d0457:; BB(0x005d0457);
    /* 005d0457: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005d0459: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d045b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d045e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d0460: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d0463: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005d0466: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d0468u); call_ind(t); }
L_005d0468:; BB(0x005d0468);
    /* 005d0468: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d046a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d046b: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005d0471: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d0474: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d0475: fld1  */ FPUSH(1.0);
    /* 005d0477: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005d047a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d047c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d047e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0480: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0482: push 0x186a5 */ { u32 v = 0x186a5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d0487: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d048d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d048f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d0495: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005d049b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d049du); call_ind(t); }
    /* 005d049d: jmp 0x5d04f0 */ goto L_005d04f0;
L_005d049f:; BB(0x005d049f);
    /* 005d049f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d04a1: mov ecx, dword ptr [0x7947d4] */ r_ecx = R32((u32)(0x7947d4u));
    /* 005d04a7: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5d04acu); f_005fb300();
    /* 005d04ac: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d04af: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d04b2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d04b4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d04b7: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d04ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d04bcu); call_ind(t); }
    /* 005d04bc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d04c2: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 005d04c5: mov byte ptr [ebp - 9], dl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_edx);
    /* 005d04c8: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 005d04cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d04ce: je 0x5d04f0 */ if (fZ) goto L_005d04f0;
L_005d04d0:; BB(0x005d04d0);
    /* 005d04d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d04d2: mov ecx, dword ptr [0x7947d4] */ r_ecx = R32((u32)(0x7947d4u));
    /* 005d04d8: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5d04ddu); f_005fb300();
    /* 005d04dd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d04e0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d04e3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d04e5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d04e8: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 005d04ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d04f0u); call_ind(t); }
L_005d04f0:; BB(0x005d04f0);
    /* 005d04f0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d04f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d04f3: ret  */ FN_RET(0x005d03a0); r_esp += 4; return;
}

