#include "protos.h"

void f_004fd5d0(void) /* PokerTournamentComment_EndOfHandScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd5d0);
    /* 004fd5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd5d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fd5d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fd5d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd5dc: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x4fd5e1u); f_005fc360();
    /* 004fd5e1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fd5e4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5e8: je 0x4fd5f2 */ if (fZ) goto L_004fd5f2;
L_004fd5ea:; BB(0x004fd5ea);
    /* 004fd5ea: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd5ee: je 0x4fd605 */ if (fZ) goto L_004fd605;
L_004fd5f0:; BB(0x004fd5f0);
    /* 004fd5f0: jmp 0x4fd62f */ goto L_004fd62f;
L_004fd5f2:; BB(0x004fd5f2);
    /* 004fd5f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd5f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd5f9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fd5fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fd5fe: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004fd601: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd603u); call_ind(t); }
    /* 004fd603: jmp 0x4fd62f */ goto L_004fd62f;
L_004fd605:; BB(0x004fd605);
    /* 004fd605: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd607: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd60d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004fd610: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004fd615: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fd618: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fd61a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004fd61d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd61fu); call_ind(t); }
    /* 004fd61f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd621: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd627: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004fd62a: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4fd62fu); f_005fc420();
L_004fd62f:; BB(0x004fd62f);
    /* 004fd62f: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd631: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd632: ret  */ FN_RET(0x004fd5d0); r_esp += 4; return;
}

