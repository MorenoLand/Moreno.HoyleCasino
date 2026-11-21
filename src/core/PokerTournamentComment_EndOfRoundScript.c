#include "protos.h"

void f_004fd640(void) /* PokerTournamentComment_EndOfRoundScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd640);
    /* 004fd640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd641: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd643: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fd646: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fd649: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd64c: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x4fd651u); f_005fc360();
    /* 004fd651: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fd654: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd658: je 0x4fd66b */ if (fZ) goto L_004fd66b;
L_004fd65a:; BB(0x004fd65a);
    /* 004fd65a: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd65e: je 0x4fd688 */ if (fZ) goto L_004fd688;
L_004fd660:; BB(0x004fd660);
    /* 004fd660: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd664: je 0x4fd6d8 */ if (fZ) goto L_004fd6d8;
L_004fd666:; BB(0x004fd666);
    /* 004fd666: jmp 0x4fd702 */ goto L_004fd702;
L_004fd66b:; BB(0x004fd66b);
    /* 004fd66b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd66e: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 004fd675: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd677: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd679: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd67c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd67e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd681: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004fd684: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd686u); call_ind(t); }
    /* 004fd686: jmp 0x4fd702 */ goto L_004fd702;
L_004fd688:; BB(0x004fd688);
    /* 004fd688: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd68b: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004fd68e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd68f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd693: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fd699: call 0x483910 */ r_esp -= 4; W32(r_esp, 0x4fd69eu); f_00483910();
    /* 004fd69e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd6a1: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004fd6a4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fd6a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd6aa: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 004fd6ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd6b0: cmp dword ptr [ecx + 0x20], 7 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fd6b4: jl 0x4fd6c7 */ if ((fS!=fO)) goto L_004fd6c7;
L_004fd6b6:; BB(0x004fd6b6);
    /* 004fd6b6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6b8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd6bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004fd6bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd6c0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004fd6c3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fd6c5u); call_ind(t); }
    /* 004fd6c5: jmp 0x4fd6d6 */ goto L_004fd6d6;
L_004fd6c7:; BB(0x004fd6c7);
    /* 004fd6c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd6cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fd6ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd6d1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fd6d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd6d6u); call_ind(t); }
L_004fd6d6:; BB(0x004fd6d6);
    /* 004fd6d6: jmp 0x4fd702 */ goto L_004fd702;
L_004fd6d8:; BB(0x004fd6d8);
    /* 004fd6d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6da: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd6e0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004fd6e3: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004fd6e8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fd6eb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fd6ed: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004fd6f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd6f2u); call_ind(t); }
    /* 004fd6f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd6f4: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd6fa: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004fd6fd: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4fd702u); f_005fc420();
L_004fd702:; BB(0x004fd702);
    /* 004fd702: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd705: ret  */ FN_RET(0x004fd640); r_esp += 4; return;
}

