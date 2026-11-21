#include "protos.h"

void f_0049cc90(void) /* sub_49CC90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0049cc90);
    /* 0049cc90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049cc91: mov ebp, esp */ r_ebp = r_esp;
    /* 0049cc93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049cc95: push 0x6a0ea9 */ { u32 v = 0x6a0ea9u; r_esp -= 4; W32(r_esp, v); }
    /* 0049cc9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0049cca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049cca1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049cca4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0049cca9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049ccab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ccac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0049ccaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0049ccb5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0049ccb8: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0049ccbb: call 0x4646a0 */ r_esp -= 4; W32(r_esp, 0x49ccc0u); f_004646a0();
    /* 0049ccc0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0049ccc7: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0049ccca: call 0x4646f0 */ r_esp -= 4; W32(r_esp, 0x49cccfu); f_004646f0();
    /* 0049cccf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0049ccd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ccd3: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0049ccd6: call 0x4649c0 */ r_esp -= 4; W32(r_esp, 0x49ccdbu); f_004649c0();
    /* 0049ccdb: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 0049ccde: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ccdf: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0049cce2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049cce3: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0049cce6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049cce7: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0049ccea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049cceb: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0049ccee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ccef: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0049ccf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ccf3: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0049ccf6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ccf7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0049ccfa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049ccfb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0049ccfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049ccff: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0049cd02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049cd03: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049cd06: mov edx, esp */ r_edx = r_esp;
    /* 0049cd08: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0049cd0b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0049cd0d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0049cd10: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0049cd13: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0049cd17: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0049cd1b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0049cd1e: call 0x4966e0 */ r_esp -= 4; W32(r_esp, 0x49cd23u); f_004966e0();
    /* 0049cd23: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0049cd2a: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0049cd2d: call 0x4646e0 */ r_esp -= 4; W32(r_esp, 0x49cd32u); f_004646e0();
    /* 0049cd32: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049cd35: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0049cd3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049cd3d: mov esp, ebp */ r_esp = r_ebp;
    /* 0049cd3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049cd40: ret 0x28 */ FN_RET(0x0049cc90); r_esp += 44; return;
}

