#include "protos.h"

void f_004fd710(void) /* PokerTournamentComment_EndOfTournamentScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd710);
    /* 004fd710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd711: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd713: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fd716: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fd719: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd71c: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x4fd721u); f_005fc360();
    /* 004fd721: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fd724: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd728: je 0x4fd732 */ if (fZ) goto L_004fd732;
L_004fd72a:; BB(0x004fd72a);
    /* 004fd72a: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd72e: je 0x4fd752 */ if (fZ) goto L_004fd752;
L_004fd730:; BB(0x004fd730);
    /* 004fd730: jmp 0x4fd77c */ goto L_004fd77c;
L_004fd732:; BB(0x004fd732);
    /* 004fd732: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd736: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fd73c: call 0x4839e0 */ r_esp -= 4; W32(r_esp, 0x4fd741u); f_004839e0();
    /* 004fd741: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd743: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd746: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd748: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd74b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fd74e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd750u); call_ind(t); }
    /* 004fd750: jmp 0x4fd77c */ goto L_004fd77c;
L_004fd752:; BB(0x004fd752);
    /* 004fd752: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd754: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd75a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004fd75d: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004fd762: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fd765: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fd767: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004fd76a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd76cu); call_ind(t); }
    /* 004fd76c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd76e: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd774: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004fd777: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4fd77cu); f_005fc420();
L_004fd77c:; BB(0x004fd77c);
    /* 004fd77c: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd77e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd77f: ret  */ FN_RET(0x004fd710); r_esp += 4; return;
}

