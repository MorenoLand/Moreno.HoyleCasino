#include "protos.h"

void f_005ce2e0(void) /* sub_5CE2E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ce2e0);
    /* 005ce2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ce2e3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ce2e6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ce2e9: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 005ce2f0: mov dword ptr [ebp - 0x14], 0x36 */ W32((u32)(r_ebp+0xffffffecu), 0x36u);
    /* 005ce2f7: mov dword ptr [ebp - 0x10], 0x19 */ W32((u32)(r_ebp+0xfffffff0u), 0x19u);
    /* 005ce2fe: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005ce305: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005ce30a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ce30c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ce312: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 005ce318: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ce31au); call_ind(t); }
    /* 005ce31a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce31c: je 0x5ce353 */ if (fZ) goto L_005ce353;
L_005ce31e:; BB(0x005ce31e);
    /* 005ce31e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ce324: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ce326: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ce32c: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 005ce332: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ce334u); call_ind(t); }
    /* 005ce334: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ce337: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ce33a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ce33c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ce33f: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005ce342: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ce344u); call_ind(t); }
    /* 005ce344: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ce347: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005ce349: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005ce34b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce34e: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 005ce351: jmp 0x5ce357 */ goto L_005ce357;
L_005ce353:; BB(0x005ce353);
    /* 005ce353: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
L_005ce357:; BB(0x005ce357);
    /* 005ce357: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce359: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce35b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce35d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce35f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce361: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce363: push 0x142 */ { u32 v = 0x142u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce368: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce36a: push 0x6d2d44 */ { u32 v = 0x6d2d44u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce36f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ce374u); f_00630f40();
    /* 005ce374: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce377: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce378: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce37a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce37c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce37f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5ce384u); f_005fa5b0();
    /* 005ce384: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce387: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ce38a: mov dword ptr [ecx + 0x1bc], edx */ W32((u32)(r_ecx+0x1bcu), r_edx);
    /* 005ce390: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce392: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce394: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce396: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce39b: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce39d: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce39f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3a1: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3a6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3aa: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3b3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce3b6: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x5ce3bbu); f_005fa880();
    /* 005ce3bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3c1: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3c6: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3cb: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3d2: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3d7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3db: push 0x149 */ { u32 v = 0x149u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3e4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce3e7: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x5ce3ecu); f_005fa880();
    /* 005ce3ec: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3ee: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3f0: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3f2: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3f4: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3f6: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3fb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ce400u); f_00630f40();
    /* 005ce400: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce403: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce404: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce406: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce40b: push 0x7a */ { u32 v = 0x7au; r_esp -= 4; W32(r_esp, v); }
    /* 005ce40d: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce412: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce414: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce416: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce419: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5ce41eu); f_005f9de0();
    /* 005ce41e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce421: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005ce427: call 0x5d6cd0 */ r_esp -= 4; W32(r_esp, 0x5ce42cu); f_005d6cd0();
    /* 005ce42c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ce42f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce431: je 0x5ce46b */ if (fZ) goto L_005ce46b;
L_005ce433:; BB(0x005ce433);
    /* 005ce433: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce435: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce437: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce439: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce43b: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce43d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce43f: push 0x6d2d30 */ { u32 v = 0x6d2d30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce444: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ce449u); f_00630f40();
    /* 005ce449: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce44c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce44d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce44f: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce451: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce453: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 005ce458: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce45a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce45c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce45e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce460: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce463: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x5ce468u); f_005f9ff0();
    /* 005ce468: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005ce46b:; BB(0x005ce46b);
    /* 005ce46b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce46d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce46f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce471: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce473: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce475: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce477: push 0x6d2d14 */ { u32 v = 0x6d2d14u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce47c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ce481u); f_00630f40();
    /* 005ce481: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce485: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce487: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce489: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce48b: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 005ce490: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce492: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce494: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce496: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce498: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce49b: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x5ce4a0u); f_005f9ff0();
    /* 005ce4a0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ce4a3: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 005ce4a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce4a9: je 0x5ce4ef */ if (fZ) goto L_005ce4ef;
L_005ce4ab:; BB(0x005ce4ab);
    /* 005ce4ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4ad: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4b1: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4b3: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4b5: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4b7: push 0x6d2cf8 */ { u32 v = 0x6d2cf8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4bc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ce4c1u); f_00630f40();
    /* 005ce4c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4c7: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4c9: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4cb: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4d2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce4db: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x5ce4e0u); f_005f9ff0();
    /* 005ce4e0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ce4e3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ce4e8: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x5ce4edu); f_006065d0();
    /* 005ce4ed: jmp 0x5ce531 */ goto L_005ce531;
L_005ce4ef:; BB(0x005ce4ef);
    /* 005ce4ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4f1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4f5: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4f7: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4f9: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4fb: push 0x6d2ce4 */ { u32 v = 0x6d2ce4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce500: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ce505u); f_00630f40();
    /* 005ce505: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce509: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce50b: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce50d: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce50f: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 005ce514: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce516: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce518: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce51a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce51c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce51f: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x5ce524u); f_005f9ff0();
    /* 005ce524: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ce527: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce529: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ce52c: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x5ce531u); f_006065d0();
L_005ce531:; BB(0x005ce531);
    /* 005ce531: mov esp, ebp */ r_esp = r_ebp;
    /* 005ce533: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce534: ret 4 */ FN_RET(0x005ce2e0); r_esp += 8; return;
}

