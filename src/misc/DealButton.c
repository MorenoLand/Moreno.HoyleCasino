#include "protos.h"

void f_00466fb0(void) /* DealButton::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00466fb0);
    /* 00466fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00466fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00466fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00466fb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00466fba: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x466fbfu); f_00601a80();
    /* 00466fbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00466fc2: mov dword ptr [eax], 0x6baf04 */ W32((u32)(r_eax), 0x6baf04u);
    /* 00466fc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00466fcb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00466fce: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 00466fd4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00466fd7: mov esp, ebp */ r_esp = r_ebp;
    /* 00466fd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00466fda: ret 4 */ FN_RET(0x00466fb0); r_esp += 8; return;
}

void f_00466fe0(void) /* DealButton::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00466fe0);
    /* 00466fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00466fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00466fe3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00466fe6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00466fe9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00466ff0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00466ff6: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x466ffbu); f_00636610();
    /* 00466ffb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00466ffe: jne 0x467005 */ if (!fZ) goto L_00467005;
L_00467000:; BB(0x00467000);
    /* 00467000: jmp 0x467086 */ goto L_00467086;
L_00467005:; BB(0x00467005);
    /* 00467005: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00467007: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046700a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046700c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046700f: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 00467015: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x467017u); call_ind(t); }
    /* 00467017: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046701a: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00467020: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x467025u); f_005f87d0();
    /* 00467025: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0046702b: call 0x5f2870 */ r_esp -= 4; W32(r_esp, 0x467030u); f_005f2870();
    /* 00467030: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 00467036: mov byte ptr [edx + 0xa8], 1 */ W8((u32)(r_edx+0xa8u), 0x1u);
    /* 0046703d: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00467043: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x467048u); f_005da7b0();
    /* 00467048: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046704b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046704d: je 0x467069 */ if (fZ) goto L_00467069;
L_0046704f:; BB(0x0046704f);
    /* 0046704f: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00467055: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 0046705b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046705e: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 00467063: mov dword ptr [eax + 0x98], edx */ W32((u32)(r_eax+0x98u), r_edx);
L_00467069:; BB(0x00467069);
    /* 00467069: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0046706f: call 0x47ac40 */ r_esp -= 4; W32(r_esp, 0x467074u); f_0047ac40();
    /* 00467074: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00467077: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00467079: je 0x467086 */ if (fZ) goto L_00467086;
L_0046707b:; BB(0x0046707b);
    /* 0046707b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00467081: call 0x47ae60 */ r_esp -= 4; W32(r_esp, 0x467086u); f_0047ae60();
L_00467086:; BB(0x00467086);
    /* 00467086: mov esp, ebp */ r_esp = r_ebp;
    /* 00467088: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00467089: ret  */ FN_RET(0x00466fe0); r_esp += 4; return;
}

