#include "protos.h"

void f_00676410(void) /* ResNumberList::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676410);
    /* 00676410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676411: mov ebp, esp */ r_ebp = r_esp;
    /* 00676413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676414: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00676417: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067641a: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x67641fu); f_0060c5f0();
    /* 0067641f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676422: mov dword ptr [eax], 0x6e1a18 */ W32((u32)(r_eax), 0x6e1a18u);
    /* 00676428: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067642b: mov esp, ebp */ r_esp = r_ebp;
    /* 0067642d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067642e: ret  */ FN_RET(0x00676410); r_esp += 4; return;
}

void f_00676430(void) /* ResNumberList::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676430);
    /* 00676430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676431: mov ebp, esp */ r_ebp = r_esp;
    /* 00676433: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676435: push 0x6ad5a7 */ { u32 v = 0x6ad5a7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067643a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00676440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676441: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00676444: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00676449: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067644b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067644c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067644f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00676455: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00676458: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067645b: mov dword ptr [eax], 0x6e1a18 */ W32((u32)(r_eax), 0x6e1a18u);
    /* 00676461: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00676468:; BB(0x00676468);
    /* 00676468: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067646b: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x676470u); f_0060c9a0();
    /* 00676470: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676472: je 0x6764c2 */ if (fZ) goto L_006764c2;
L_00676474:; BB(0x00676474);
    /* 00676474: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676476: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676479: call 0x6765a0 */ r_esp -= 4; W32(r_esp, 0x67647eu); f_006765a0();
    /* 0067647e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00676481: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676483: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676486: call 0x6765a0 */ r_esp -= 4; W32(r_esp, 0x67648bu); f_006765a0();
    /* 0067648b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067648c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067648f: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x676494u); f_0060c890();
    /* 00676494: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676497: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0067649a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067649d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006764a0: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006764a4: je 0x6764b9 */ if (fZ) goto L_006764b9;
L_006764a6:; BB(0x006764a6);
    /* 006764a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006764a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006764ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006764ad: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006764b0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006764b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6764b4u); call_ind(t); }
    /* 006764b4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006764b7: jmp 0x6764c0 */ goto L_006764c0;
L_006764b9:; BB(0x006764b9);
    /* 006764b9: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_006764c0:; BB(0x006764c0);
    /* 006764c0: jmp 0x676468 */ goto L_00676468;
L_006764c2:; BB(0x006764c2);
    /* 006764c2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006764c9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006764cc: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x6764d1u); f_0060c6a0();
    /* 006764d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006764d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006764db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006764dc: mov esp, ebp */ r_esp = r_ebp;
    /* 006764de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006764df: ret  */ FN_RET(0x00676430); r_esp += 4; return;
}

