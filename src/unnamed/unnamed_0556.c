#include "protos.h"

void f_00556fa0(void) /* sub_556FA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556fa0);
    /* 00556fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00556fa3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00556fa6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556fa9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00556fac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00556faf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00556fb2: sub ecx, 0x30f34e */ {  u32 a = r_ecx; u32 b = 0x30f34eu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00556fb8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00556fbb: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00556fbf: ja 0x557007 */ if ((!fC&&!fZ)) goto L_00557007;
L_00556fc1:; BB(0x00556fc1);
    /* 00556fc1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00556fc4: jmp dword ptr [edx*4 + 0x557010] */ { u32 t = R32((u32)(r_edx*4+0x557010u)); switch (t) { case 0x556fcbu: goto L_00556fcb; case 0x556fd2u: goto L_00556fd2; case 0x556fd9u: goto L_00556fd9; case 0x556fddu: goto L_00556fdd; case 0x556fe4u: goto L_00556fe4; case 0x556febu: goto L_00556feb; case 0x556ff2u: goto L_00556ff2; case 0x556ff9u: goto L_00556ff9; case 0x557000u: goto L_00557000; default: UNSUP(0x00556fc4, "jump table entry is not a known target"); } }
L_00556fcb:; BB(0x00556fcb);
    /* 00556fcb: mov eax, 3 */ r_eax = 0x3u;
    /* 00556fd0: jmp 0x55700a */ goto L_0055700a;
L_00556fd2:; BB(0x00556fd2);
    /* 00556fd2: mov eax, 1 */ r_eax = 0x1u;
    /* 00556fd7: jmp 0x55700a */ goto L_0055700a;
L_00556fd9:; BB(0x00556fd9);
    /* 00556fd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556fdb: jmp 0x55700a */ goto L_0055700a;
L_00556fdd:; BB(0x00556fdd);
    /* 00556fdd: mov eax, 2 */ r_eax = 0x2u;
    /* 00556fe2: jmp 0x55700a */ goto L_0055700a;
L_00556fe4:; BB(0x00556fe4);
    /* 00556fe4: mov eax, 4 */ r_eax = 0x4u;
    /* 00556fe9: jmp 0x55700a */ goto L_0055700a;
L_00556feb:; BB(0x00556feb);
    /* 00556feb: mov eax, 7 */ r_eax = 0x7u;
    /* 00556ff0: jmp 0x55700a */ goto L_0055700a;
L_00556ff2:; BB(0x00556ff2);
    /* 00556ff2: mov eax, 6 */ r_eax = 0x6u;
    /* 00556ff7: jmp 0x55700a */ goto L_0055700a;
L_00556ff9:; BB(0x00556ff9);
    /* 00556ff9: mov eax, 5 */ r_eax = 0x5u;
    /* 00556ffe: jmp 0x55700a */ goto L_0055700a;
L_00557000:; BB(0x00557000);
    /* 00557000: mov eax, 0xa */ r_eax = 0xau;
    /* 00557005: jmp 0x55700a */ goto L_0055700a;
L_00557007:; BB(0x00557007);
    /* 00557007: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0055700a:; BB(0x0055700a);
    /* 0055700a: mov esp, ebp */ r_esp = r_ebp;
    /* 0055700c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055700d: ret 4 */ FN_RET(0x00556fa0); r_esp += 8; return;
}

