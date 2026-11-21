#include "protos.h"

void f_0066ace0(void) /* CreditsRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066ace0);
    /* 0066ace0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ace1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066ace3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ace5: push 0x6accf8 */ { u32 v = 0x6accf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066acea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066acf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066acf1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066acf2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066acf7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066acf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066acfa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066acfd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066ad03: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0066ad06: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066ad09: call 0x64cbe0 */ r_esp -= 4; W32(r_esp, 0x66ad0eu); f_0064cbe0();
    /* 0066ad0e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066ad15: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066ad18: mov dword ptr [eax], 0x6e02ac */ W32((u32)(r_eax), 0x6e02acu);
    /* 0066ad1e: push 0x6dec88 */ { u32 v = 0x6dec88u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad23: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x66ad28u); f_00630f40();
    /* 0066ad28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066ad2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad2c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ad32: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x66ad37u); f_005f38b0();
    /* 0066ad37: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ad3d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ad3f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ad45: mov eax, dword ptr [edx + 0x2d8] */ r_eax = R32((u32)(r_edx+0x2d8u));
    /* 0066ad4b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ad4du); call_ind(t); }
    /* 0066ad4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad4e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066ad51: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x66ad56u); f_005f1ad0();
    /* 0066ad56: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066ad5d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066ad60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066ad63: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066ad6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066ad6b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066ad6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ad6e: ret  */ FN_RET(0x0066ace0); r_esp += 4; return;
}

void f_0066af30(void) /* CreditsRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066af30);
    /* 0066af30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066af31: mov ebp, esp */ r_ebp = r_esp;
    /* 0066af33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066af36: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066af39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066af3c: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0066af40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066af42: jne 0x66af9c */ if (!fZ) goto L_0066af9c;
L_0066af44:; BB(0x0066af44);
    /* 0066af44: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066af47: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066af4c: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0066af4f: cmp ecx, dword ptr [eax + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066af52: jne 0x66af9c */ if (!fZ) goto L_0066af9c;
L_0066af54:; BB(0x0066af54);
    /* 0066af54: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066af57: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0066af5a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0066af5d: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066af61: je 0x66af6b */ if (fZ) goto L_0066af6b;
L_0066af63:; BB(0x0066af63);
    /* 0066af63: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066af67: je 0x66af6b */ if (fZ) goto L_0066af6b;
L_0066af69:; BB(0x0066af69);
    /* 0066af69: jmp 0x66af9c */ goto L_0066af9c;
L_0066af6b:; BB(0x0066af6b);
    /* 0066af6b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066af71: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066af73: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066af79: mov eax, dword ptr [edx + 0x258] */ r_eax = R32((u32)(r_edx+0x258u));
    /* 0066af7f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66af81u); call_ind(t); }
    /* 0066af81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066af82: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066af88: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066af8a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066af90: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0066af93: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66af95u); call_ind(t); }
    /* 0066af95: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066af98: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_0066af9c:; BB(0x0066af9c);
    /* 0066af9c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066af9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066afa0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066afa3: call 0x5f1680 */ r_esp -= 4; W32(r_esp, 0x66afa8u); f_005f1680();
    /* 0066afa8: mov esp, ebp */ r_esp = r_ebp;
    /* 0066afaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066afab: ret 4 */ FN_RET(0x0066af30); r_esp += 8; return;
}