void f_005cec40(void) /* sub_5CEC40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cec40);
    /* 005cec40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cec41: mov ebp, esp */ r_ebp = r_esp;
    /* 005cec43: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cec46: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cec4b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cec4d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cec50: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005cec53: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005cec58: mov ecx, dword ptr [eax + 0x4ef0] */ r_ecx = R32((u32)(r_eax+0x4ef0u));
    /* 005cec5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cec5f: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005cec65: mov eax, dword ptr [edx + 0x4ef8] */ r_eax = R32((u32)(r_edx+0x4ef8u));
    /* 005cec6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cec6c: push 0x6b38f0 */ { u32 v = 0x6b38f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cec71: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005cec74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cec75: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5cec7bu); call_ind(t); }
    /* 005cec7b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cec7e: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005cec81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cec82: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005cec85: call 0x5ceca0 */ r_esp -= 4; W32(r_esp, 0x5cec8au); f_005ceca0();
    /* 005cec8a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cec8d: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cec8f: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5cec94u); f_00686d72();
    /* 005cec94: mov esp, ebp */ r_esp = r_ebp;
    /* 005cec96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cec97: ret  */ FN_RET(0x005cec40); r_esp += 4; return;
}

void f_005ceca0(void) /* sub_5CECA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ceca0);
    /* 005ceca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ceca1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ceca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ceca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ceca7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cecaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cecab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cecad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cecb0: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x5cecb5u); f_005fb5a0();
    /* 005cecb5: mov esp, ebp */ r_esp = r_ebp;
    /* 005cecb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cecb8: ret 4 */ FN_RET(0x005ceca0); r_esp += 8; return;
}

void f_005cee20(void) /* sub_5CEE20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cee20);
    /* 005cee20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cee21: mov ebp, esp */ r_ebp = r_esp;
    /* 005cee23: sub esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cee29: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cee2e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cee30: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005cee33: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 005cee39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee3b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cee3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cee3f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5cee44u); f_0064c8a0();
    /* 005cee44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cee47: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 005cee4d: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 005cee53: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005cee59: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005cee5c: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005cee62: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005cee65: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cee67: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee6b: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 005cee70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee72: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee74: push 0x192 */ { u32 v = 0x192u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee79: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cee7b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cee7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cee7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee83: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005cee89: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5cee8eu); f_005fa5b0();
    /* 005cee8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee94: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005cee97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cee98: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005cee9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cee9c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005cee9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ceea0: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x5ceea5u); f_0064c8d0();
    /* 005ceea5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ceea8: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005ceeab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ceeac: push 0x6d2ef4 */ { u32 v = 0x6d2ef4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceeb1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5ceeb6u); f_00630f40();
    /* 005ceeb6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ceeb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ceeba: lea edx, [ebp - 0xa8] */ r_edx = (u32)(r_ebp+0xffffff58u);
    /* 005ceec0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ceec1: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5ceec7u); call_ind(t); }
    /* 005ceec7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ceeca: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ceecc: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceece: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceed0: push 0xc5 */ { u32 v = 0xc5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceed5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceed7: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceed9: push 0x192 */ { u32 v = 0x192u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceede: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ceee0: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 005ceee6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ceee7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceee9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceeeb: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ceef1: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5ceef6u); f_005fa5b0();
    /* 005ceef6: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ceefc: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 005cef02: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 005cef08: cmp dword ptr [ebp - 0xb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cef0f: je 0x5cef49 */ if (fZ) goto L_005cef49;
L_005cef11:; BB(0x005cef11);
    /* 005cef11: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005cef17: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005cef1d: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005cef23: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 005cef29: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 005cef2f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005cef32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cef33: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005cef39: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cef3b: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005cef41: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005cef47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cef49u); call_ind(t); }
L_005cef49:; BB(0x005cef49);
    /* 005cef49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cef4c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cef4e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5cef53u); f_00686d72();
    /* 005cef53: mov esp, ebp */ r_esp = r_ebp;
    /* 005cef55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cef56: ret 0xc */ FN_RET(0x005cee20); r_esp += 16; return;
}

void f_005cef60(void) /* sub_5CEF60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cef60);
    /* 005cef60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cef61: mov ebp, esp */ r_ebp = r_esp;
    /* 005cef63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cef64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cef67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cef6a: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5cef6fu); f_005f85d0();
L_005cef6f:; BB(0x005cef6f);
    /* 005cef6f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cef72: movzx ecx, byte ptr [eax + 0x1bc] */ r_ecx = (u32)R8((u32)(r_eax+0x1bcu));
    /* 005cef79: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cef7b: jne 0x5cef9f */ if (!fZ) goto L_005cef9f;
L_005cef7d:; BB(0x005cef7d);
    /* 005cef7d: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005cef83: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cef85: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005cef8b: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005cef8e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5cef90u); call_ind(t); }
    /* 005cef90: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005cef95: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005cef98: call 0x613e70 */ r_esp -= 4; W32(r_esp, 0x5cef9du); f_00613e70();
    /* 005cef9d: jmp 0x5cef6f */ goto L_005cef6f;
L_005cef9f:; BB(0x005cef9f);
    /* 005cef9f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cefa1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cefa2: ret  */ FN_RET(0x005cef60); r_esp += 4; return;
}

