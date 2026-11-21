#include "protos.h"

void f_005d4640(void) /* CasinoNavMapButton::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d4640);
    /* 005d4640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d4641: mov ebp, esp */ r_ebp = r_esp;
    /* 005d4643: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d4646: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d4649: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d464c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d464d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4650: call 0x602020 */ r_esp -= 4; W32(r_esp, 0x5d4655u); f_00602020();
    /* 005d4655: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d4658: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4659: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d465c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d465e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4661: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 005d4667: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d4669u); call_ind(t); }
    /* 005d4669: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d466c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d466e: je 0x5d468d */ if (fZ) goto L_005d468d;
L_005d4670:; BB(0x005d4670);
    /* 005d4670: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d4673: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5d4678u); f_005f5400();
    /* 005d4678: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d4679: mov ecx, dword ptr [0x7947dc] */ r_ecx = R32((u32)(0x7947dcu));
    /* 005d467f: call 0x5d2180 */ r_esp -= 4; W32(r_esp, 0x5d4684u); f_005d2180();
    /* 005d4684: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d4687: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 005d468b: jmp 0x5d46e4 */ goto L_005d46e4;
L_005d468d:; BB(0x005d468d);
    /* 005d468d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d4694: jmp 0x5d469f */ goto L_005d469f;
L_005d4696:; BB(0x005d4696);
    /* 005d4696: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d4699: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d469c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005d469f:; BB(0x005d469f);
    /* 005d469f: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d46a3: jge 0x5d46d9 */ if ((fS==fO)) goto L_005d46d9;
L_005d46a5:; BB(0x005d46a5);
    /* 005d46a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d46a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d46a9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d46af: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d46b2: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5d46b7u); f_005fb300();
    /* 005d46b7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d46ba: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d46bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d46be: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d46c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d46c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d46c6: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 005d46cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d46ceu); call_ind(t); }
    /* 005d46ce: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d46d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d46d3: je 0x5d46d7 */ if (fZ) goto L_005d46d7;
L_005d46d5:; BB(0x005d46d5);
    /* 005d46d5: jmp 0x5d46e4 */ goto L_005d46e4;
L_005d46d7:; BB(0x005d46d7);
    /* 005d46d7: jmp 0x5d4696 */ goto L_005d4696;
L_005d46d9:; BB(0x005d46d9);
    /* 005d46d9: mov ecx, dword ptr [0x7947dc] */ r_ecx = R32((u32)(0x7947dcu));
    /* 005d46df: call 0x5d22d0 */ r_esp -= 4; W32(r_esp, 0x5d46e4u); f_005d22d0();
L_005d46e4:; BB(0x005d46e4);
    /* 005d46e4: mov esp, ebp */ r_esp = r_ebp;
    /* 005d46e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d46e7: ret 4 */ FN_RET(0x005d4640); r_esp += 8; return;
}

