#include "protos.h"

void f_00417620(void) /* BlackjackRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00417620);
    /* 00417620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00417621: mov ebp, esp */ r_ebp = r_esp;
    /* 00417623: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00417626: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00417629: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041762c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0041762f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00417632: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00417636: je 0x417643 */ if (fZ) goto L_00417643;
L_00417638:; BB(0x00417638);
    /* 00417638: cmp dword ptr [ebp - 8], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041763f: je 0x417650 */ if (fZ) goto L_00417650;
L_00417641:; BB(0x00417641);
    /* 00417641: jmp 0x41767b */ goto L_0041767b;
L_00417643:; BB(0x00417643);
    /* 00417643: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 00417649: call 0x4123c0 */ r_esp -= 4; W32(r_esp, 0x41764eu); f_004123c0();
    /* 0041764e: jmp 0x417696 */ goto L_00417696;
L_00417650:; BB(0x00417650);
    /* 00417650: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00417656: call 0x4189a0 */ r_esp -= 4; W32(r_esp, 0x41765bu); f_004189a0();
    /* 0041765b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041765d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417660: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00417662: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417665: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00417668: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41766au); call_ind(t); }
    /* 0041766a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041766c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041766f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00417671: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00417674: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00417677: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x417679u); call_ind(t); }
    /* 00417679: jmp 0x417696 */ goto L_00417696;
L_0041767b:; BB(0x0041767b);
    /* 0041767b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0041767d: jne 0x417696 */ if (!fZ) goto L_00417696;
L_0041767f:; BB(0x0041767f);
    /* 0041767f: push 0x316 */ { u32 v = 0x316u; r_esp -= 4; W32(r_esp, v); }
    /* 00417684: push 0x6b4450 */ { u32 v = 0x6b4450u; r_esp -= 4; W32(r_esp, v); }
    /* 00417689: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0041768e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x417693u); f_005e9f20();
    /* 00417693: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00417696:; BB(0x00417696);
    /* 00417696: mov esp, ebp */ r_esp = r_ebp;
    /* 00417698: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00417699: ret  */ FN_RET(0x00417620); r_esp += 4; return;
}

