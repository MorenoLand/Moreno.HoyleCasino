#include "protos.h"

void f_005566f0(void) /* VideoPokerRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005566f0);
    /* 005566f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005566f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005566f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005566f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005566f9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005566fc: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005566ff: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00556702: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00556705: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00556708: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0055670b: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055670f: ja 0x55680b */ if ((!fC&&!fZ)) goto L_0055680b;
L_00556715:; BB(0x00556715);
    /* 00556715: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00556718: jmp dword ptr [eax*4 + 0x55682c] */ { u32 t = R32((u32)(r_eax*4+0x55682cu)); switch (t) { case 0x55671fu: goto L_0055671f; case 0x556749u: goto L_00556749; case 0x55675fu: goto L_0055675f; case 0x55678du: goto L_0055678d; case 0x5567adu: goto L_005567ad; case 0x5567d8u: goto L_005567d8; case 0x5567f8u: goto L_005567f8; default: UNSUP(0x00556718, "jump table entry is not a known target"); } }
L_0055671f:; BB(0x0055671f);
    /* 0055671f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00556725: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 00556728: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 0055672b: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0055672f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556731: je 0x556744 */ if (fZ) goto L_00556744;
L_00556733:; BB(0x00556733);
    /* 00556733: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00556735: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556737: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055673a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055673c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055673f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00556742: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x556744u); call_ind(t); }
L_00556744:; BB(0x00556744);
    /* 00556744: jmp 0x556826 */ goto L_00556826;
L_00556749:; BB(0x00556749);
    /* 00556749: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055674b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055674d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00556750: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00556752: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00556755: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00556758: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55675au); call_ind(t); }
    /* 0055675a: jmp 0x556826 */ goto L_00556826;
L_0055675f:; BB(0x0055675f);
    /* 0055675f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00556761: mov ecx, dword ptr [0x79341c] */ r_ecx = R32((u32)(0x79341cu));
    /* 00556767: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00556769: mov ecx, dword ptr [0x79341c] */ r_ecx = R32((u32)(0x79341cu));
    /* 0055676f: mov eax, dword ptr [edx + 0x2bc] */ r_eax = R32((u32)(r_edx+0x2bcu));
    /* 00556775: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x556777u); call_ind(t); }
    /* 00556777: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00556779: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055677b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055677e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00556780: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00556783: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00556786: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x556788u); call_ind(t); }
    /* 00556788: jmp 0x556826 */ goto L_00556826;
L_0055678d:; BB(0x0055678d);
    /* 0055678d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055678f: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00556795: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x55679au); f_00557ae0();
    /* 0055679a: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0055679c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055679e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005567a1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005567a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005567a6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005567a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5567abu); call_ind(t); }
    /* 005567ab: jmp 0x556826 */ goto L_00556826;
L_005567ad:; BB(0x005567ad);
    /* 005567ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005567af: mov ecx, dword ptr [0x79341c] */ r_ecx = R32((u32)(0x79341cu));
    /* 005567b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005567b7: mov ecx, dword ptr [0x79341c] */ r_ecx = R32((u32)(0x79341cu));
    /* 005567bd: mov eax, dword ptr [edx + 0x2e4] */ r_eax = R32((u32)(r_edx+0x2e4u));
    /* 005567c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5567c5u); call_ind(t); }
    /* 005567c5: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005567c7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005567c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005567cc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005567ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005567d1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005567d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5567d6u); call_ind(t); }
    /* 005567d6: jmp 0x556826 */ goto L_00556826;
L_005567d8:; BB(0x005567d8);
    /* 005567d8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005567da: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005567e0: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x5567e5u); f_00557ae0();
    /* 005567e5: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005567e7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005567e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005567ec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005567ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005567f1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005567f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5567f6u); call_ind(t); }
    /* 005567f6: jmp 0x556826 */ goto L_00556826;
L_005567f8:; BB(0x005567f8);
    /* 005567f8: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005567fa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005567fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005567ff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00556801: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00556804: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00556807: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x556809u); call_ind(t); }
    /* 00556809: jmp 0x556826 */ goto L_00556826;
L_0055680b:; BB(0x0055680b);
    /* 0055680b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0055680d: jne 0x556826 */ if (!fZ) goto L_00556826;
L_0055680f:; BB(0x0055680f);
    /* 0055680f: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 00556814: push 0x6c89e4 */ { u32 v = 0x6c89e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00556819: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0055681e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x556823u); f_005e9f20();
    /* 00556823: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00556826:; BB(0x00556826);
    /* 00556826: mov esp, ebp */ r_esp = r_ebp;
    /* 00556828: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556829: ret  */ FN_RET(0x005566f0); r_esp += 4; return;
}

