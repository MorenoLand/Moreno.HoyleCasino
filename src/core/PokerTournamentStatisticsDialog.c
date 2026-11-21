#include "protos.h"

void f_0051a020(void) /* PokerTournamentStatisticsDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051a020);
    /* 0051a020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051a021: mov ebp, esp */ r_ebp = r_esp;
    /* 0051a023: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a024: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051a027: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a029: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a02b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a02e: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x51a033u); f_005f71f0();
    /* 0051a033: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a036: mov dword ptr [eax], 0x6c1a44 */ W32((u32)(r_eax), 0x6c1a44u);
    /* 0051a03c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a03f: mov esp, ebp */ r_esp = r_ebp;
    /* 0051a041: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051a042: ret  */ FN_RET(0x0051a020); r_esp += 4; return;
}

void f_0051a070(void) /* PokerTournamentStatisticsDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051a070);
    /* 0051a070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051a071: mov ebp, esp */ r_ebp = r_esp;
    /* 0051a073: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051a076: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0051a079: mov dword ptr [ebp - 0xc], 8 */ W32((u32)(r_ebp+0xfffffff4u), 0x8u);
    /* 0051a080: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a082: push 0x30e7f2 */ { u32 v = 0x30e7f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a087: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a08a: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x51a08fu); f_005f83d0();
    /* 0051a08f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a091: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a094: call 0x5f89d0 */ r_esp -= 4; W32(r_esp, 0x51a099u); f_005f89d0();
    /* 0051a099: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a09b: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a09d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a09f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0a1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0a3: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0a5: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0aa: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0ac: push 0x6c1b44 */ { u32 v = 0x6c1b44u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0b1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a0b6u); f_00630f40();
    /* 0051a0b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a0b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0be: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a0c1: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a0c6u); f_005fa5b0();
    /* 0051a0c6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0c8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0cc: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0ce: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0d3: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0d5: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0d7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0d9: push 0x6c1b24 */ { u32 v = 0x6c1b24u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0de: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a0e3u); f_00630f40();
    /* 0051a0e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a0e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0eb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a0ee: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a0f3u); f_005fa5b0();
    /* 0051a0f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0f5: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0f9: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a0fb: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a100: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a102: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a104: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a106: push 0x6c1b08 */ { u32 v = 0x6c1b08u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a10b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a110u); f_00630f40();
    /* 0051a110: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a113: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a114: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a116: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a118: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a11b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a120u); f_005fa5b0();
    /* 0051a120: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a122: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a124: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a126: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a128: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a12d: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a12f: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051a131: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a133: push 0x6c1ae8 */ { u32 v = 0x6c1ae8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a138: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a13du); f_00630f40();
    /* 0051a13d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a141: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a143: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a145: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a148: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a14du); f_005fa5b0();
    /* 0051a14d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a14f: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a151: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a153: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a155: push 0x137 */ { u32 v = 0x137u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a15a: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a15c: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a15e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a160: push 0x6c1ac0 */ { u32 v = 0x6c1ac0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a165: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a16au); f_00630f40();
    /* 0051a16a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a16d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a16e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a170: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a172: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a175: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a17au); f_005fa5b0();
    /* 0051a17a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a17c: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a17e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a180: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a182: push 0x19b */ { u32 v = 0x19bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a187: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a189: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a18b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a18d: push 0x6c1aa0 */ { u32 v = 0x6c1aa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a192: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a197u); f_00630f40();
    /* 0051a197: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a19a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a19b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a19d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a19f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a1a2: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a1a7u); f_005fa5b0();
    /* 0051a1a7: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0051a1ae: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0051a1b5: jmp 0x51a1c0 */ goto L_0051a1c0;
L_0051a1b7:; BB(0x0051a1b7);
    /* 0051a1b7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a1ba: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051a1bd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0051a1c0:; BB(0x0051a1c0);
    /* 0051a1c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a1c3: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051a1c6: jge 0x51a327 */ if ((fS==fO)) goto L_0051a327;
L_0051a1cc:; BB(0x0051a1cc);
    /* 0051a1cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a1cf: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0051a1d2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a1d4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a1d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a1d8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a1db: imul eax, eax, 0x19 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x19u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051a1de: add eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051a1e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a1e2: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a1e4: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a1e6: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a1e8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a1ea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a1ed: mov edx, dword ptr [ecx*4 + 0x721838] */ r_edx = R32((u32)(r_ecx*4+0x721838u));
    /* 0051a1f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a1f5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a1fau); f_00630f40();
    /* 0051a1fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a1fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a1fe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0051a201: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a202: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a204: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a207: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a20cu); f_005fa5b0();
    /* 0051a20c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a20f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051a212: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051a215: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a218: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a219: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a21c: call 0x51a3a0 */ r_esp -= 4; W32(r_esp, 0x51a221u); f_0051a3a0();
    /* 0051a221: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a224: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a227: mov dword ptr [ecx + eax*4 + 0x1bc], edx */ W32((u32)(r_ecx+r_eax*4+0x1bcu), r_edx);
    /* 0051a22e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a231: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0051a234: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a236: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a238: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a23a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a23d: imul ecx, ecx, 0x19 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x19u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051a240: add ecx, 0x3f */ {  u32 a = r_ecx; u32 b = 0x3fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051a243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a244: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a249: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a24b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a24d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a24f: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a254: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051a257: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a258: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a25a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a25d: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a262u); f_005fa5b0();
    /* 0051a262: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a265: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051a268: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051a26b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a26e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0051a271: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a273: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a275: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a277: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a27a: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051a27d: add edx, 0x3f */ {  u32 a = r_edx; u32 b = 0x3fu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051a280: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a281: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a286: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a288: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 0051a28a: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a28c: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a291: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051a294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a295: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a297: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a29a: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a29fu); f_005fa5b0();
    /* 0051a29f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a2a2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051a2a5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051a2a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a2ab: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0051a2ae: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2b0: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2b4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a2b7: imul eax, eax, 0x19 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x19u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051a2ba: add eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051a2bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2be: push 0x137 */ { u32 v = 0x137u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2c3: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2c5: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2c7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2c9: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0051a2d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2d4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a2d7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a2dcu); f_005fa5b0();
    /* 0051a2dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a2df: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051a2e2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0051a2e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a2e8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0051a2eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2ed: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2f1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051a2f4: imul ecx, ecx, 0x19 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x19u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051a2f7: add ecx, 0x3f */ {  u32 a = r_ecx; u32 b = 0x3fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051a2fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a2fb: push 0x19b */ { u32 v = 0x19bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a300: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a302: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a304: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a306: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a30b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0051a30e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051a30f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a311: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a314: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51a319u); f_005fa5b0();
    /* 0051a319: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051a31c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051a31f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051a322: jmp 0x51a1b7 */ goto L_0051a1b7;
L_0051a327:; BB(0x0051a327);
    /* 0051a327: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a329: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a32b: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051a32d: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a32f: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a331: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a336: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a33bu); f_00630f40();
    /* 0051a33b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a33e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a33f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a341: push 0x114 */ { u32 v = 0x114u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a346: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a34b: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a350: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a352: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a354: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a357: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51a35cu); f_005f9de0();
    /* 0051a35c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a35e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a360: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051a362: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a364: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a366: push 0x6c1a84 */ { u32 v = 0x6c1a84u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a36b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a370u); f_00630f40();
    /* 0051a370: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a373: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a374: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a376: push 0x114 */ { u32 v = 0x114u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a37b: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a37d: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a382: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a384: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a386: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a389: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51a38eu); f_005f9de0();
    /* 0051a38e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051a391: call 0x51a460 */ r_esp -= 4; W32(r_esp, 0x51a396u); f_0051a460();
    /* 0051a396: mov esp, ebp */ r_esp = r_ebp;
    /* 0051a398: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051a399: ret  */ FN_RET(0x0051a070); r_esp += 4; return;
}

void f_0051a3c0(void) /* PokerTournamentStatisticsDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051a3c0);
    /* 0051a3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051a3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0051a3c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051a3c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0051a3c9: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a3cd: jne 0x51a44d */ if (!fZ) goto L_0051a44d;
L_0051a3cf:; BB(0x0051a3cf);
    /* 0051a3cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a3d1: push 0x6c1cb4 */ { u32 v = 0x6c1cb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a3d6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a3dbu); f_00630f40();
    /* 0051a3db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a3de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a3df: push 0x6c1c90 */ { u32 v = 0x6c1c90u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a3e4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51a3e9u); f_00630f40();
    /* 0051a3e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a3ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051a3ed: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x51a3f2u); f_0062ff10();
    /* 0051a3f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051a3f5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051a3f8: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a3fc: jne 0x51a405 */ if (!fZ) goto L_0051a405;
L_0051a3fe:; BB(0x0051a3fe);
    /* 0051a3fe: call 0x520590 */ r_esp -= 4; W32(r_esp, 0x51a403u); f_00520590();
    /* 0051a403: jmp 0x51a407 */ goto L_0051a407;
L_0051a405:; BB(0x0051a405);
    /* 0051a405: jmp 0x51a452 */ goto L_0051a452;
L_0051a407:; BB(0x0051a407);
    /* 0051a407: call 0x519e10 */ r_esp -= 4; W32(r_esp, 0x51a40cu); f_00519e10();
    /* 0051a40c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0051a40f: mov cl, byte ptr [eax + 0x1fc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1fcu))) & 0xffu);
    /* 0051a415: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 0051a418: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0051a41c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051a41e: je 0x51a42f */ if (fZ) goto L_0051a42f;
L_0051a420:; BB(0x0051a420);
    /* 0051a420: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a422: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051a428: call 0x47fb90 */ r_esp -= 4; W32(r_esp, 0x51a42du); f_0047fb90();
    /* 0051a42d: jmp 0x51a44b */ goto L_0051a44b;
L_0051a42f:; BB(0x0051a42f);
    /* 0051a42f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051a431: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 0051a436: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0051a43b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051a43d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0051a443: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0051a449: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51a44bu); call_ind(t); }
L_0051a44b:; BB(0x0051a44b);
    /* 0051a44b: jmp 0x51a452 */ goto L_0051a452;
L_0051a44d:; BB(0x0051a44d);
    /* 0051a44d: call 0x519e10 */ r_esp -= 4; W32(r_esp, 0x51a452u); f_00519e10();
L_0051a452:; BB(0x0051a452);
    /* 0051a452: mov esp, ebp */ r_esp = r_ebp;
    /* 0051a454: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051a455: ret 4 */ FN_RET(0x0051a3c0); r_esp += 8; return;
}

